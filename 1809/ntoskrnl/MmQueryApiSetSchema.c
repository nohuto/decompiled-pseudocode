/*
 * XREFs of MmQueryApiSetSchema @ 0x14013907C
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1401A0130 (KiMarkBugCheckRegions.c)
 *     PsQueryCurrentApiSetSchema @ 0x1406CB438 (PsQueryCurrentApiSetSchema.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_140438DD8;
  result = &qword_140438DE0;
  *a2 = &qword_140438DE0;
  return result;
}
