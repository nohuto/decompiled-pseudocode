/*
 * XREFs of IrqArbpLookupIsaOverrideByGsiv @ 0x1C00929DC
 * Callers:
 *     IrqArbAddAllocation @ 0x1C00901A0 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C0093E2C (IrqArbpFindSuitableRangeIsa.c)
 *     IrqArbIrqFromGsiv @ 0x1C00B2E7C (IrqArbIrqFromGsiv.c)
 * Callees:
 *     <none>
 */

char __fastcall IrqArbpLookupIsaOverrideByGsiv(int a1, _DWORD *a2)
{
  int v2; // eax
  _DWORD *i; // r8

  v2 = 0;
  for ( i = &IsaVectorOverrides; *i != a1; i += 2 )
  {
    if ( (unsigned int)++v2 >= 0x10 )
      return 0;
  }
  *a2 = v2;
  return 1;
}
