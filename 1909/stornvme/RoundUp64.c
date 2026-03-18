/*
 * XREFs of RoundUp64 @ 0x1C000DD10
 * Callers:
 *     NVMeControllerRemove @ 0x1C000B4D4 (NVMeControllerRemove.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RoundUp64(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx

  v3 = a1 % a2;
  if ( v3 )
    a1 += a2 - v3;
  return a1;
}
