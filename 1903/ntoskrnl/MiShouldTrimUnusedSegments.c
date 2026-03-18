/*
 * XREFs of MiShouldTrimUnusedSegments @ 0x1402BA7B4
 * Callers:
 *     MiCheckControlArea @ 0x140070F40 (MiCheckControlArea.c)
 *     MiFreeExcessSegments @ 0x1402B99CC (MiFreeExcessSegments.c)
 *     MiRemoveUnusedSegments @ 0x1402BA3E0 (MiRemoveUnusedSegments.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiShouldTrimUnusedSegments()
{
  return qword_140464598 && (unsigned __int64)qword_140464598 >> 12 > 3 * (qword_14046A5E8 / 0x64uLL);
}
