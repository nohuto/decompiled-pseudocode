/*
 * XREFs of ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x180073950
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800716E0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x18003851C (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x18003B678 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 */

void __fastcall CTelemetryFrames::FrameRenderingStarted(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rsi
  int v4; // ecx
  __int32 v5; // ebx
  int v6; // ebx
  __int64 v7; // rcx

  if ( byte_180339CE0 )
  {
    AcquireSRWLockExclusive(&SRWLock);
    GetCurrentThreadId();
    byte_180339CE0 = 0;
    dword_18033D520 = 0;
    xmmword_180339AB8 = xmmword_180339D20;
    ReleaseSRWLockExclusive(&SRWLock);
    anonymous_namespace_::SealCurrentFrameSequence(1);
  }
  v2 = a1 - qword_180339A48;
  qword_180339A48 = a1;
  v3 = 1000 * (v2 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart + 1000 * (v2 / g_qpcFrequency.QuadPart);
  if ( v3 >= CCommonRegistryData::m_telemetryFramesSequenceIdleIntervalMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequence(0);
  byte_1803399E1 = v3 > 0x2A;
  if ( v3 > 0x2A )
    ++dword_18033986C;
  if ( !dword_180339888 )
  {
    qword_1803399D0 = a1;
    v7 = *((_QWORD *)qword_180339D30 + 5);
    if ( (*(_QWORD *)(v7 + 24) - *(_QWORD *)(v7 + 16)) / 480LL )
      dword_18033989C = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(v7, a1);
  }
  v4 = dword_180339AA8 | dword_180339880;
  dword_180339880 |= dword_180339AA8;
  byte_180339A99 = byte_180339A98;
  if ( byte_180339A98 )
  {
    byte_180339A98 = 0;
    dword_180339880 = v4 | 0x100;
  }
  dword_180339AA8 = 0;
  v5 = _InterlockedExchange(&dword_18033D1E0, 0);
  dword_180339884 |= v5;
  ++dword_180339888;
  dword_180339A9C = v5;
  v6 = MEMORY[0x7FFE02E4];
  if ( GetTickCount() - v6 < 0x3E8 )
    dword_180339880 |= 1u;
  `anonymous namespace'::_frameStartSnaphot = dword_180339908;
  dword_18033D1F0 = dword_180339910;
  dword_18033D1EC = dword_18033990C;
  dword_18033D1F4 = dword_180339914;
}
