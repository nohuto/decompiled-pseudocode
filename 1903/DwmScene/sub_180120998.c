/*
 * XREFs of sub_180120998 @ 0x180120998
 * Callers:
 *     sub_180121B6C @ 0x180121B6C (sub_180121B6C.c)
 *     sub_180121CA4 @ 0x180121CA4 (sub_180121CA4.c)
 *     sub_180122F4C @ 0x180122F4C (sub_180122F4C.c)
 *     sub_1801243CC @ 0x1801243CC (sub_1801243CC.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180122F4C @ 0x180122F4C (sub_180122F4C.c)
 *     sub_180124524 @ 0x180124524 (sub_180124524.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180120998(_QWORD *a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int8 *v10; // r11
  __int64 v11; // r9
  __int64 v12; // r9
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  _QWORD *v15; // r12
  char *v16; // rax
  unsigned __int64 *v17; // rdx
  unsigned __int64 v18; // rsi
  signed __int64 v19; // rdx
  unsigned __int16 v20; // cx
  int v21; // eax
  __int64 result; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v35; // [rsp+30h] [rbp-58h] BYREF
  __int64 v36; // [rsp+38h] [rbp-50h] BYREF

  v7 = a3[2];
  v8 = (unsigned __int64)a3;
  if ( a3[3] >= 8 )
    v8 = *a3;
  v9 = 0xCBF29CE484222325uLL;
  v10 = (unsigned __int8 *)v8;
  v11 = 2 * v7;
  if ( v8 > 2 * v7 + v8 )
    v11 = 0LL;
  if ( v11 )
  {
    do
      v9 = 0x100000001B3LL * (*v10++ ^ (unsigned __int64)v9);
    while ( &v10[-v8] != (unsigned __int8 *)v11 );
  }
  v12 = v9 & a1[6];
  v13 = (_QWORD *)a1[1];
  v14 = a1[3];
  v15 = *(_QWORD **)(v14 + 16 * v12);
  if ( v13 != v15 )
  {
    v13 = **(_QWORD ***)(v14 + 16 * v12 + 8);
    while ( v13 != v15 )
    {
      v13 = (_QWORD *)v13[1];
      v16 = (char *)(v13 + 2);
      if ( v13[5] >= 8uLL )
        v16 = (char *)v13[2];
      v17 = a3;
      if ( a3[3] >= 8 )
        v17 = (unsigned __int64 *)*a3;
      if ( v7 == v13[4] )
      {
        v18 = a3[2];
        if ( v7 )
        {
          v19 = (char *)v17 - v16;
          while ( 1 )
          {
            v20 = *(_WORD *)&v16[v19];
            if ( v20 != *(_WORD *)v16 )
              break;
            v16 += 2;
            if ( !--v18 )
              goto LABEL_19;
          }
          v21 = v20 < *(_WORD *)v16 ? -1 : 1;
        }
        else
        {
LABEL_19:
          v21 = 0;
        }
        if ( !v21 )
        {
          **(_QWORD **)(a4 + 8) = *(_QWORD *)a4;
          *(_QWORD *)(*(_QWORD *)a4 + 8LL) = *(_QWORD *)(a4 + 8);
          --a1[2];
          sub_180124524(a4 + 48);
          unknown_libname_116((__int64 *)(a4 + 16));
          j_j__o_free(a4);
          *(_QWORD *)a2 = v13;
          *(_BYTE *)(a2 + 8) = 0;
          result = a2;
          goto LABEL_38;
        }
      }
    }
  }
  v23 = *(_QWORD *)a4;
  if ( v13 != *(_QWORD **)a4 )
  {
    **(_QWORD **)(a4 + 8) = v23;
    **(_QWORD **)(v23 + 8) = v13;
    *(_QWORD *)v13[1] = a4;
    v24 = v13[1];
    v13[1] = *(_QWORD *)(v23 + 8);
    *(_QWORD *)(v23 + 8) = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v24;
  }
  v25 = 2 * v12;
  v26 = a1[3];
  v27 = *(_QWORD **)(v26 + 8 * v25);
  if ( v27 == (_QWORD *)a1[1] )
  {
    *(_QWORD *)(v26 + 8 * v25) = a4;
    v28 = a1[3];
    *(_QWORD *)(v28 + 8 * v25 + 8) = a4;
  }
  else if ( v27 == v13 )
  {
    *(_QWORD *)(v26 + 8 * v25) = a4;
  }
  else
  {
    v29 = *(__int64 **)(v26 + 8 * v25 + 8);
    v30 = *v29;
    *(_QWORD *)(v26 + 8 * v25 + 8) = *v29;
    if ( v30 != a4 )
    {
      v31 = a1[3];
      v32 = *(_QWORD *)(v31 + 8 * v25 + 8);
      *(_QWORD *)(v31 + 8 * v25 + 8) = *(_QWORD *)(v32 + 8);
    }
  }
  try
  {
    sub_180122F4C(a1);
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    v33 = sub_18008D458((__int64)a1, &v35, a4);
    sub_180121C8C(a1, &v36, *v33);
    throw;
  }
LABEL_38:
  try
  {
  }
  catch ( ... )
  {
    sub_180123084(a1, a4);
    throw;
  }
  return result;
}
