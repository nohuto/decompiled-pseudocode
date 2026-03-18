/*
 * XREFs of ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x1800CC774
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800CA2F0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Variant_DwmHintingPpm@@W4VariantReportingKind@2@_N@Z @ 0x1800580F0 (-__private_IsVariantEqual@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Varia.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800663CC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CAX_NW4Reportin.c)
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x18006BE20 (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x1800C3D90 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     HintPpm @ 0x18014A494 (HintPpm.c)
 */

void __fastcall CTelemetryFrames::FrameRenderingStarted(__int64 a1)
{
  __int64 QuadPart; // rcx
  unsigned __int64 v3; // rax
  LONGLONG v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  int v7; // ecx
  __int32 v8; // ebx
  int v9; // ebx
  __int64 v10; // rdx
  char v11; // r8
  __int64 v12; // rcx

  if ( byte_180307F38 )
  {
    AcquireSRWLockExclusive(&SRWLock);
    GetCurrentThreadId();
    byte_180307F38 = 0;
    dword_180308648 = 0;
    xmmword_180307F50 = xmmword_180307F40;
    ReleaseSRWLockExclusive(&SRWLock);
    anonymous_namespace_::SealCurrentFrameSequence(1);
  }
  QuadPart = g_qpcFrequency.QuadPart;
  v3 = a1 - qword_180307F10;
  qword_180307F10 = a1;
  v4 = v3 / g_qpcFrequency.QuadPart;
  v5 = 1000 * (v3 % g_qpcFrequency.QuadPart) % g_qpcFrequency.QuadPart;
  v6 = 1000 * (v3 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart + 1000 * (v3 / g_qpcFrequency.QuadPart);
  if ( v6 >= CCommonRegistryData::m_telemetryFramesSequenceIdleIntervalMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0);
  byte_180308211 = v6 > 0x2A;
  if ( v6 > 0x2A )
  {
    ++dword_18030809C;
    wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::ReportUsageToService(QuadPart, v5, v4);
    if ( wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::__private_IsVariantEqual(4, v10, v11) )
      HintPpm(3LL);
  }
  if ( !dword_1803080B8 )
  {
    qword_180308200 = a1;
    v12 = *((_QWORD *)qword_180307FC8 + 5);
    if ( (*(_QWORD *)(v12 + 24) - *(_QWORD *)(v12 + 16)) / 480LL )
      dword_1803080CC = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(v12, a1);
  }
  v7 = dword_180307F24 | dword_1803080B0;
  dword_1803080B0 |= dword_180307F24;
  byte_180307F18 = byte_180307F20;
  if ( byte_180307F20 )
  {
    byte_180307F20 = 0;
    dword_1803080B0 = v7 | 0x100;
  }
  dword_180307F24 = 0;
  v8 = _InterlockedExchange(&dword_180308600, 0);
  dword_1803080B4 |= v8;
  ++dword_1803080B8;
  dword_180307F1C = v8;
  v9 = MEMORY[0x7FFE02E4];
  if ( GetTickCount() - v9 < 0x3E8 )
    dword_1803080B0 |= 1u;
  `anonymous namespace'::_frameStartSnaphot = dword_180308138;
  dword_180308610 = dword_180308140;
  dword_18030860C = dword_18030813C;
  dword_180308614 = dword_180308144;
}
