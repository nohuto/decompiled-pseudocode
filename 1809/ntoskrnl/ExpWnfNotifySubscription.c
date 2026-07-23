/*
 * XREFs of ExpWnfNotifySubscription @ 0x1406B8AA8
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x140610054 (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140005550 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140611B7C (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfStartKernelDispatcher @ 0x1406B8BA4 (ExpWnfStartKernelDispatcher.c)
 */

int __fastcall ExpWnfNotifySubscription(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned __int64 *v4; // rbx
  struct _KPROCESS *v8; // rdi
  PRTL_BALANCED_NODE v9; // rsi
  struct _SINGLE_LIST_ENTRY *Next; // rax
  struct _KEVENT *v11; // rcx

  v4 = (unsigned __int64 *)(a1 + 112);
  v8 = 0LL;
  v9 = KeAbPreAcquire(a1 + 112, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v9, (ULONG_PTR)v4);
  if ( v9 )
    BYTE2(v9[1].Left) |= 1u;
  if ( *(_QWORD *)(a2 + 48) && (unsigned int)ExpWnfInsertSubscriptionInPendingQueue(a2, a3) )
    v8 = *(struct _KPROCESS **)(a2 + 40);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v4);
  LODWORD(Next) = KeAbPostRelease((ULONG_PTR)v4);
  if ( v8 )
  {
    if ( PsInitialSystemProcess == v8 )
    {
      LODWORD(Next) = ExpWnfStartKernelDispatcher(a4);
    }
    else
    {
      Next = v8[2].SwapListEntry.Next;
      v11 = (struct _KEVENT *)Next[16].Next;
      if ( v11 )
        LODWORD(Next) = KeSetEvent(v11, 1, 0);
    }
  }
  return (int)Next;
}
