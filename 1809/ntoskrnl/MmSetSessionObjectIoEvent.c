/*
 * XREFs of MmSetSessionObjectIoEvent @ 0x14071F220
 * Callers:
 *     IopSessionChangeWorker @ 0x140177A60 (IopSessionChangeWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 */

LONG __fastcall MmSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 8280LL), 0, 0);
}
