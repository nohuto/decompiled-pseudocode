/*
 * XREFs of PsGetDefaultWsMaximum @ 0x14013DA8C
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406D18B8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 PsGetDefaultWsMaximum()
{
  return PspMaximumWorkingSet;
}
