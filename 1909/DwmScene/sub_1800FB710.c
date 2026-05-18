/*
 * XREFs of sub_1800FB710 @ 0x1800FB710
 * Callers:
 *     sub_1800FBAB0 @ 0x1800FBAB0 (sub_1800FBAB0.c)
 *     sub_1800FC508 @ 0x1800FC508 (sub_1800FC508.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800F6404 @ 0x1800F6404 (sub_1800F6404.c)
 *     sub_1800F667C @ 0x1800F667C (sub_1800F667C.c)
 */

__int64 __fastcall sub_1800FB710(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // rcx
  char *v16; // r9
  char *v17; // r8
  char *v18; // rcx

  v4 = a2;
  v6 = (a2 - *a1) / 12;
  v7 = (a1[1] - *a1) / 12;
  if ( v7 == 0x1555555555555555LL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 12;
  v10 = v9 >> 1;
  if ( v9 <= 0x1555555555555555LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = sub_1800F667C((__int64)a1, v11);
  v13 = 3 * v6;
  *(_QWORD *)((char *)v12 + 4 * v13) = *(_QWORD *)a3;
  *((_DWORD *)v12 + v13 + 2) = *(_DWORD *)(a3 + 8);
  v14 = a1[1];
  v15 = *a1;
  if ( v4 == v14 )
  {
    if ( v15 != v14 )
    {
      v16 = (char *)v12 - v15;
      do
      {
        *(_QWORD *)&v16[v15] = *(_QWORD *)v15;
        *(_DWORD *)&v16[v15 + 8] = *(_DWORD *)(v15 + 8);
        v15 += 12LL;
      }
      while ( v15 != v14 );
    }
  }
  else
  {
    if ( v15 != v4 )
    {
      v17 = (char *)v12 - v15;
      do
      {
        *(_QWORD *)&v17[v15] = *(_QWORD *)v15;
        *(_DWORD *)&v17[v15 + 8] = *(_DWORD *)(v15 + 8);
        v15 += 12LL;
      }
      while ( v15 != v4 );
      v14 = a1[1];
    }
    if ( v4 != v14 )
    {
      v18 = (char *)v12 + 4 * v13 - v4 + 12;
      do
      {
        *(_QWORD *)&v18[v4] = *(_QWORD *)v4;
        *(_DWORD *)&v18[v4 + 8] = *(_DWORD *)(v4 + 8);
        v4 += 12LL;
      }
      while ( v4 != v14 );
    }
  }
  sub_1800F6404(a1, (__int64)v12, v8, v11);
  return *a1 + 4 * v13;
}
