/*
 * XREFs of sub_18010C148 @ 0x18010C148
 * Callers:
 *     sub_18010C3BC @ 0x18010C3BC (sub_18010C3BC.c)
 * Callees:
 *     sub_18010BE74 @ 0x18010BE74 (sub_18010BE74.c)
 *     sub_18010C450 @ 0x18010C450 (sub_18010C450.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_18010C148(_QWORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rsi
  _QWORD *v9; // rsi
  _QWORD *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx
  bool v13; // zf
  _QWORD *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  _QWORD *result; // rax
  _BYTE v28[8]; // [rsp+20h] [rbp-58h] BYREF

  v6 = (_QWORD *)(a2 + 16 * ((__int64)((__int64)a3 - a2) >> 5));
  sub_18010BE74(a2, (__int64)v6, (__int64)(a3 - 2));
  v7 = v6 + 2;
  if ( a2 < (unsigned __int64)v6 )
  {
    v8 = v6;
    do
    {
      v8 -= 2;
      if ( (unsigned __int8)sub_18010C450(v28, v8, v6) )
        break;
      if ( (unsigned __int8)sub_18010C450(v28, v6, v8) )
        break;
      v6 = v8;
    }
    while ( a2 < (unsigned __int64)v8 );
  }
  while ( v7 < a3 && !(unsigned __int8)sub_18010C450(v28, v7, v6) && !(unsigned __int8)sub_18010C450(v28, v6, v7) )
    v7 += 2;
  v9 = v7;
  v10 = v6;
  while ( 1 )
  {
    while ( v9 < a3 )
    {
      if ( (unsigned __int8)sub_18010C450(v28, v6, v9) )
        goto LABEL_17;
      if ( (unsigned __int8)sub_18010C450(v28, v9, v6) )
        break;
      if ( v7 != v9 )
      {
        v11 = *v7;
        *v7 = *v9;
        *v9 = v11;
        v12 = v7[1];
        v7[1] = v9[1];
        v9[1] = v12;
      }
      v7 += 2;
LABEL_17:
      v9 += 2;
    }
    v13 = v10 == (_QWORD *)a2;
    if ( (unsigned __int64)v10 > a2 )
    {
      v14 = v10 - 2;
      do
      {
        if ( !(unsigned __int8)sub_18010C450(v28, v14, v6) )
        {
          if ( (unsigned __int8)sub_18010C450(v28, v6, v14) )
            break;
          v6 -= 2;
          if ( v6 != v14 )
          {
            v15 = *v6;
            *v6 = *v14;
            *v14 = v15;
            v16 = v6[1];
            v6[1] = v14[1];
            v14[1] = v16;
          }
        }
        v10 -= 2;
        v14 -= 2;
      }
      while ( a2 < (unsigned __int64)v10 );
      v13 = v10 == (_QWORD *)a2;
    }
    if ( v13 )
      break;
    v10 -= 2;
    if ( v9 != a3 )
    {
      v25 = *v9;
      *v9 = *v10;
      *v10 = v25;
      v26 = v9[1];
      v9[1] = v10[1];
      v10[1] = v26;
      goto LABEL_17;
    }
    v6 -= 2;
    if ( v10 != v6 )
    {
      v21 = *v10;
      *v10 = *v6;
      *v6 = v21;
      v22 = v10[1];
      v10[1] = v6[1];
      v6[1] = v22;
    }
    v23 = *v6;
    v7 -= 2;
    *v6 = *v7;
    *v7 = v23;
    v24 = v6[1];
    v6[1] = v7[1];
    v7[1] = v24;
  }
  if ( v9 != a3 )
  {
    if ( v7 != v9 )
    {
      v17 = *v6;
      *v6 = *v7;
      *v7 = v17;
      v18 = v6[1];
      v6[1] = v7[1];
      v7[1] = v18;
    }
    v19 = *v6;
    v7 += 2;
    *v6 = *v9;
    *v9 = v19;
    v20 = v6[1];
    v6[1] = v9[1];
    v6 += 2;
    v9[1] = v20;
    goto LABEL_17;
  }
  *a1 = v6;
  result = a1;
  a1[1] = v7;
  return result;
}
