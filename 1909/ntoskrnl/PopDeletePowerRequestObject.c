/*
 * XREFs of PopDeletePowerRequestObject @ 0x140672220
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerRequestCleanUp @ 0x1400D6160 (PopPowerRequestCleanUp.c)
 */

LONG_PTR __fastcall PopDeletePowerRequestObject(unsigned int *a1)
{
  return PopPowerRequestCleanUp(a1);
}
