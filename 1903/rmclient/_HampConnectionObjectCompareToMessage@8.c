/*
 * XREFs of _HampConnectionObjectCompareToMessage@8 @ 0x10006B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall HampConnectionObjectCompareToMessage(unsigned int *a1, int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edx
  unsigned int v4; // eax
  unsigned int v5; // ecx

  v2 = *(_DWORD *)(a2 + 28);
  v3 = *(_DWORD *)(a2 + 24);
  v4 = *a1;
  v5 = a1[1];
  if ( v5 > v2 )
    return 1;
  if ( v5 >= v2 && v4 >= v3 )
    return __PAIR64__(v5, v4) > __PAIR64__(v2, v3);
  return -1;
}
