/*
 * XREFs of EtwpGuidEntryCompare @ 0x180086E60
 * Callers:
 *     EtwpFindGuidEntry @ 0x180020FF4 (EtwpFindGuidEntry.c)
 *     EtwpInsertGuidEntry @ 0x180050E5C (EtwpInsertGuidEntry.c)
 * Callees:
 *     <none>
 */

int __fastcall EtwpGuidEntryCompare(const void *a1, __int64 a2)
{
  return memcmp(a1, (const void *)(a2 + 24), 0x10uLL);
}
