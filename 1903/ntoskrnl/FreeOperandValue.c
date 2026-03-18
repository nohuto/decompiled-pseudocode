/*
 * XREFs of FreeOperandValue @ 0x1408E46B0
 * Callers:
 *     GetOperandValue @ 0x1408E4BB8 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1408E5E94 (LocalGetConditionForString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
