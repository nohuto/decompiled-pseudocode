/*
 * XREFs of RtlAreAllAccessesGranted @ 0x18007A120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall RtlAreAllAccessesGranted(int a1, int a2)
{
  return (~a1 & a2) == 0;
}
