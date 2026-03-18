/*
 * XREFs of KsepCacheHwIdFree @ 0x1402B7350
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     KsepStringFree @ 0x14070D2C4 (KsepStringFree.c)
 */

void __fastcall KsepCacheHwIdFree(char *P)
{
  if ( P )
  {
    KsepStringFree(P + 40);
    ExFreePoolWithTag(P, 0x6145534Bu);
    _InterlockedIncrement(&dword_1404467C4);
  }
}
