/*
 * XREFs of __iscsym @ 0x180090550
 * Callers:
 *     <none>
 * Callees:
 *     __pctype_func @ 0x180096220 (__pctype_func.c)
 */

int __cdecl _iscsym(int C)
{
  char v1; // bl

  v1 = C;
  return (_pctype_func()[(unsigned __int8)C] & 0x107) != 0 || v1 == 95;
}
