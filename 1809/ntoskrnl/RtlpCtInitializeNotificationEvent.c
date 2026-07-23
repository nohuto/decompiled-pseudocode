/*
 * XREFs of RtlpCtInitializeNotificationEvent @ 0x14089AACC
 * Callers:
 *     RtlpCtContextInit @ 0x14089A9E8 (RtlpCtContextInit.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlpCtInitializeNotificationEvent(struct _KEVENT **a1)
{
  struct _KEVENT *PoolWithTag; // rax

  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x67744364u);
  *a1 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  KeInitializeEvent(PoolWithTag, NotificationEvent, 0);
  return 0LL;
}
