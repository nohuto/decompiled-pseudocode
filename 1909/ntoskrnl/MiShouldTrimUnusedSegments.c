/*
 * XREFs of MiShouldTrimUnusedSegments @ 0x1402BA514
 * Callers:
 *     MiCheckControlArea @ 0x1400711B0 (MiCheckControlArea.c)
 *     MiFreeExcessSegments @ 0x1402B972C (MiFreeExcessSegments.c)
 *     MiRemoveUnusedSegments @ 0x1402BA140 (MiRemoveUnusedSegments.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiShouldTrimUnusedSegments()
{
  return qword_140464298 && (unsigned __int64)qword_140464298 >> 12 > 3 * (qword_14046A328 / 0x64uLL);
}
