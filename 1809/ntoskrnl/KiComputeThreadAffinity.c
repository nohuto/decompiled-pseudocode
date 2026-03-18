/*
 * XREFs of KiComputeThreadAffinity @ 0x14008A430
 * Callers:
 *     KiDeferredReadyThread @ 0x1400C3370 (KiDeferredReadyThread.c)
 *     KiQueueReadyThread @ 0x1400D2350 (KiQueueReadyThread.c)
 *     KiSetSystemAffinityThread @ 0x1400D63E0 (KiSetSystemAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140114D84 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetAffinityThread @ 0x14011545C (KiSetAffinityThread.c)
 *     KiUpdateThreadCpuSets @ 0x14018CAB4 (KiUpdateThreadCpuSets.c)
 * Callees:
 *     RtlBeginReadTickLock @ 0x14008A5E4 (RtlBeginReadTickLock.c)
 *     KiComputeCpuSetAffinity @ 0x14008A5F8 (KiComputeCpuSetAffinity.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400D15A4 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x1400D559C (KiUpdateNodeAffinitizedFlag.c)
 *     KiPrcbInGroupAffinity @ 0x1400D5714 (KiPrcbInGroupAffinity.c)
 *     KeSelectIdealProcessor @ 0x1400D8994 (KeSelectIdealProcessor.c)
 *     KeSelectNodeForAffinity @ 0x140115748 (KeSelectNodeForAffinity.c)
 */

__int64 __fastcall KiComputeThreadAffinity(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 TickLock; // rsi
  __int64 v7; // rax
  __int64 v9; // r8
  int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    TickLock = RtlBeginReadTickLock(&KiCpuSetSequence);
  }
  else
  {
    v3 = (__int64 *)(a1 + 576);
    do
    {
      v4 = RtlBeginReadTickLock(&KiCpuSetSequence);
      v5 = *(_QWORD *)(a1 + 552);
      TickLock = v4;
      if ( ((v5 - 1) & v5) != 0 )
      {
        v7 = v5 & KiComputeCpuSetAffinity(a1);
        if ( v7 )
          v5 = v7;
      }
      if ( *v3 != v5 )
      {
        v9 = *(unsigned int *)(a1 + 196);
        *v3 = v5;
        if ( !(unsigned int)KiPrcbInGroupAffinity(KiProcessorBlock[v9], v3) )
        {
          v12 = v5;
          v13 = 0LL;
          LOWORD(v13) = *(_WORD *)(a1 + 584);
          v11 = KeSelectNodeForAffinity(&v12);
          v10 = KeSelectIdealProcessor(v11, &v12, 0LL);
        }
        *(_DWORD *)(a1 + 588) = v10;
        KiUpdateSharedReadyQueueAffinityThread(KiProcessorBlock[v10], a1);
        KiUpdateNodeAffinitizedFlag(a1);
        v1 = 1;
      }
    }
    while ( KiCpuSetSequence != TickLock );
  }
  *(_QWORD *)(a1 + 568) = TickLock;
  return v1;
}
