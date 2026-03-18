/*
 * XREFs of PopSqmCreateDwordStreamEntry @ 0x1403058E4
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14073A7DC (PopBatteryApplyCompositeState.c)
 * Callees:
 *     <none>
 */

void __fastcall PopSqmCreateDwordStreamEntry(_DWORD *a1, int a2)
{
  a1[2] = a2;
  *a1 = 1;
}
