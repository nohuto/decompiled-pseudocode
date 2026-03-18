/*
 * XREFs of PopDeletePowerRequestObject @ 0x140589A20
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerRequestCleanUp @ 0x14000333C (PopPowerRequestCleanUp.c)
 */

void __fastcall PopDeletePowerRequestObject(unsigned int *a1)
{
  PopPowerRequestCleanUp(a1);
}
