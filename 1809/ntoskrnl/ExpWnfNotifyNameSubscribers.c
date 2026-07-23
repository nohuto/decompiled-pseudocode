/*
 * XREFs of ExpWnfNotifyNameSubscribers @ 0x1406119F8
 * Callers:
 *     ExpWnfDeleteProcessContext @ 0x140608AA4 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x140608CA4 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeliverThreadNotifications @ 0x14060F5F4 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14060F8D0 (ExpWnfCompleteThreadSubscriptions.c)
 *     NtUpdateWnfStateData @ 0x14060FBB0 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x14061134C (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406119F8 (ExpWnfNotifyNameSubscribers.c)
 *     NtDeleteWnfStateName @ 0x1406AC580 (NtDeleteWnfStateName.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406B8C54 (ExpWnfDispatchKernelSubscription.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140005550 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406119F8 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140611B7C (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfStartKernelDispatcher @ 0x1406B8BA4 (ExpWnfStartKernelDispatcher.c)
 */

__int64 __fastcall ExpWnfNotifyNameSubscribers(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned __int64 *v4; // rdi
  int v5; // r13d
  int v8; // r12d
  unsigned int v9; // ebx
  int v10; // ebp
  PRTL_BALANCED_NODE v11; // rsi
  _QWORD *v12; // r14
  _QWORD *v13; // rsi
  int inserted; // eax
  struct _KPROCESS *v15; // rcx
  __int64 result; // rax
  unsigned int v17; // edi
  struct _KEVENT *Next; // rcx

  v4 = (unsigned __int64 *)(a1 + 112);
  v5 = a3;
  v8 = 0;
  v9 = 1;
  v10 = 1;
  v11 = KeAbPreAcquire(a1 + 112, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v11, (ULONG_PTR)v4);
  if ( v11 )
    BYTE2(v11[1].Left) |= 1u;
  v12 = (_QWORD *)(a1 + 120);
  v13 = (_QWORD *)*v12;
  if ( (_QWORD *)*v12 != v12 )
  {
    do
    {
      if ( v10 && (*((_BYTE *)v13 + 36) & 1) != 0 )
        v10 = 0;
      inserted = ExpWnfInsertSubscriptionInPendingQueue(v13 - 8, a2, 0LL);
      v15 = (struct _KPROCESS *)*(v13 - 3);
      if ( inserted )
      {
        if ( v15 == PsInitialSystemProcess )
        {
          v8 = 1;
        }
        else
        {
          Next = (struct _KEVENT *)v15[2].SwapListEntry.Next[16].Next;
          if ( Next )
            KeSetEvent(Next, 1, 0);
        }
      }
      v13 = (_QWORD *)*v13;
    }
    while ( v13 != v12 );
    v5 = a3;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
  result = KeAbPostRelease((ULONG_PTR)v4);
  if ( v10 && (a2 & 1) != 0 )
  {
    if ( v8 || !v5 )
      v9 = 0;
    v17 = a4;
    result = ExpWnfNotifyNameSubscribers(a1, 8LL, v9);
  }
  else
  {
    v17 = a4;
  }
  if ( v8 )
  {
    if ( v5 )
      return ExpWnfStartKernelDispatcher(v17);
  }
  return result;
}
