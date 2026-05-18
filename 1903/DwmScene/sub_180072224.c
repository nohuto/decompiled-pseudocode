/*
 * XREFs of sub_180072224 @ 0x180072224
 * Callers:
 *     sub_180079ECC @ 0x180079ECC (sub_180079ECC.c)
 * Callees:
 *     sub_18000F320 @ 0x18000F320 (sub_18000F320.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18000F5BC @ 0x18000F5BC (sub_18000F5BC.c)
 *     sub_18007297C @ 0x18007297C (sub_18007297C.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180072224(__int64 *a1, char *a2, char *a3, char *a4)
{
  unsigned __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rcx
  char *v10; // r14
  __int64 v11; // r14
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  _QWORD *v16; // r10
  __int64 v17; // r15
  _QWORD *v18; // rcx
  char *v19; // rdx
  char *v20; // r8
  _QWORD *v21; // r8
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rdx
  __int64 v25; // r8
  char *v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // r15
  _QWORD *v29; // rcx
  char *v30; // r14
  char *v31; // r15
  volatile signed __int32 *v32; // rcx
  _QWORD *v33; // rcx
  signed __int64 v34; // rsi
  __int64 v35; // rax
  char *v36; // rdx
  _QWORD *v37; // rcx
  char *v38; // r8
  char *v39; // r15
  volatile signed __int32 *v40; // rcx
  _QWORD *v41; // rcx
  signed __int64 v42; // rsi
  __int64 v43; // rax
  char v44; // [rsp+20h] [rbp-88h]
  __int64 v45; // [rsp+40h] [rbp-68h]
  char *v46; // [rsp+48h] [rbp-60h]

  v46 = a4;
  v7 = (a4 - a3) >> 4;
  v8 = (__int64)&a2[-*a1] >> 4;
  if ( v7 == 1 && a2 == (char *)a1[1] )
  {
    v44 = 1;
  }
  else
  {
    v44 = 0;
    if ( !v7 )
      return;
  }
  v9 = a1[2];
  v10 = (char *)a1[1];
  if ( v7 <= (v9 - (__int64)v10) >> 4 )
  {
    if ( v7 >= (v10 - a2) >> 4 )
    {
      v36 = &a2[16 * v7];
      if ( a2 != v10 )
      {
        v37 = a2 + 8;
        v38 = (char *)(v36 - a2);
        do
        {
          *(_QWORD *)v36 = 0LL;
          *(_QWORD *)&v38[(_QWORD)v37] = 0LL;
          *(_QWORD *)v36 = *(v37 - 1);
          *(_QWORD *)&v38[(_QWORD)v37] = *v37;
          *(v37 - 1) = 0LL;
          *v37 = 0LL;
          v36 += 16;
          v37 += 2;
        }
        while ( v37 - 1 != (_QWORD *)v10 );
      }
      a1[1] = (__int64)v36;
      v39 = a2;
      if ( a2 != v10 )
      {
        do
        {
          v40 = (volatile signed __int32 *)*((_QWORD *)v39 + 1);
          if ( v40 && _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
          v39 += 16;
        }
        while ( v39 != v10 );
        a4 = v46;
      }
      if ( a3 != a4 )
      {
        v41 = a2 + 8;
        v42 = a3 - a2;
        do
        {
          *(v41 - 1) = 0LL;
          *v41 = 0LL;
          v43 = *(_QWORD *)((char *)v41 + v42);
          if ( v43 )
            _InterlockedIncrement((volatile signed __int32 *)(v43 + 12));
          *(v41 - 1) = *(_QWORD *)((char *)v41 + v42 - 8);
          *v41 = *(_QWORD *)((char *)v41 + v42);
          v41 += 2;
        }
        while ( (char *)v41 + v42 - 8 != a4 );
      }
    }
    else
    {
      v28 = 16 * v7;
      v29 = (_QWORD *)a1[1];
      if ( &v10[-v28] != v10 )
      {
        do
        {
          *v29 = 0LL;
          v29[1] = 0LL;
          *v29 = v29[v28 / 0xFFFFFFFFFFFFFFF8uLL];
          v29[1] = v29[v28 / 0xFFFFFFFFFFFFFFF8uLL + 1];
          v29[v28 / 0xFFFFFFFFFFFFFFF8uLL] = 0LL;
          v29[v28 / 0xFFFFFFFFFFFFFFF8uLL + 1] = 0LL;
          v29 += 2;
        }
        while ( &v29[v28 / 0xFFFFFFFFFFFFFFF8uLL] != (_QWORD *)v10 );
      }
      a1[1] = (__int64)v29;
      LOBYTE(a4) = 0;
      sub_18007297C(a2, &v10[-v28], v10, a4);
      v30 = a2;
      v31 = &a2[v28];
      if ( a2 != v31 )
      {
        do
        {
          v32 = (volatile signed __int32 *)*((_QWORD *)v30 + 1);
          if ( v32 && _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
          v30 += 16;
        }
        while ( v30 != v31 );
      }
      if ( a3 != v46 )
      {
        v33 = a2 + 8;
        v34 = a3 - a2;
        do
        {
          *(v33 - 1) = 0LL;
          *v33 = 0LL;
          v35 = *(_QWORD *)((char *)v33 + v34);
          if ( v35 )
            _InterlockedIncrement((volatile signed __int32 *)(v35 + 12));
          *(v33 - 1) = *(_QWORD *)((char *)v33 + v34 - 8);
          *v33 = *(_QWORD *)((char *)v33 + v34);
          v33 += 2;
        }
        while ( (char *)v33 + v34 - 8 != v46 );
      }
    }
  }
  else
  {
    v11 = (__int64)&v10[-*a1] >> 4;
    if ( v7 > 0xFFFFFFFFFFFFFFFLL - v11 )
      std::vector<void *>::_Xlen();
    v12 = v11 + v7;
    v45 = v11 + v7;
    v13 = (v9 - *a1) >> 4;
    v14 = v13 >> 1;
    if ( v13 <= 0xFFFFFFFFFFFFFFFLL - (v13 >> 1) )
    {
      v15 = v14 + v13;
      if ( v14 + v13 < v12 )
        v15 = v12;
    }
    else
    {
      v15 = v11 + v7;
    }
    v16 = sub_18000F5BC((__int64)a1, v15);
    v17 = 2 * (v8 + v7);
    v18 = &v16[v17];
    if ( a3 != v46 )
    {
      v19 = a3 + 8;
      v20 = (char *)((char *)&v16[2 * v8] - a3);
      do
      {
        *(_QWORD *)&v19[(_QWORD)v20 - 8] = 0LL;
        *(_QWORD *)&v20[(_QWORD)v19] = 0LL;
        if ( *(_QWORD *)v19 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v19 + 12LL));
        *(_QWORD *)&v19[(_QWORD)v20 - 8] = *((_QWORD *)v19 - 1);
        *(_QWORD *)&v20[(_QWORD)v19] = *(_QWORD *)v19;
        v19 += 16;
      }
      while ( v19 - 8 != v46 );
    }
    if ( v44 )
    {
      v21 = (_QWORD *)a1[1];
      if ( (_QWORD *)*a1 != v21 )
      {
        v22 = v16;
        v23 = *a1 - (_QWORD)v16;
        do
        {
          *v22 = 0LL;
          v22[1] = 0LL;
          *v22 = *(_QWORD *)((char *)v22 + v23);
          v22[1] = *(_QWORD *)((char *)v22 + v23 + 8);
          *(_QWORD *)((char *)v22 + v23) = 0LL;
          *(_QWORD *)((char *)v22 + v23 + 8) = 0LL;
          v22 += 2;
        }
        while ( (_QWORD *)((char *)v22 + v23) != v21 );
      }
    }
    else
    {
      if ( (char *)*a1 != a2 )
      {
        v24 = v16;
        v25 = *a1 - (_QWORD)v16;
        do
        {
          *v24 = 0LL;
          v24[1] = 0LL;
          *v24 = *(_QWORD *)((char *)v24 + v25);
          v24[1] = *(_QWORD *)((char *)v24 + v25 + 8);
          *(_QWORD *)((char *)v24 + v25) = 0LL;
          *(_QWORD *)((char *)v24 + v25 + 8) = 0LL;
          v24 += 2;
        }
        while ( (char *)v24 + v25 != a2 );
      }
      v26 = (char *)a1[1];
      if ( a2 != v26 )
      {
        v27 = &a2[-(v17 * 8)] - (char *)v16;
        do
        {
          *v18 = 0LL;
          v18[1] = 0LL;
          *v18 = *(_QWORD *)((char *)v18 + v27);
          v18[1] = *(_QWORD *)((char *)v18 + v27 + 8);
          *(_QWORD *)((char *)v18 + v27) = 0LL;
          *(_QWORD *)((char *)v18 + v27 + 8) = 0LL;
          v18 += 2;
        }
        while ( (char *)v18 + v27 != v26 );
      }
    }
    sub_18000F320(a1, (__int64)v16, v45, v15);
  }
}
