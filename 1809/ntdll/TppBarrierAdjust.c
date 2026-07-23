/*
 * XREFs of TppBarrierAdjust @ 0x180073CC8
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
 *     TpReleaseCleanupGroupMembers @ 0x1800739F0 (TpReleaseCleanupGroupMembers.c)
 *     TpDisassociateCallback @ 0x180084990 (TpDisassociateCallback.c)
 *     TpWaitForAlpcCompletion @ 0x180088150 (TpWaitForAlpcCompletion.c)
 *     TppWorkCancelPendingCallbacks @ 0x180088530 (TppWorkCancelPendingCallbacks.c)
 *     TppIopCancelPendingCallbacks @ 0x180110210 (TppIopCancelPendingCallbacks.c)
 *     TppWorkUnposted @ 0x180110580 (TppWorkUnposted.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TppItePush @ 0x180073E18 (TppItePush.c)
 *     TppIteWakeWaiters @ 0x180073E48 (TppIteWakeWaiters.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3C10 (NtWaitForAlertByThreadId.c)
 */

int __fastcall TppBarrierAdjust(_RTL_SRWLOCK *a1, int a2, int a3)
{
  char v3; // bp
  char v5; // r14
  unsigned __int64 Value; // rbx
  __int64 v8; // r12
  unsigned __int64 v9; // rdi
  signed __int64 v10; // rbx
  signed __int64 v11; // rax
  unsigned __int64 v12; // rbx
  _BYTE v14[56]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  v5 = 0;
  _m_prefetchw(a1);
  Value = a1->Value;
  v8 = a2;
  do
  {
    if ( v5 )
    {
      RtlReleaseSRWLockExclusive(a1 + 1);
      v5 = 0;
    }
    else if ( v3 )
    {
      RtlReleaseSRWLockShared(a1 + 1);
      v3 = 0;
    }
    v9 = Value;
    v10 = (Value ^ (v8 + Value)) & 0xFFFFFFFFFFFFFFFLL ^ Value;
    if ( (v10 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v9 >> 60) & 8) != 0 )
    {
      v10 &= ~0x8000000000000000uLL;
      v5 = 1;
      RtlAcquireSRWLockExclusive(a1 + 1);
    }
    else if ( a3 && (v10 & 0xFFFFFFFFFFFFFFFLL) != 0 )
    {
      v10 |= 0x8000000000000000uLL;
      v3 = 1;
      RtlAcquireSRWLockShared(a1 + 1);
    }
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v10, v9);
    Value = v11;
  }
  while ( v9 != v11 );
  if ( v5 )
  {
    v12 = a1[2].Value;
    a1[2].Value = 0LL;
    RtlReleaseSRWLockExclusive(a1 + 1);
    LODWORD(v11) = TppIteWakeWaiters(v12);
  }
  else if ( v3 )
  {
    TppItePush(&a1[2], v14);
    RtlReleaseSRWLockShared(a1 + 1);
    LODWORD(v11) = NtWaitForAlertByThreadId(&a1[2], 0LL);
  }
  return v11;
}
