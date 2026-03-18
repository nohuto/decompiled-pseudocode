/*
 * XREFs of CmpSwapHiveStorage @ 0x14082F4B8
 * Callers:
 *     CmpReorganizeHive @ 0x14068EB68 (CmpReorganizeHive.c)
 *     CmpRefreshHive @ 0x14083B84C (CmpRefreshHive.c)
 * Callees:
 *     HvSwapHiveStorage @ 0x14082FF44 (HvSwapHiveStorage.c)
 */

__int64 __fastcall CmpSwapHiveStorage(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // ecx
  _QWORD *v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rcx
  _QWORD *v18; // r8
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // r8
  _QWORD *v23; // r11
  char *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 result; // rax
  __int64 v31; // rcx
  _QWORD *v32; // [rsp+20h] [rbp-10h] BYREF
  _QWORD *v33; // [rsp+28h] [rbp-8h]

  v32 = 0LL;
  v33 = 0LL;
  HvSwapHiveStorage(a1, a2);
  v4 = (_QWORD *)(a2 + 1536);
  v5 = a1 - a2;
  v6 = 6LL;
  do
  {
    v7 = *(_QWORD *)((char *)v4 + v5);
    *(_QWORD *)((char *)v4 + v5) = *v4;
    *v4++ = v7;
    --v6;
  }
  while ( v6 );
  v8 = *(_DWORD *)(a1 + 1784);
  v9 = (_QWORD *)(a1 + 1888);
  v10 = 64LL;
  *(_DWORD *)(a1 + 1784) = *(_DWORD *)(a2 + 1784);
  *(_DWORD *)(a2 + 1784) = v8;
  v11 = a2 - a1;
  v12 = *(_QWORD *)(a1 + 1800);
  *(_QWORD *)(a1 + 1800) = *(_QWORD *)(a2 + 1800);
  *(_QWORD *)(a2 + 1800) = v12;
  v13 = *(_QWORD *)(a1 + 1808);
  *(_QWORD *)(a1 + 1808) = *(_QWORD *)(a2 + 1808);
  *(_QWORD *)(a2 + 1808) = v13;
  v14 = *(_DWORD *)(a1 + 1864);
  *(_DWORD *)(a1 + 1864) = *(_DWORD *)(a2 + 1864);
  *(_DWORD *)(a2 + 1864) = v14;
  v15 = *(_DWORD *)(a1 + 1868);
  *(_DWORD *)(a1 + 1868) = *(_DWORD *)(a2 + 1868);
  *(_DWORD *)(a2 + 1868) = v15;
  v16 = *(_DWORD *)(a1 + 1872);
  *(_DWORD *)(a1 + 1872) = *(_DWORD *)(a2 + 1872);
  *(_DWORD *)(a2 + 1872) = v16;
  v17 = *(_QWORD *)(a1 + 1880);
  *(_QWORD *)(a1 + 1880) = *(_QWORD *)(a2 + 1880);
  *(_QWORD *)(a2 + 1880) = v17;
  do
  {
    v18 = (_QWORD *)*v9;
    v19 = &v32;
    v33 = &v32;
    v20 = &v32;
    v32 = &v32;
    if ( v18 != v9 )
    {
      v32 = v18;
      v33 = *(_QWORD **)((char *)v9 + v11 + v5 + 8);
      v21 = v33;
      v18[1] = &v32;
      *v21 = &v32;
      v20 = v32;
      *(_QWORD *)((char *)v9 + v11 + v5 + 8) = v9;
      v19 = v33;
      *v9 = v9;
    }
    v22 = (_QWORD *)((char *)v9 + v11);
    v23 = *(_QWORD **)((char *)v9 + v11);
    if ( v23 != (_QWORD *)((char *)v9 + v11) )
    {
      v24 = (char *)v9 + v11;
      v25 = *(_QWORD **)((char *)v9 + v11 + 8);
      *v9 = v23;
      *(_QWORD *)&v24[v5 + 8] = v25;
      v23[1] = v9;
      *v25 = v9;
      v20 = v32;
      *((_QWORD *)v24 + 1) = v22;
      v19 = v33;
      *v22 = v22;
    }
    if ( v20 != &v32 )
    {
      *v22 = v20;
      *(_QWORD *)((char *)v9 + v11 + 8) = v19;
      v20[1] = v22;
      *v19 = v22;
    }
    v9 += 2;
    --v10;
  }
  while ( v10 );
  v26 = *(_QWORD *)(a1 + 4176);
  *(_QWORD *)(a1 + 4176) = *(_QWORD *)(a2 + 4176);
  v27 = *(_QWORD *)(a2 + 4184);
  *(_QWORD *)(a2 + 4176) = v26;
  v28 = *(_QWORD *)(a1 + 4184);
  *(_QWORD *)(a1 + 4184) = v27;
  *(_QWORD *)(a2 + 4184) = v28;
  v29 = *(_QWORD *)(a1 + 4224);
  *(_QWORD *)(a1 + 4224) = *(_QWORD *)(a2 + 4224);
  *(_QWORD *)(a2 + 4224) = v29;
  LODWORD(v28) = *(_DWORD *)(a1 + 4264);
  *(_DWORD *)(a1 + 4264) = *(_DWORD *)(a2 + 4264);
  *(_DWORD *)(a2 + 4264) = v28;
  LODWORD(v28) = *(_DWORD *)(a1 + 4268);
  *(_DWORD *)(a1 + 4268) = *(_DWORD *)(a2 + 4268);
  *(_DWORD *)(a2 + 4268) = v28;
  LODWORD(v28) = *(_DWORD *)(a1 + 4792);
  *(_DWORD *)(a1 + 4792) = *(_DWORD *)(a2 + 4792);
  *(_DWORD *)(a2 + 4792) = v28;
  LODWORD(v28) = *(_DWORD *)(a1 + 4796);
  *(_DWORD *)(a1 + 4796) = *(_DWORD *)(a2 + 4796);
  *(_DWORD *)(a2 + 4796) = v28;
  LODWORD(v28) = *(_DWORD *)(a1 + 4800);
  *(_DWORD *)(a1 + 4800) = *(_DWORD *)(a2 + 4800);
  *(_DWORD *)(a2 + 4800) = v28;
  LODWORD(v28) = *(_DWORD *)(a1 + 4804);
  *(_DWORD *)(a1 + 4804) = *(_DWORD *)(a2 + 4804);
  *(_DWORD *)(a2 + 4804) = v28;
  result = *(_QWORD *)(a2 + 4832);
  v31 = *(_QWORD *)(a1 + 4832);
  *(_QWORD *)(a1 + 4832) = result;
  *(_QWORD *)(a2 + 4832) = v31;
  return result;
}
