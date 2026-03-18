/*
 * XREFs of ExpWorkQueueManagerReaperTimer @ 0x14013C970
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 */

LONG __fastcall ExpWorkQueueManagerReaperTimer(__int64 a1, __int64 a2)
{
  return KeSetEvent((PRKEVENT)(a2 + 104), 0, 0);
}
