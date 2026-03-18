/*
 * XREFs of HUBDSM_CheckingIfDeviceShouldBeDisabled @ 0x1C001BBB0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_CheckIfDeviceShouldBeDisabledOnRemove @ 0x1C002C4D8 (HUBMISC_CheckIfDeviceShouldBeDisabledOnRemove.c)
 */

__int64 __fastcall HUBDSM_CheckingIfDeviceShouldBeDisabled(__int64 a1)
{
  return HUBMISC_CheckIfDeviceShouldBeDisabledOnRemove(*(_QWORD *)(a1 + 960));
}
