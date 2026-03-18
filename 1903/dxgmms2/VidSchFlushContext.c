/*
 * XREFs of VidSchFlushContext @ 0x1C007B9F0
 * Callers:
 *     VidSchTerminateContext @ 0x1C007BF20 (VidSchTerminateContext.c)
 * Callees:
 *     VidSchiCancelDelayTimerContext @ 0x1C0011028 (VidSchiCancelDelayTimerContext.c)
 *     VidSchiInterlockedReadUlong @ 0x1C0011100 (VidSchiInterlockedReadUlong.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C001113C (VidSchiCleanupDeferredWaiterContext.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0011350 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     VidSchiWaitFlushCompletion @ 0x1C007B98C (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchFlushContext(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  union _LARGE_INTEGER v9; // [rsp+28h] [rbp-59h]
  _QWORD v10[20]; // [rsp+38h] [rbp-49h] BYREF

  if ( a1 && a2 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL);
    VidSchRundownUnorderedWaiter<_VIDSCH_CONTEXT>(a1, v5, *a2, a4, v9);
    VidSchiCleanupDeferredWaiterContext(a1);
    if ( *(_DWORD *)(a1 + 776) )
    {
      memset(v10, 0, sizeof(v10));
      v7 = *(_QWORD *)(a1 + 96);
      LODWORD(v10[4]) |= 0x50u;
      LODWORD(v10[2]) = 1;
      v10[5] = a1 + 776;
      LODWORD(v10[6]) = *(unsigned __int16 *)(v7 + 4);
      VidSchiWaitFlushCompletion(v5, (__int64)v10, 0x16u);
    }
    VidSchiInterlockedReadUlong((KSPIN_LOCK *)(v5 + 1648), (_DWORD *)(a1 + 776));
    if ( *(_DWORD *)(a1 + 784) )
    {
      memset(v10, 0, sizeof(v10));
      LODWORD(v10[4]) |= 0x10u;
      LODWORD(v10[2]) = 3;
      v10[5] = a1 + 784;
      VidSchiWaitFlushCompletion(v5, (__int64)v10, 0x16u);
    }
    VidSchiCancelDelayTimerContext(0LL, a1);
    return 0LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v8);
    return 3221225485LL;
  }
}
