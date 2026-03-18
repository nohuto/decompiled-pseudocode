/*
 * XREFs of NVMePerfStateTransition @ 0x1C000CC44
 * Callers:
 *     NVMeMaxOperationalPower @ 0x1C000CB3C (NVMeMaxOperationalPower.c)
 *     NVMePowerSetPerfState @ 0x1C000D53C (NVMePowerSetPerfState.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMePerfStateTransition(__int64 a1)
{
  unsigned __int8 v2; // al
  bool result; // al

  result = 0;
  if ( (*(_DWORD *)(a1 + 1576) & 2) != 0 )
  {
    v2 = *(_BYTE *)(a1 + 1584);
    if ( *(_BYTE *)(a1 + 1583) != v2 )
    {
      StorPortDebugPrint(3LL, "StorNVMe - POWER: Requesting transition to P%u\n", v2);
      if ( !(unsigned int)StorPortExtendedFunction(66LL, a1, 0LL) )
        return 1;
    }
  }
  return result;
}
