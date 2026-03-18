/*
 * XREFs of KeIsTsxDisabled @ 0x1401B42F4
 * Callers:
 *     VslpIumPhase0Initialize @ 0x1409F45F8 (VslpIumPhase0Initialize.c)
 * Callees:
 *     <none>
 */

_BOOL8 KeIsTsxDisabled()
{
  return KiDisableTsx != 0;
}
