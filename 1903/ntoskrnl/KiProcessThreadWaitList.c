/*
 * XREFs of KiProcessThreadWaitList @ 0x1401148D0
 * Callers:
 *     KiCommitThreadWait @ 0x140040740 (KiCommitThreadWait.c)
 *     KiSwapThread @ 0x140040E00 (KiSwapThread.c)
 *     KeRemoveQueueEx @ 0x140044B60 (KeRemoveQueueEx.c)
 *     KeRemovePriQueue @ 0x140059F90 (KeRemovePriQueue.c)
 *     KeTerminateThread @ 0x140080CBC (KeTerminateThread.c)
 *     KiExpireTimer2 @ 0x1400BF760 (KiExpireTimer2.c)
 *     KiTimer2Expiration @ 0x1400BFE90 (KiTimer2Expiration.c)
 *     KiProcessExpiredTimerList @ 0x1400C33F0 (KiProcessExpiredTimerList.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14010D0E0 (KiPriQueueThreadPriorityChanged.c)
 * Callees:
 *     KiReadyThread @ 0x140067ED0 (KiReadyThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     EtwTraceReadyThread @ 0x14032E1F4 (EtwTraceReadyThread.c)
 */

int __fastcall KiProcessThreadWaitList(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned int a4)
{
  __int64 **v4; // r14
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 *v10; // rbx
  __int64 *v11; // rdi
  volatile signed __int32 *v12; // rbp
  __int64 *v13; // rax
  int result; // eax
  __int64 **v15; // rcx

  v4 = *(__int64 ***)(a1 + 11528);
  *(_QWORD *)(a1 + 11528) = 0LL;
  do
  {
    v8 = *((unsigned __int8 *)v4 + 371);
    v9 = (__int64)(v4 - 27);
    v10 = *(v4 - 1);
    v4 = (__int64 **)*v4;
    v11 = &v10[6 * v8];
    do
    {
      if ( *((_BYTE *)v10 + 17) < 5u )
      {
        v12 = (volatile signed __int32 *)v10[4];
        KiAcquireKobjectLockSafe(v12);
        if ( *((_BYTE *)v10 + 17) == 4 )
        {
          v13 = (__int64 *)*v10;
          if ( *(__int64 **)(*v10 + 8) != v10 || (v15 = (__int64 **)v10[1], *v15 != v10) )
            __fastfail(3u);
          *v15 = v13;
          v13[1] = (__int64)v15;
        }
        _InterlockedAnd(v12, 0xFFFFFF7F);
      }
      v10 += 6;
    }
    while ( v10 != v11 );
    *(_BYTE *)(v9 + 566) = a2;
    *(_BYTE *)(v9 + 567) = a3;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v9, a2, a3, a4);
    result = KiReadyThread(a1, v9);
  }
  while ( v4 );
  return result;
}
