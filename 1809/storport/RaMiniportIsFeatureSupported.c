/*
 * XREFs of RaMiniportIsFeatureSupported @ 0x1C00272FC
 * Callers:
 *     RaidIsUnitControlSupported @ 0x1C0007578 (RaidIsUnitControlSupported.c)
 * Callees:
 *     <none>
 */

char __fastcall RaMiniportIsFeatureSupported(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(int *)(a1 + 296) > 0 )
    return *(_BYTE *)(a1 + 300);
  return result;
}
