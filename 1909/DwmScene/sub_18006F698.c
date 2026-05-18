/*
 * XREFs of sub_18006F698 @ 0x18006F698
 * Callers:
 *     sub_18007A074 @ 0x18007A074 (sub_18007A074.c)
 * Callees:
 *     sub_18000F370 @ 0x18000F370 (sub_18000F370.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18000F60C @ 0x18000F60C (sub_18000F60C.c)
 */

unsigned __int64 __fastcall sub_18006F698(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  _QWORD *v12; // r10
  unsigned __int64 v13; // r14
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // r8
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // r8
  __int64 v22; // rdx
  unsigned __int64 v23; // rbx

  v6 = (unsigned __int64)a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = sub_18000F60C((__int64)a1, v11);
  v13 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = (_QWORD *)((char *)v12 + v13);
  v15 = (_QWORD *)((char *)v12 + v13 + 16);
  *v14 = 0LL;
  v14[1] = 0LL;
  v16 = a3[1];
  if ( v16 )
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 12));
  *v14 = *a3;
  v14[1] = a3[1];
  v17 = (_QWORD *)a1[1];
  v18 = *a1;
  if ( a2 == v17 )
  {
    if ( (_QWORD *)v18 != v17 )
    {
      v19 = v12;
      v20 = v18 - (_QWORD)v12;
      do
      {
        *v19 = 0LL;
        v19[1] = 0LL;
        *v19 = *(_QWORD *)((char *)v19 + v20);
        v19[1] = *(_QWORD *)((char *)v19 + v20 + 8);
        *(_QWORD *)((char *)v19 + v20) = 0LL;
        *(_QWORD *)((char *)v19 + v20 + 8) = 0LL;
        v19 += 2;
      }
      while ( (_QWORD *)((char *)v19 + v20) != v17 );
    }
  }
  else
  {
    if ( (_QWORD *)v18 != a2 )
    {
      v21 = v12;
      v22 = v18 - (_QWORD)v12;
      do
      {
        *v21 = 0LL;
        v21[1] = 0LL;
        *v21 = *(_QWORD *)((char *)v21 + v22);
        v21[1] = *(_QWORD *)((char *)v21 + v22 + 8);
        *(_QWORD *)((char *)v21 + v22) = 0LL;
        *(_QWORD *)((char *)v21 + v22 + 8) = 0LL;
        v21 += 2;
      }
      while ( (_QWORD *)((char *)v21 + v22) != a2 );
      v17 = (_QWORD *)a1[1];
    }
    if ( a2 != v17 )
    {
      v23 = (char *)a2 - v13 - (char *)v12;
      do
      {
        *v15 = 0LL;
        v15[1] = 0LL;
        *v15 = *(_QWORD *)((char *)v15 + v23 - 16);
        v15[1] = *(_QWORD *)((char *)v15 + v23 - 8);
        *(_QWORD *)((char *)v15 + v23 - 16) = 0LL;
        *(_QWORD *)((char *)v15 + v23 - 8) = 0LL;
        v15 += 2;
      }
      while ( (_QWORD *)((char *)v15 + v23 - 16) != v17 );
    }
  }
  sub_18000F370(a1, (__int64)v12, v8, v11);
  return v13 + *a1;
}
