/*
 * XREFs of RtlUIntAdd @ 0x180043D58
 * Callers:
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x180043C5C (-SLGetHelper@@YA_NPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUIntAdd(unsigned int a1, int a2, int *a3)
{
  unsigned int v3; // eax
  int v4; // edx
  __int64 result; // rax

  v3 = a1 + a2;
  v4 = -1;
  if ( v3 >= a1 )
    v4 = v3;
  result = v3 < a1 ? 0xC0000095 : 0;
  *a3 = v4;
  return result;
}
