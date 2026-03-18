/*
 * XREFs of MmQueryApiSetSchema @ 0x14015451C
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1401AAA5C (KiMarkBugCheckRegions.c)
 *     PsQueryCurrentApiSetSchema @ 0x14070F570 (PsQueryCurrentApiSetSchema.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_140464800;
  result = &qword_140464808;
  *a2 = &qword_140464808;
  return result;
}
