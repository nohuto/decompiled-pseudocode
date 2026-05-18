/*
 * XREFs of sub_18011E310 @ 0x18011E310
 * Callers:
 *     sub_18011E7B0 @ 0x18011E7B0 (sub_18011E7B0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18000F5BC @ 0x18000F5BC (sub_18000F5BC.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     unknown_libname_115 @ 0x1800100A8 (unknown_libname_115.c)
 *     sub_180011054 @ 0x180011054 (sub_180011054.c)
 */

void __fastcall sub_18011E310(__int64 *a1, __int64 *a2, char *a3, char *a4)
{
  unsigned __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rcx
  __int64 *v10; // r14
  __int64 v11; // r14
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  _QWORD *v16; // r10
  __int64 v17; // rsi
  _QWORD *v18; // rcx
  char *v19; // rdx
  char *v20; // r8
  _QWORD *v21; // r8
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rdx
  __int64 v25; // r8
  __int64 *v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rsi
  __int64 *v29; // r12
  _QWORD *v30; // rcx
  __int64 v31; // r14
  __int64 *v32; // rsi
  char *v33; // rcx
  char *v34; // rbx
  char *v35; // rdx
  _QWORD *v36; // rcx
  char *v37; // r8
  __int64 v38; // rsi
  _QWORD *v39; // rcx
  signed __int64 v40; // r15
  __int64 v41; // rax
  char v42; // [rsp+20h] [rbp-88h]
  __int64 v43; // [rsp+40h] [rbp-68h]
  char *v44; // [rsp+48h] [rbp-60h]

  v44 = a4;
  v7 = (a4 - a3) >> 4;
  v8 = ((__int64)a2 - *a1) >> 4;
  if ( v7 == 1 && a2 == (__int64 *)a1[1] )
  {
    v42 = 1;
  }
  else
  {
    v42 = 0;
    if ( !v7 )
      return;
  }
  v9 = a1[2];
  v10 = (__int64 *)a1[1];
  if ( v7 <= (v9 - (__int64)v10) >> 4 )
  {
    if ( v7 >= ((char *)v10 - (char *)a2) >> 4 )
    {
      v35 = (char *)&a2[2 * v7];
      if ( a2 != v10 )
      {
        v36 = a2 + 1;
        v37 = (char *)(v35 - (char *)a2);
        do
        {
          *(_QWORD *)v35 = 0LL;
          *(_QWORD *)&v37[(_QWORD)v36] = 0LL;
          *(_QWORD *)v35 = *(v36 - 1);
          *(_QWORD *)&v37[(_QWORD)v36] = *v36;
          *(v36 - 1) = 0LL;
          *v36 = 0LL;
          v35 += 16;
          v36 += 2;
        }
        while ( v36 - 1 != v10 );
      }
      a1[1] = (__int64)v35;
      v38 = (__int64)a2;
      if ( a2 != v10 )
      {
        do
        {
          unknown_libname_115(v38, 0);
          v38 += 16LL;
        }
        while ( (__int64 *)v38 != v10 );
        a4 = v44;
      }
      if ( a3 != a4 )
      {
        v39 = a2 + 1;
        v40 = a3 - (char *)a2;
        do
        {
          *(v39 - 1) = 0LL;
          *v39 = 0LL;
          v41 = *(_QWORD *)((char *)v39 + v40);
          if ( v41 )
            _InterlockedIncrement((volatile signed __int32 *)(v41 + 8));
          *(v39 - 1) = *(_QWORD *)((char *)v39 + v40 - 8);
          *v39 = *(_QWORD *)((char *)v39 + v40);
          v39 += 2;
        }
        while ( (char *)v39 + v40 - 8 != a4 );
      }
    }
    else
    {
      v28 = 16 * v7;
      v29 = &v10[v28 / 0xFFFFFFFFFFFFFFF8uLL];
      v30 = (_QWORD *)a1[1];
      if ( &v10[v28 / 0xFFFFFFFFFFFFFFF8uLL] != v10 )
      {
        do
        {
          *v30 = 0LL;
          v30[1] = 0LL;
          *v30 = v30[v28 / 0xFFFFFFFFFFFFFFF8uLL];
          v30[1] = v30[v28 / 0xFFFFFFFFFFFFFFF8uLL + 1];
          v30[v28 / 0xFFFFFFFFFFFFFFF8uLL] = 0LL;
          v30[v28 / 0xFFFFFFFFFFFFFFF8uLL + 1] = 0LL;
          v30 += 2;
        }
        while ( &v30[v28 / 0xFFFFFFFFFFFFFFF8uLL] != v10 );
      }
      a1[1] = (__int64)v30;
      while ( v29 != a2 )
      {
        v29 -= 2;
        std::shared_ptr<__ExceptionPtr>::operator=(&v29[(unsigned __int64)v28 / 8], v29);
      }
      v31 = (__int64)a2;
      v32 = &a2[(unsigned __int64)v28 / 8];
      if ( a2 != v32 )
      {
        do
        {
          unknown_libname_115(v31, 0);
          v31 += 16LL;
        }
        while ( (__int64 *)v31 != v32 );
      }
      if ( a3 != v44 )
      {
        v33 = a3 + 8;
        v34 = (char *)((char *)a2 - a3);
        do
        {
          *(_QWORD *)&v33[(_QWORD)v34 - 8] = 0LL;
          *(_QWORD *)&v34[(_QWORD)v33] = 0LL;
          if ( *(_QWORD *)v33 )
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v33 + 8LL));
          *(_QWORD *)&v33[(_QWORD)v34 - 8] = *((_QWORD *)v33 - 1);
          *(_QWORD *)&v34[(_QWORD)v33] = *(_QWORD *)v33;
          v33 += 16;
        }
        while ( v33 - 8 != v44 );
      }
    }
  }
  else
  {
    v11 = ((__int64)v10 - *a1) >> 4;
    if ( v7 > 0xFFFFFFFFFFFFFFFLL - v11 )
      std::vector<void *>::_Xlen();
    v12 = v11 + v7;
    v43 = v11 + v7;
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
    v17 = 16 * (v8 + v7);
    v18 = &v16[(unsigned __int64)v17 / 8];
    if ( a3 != v44 )
    {
      v19 = a3 + 8;
      v20 = (char *)((char *)&v16[2 * v8] - a3);
      do
      {
        *(_QWORD *)&v19[(_QWORD)v20 - 8] = 0LL;
        *(_QWORD *)&v20[(_QWORD)v19] = 0LL;
        if ( *(_QWORD *)v19 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v19 + 8LL));
        *(_QWORD *)&v19[(_QWORD)v20 - 8] = *((_QWORD *)v19 - 1);
        *(_QWORD *)&v20[(_QWORD)v19] = *(_QWORD *)v19;
        v19 += 16;
      }
      while ( v19 - 8 != v44 );
    }
    if ( v42 )
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
      if ( (__int64 *)*a1 != a2 )
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
        while ( (_QWORD *)((char *)v24 + v25) != a2 );
      }
      v26 = (__int64 *)a1[1];
      if ( a2 != v26 )
      {
        v27 = (char *)&a2[v17 / 0xFFFFFFFFFFFFFFF8uLL] - (char *)v16;
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
        while ( (_QWORD *)((char *)v18 + v27) != v26 );
      }
    }
    sub_180011054(a1, (__int64)v16, v43, v15);
  }
}
