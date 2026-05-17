/*
 * XREFs of __iscsymf @ 0x18008CE70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180092AB0 @ 0x180092AB0 (sub_180092AB0.c)
 */

int __cdecl _iscsymf(int C)
{
  __int64 v2; // rax
  int v3; // edx

  v2 = sub_180092AB0();
  v3 = (unsigned __int8)C;
  if ( C == -1 )
    v3 = -1;
  return (*(_WORD *)(v2 + 2LL * v3) & 0x103) != 0 || C == 95;
}
