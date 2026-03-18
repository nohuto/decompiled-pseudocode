/*
 * XREFs of HUBDSM_ComparingSerialNumberOnReEnumeration @ 0x1C0020150
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_CheckIfSerialNumberIsIdentical @ 0x1C002F974 (HUBMISC_CheckIfSerialNumberIsIdentical.c)
 */

__int64 __fastcall HUBDSM_ComparingSerialNumberOnReEnumeration(__int64 a1)
{
  return HUBMISC_CheckIfSerialNumberIsIdentical(*(_QWORD *)(a1 + 960));
}
