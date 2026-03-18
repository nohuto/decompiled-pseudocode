/*
 * XREFs of KiComputeThreadAffinity @ 0x1400FC790
 * Callers:
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 *     KiSetAffinityThread @ 0x1400FB8E0 (KiSetAffinityThread.c)
 *     KiSetSystemAffinityThread @ 0x1400FC5E0 (KiSetSystemAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14011F1E0 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSets @ 0x140196F34 (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140010050 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiPrcbInGroupAffinity @ 0x140015A88 (KiPrcbInGroupAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x14001C4E0 (KiUpdateNodeAffinitizedFlag.c)
 *     KeSelectIdealProcessor @ 0x14001C5E4 (KeSelectIdealProcessor.c)
 *     RtlBeginReadTickLock @ 0x1400FC850 (RtlBeginReadTickLock.c)
 *     KiComputeCpuSetAffinity @ 0x1400FC864 (KiComputeCpuSetAffinity.c)
 *     KeSelectNodeForAffinity @ 0x1400FCB50 (KeSelectNodeForAffinity.c)
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
  __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]

  v1 = 0;
  v13 = 0LL;
  v14 = 0LL;
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
        v10 = KiProcessorBlock[v9];
        if ( !KiPrcbInGroupAffinity(v10, (__int64)v3) )
        {
          v13 = v5;
          v14 = 0LL;
          LOWORD(v14) = *(_WORD *)(a1 + 584);
          v12 = KeSelectNodeForAffinity(&v13);
          v11 = (unsigned __int16)KeSelectIdealProcessor(v12, &v13, 0LL, (unsigned int *)(v10 + 36));
        }
        *(_DWORD *)(a1 + 588) = v11;
        KiUpdateSharedReadyQueueAffinityThread(KiProcessorBlock[v11], a1);
        KiUpdateNodeAffinitizedFlag(a1);
        v1 = 1;
      }
    }
    while ( KiCpuSetSequence != TickLock );
  }
  *(_QWORD *)(a1 + 568) = TickLock;
  return v1;
}
