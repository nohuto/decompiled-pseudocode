/*
 * XREFs of MmSetSessionObjectIoEvent @ 0x14071DFA0
 * Callers:
 *     IopSessionChangeWorker @ 0x140177940 (IopSessionChangeWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 */

LONG __fastcall MmSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 8280LL), 0, 0);
}
