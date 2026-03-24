/*
 * XREFs of KeIsTsxDisabled @ 0x1401B4314
 * Callers:
 *     VslpIumPhase0Initialize @ 0x1409F4600 (VslpIumPhase0Initialize.c)
 * Callees:
 *     <none>
 */

_BOOL8 KeIsTsxDisabled()
{
  return KiDisableTsx != 0;
}
