/*
 * XREFs of FreeOperandValue @ 0x1408A7358
 * Callers:
 *     GetOperandValue @ 0x1408A7858 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1408A8BEC (LocalGetConditionForString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall FreeOperandValue(_QWORD *P)
{
  void *v2; // rcx

  if ( P )
  {
    v2 = (void *)P[1];
    if ( v2 )
    {
      if ( !*(_BYTE *)P )
        ExFreePoolWithTag(v2, 0);
    }
    ExFreePoolWithTag(P, 0);
  }
}
