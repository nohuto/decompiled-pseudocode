/*
 * XREFs of VfPowerIsSystemRestrictedIrp @ 0x140941D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VfPowerIsSystemRestrictedIrp(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) != 1;
}
