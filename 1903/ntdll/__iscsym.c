/*
 * XREFs of __iscsym @ 0x18008CE30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180092AB0 @ 0x180092AB0 (sub_180092AB0.c)
 */

int __cdecl _iscsym(int C)
{
  char v1; // bl

  v1 = C;
  return (*(_WORD *)(sub_180092AB0() + 2LL * (unsigned __int8)C) & 0x107) != 0 || v1 == 95;
}
