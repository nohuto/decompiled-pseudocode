/*
 * XREFs of MmSetSessionObjectIoEvent @ 0x1407485D0
 * Callers:
 *     IopSessionChangeWorker @ 0x140181B60 (IopSessionChangeWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 */

LONG __fastcall MmSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 1304LL), 0, 0);
}
