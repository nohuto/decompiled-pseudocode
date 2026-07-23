/*
 * XREFs of __iscsymf @ 0x180090590
 * Callers:
 *     <none>
 * Callees:
 *     __pctype_func @ 0x180096220 (__pctype_func.c)
 */

int __cdecl _iscsymf(int C)
{
  const unsigned __int16 *v2; // rax
  int v3; // edx

  v2 = _pctype_func();
  v3 = (unsigned __int8)C;
  if ( C == -1 )
    v3 = -1;
  return (v2[v3] & 0x103) != 0 || C == 95;
}
