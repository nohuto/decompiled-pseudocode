/*
 * XREFs of HvlpLpComparison @ 0x1402723B8
 * Callers:
 *     HvlpSelectLpSet @ 0x140272640 (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x140272A84 (HvlpSelectVpSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpLpComparison(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // r8d
  unsigned int v8; // eax
  unsigned int v9; // r8d
  unsigned int v10; // eax
  unsigned int v11; // r8d
  unsigned int v12; // eax
  unsigned int v13; // r8d
  unsigned int v14; // eax
  unsigned int v15; // ecx

  v5 = 9LL * a3;
  v6 = *(_DWORD *)(a2 + 36LL * a3 + 16);
  v7 = *(_DWORD *)(a2 + 36LL * a4 + 16);
  if ( v6 < v7 )
    return 0xFFFFFFFFLL;
  if ( v6 > v7 )
    return 1LL;
  v8 = *(_DWORD *)(a2 + 4 * v5 + 20);
  v9 = *(_DWORD *)(a2 + 36LL * a4 + 20);
  if ( v8 < v9 )
    return 0xFFFFFFFFLL;
  if ( v8 > v9 )
    return 1LL;
  v10 = *(_DWORD *)(a2 + 4 * v5 + 24);
  v11 = *(_DWORD *)(a2 + 36LL * a4 + 24);
  if ( v10 > v11 )
    return 0xFFFFFFFFLL;
  if ( v10 < v11 )
    return 1LL;
  v12 = *(_DWORD *)(a2 + 4 * v5 + 28);
  v13 = *(_DWORD *)(a2 + 36LL * a4 + 28);
  if ( v12 > v13 )
    return 0xFFFFFFFFLL;
  if ( v12 < v13 )
    return 1LL;
  v14 = *(_DWORD *)(a2 + 4 * v5 + 32);
  v15 = *(_DWORD *)(a2 + 36LL * a4 + 32);
  if ( v14 > v15 )
    return 0xFFFFFFFFLL;
  if ( v14 < v15 )
    return 1LL;
  if ( a3 >= a4 )
    return a3 > a4;
  return 0xFFFFFFFFLL;
}
