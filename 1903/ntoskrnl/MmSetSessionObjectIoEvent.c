/*
 * XREFs of MmSetSessionObjectIoEvent @ 0x1407466D0
 * Callers:
 *     IopSessionChangeWorker @ 0x140181470 (IopSessionChangeWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 */

LONG __fastcall MmSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 1304LL), 0, 0);
}
