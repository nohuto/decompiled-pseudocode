/*
 * XREFs of ExpWorkQueueDestroy @ 0x140913E08
 * Callers:
 *     ExpPartitionCreatePoolInternal @ 0x14077AC24 (ExpPartitionCreatePoolInternal.c)
 *     ExpPartitionDestroy @ 0x140913C24 (ExpPartitionDestroy.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeRundownPriQueue @ 0x1402B3640 (KeRundownPriQueue.c)
 */

NTSTATUS __fastcall ExpWorkQueueDestroy(unsigned __int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  __int16 v4; // bx
  NTSTATUS result; // eax
  struct _KEVENT v6; // [rsp+30h] [rbp-28h] BYREF

  memset(&v6, 0, sizeof(v6));
  KeInitializeEvent(&v6, NotificationEvent, 0);
  *(_QWORD *)(a1 + 728) = &v6;
  _m_prefetchw((const void *)(a1 + 712));
  v2 = *(_DWORD *)(a1 + 712);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 712), v2 | 0x8000, v2);
  }
  while ( v3 != v2 );
  v4 = v2;
  result = KeRundownPriQueue(a1);
  if ( (v4 & 0x3FFF) != 0 )
    return KeWaitForSingleObject(*(PVOID *)(a1 + 728), Executive, 0, 0, 0LL);
  return result;
}
