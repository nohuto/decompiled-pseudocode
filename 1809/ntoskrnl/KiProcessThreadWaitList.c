/*
 * XREFs of KiProcessThreadWaitList @ 0x1400FBEE0
 * Callers:
 *     KiCommitThreadWait @ 0x140055AD0 (KiCommitThreadWait.c)
 *     KiSwapThread @ 0x140056210 (KiSwapThread.c)
 *     KeRemoveQueueEx @ 0x140058D60 (KeRemoveQueueEx.c)
 *     KeTerminateThread @ 0x140089A10 (KeTerminateThread.c)
 *     KeRemovePriQueue @ 0x1400B60E0 (KeRemovePriQueue.c)
 *     KiProcessExpiredTimerList @ 0x1400C7760 (KiProcessExpiredTimerList.c)
 *     KiTimer2Expiration @ 0x1400FB470 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x1400FB980 (KiExpireTimer2.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1401123A0 (KiPriQueueThreadPriorityChanged.c)
 * Callees:
 *     KiReadyThread @ 0x1400C5040 (KiReadyThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     EtwTraceReadyThread @ 0x140310544 (EtwTraceReadyThread.c)
 */

int __fastcall KiProcessThreadWaitList(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 **v4; // r14
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // r13
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 *v10; // rbx
  __int64 *v11; // rdi
  int result; // eax
  volatile signed __int32 *v13; // rsi
  __int64 *v14; // rax
  __int64 **v15; // rcx
  unsigned int v16; // [rsp+68h] [rbp+20h]

  v16 = a4;
  v4 = *(__int64 ***)(a1 + 11528);
  v5 = a3;
  *(_QWORD *)(a1 + 11528) = 0LL;
  v6 = a2;
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
        v13 = (volatile signed __int32 *)v10[4];
        KiAcquireKobjectLockSafe(v13, a2, a3);
        if ( *((_BYTE *)v10 + 17) == 4 )
        {
          v14 = (__int64 *)*v10;
          if ( *(__int64 **)(*v10 + 8) != v10 || (v15 = (__int64 **)v10[1], *v15 != v10) )
            __fastfail(3u);
          *v15 = v14;
          v14[1] = (__int64)v15;
        }
        _InterlockedAnd(v13, 0xFFFFFF7F);
      }
      v10 += 6;
    }
    while ( v10 != v11 );
    *(_BYTE *)(v9 + 566) = v6;
    *(_BYTE *)(v9 + 567) = v5;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v9, v6, v5, v16);
    result = KiReadyThread(a1, v9, a3, a4);
  }
  while ( v4 );
  return result;
}
