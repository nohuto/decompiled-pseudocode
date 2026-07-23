/*
 * XREFs of IopCompareReqAlternativePriority @ 0x14075FDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IopCompareReqAlternativePriority(_DWORD **a1, _DWORD **a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rcx
  unsigned int v4; // edx
  unsigned int v5; // r8d

  v2 = *a1;
  v3 = *a2;
  if ( *v2 == **a2 )
  {
    v4 = v2[1];
    v5 = v3[1];
    if ( v4 <= v5 && (v4 < v5 || v2 < v3) )
      return 0xFFFFFFFFLL;
    return 1LL;
  }
  if ( *v2 > *v3 )
    return 1LL;
  return 0xFFFFFFFFLL;
}
