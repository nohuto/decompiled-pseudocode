/*
 * XREFs of AslFree @ 0x1408E96D4
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x14071F500 (AslpFileMakeStringVersionAttributes.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall AslFree(__int64 a1, void *a2)
{
  if ( a2 )
    ExFreePoolWithTag(a2, 0x74705041u);
}
