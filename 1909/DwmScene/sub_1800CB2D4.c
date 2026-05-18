/*
 * XREFs of sub_1800CB2D4 @ 0x1800CB2D4
 * Callers:
 *     sub_1800C471C @ 0x1800C471C (sub_1800C471C.c)
 * Callees:
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_1800CB2D4(_QWORD *a1, _QWORD *a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int8 *v10; // r8
  unsigned __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rbp
  _QWORD *i; // rax
  _QWORD *v19; // rcx
  char *v20; // rdx
  char *v21; // r11
  __int64 v22; // r9
  signed __int64 v23; // r11
  unsigned __int16 v24; // cx
  int v25; // ecx
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  char *v28; // rcx
  unsigned __int64 *v29; // r11
  unsigned __int64 v30; // rsi
  signed __int64 v31; // r11
  unsigned __int16 v32; // r9
  int v33; // ecx

  v4 = a3[2];
  v7 = (unsigned __int64)a3;
  if ( a3[3] >= 8 )
    v7 = *a3;
  v8 = 2 * v4;
  v9 = 0xCBF29CE484222325uLL;
  v10 = (unsigned __int8 *)v7;
  if ( v7 > 2 * v4 + v7 )
    v8 = 0LL;
  if ( v8 )
  {
    do
    {
      v11 = *v10++ ^ (unsigned __int64)v9;
      v9 = 0x100000001B3LL * v11;
    }
    while ( &v10[-v7] != (unsigned __int8 *)v8 );
  }
  v12 = a1[3];
  v13 = a1[1];
  v14 = v9 & a1[6];
  v15 = 2 * (v9 & a1[6]);
  v16 = 2 * v14;
  v17 = *(_QWORD *)(v12 + 16 * v14);
  for ( i = *(_QWORD **)(v12 + 16 * (v9 & a1[6])); ; i = (_QWORD *)*i )
  {
    v19 = v17 == v13 ? (_QWORD *)v13 : **(_QWORD ***)(v12 + 8 * v16 + 8);
    if ( i == v19 )
      break;
    v20 = (char *)a3;
    if ( a3[3] >= 8 )
      v20 = (char *)*a3;
    v21 = (char *)(i + 2);
    if ( i[5] >= 8uLL )
      v21 = (char *)i[2];
    v22 = i[4];
    if ( v22 == v4 )
    {
      if ( v22 )
      {
        v23 = v21 - v20;
        while ( 1 )
        {
          v24 = *(_WORD *)&v20[v23];
          if ( v24 != *(_WORD *)v20 )
            break;
          v20 += 2;
          if ( !--v22 )
            goto LABEL_21;
        }
        v25 = v24 < *(_WORD *)v20 ? -1 : 1;
      }
      else
      {
LABEL_21:
        v25 = 0;
      }
      if ( !v25 )
      {
        v26 = i;
        while ( 1 )
        {
          v27 = v17 == v13 ? (_QWORD *)v13 : **(_QWORD ***)(v12 + 8 * v15 + 8);
          if ( i == v27 )
            break;
          v28 = (char *)(i + 2);
          if ( i[5] >= 8uLL )
            v28 = (char *)i[2];
          v29 = a3;
          if ( a3[3] >= 8 )
            v29 = (unsigned __int64 *)*a3;
          if ( v4 != i[4] )
            break;
          v30 = v4;
          if ( v4 )
          {
            v31 = (char *)v29 - v28;
            while ( 1 )
            {
              v32 = *(_WORD *)&v28[v31];
              if ( v32 != *(_WORD *)v28 )
                break;
              v28 += 2;
              if ( !--v30 )
                goto LABEL_39;
            }
            v33 = v32 < *(_WORD *)v28 ? -1 : 1;
          }
          else
          {
LABEL_39:
            v33 = 0;
          }
          if ( v33 )
            break;
          i = (_QWORD *)*i;
        }
        if ( v26 != i )
        {
          *a2 = v26;
          a2[1] = i;
          return a2;
        }
        break;
      }
    }
  }
  *a2 = v13;
  a2[1] = v13;
  return a2;
}
