/*
 * XREFs of PiDqActionDataFree @ 0x1405915B4
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x140590124 (PiDqQueryFreeActiveData.c)
 *     PiDqQuerySerializeActionQueue @ 0x140591044 (PiDqQuerySerializeActionQueue.c)
 *     PiDqActionDataCreate @ 0x140591404 (PiDqActionDataCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x140595490 (PnpFreeDevPropertyArray.c)
 */

void __fastcall PiDqActionDataFree(_QWORD *P)
{
  void *v2; // rcx
  __int64 v3; // rdx

  if ( *(_DWORD *)P )
  {
    v2 = (void *)P[2];
    if ( v2 )
      ExFreePoolWithTag(v2, 0x58706E50u);
    v3 = P[4];
    if ( v3 )
      PnpFreeDevPropertyArray(*((unsigned int *)P + 6), v3, 1483763280LL);
  }
  ExFreePoolWithTag(P, 0x58706E50u);
}
