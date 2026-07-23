/*
 * XREFs of ExpWorkQueueDestroy @ 0x1408D77D8
 * Callers:
 *     ExpPartitionCreatePoolInternal @ 0x140755E54 (ExpPartitionCreatePoolInternal.c)
 *     ExpPartitionDestroy @ 0x1408D75F4 (ExpPartitionDestroy.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     KeRundownPriQueue @ 0x14029C2F0 (KeRundownPriQueue.c)
 */

NTSTATUS __fastcall ExpWorkQueueDestroy(unsigned __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  __int16 v6; // bx
  NTSTATUS result; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_QWORD *)(a1 + 728) = &Event;
  _m_prefetchw((const void *)(a1 + 712));
  v4 = *(_DWORD *)(a1 + 712);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 712), v4 | 0x8000, v4);
  }
  while ( v5 != v4 );
  v6 = v4;
  result = KeRundownPriQueue(a1, v2, v3);
  if ( (v6 & 0x3FFF) != 0 )
    return KeWaitForSingleObject(*(PVOID *)(a1 + 728), Executive, 0, 0, 0LL);
  return result;
}
