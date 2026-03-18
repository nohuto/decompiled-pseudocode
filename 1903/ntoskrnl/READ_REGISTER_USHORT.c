/*
 * XREFs of READ_REGISTER_USHORT @ 0x1401027B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT __stdcall READ_REGISTER_USHORT(PSLIST_HEADER SListHead)
{
  return SListHead->Alignment;
}
