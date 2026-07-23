/*
 * XREFs of AslFree @ 0x1408EA974
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x140720780 (AslpFileMakeStringVersionAttributes.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall AslFree(__int64 a1, void *a2)
{
  if ( a2 )
    ExFreePoolWithTag(a2, 0x74705041u);
}
