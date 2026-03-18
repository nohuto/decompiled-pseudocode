/*
 * XREFs of EtwpUpdateStringFilterData @ 0x1408FF820
 * Callers:
 *     EtwpUpdateFilterData @ 0x14066524C (EtwpUpdateFilterData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpUpdateStringFilterData(void **a1, void **a2, char a3)
{
  void *v3; // r9

  v3 = *a1;
  if ( a3 )
  {
    *a1 = 0LL;
  }
  else
  {
    *a1 = *a2;
    *a2 = 0LL;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
