/*
 * XREFs of sub_1800FBFB4 @ 0x1800FBFB4
 * Callers:
 *     sub_1800FBE44 @ 0x1800FBE44 (sub_1800FBE44.c)
 * Callees:
 *     sub_180095D8C @ 0x180095D8C (sub_180095D8C.c)
 *     sub_1800F64F0 @ 0x1800F64F0 (sub_1800F64F0.c)
 *     sub_1800FB7A0 @ 0x1800FB7A0 (sub_1800FB7A0.c)
 *     sub_1800FBE78 @ 0x1800FBE78 (sub_1800FBE78.c)
 *     sub_1800FC3F8 @ 0x1800FC3F8 (sub_1800FC3F8.c)
 *     _o_pow @ 0x180125A60 (_o_pow.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_1800FBFB4(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, char a5, int a6, char a7)
{
  __int64 *v7; // r13
  unsigned int v8; // edi
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // esi
  unsigned int v13; // ebx
  __int16 v14; // r14
  _BYTE *v15; // rdx
  __int16 v16; // r13
  __int16 v17; // r12
  __int64 v18; // rcx
  _BYTE *v19; // rdx
  __int16 v20; // r15
  unsigned int v21; // r14d
  __int16 v22; // r12
  _BYTE *v23; // rdx
  __int16 v24; // r15
  unsigned int i; // ebx
  _BYTE *v26; // rdx
  char *v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  _WORD v34[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v35; // [rsp+5Ch] [rbp-ACh]
  __int64 v36; // [rsp+60h] [rbp-A8h]
  __int64 *v37; // [rsp+68h] [rbp-A0h]
  _QWORD *v38; // [rsp+70h] [rbp-98h]
  __int64 v39; // [rsp+78h] [rbp-90h]
  __int64 *v40; // [rsp+80h] [rbp-88h]
  char *v41; // [rsp+88h] [rbp-80h] BYREF
  __int128 v42; // [rsp+90h] [rbp-78h]
  _BYTE v43[24]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v44; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-40h]
  __int128 v46; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v47; // [rsp+E0h] [rbp-28h]

  v39 = -2LL;
  v38 = a2;
  v7 = a1;
  v37 = a1;
  v40 = a1;
  v35 = 0;
  v8 = (int)o_pow();
  v47 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  v44 = 0LL;
  memset(v43, 0, sizeof(v43));
  LOBYTE(v9) = a5;
  sub_1800FC3F8(v11, v10, v9, v8, (__int64)&v46, (__int64)&v44, (__int64)v43);
  v12 = v8 + 1;
  v41 = 0LL;
  v42 = 0LL;
  if ( a5 )
  {
    v21 = 1;
    if ( v8 )
    {
      v22 = v8 + 1;
      v23 = (_BYTE *)v42;
      do
      {
        v24 = v22 - v12;
        if ( v21 > 1 )
        {
          v34[0] = v22 - v12;
          if ( *((_BYTE **)&v42 + 1) == v23 )
          {
            sub_1800FB7A0((const void **)&v41, v23, v34);
            v23 = (_BYTE *)v42;
          }
          else
          {
            *(_WORD *)v23 = v24;
            v23 += 2;
            *(_QWORD *)&v42 = v23;
          }
        }
        for ( i = 0; i <= v8; ++i )
        {
          v34[0] = v24 + i;
          if ( *((_BYTE **)&v42 + 1) == v23 )
          {
            sub_1800FB7A0((const void **)&v41, v23, v34);
            v26 = (_BYTE *)v42;
          }
          else
          {
            *(_WORD *)v23 = v24 + i;
            v26 = v23 + 2;
            *(_QWORD *)&v42 = v26;
          }
          v34[0] = v22 + i;
          if ( *((_BYTE **)&v42 + 1) == v26 )
          {
            sub_1800FB7A0((const void **)&v41, v26, v34);
            v23 = (_BYTE *)v42;
          }
          else
          {
            *(_WORD *)v26 = v22 + i;
            v23 = v26 + 2;
            *(_QWORD *)&v42 = v23;
          }
        }
        if ( v21 < v8 )
        {
          v34[0] = v22 + v8;
          if ( *((_BYTE **)&v42 + 1) == v23 )
          {
            sub_1800FB7A0((const void **)&v41, v23, v34);
            v23 = (_BYTE *)v42;
          }
          else
          {
            *(_WORD *)v23 = v22 + v8;
            v23 += 2;
            *(_QWORD *)&v42 = v23;
          }
        }
        ++v21;
        v22 += v12;
      }
      while ( v21 <= v8 );
    }
  }
  else
  {
    v13 = 1;
    if ( v8 )
    {
      v14 = v8 + 1;
      v15 = (_BYTE *)v42;
      do
      {
        v16 = v14 - v12;
        if ( v13 > 1 )
        {
          v34[0] = v8 + v16;
          if ( *((_BYTE **)&v42 + 1) == v15 )
          {
            sub_1800FB7A0((const void **)&v41, v15, v34);
            v15 = (_BYTE *)v42;
          }
          else
          {
            *(_WORD *)v15 = v8 + v16;
            v15 += 2;
            *(_QWORD *)&v42 = v15;
          }
        }
        if ( v8 == -1 )
        {
          v20 = v14;
        }
        else
        {
          v17 = v8;
          v18 = v12;
          v36 = v12;
          do
          {
            v34[0] = v17 + v16;
            if ( *((_BYTE **)&v42 + 1) == v15 )
            {
              sub_1800FB7A0((const void **)&v41, v15, v34);
              v19 = (_BYTE *)v42;
              v18 = v36;
            }
            else
            {
              *(_WORD *)v15 = v17 + v16;
              v19 = v15 + 2;
              *(_QWORD *)&v42 = v19;
            }
            v20 = v14;
            v34[0] = v17 + v14;
            if ( *((_BYTE **)&v42 + 1) == v19 )
            {
              sub_1800FB7A0((const void **)&v41, v19, v34);
              v15 = (_BYTE *)v42;
              v18 = v36;
            }
            else
            {
              *(_WORD *)v19 = v17 + v14;
              v15 = v19 + 2;
              *(_QWORD *)&v42 = v15;
            }
            --v17;
            v36 = --v18;
          }
          while ( v18 );
        }
        if ( v13 < v8 )
        {
          v34[0] = v20;
          if ( *((_BYTE **)&v42 + 1) == v15 )
          {
            sub_1800FB7A0((const void **)&v41, v15, v34);
            v15 = (_BYTE *)v42;
          }
          else
          {
            *(_WORD *)v15 = v20;
            v15 += 2;
            *(_QWORD *)&v42 = v15;
          }
        }
        ++v13;
        v14 += v12;
      }
      while ( v13 <= v8 );
      v7 = v37;
    }
  }
  *v7 = 0LL;
  v7[1] = 0LL;
  sub_1800FBE78(v7, v38, 3, (__int64 *)&v46, (__int64 *)&v41, (__int64 *)&v44, (__int64 *)v43, a7, 1, 1);
  v35 = 1;
  sub_180095D8C(*v7, 0);
  v27 = v41;
  if ( v41 )
  {
    v28 = 2 * ((__int64)(*((_QWORD *)&v42 + 1) - (_QWORD)v41) >> 1);
    if ( v28 >= 0x1000 )
    {
      v29 = v28 + 39;
      v27 = (char *)*((_QWORD *)v41 - 1);
      if ( (unsigned __int64)(v41 - v27 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v27, v29);
        __debugbreak();
      }
    }
    j_j__o_free(v27);
  }
  v30 = *(_QWORD *)v43;
  if ( *(_QWORD *)v43 )
  {
    v31 = (*(_QWORD *)&v43[16] - *(_QWORD *)v43) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v31 >= 0x1000 )
    {
      v32 = v31 + 39;
      v30 = *(_QWORD *)(*(_QWORD *)v43 - 8LL);
      if ( (unsigned __int64)(*(_QWORD *)v43 - v30 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v30, v32);
        __debugbreak();
      }
    }
    j_j__o_free(v30);
    memset(v43, 0, sizeof(v43));
  }
  sub_1800F64F0((__int64 *)&v44);
  sub_1800F64F0((__int64 *)&v46);
  return v7;
}
