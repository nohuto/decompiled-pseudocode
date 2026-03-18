/*
 * XREFs of KeIsTsxDisabled @ 0x1401BEE40
 * Callers:
 *     VslpIumPhase0Initialize @ 0x140A398F0 (VslpIumPhase0Initialize.c)
 * Callees:
 *     <none>
 */

_BOOL8 KeIsTsxDisabled()
{
  return KiDisableTsx != 0;
}
