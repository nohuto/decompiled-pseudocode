/*
 * XREFs of PopDeletePowerRequestObject @ 0x14069FC50
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerRequestCleanUp @ 0x1400EC9AC (PopPowerRequestCleanUp.c)
 */

LONG_PTR __fastcall PopDeletePowerRequestObject(unsigned int *a1)
{
  return PopPowerRequestCleanUp(a1);
}
