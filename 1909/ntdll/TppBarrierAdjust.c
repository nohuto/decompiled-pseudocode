/*
 * XREFs of TppBarrierAdjust @ 0x180066E0C
 * Callers:
 *     TppWaitCompletion @ 0x180030390 (TppWaitCompletion.c)
 *     TppExecuteWaitCallback @ 0x180030488 (TppExecuteWaitCallback.c)
 *     TppCancelWait @ 0x180031458 (TppCancelWait.c)
 *     TppWorkWait @ 0x180031C98 (TppWorkWait.c)
 *     TppWorkCallbackPrologRelease @ 0x180032F0C (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x1800332A0 (TppAlpcpExecuteCallback.c)
 *     TppCallbackEpilog @ 0x1800351D0 (TppCallbackEpilog.c)
 *     TpWaitForIoCompletion @ 0x1800626E0 (TpWaitForIoCompletion.c)
 *     TpCancelAsyncIoOperation @ 0x180062750 (TpCancelAsyncIoOperation.c)
 *     TpReleaseCleanupGroupMembers @ 0x180066B30 (TpReleaseCleanupGroupMembers.c)
 *     TpWaitForAlpcCompletion @ 0x180078AC0 (TpWaitForAlpcCompletion.c)
 *     TpWaitForJobNotification @ 0x18007E510 (TpWaitForJobNotification.c)
 *     TpDisassociateCallback @ 0x18007F9D0 (TpDisassociateCallback.c)
 *     TppJobpExecuteCallback @ 0x1800802C0 (TppJobpExecuteCallback.c)
 *     TppWorkCancelPendingCallbacks @ 0x180084EB0 (TppWorkCancelPendingCallbacks.c)
 *     TppIopCancelPendingCallbacks @ 0x18010E910 (TppIopCancelPendingCallbacks.c)
 *     TppWorkUnposted @ 0x18010EDB0 (TppWorkUnposted.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     TppItePush @ 0x180066F5C (TppItePush.c)
 *     TppIteWakeWaiters @ 0x180066F8C (TppIteWakeWaiters.c)
 *     NtWaitForAlertByThreadId @ 0x1800A07C0 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall TppBarrierAdjust(volatile signed __int64 *a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  char v4; // bp
  int v5; // r15d
  char v6; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // r12
  unsigned __int64 v10; // rdi
  signed __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rbx
  _BYTE v15[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v5 = a3;
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
    v12 = v11 & 0xFFFFFFFFFFFFFFFLL;
    if ( (v11 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v10 >> 60) & 8) != 0 )
    {
      v11 &= ~0x8000000000000000uLL;
      v6 = 1;
      RtlAcquireSRWLockExclusive(a1 + 1);
    }
    else if ( v5 && v12 )
    {
      v11 |= 0x8000000000000000uLL;
      v4 = 1;
      RtlAcquireSRWLockShared(a1 + 1, v12, a3, a4);
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
