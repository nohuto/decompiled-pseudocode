/*
 * XREFs of sub_1800F6B10 @ 0x1800F6B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_1800F6B10(__int64 a1, int a2)
{
  char result; // al

  if ( a2 == 1 )
  {
    byte_18016655C = 1;
  }
  else
  {
    result = -(a2 != 0);
    byte_18016655C &= result;
  }
  return result;
}
