/*
 * XREFs of HUBDSM_ValidatingSelectInterfaceUrbFromConfigured @ 0x1C001B710
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_ValidateSelectInterfaceUrb @ 0x1C0013C30 (HUBPDO_ValidateSelectInterfaceUrb.c)
 */

__int64 __fastcall HUBDSM_ValidatingSelectInterfaceUrbFromConfigured(__int64 a1)
{
  return HUBPDO_ValidateSelectInterfaceUrb(*(_QWORD *)(a1 + 960));
}
