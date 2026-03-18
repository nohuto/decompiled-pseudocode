/*
 * XREFs of HUBHSM_CreatingChildPSMs @ 0x1C0007730
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_CreateChildPSMs @ 0x1C000D554 (HUBMUX_CreateChildPSMs.c)
 */

__int64 __fastcall HUBHSM_CreatingChildPSMs(__int64 a1)
{
  return HUBMUX_CreateChildPSMs(*(_QWORD *)(a1 + 960));
}
