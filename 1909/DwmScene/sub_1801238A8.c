/*
 * XREFs of sub_1801238A8 @ 0x1801238A8
 * Callers:
 *     sub_180121C7C @ 0x180121C7C (sub_180121C7C.c)
 *     sub_1801244DC @ 0x1801244DC (sub_1801244DC.c)
 *     sub_1801247BC @ 0x1801247BC (sub_1801247BC.c)
 * Callees:
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_1801238A8(_QWORD *a1, _QWORD *a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int8 *v9; // r10
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // r12
  _QWORD *i; // rax
  _QWORD *v16; // rcx
  char *v17; // rdx
  unsigned __int64 v18; // r14
  char *v19; // r9
  __int64 v20; // rbp
  __int64 v21; // rsi
  signed __int64 v22; // r9
  unsigned __int16 v23; // cx
  int v24; // ecx
  _QWORD *v25; // rcx
  signed __int64 v26; // r8
  unsigned __int16 v27; // dx
  int v28; // ecx

  v4 = a3[2];
  v6 = (unsigned __int64)a3;
  if ( a3[3] >= 8 )
    v6 = *a3;
  v7 = 2 * v4;
  v8 = 0xCBF29CE484222325uLL;
  v9 = (unsigned __int8 *)v6;
  if ( v6 > 2 * v4 + v6 )
    v7 = 0LL;
  if ( v7 )
  {
    do
    {
      v10 = *v9++ ^ (unsigned __int64)v8;
      v8 = 0x100000001B3LL * v10;
    }
    while ( &v9[-v6] != (unsigned __int8 *)v7 );
  }
  v11 = a1[3];
  v13 = a1[1];
  v12 = v8 & a1[6];
  v14 = 2 * v12;
  for ( i = *(_QWORD **)(v11 + 16 * v12); ; i = (_QWORD *)*i )
  {
    if ( *(_QWORD *)(v11 + 8 * v14) == v13 )
      v16 = (_QWORD *)a1[1];
    else
      v16 = **(_QWORD ***)(v11 + 8 * v14 + 8);
    if ( i == v16 )
    {
      *a2 = v13;
      return a2;
    }
    v17 = (char *)a3;
    if ( a3[3] >= 8 )
      v17 = (char *)*a3;
    v18 = i[5];
    v19 = (char *)(i + 2);
    if ( v18 >= 8 )
      v19 = (char *)i[2];
    v20 = i[4];
    if ( v20 == v4 )
    {
      v21 = i[4];
      if ( v20 )
      {
        v22 = v19 - v17;
        while ( 1 )
        {
          v23 = *(_WORD *)&v17[v22];
          if ( v23 != *(_WORD *)v17 )
            break;
          v17 += 2;
          if ( !--v21 )
            goto LABEL_21;
        }
        v24 = v23 < *(_WORD *)v17 ? -1 : 1;
      }
      else
      {
LABEL_21:
        v24 = 0;
      }
      if ( !v24 )
        break;
    }
  }
  v25 = i + 2;
  if ( v18 >= 8 )
    v25 = (_QWORD *)*v25;
  if ( a3[3] >= 8 )
    a3 = (unsigned __int64 *)*a3;
  if ( v4 != v20 )
    goto LABEL_36;
  if ( v4 )
  {
    v26 = (char *)a3 - (char *)v25;
    while ( 1 )
    {
      v27 = *(_WORD *)((char *)v25 + v26);
      if ( v27 != *(_WORD *)v25 )
        break;
      v25 = (_QWORD *)((char *)v25 + 2);
      if ( !--v4 )
        goto LABEL_34;
    }
    v28 = v27 < *(_WORD *)v25 ? -1 : 1;
  }
  else
  {
LABEL_34:
    v28 = 0;
  }
  if ( v28 )
LABEL_36:
    i = (_QWORD *)a1[1];
  *a2 = i;
  return a2;
}
