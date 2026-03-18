/*
 * XREFs of MmQueryApiSetSchema @ 0x140154BBC
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1401AB17C (KiMarkBugCheckRegions.c)
 *     PsQueryCurrentApiSetSchema @ 0x140711350 (PsQueryCurrentApiSetSchema.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_140464500;
  result = &qword_140464508;
  *a2 = &qword_140464508;
  return result;
}
