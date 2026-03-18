/*
 * XREFs of ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x180096A64
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x1800729C8 (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180075728 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 */

void __fastcall CTelemetryFrames::FrameRenderingStarted(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rsi
  int v4; // ecx
  __int32 v5; // ebx
  int v6; // ebx
  __int64 v7; // rcx

  if ( byte_18033CBF0 )
  {
    AcquireSRWLockExclusive(&SRWLock);
    GetCurrentThreadId();
    byte_18033CBF0 = 0;
    dword_180340440 = 0;
    xmmword_18033C9D0 = xmmword_18033CC30;
    ReleaseSRWLockExclusive(&SRWLock);
    anonymous_namespace_::SealCurrentFrameSequence(1);
  }
  v2 = a1 - qword_18033C9A8;
  qword_18033C9A8 = a1;
  v3 = 1000 * (v2 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart + 1000 * (v2 / g_qpcFrequency.QuadPart);
  if ( v3 >= CCommonRegistryData::m_telemetryFramesSequenceIdleIntervalMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0);
  byte_18033C8F1 = v3 > 0x2A;
  if ( v3 > 0x2A )
    ++dword_18033C77C;
  if ( !dword_18033C798 )
  {
    qword_18033C8E0 = a1;
    v7 = *((_QWORD *)qword_18033CC40 + 5);
    if ( (*(_QWORD *)(v7 + 24) - *(_QWORD *)(v7 + 16)) / 480LL )
      dword_18033C7AC = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(v7, a1);
  }
  v4 = dword_18033C9B0 | dword_18033C790;
  dword_18033C790 |= dword_18033C9B0;
  byte_18033C954 = byte_18033C9B8;
  if ( byte_18033C9B8 )
  {
    byte_18033C9B8 = 0;
    dword_18033C790 = v4 | 0x100;
  }
  dword_18033C9B0 = 0;
  v5 = _InterlockedExchange(&dword_180340100, 0);
  dword_18033C794 |= v5;
  ++dword_18033C798;
  dword_18033C9B4 = v5;
  v6 = MEMORY[0x7FFE02E4];
  if ( GetTickCount() - v6 < 0x3E8 )
    dword_18033C790 |= 1u;
  `anonymous namespace'::_frameStartSnaphot = dword_18033C818;
  dword_180340110 = dword_18033C820;
  dword_18034010C = dword_18033C81C;
  dword_180340114 = dword_18033C824;
}
