/*
 * XREFs of PsGetDefaultWsMaximum @ 0x14013DAAC
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406D1898 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 PsGetDefaultWsMaximum()
{
  return PspMaximumWorkingSet;
}
