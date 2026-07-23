/*
 * XREFs of MmQueryApiSetSchema @ 0x14013917C
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1401A0270 (KiMarkBugCheckRegions.c)
 *     PsQueryCurrentApiSetSchema @ 0x1406CC6D8 (PsQueryCurrentApiSetSchema.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_140439E98;
  result = &qword_140439EA0;
  *a2 = &qword_140439EA0;
  return result;
}
