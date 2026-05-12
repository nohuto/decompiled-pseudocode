/*
 * XREFs of RaidGetAssociatedXrb @ 0x1C003ADC0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E3C0 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetAssociatedXrb(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 2) == 40 )
    return *(_QWORD *)(a1 + 96);
  else
    return *(_QWORD *)(a1 + 48);
}
