/*
 * XREFs of ExpWnfNotifyNameSubscribers @ 0x140654CC4
 * Callers:
 *     ExpWnfDeleteProcessContext @ 0x140652140 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x140652374 (ExpWnfDeleteSubscription.c)
 *     NtDeleteWnfStateName @ 0x1406533B0 (NtDeleteWnfStateName.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140654378 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140654664 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140654CC4 (ExpWnfNotifyNameSubscribers.c)
 *     NtUpdateWnfStateData @ 0x140654FA0 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x140656614 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406D9954 (ExpWnfDispatchKernelSubscription.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400EF6F0 (ExfAcquirePushLockSharedEx.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140654CC4 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140654E44 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfStartKernelDispatcher @ 0x1406D98B0 (ExpWnfStartKernelDispatcher.c)
 */

char __fastcall ExpWnfNotifyNameSubscribers(__int64 a1, unsigned int a2, int a3, unsigned int a4)
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
  char result; // al
  unsigned int v17; // edi
  struct _KEVENT *v18; // rcx

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
          v18 = *(struct _KEVENT **)(v15[2].ActiveProcessors.Bitmap[2] + 128);
          if ( v18 )
            KeSetEvent(v18, 1, 0);
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
