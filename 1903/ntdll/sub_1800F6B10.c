/*
 * XREFs of sub_1800F6B10 @ 0x1800F6B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1800F6B10(LPCGUID a1, int a2)
{
  if ( a2 == 1 )
    byte_18016655C = 1;
  else
    byte_18016655C = a2 != 0 ? byte_18016655C : 0;
}
