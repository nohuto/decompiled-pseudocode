/*
 * XREFs of sub_1800199E0 @ 0x1800199E0
 * Callers:
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 * Callees:
 *     sub_180019B64 @ 0x180019B64 (sub_180019B64.c)
 *     wcsncmp @ 0x180092410 (wcsncmp.c)
 */

_QWORD *__fastcall sub_1800199E0(
        unsigned __int16 a1,
        __int64 a2,
        unsigned __int64 a3,
        const wchar_t *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  unsigned __int16 v7; // si
  __int64 v8; // rbx
  unsigned int *v9; // r14
  __int64 v10; // rdi
  unsigned __int16 v11; // r12
  char v12; // si
  unsigned int *v13; // r13
  __int64 v14; // r15
  int v15; // ecx
  unsigned int *v16; // rdx
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rdi
  _QWORD *result; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  int v23; // eax
  __int64 v24; // rdx
  unsigned __int64 v25; // [rsp+70h] [rbp+18h]
  const wchar_t *v26; // [rsp+78h] [rbp+20h]

  v26 = a4;
  v7 = a1;
  v8 = 0LL;
  v9 = (unsigned int *)a3;
  v10 = 0LL;
  v25 = a3 - 8 + 8LL * a1;
  if ( a3 > v25 )
    goto LABEL_18;
  while ( 1 )
  {
    v11 = v7 >> 1;
    if ( !(v7 >> 1) )
      break;
    v12 = v7 & 1;
    v13 = &v9[2 * v11];
    if ( !v12 )
      v13 -= 2;
    v14 = *v13;
    if ( ((unsigned __int64)a4 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      if ( (int)v14 < 0 )
        goto LABEL_28;
      v15 = (_DWORD)a4 - v14;
LABEL_8:
      if ( !v15 )
      {
        v21 = v13[1];
        if ( (int)v21 >= 0 )
        {
          v8 = v21 + a2;
        }
        else
        {
          v22 = (unsigned int)v21;
          LODWORD(v22) = v21 & 0x7FFFFFFF;
          v10 = a2 + v22;
        }
        goto LABEL_18;
      }
      if ( v15 < 0 )
      {
LABEL_10:
        v16 = v13 - 2;
        v17 = v12 == 0;
        v25 = (unsigned __int64)(v13 - 2);
        v7 = v11;
        if ( v17 )
          v7 = v11 - 1;
        goto LABEL_12;
      }
      goto LABEL_28;
    }
    if ( (int)v14 >= 0 )
      goto LABEL_10;
    LODWORD(v14) = v14 & 0x7FFFFFFF;
    v23 = wcsncmp(a4, (const wchar_t *)(v14 + a2 + 2), *(unsigned __int16 *)(v14 + a2));
    a4 = v26;
    v15 = v23;
    if ( v23 )
      goto LABEL_8;
    v24 = -1LL;
    do
      ++v24;
    while ( v26[v24] );
    if ( v24 == *(unsigned __int16 *)(v14 + a2) )
      goto LABEL_8;
LABEL_28:
    v16 = (unsigned int *)v25;
    v9 = v13 + 2;
    v7 = v11;
LABEL_12:
    if ( v9 > v16 )
      goto LABEL_18;
  }
  if ( v7 && !(unsigned int)sub_180019B64(a4, a2, v9) )
  {
    v18 = v9[1];
    if ( (int)v18 >= 0 )
    {
      v8 = v18 + a2;
    }
    else
    {
      v19 = (unsigned int)v18;
      LODWORD(v19) = v18 & 0x7FFFFFFF;
      v10 = a2 + v19;
    }
  }
LABEL_18:
  *a5 = v10;
  result = a6;
  *a6 = v8;
  return result;
}
