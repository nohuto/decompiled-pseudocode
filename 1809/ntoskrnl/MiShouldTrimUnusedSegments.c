/*
 * XREFs of MiShouldTrimUnusedSegments @ 0x1402A35F4
 * Callers:
 *     MiCheckControlArea @ 0x140076490 (MiCheckControlArea.c)
 *     MiFreeExcessSegments @ 0x1401644D4 (MiFreeExcessSegments.c)
 *     MiRemoveUnusedSegments @ 0x1402A3220 (MiRemoveUnusedSegments.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiShouldTrimUnusedSegments()
{
  return qword_140439C98 && (unsigned __int64)qword_140439C98 >> 12 > 3 * (qword_14043F868 / 0x64uLL);
}
