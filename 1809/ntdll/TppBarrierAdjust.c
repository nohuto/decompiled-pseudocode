/*
 * XREFs of TppBarrierAdjust @ 0x180073CB8
 * Callers:
 *     TppCallbackEpilog @ 0x180016F10 (TppCallbackEpilog.c)
 *     TppWaitCompletion @ 0x18002BD00 (TppWaitCompletion.c)
 *     TppExecuteWaitCallback @ 0x18002BDF8 (TppExecuteWaitCallback.c)
 *     TppCancelWait @ 0x18002C238 (TppCancelWait.c)
 *     TppWorkWait @ 0x18002D368 (TppWorkWait.c)
 *     TppWorkCallbackPrologRelease @ 0x18002ED5C (TppWorkCallbackPrologRelease.c)
 *     TpCancelAsyncIoOperation @ 0x180031120 (TpCancelAsyncIoOperation.c)
 *     TpStartAsyncIoOperation @ 0x180031190 (TpStartAsyncIoOperation.c)
 *     TppJobpExecuteCallback @ 0x180031DC0 (TppJobpExecuteCallback.c)
 *     TpWaitForIoCompletion @ 0x180032880 (TpWaitForIoCompletion.c)
 *     TpWaitForJobNotification @ 0x180032A60 (TpWaitForJobNotification.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800739E0 (TpReleaseCleanupGroupMembers.c)
 *     TpDisassociateCallback @ 0x180084980 (TpDisassociateCallback.c)
 *     TpWaitForAlpcCompletion @ 0x180088140 (TpWaitForAlpcCompletion.c)
 *     TppWorkCancelPendingCallbacks @ 0x180088520 (TppWorkCancelPendingCallbacks.c)
 *     TppIopCancelPendingCallbacks @ 0x180110210 (TppIopCancelPendingCallbacks.c)
 *     TppWorkUnposted @ 0x180110580 (TppWorkUnposted.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TppItePush @ 0x180073E08 (TppItePush.c)
 *     TppIteWakeWaiters @ 0x180073E38 (TppIteWakeWaiters.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3BF0 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall TppBarrierAdjust(volatile signed __int64 *a1, int a2, unsigned __int64 *a3, __int64 a4)
{
  char v4; // bp
  int v5; // r15d
  char v6; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // r12
  unsigned __int64 v10; // rdi
  signed __int64 v11; // rbx
  char *v12; // rdx
  __int64 result; // rax
  __int64 v14; // rbx
  _BYTE v15[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v5 = (int)a3;
  v6 = 0;
  _m_prefetchw((const void *)a1);
  v8 = *a1;
  v9 = a2;
  do
  {
    if ( v6 )
    {
      RtlReleaseSRWLockExclusive(a1 + 1);
      v6 = 0;
    }
    else if ( v4 )
    {
      RtlReleaseSRWLockShared(a1 + 1);
      v4 = 0;
    }
    v10 = v8;
    v11 = (v8 ^ (v9 + v8)) & 0xFFFFFFFFFFFFFFFLL ^ v8;
    v12 = (char *)(v11 & 0xFFFFFFFFFFFFFFFLL);
    if ( (v11 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v10 >> 60) & 8) != 0 )
    {
      v11 &= ~0x8000000000000000uLL;
      v6 = 1;
      RtlAcquireSRWLockExclusive((unsigned __int64)(a1 + 1), (unsigned __int64)v12, a3, a4);
    }
    else if ( v5 && v12 )
    {
      v11 |= 0x8000000000000000uLL;
      v4 = 1;
      RtlAcquireSRWLockShared(a1 + 1, v12, (__int64)a3, a4);
    }
    result = _InterlockedCompareExchange64(a1, v11, v10);
    v8 = result;
  }
  while ( v10 != result );
  if ( v6 )
  {
    v14 = *((_QWORD *)a1 + 2);
    *((_QWORD *)a1 + 2) = 0LL;
    RtlReleaseSRWLockExclusive(a1 + 1);
    return TppIteWakeWaiters(v14);
  }
  else if ( v4 )
  {
    TppItePush(a1 + 2, v15);
    RtlReleaseSRWLockShared(a1 + 1);
    return NtWaitForAlertByThreadId(a1 + 2, 0LL);
  }
  return result;
}
