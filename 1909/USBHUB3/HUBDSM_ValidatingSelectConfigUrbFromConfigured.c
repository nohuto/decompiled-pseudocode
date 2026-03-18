/*
 * XREFs of HUBDSM_ValidatingSelectConfigUrbFromConfigured @ 0x1C001CFF0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_ValidateSelectConfigUrb @ 0x1C001497C (HUBPDO_ValidateSelectConfigUrb.c)
 */

__int64 __fastcall HUBDSM_ValidatingSelectConfigUrbFromConfigured(__int64 a1)
{
  return HUBPDO_ValidateSelectConfigUrb(*(_QWORD *)(a1 + 960));
}
