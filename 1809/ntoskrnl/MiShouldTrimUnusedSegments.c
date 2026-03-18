/*
 * XREFs of MiShouldTrimUnusedSegments @ 0x1402A3304
 * Callers:
 *     MiCheckControlArea @ 0x1400764A0 (MiCheckControlArea.c)
 *     MiFreeExcessSegments @ 0x1401643B4 (MiFreeExcessSegments.c)
 *     MiRemoveUnusedSegments @ 0x1402A2F30 (MiRemoveUnusedSegments.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiShouldTrimUnusedSegments()
{
  return qword_140438BD8 && (unsigned __int64)qword_140438BD8 >> 12 > 3 * (qword_14043E7A8 / 0x64uLL);
}
