/*
 * XREFs of VidSchFlushContext @ 0x1C007AEE0
 * Callers:
 *     VidSchTerminateContext @ 0x1C007AB50 (VidSchTerminateContext.c)
 * Callees:
 *     VidSchiCancelDelayTimerContext @ 0x1C0011508 (VidSchiCancelDelayTimerContext.c)
 *     VidSchiInterlockedReadUlong @ 0x1C00115E0 (VidSchiInterlockedReadUlong.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C001161C (VidSchiCleanupDeferredWaiterContext.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0011874 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     VidSchiWaitFlushCompletion @ 0x1C007AE7C (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchFlushContext(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  bool v7; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  union _LARGE_INTEGER v11; // [rsp+28h] [rbp-59h]
  _QWORD v12[20]; // [rsp+38h] [rbp-49h] BYREF

  if ( a1 && a2 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL);
    VidSchRundownUnorderedWaiter<_VIDSCH_CONTEXT>(a1, v5, *a2, a4, v11);
    VidSchiCleanupDeferredWaiterContext(a1, v6, v7);
    if ( *(_DWORD *)(a1 + 776) )
    {
      memset(v12, 0, sizeof(v12));
      v9 = *(_QWORD *)(a1 + 96);
      LODWORD(v12[4]) |= 0x50u;
      LODWORD(v12[2]) = 1;
      v12[5] = a1 + 776;
      LODWORD(v12[6]) = *(unsigned __int16 *)(v9 + 4);
      VidSchiWaitFlushCompletion(v5, (__int64)v12, 0x16u);
    }
    VidSchiInterlockedReadUlong((KSPIN_LOCK *)(v5 + 1648), (_DWORD *)(a1 + 776));
    if ( *(_DWORD *)(a1 + 784) )
    {
      memset(v12, 0, sizeof(v12));
      LODWORD(v12[4]) |= 0x10u;
      LODWORD(v12[2]) = 3;
      v12[5] = a1 + 784;
      VidSchiWaitFlushCompletion(v5, (__int64)v12, 0x16u);
    }
    VidSchiCancelDelayTimerContext(0LL, a1);
    return 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v10);
    return 3221225485LL;
  }
}
