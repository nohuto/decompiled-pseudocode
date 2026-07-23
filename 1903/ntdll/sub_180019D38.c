/*
 * XREFs of sub_180019D38 @ 0x180019D38
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x18001A270 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     sub_18001A234 @ 0x18001A234 (sub_18001A234.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_180019D38(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  _QWORD *v8; // r11
  unsigned int v9; // edi
  unsigned int *v10; // rbp
  int v11; // r13d
  unsigned int *v12; // r10
  _WORD *v13; // r9
  unsigned __int64 v14; // r15
  __int64 v15; // r14
  unsigned __int16 v16; // r12
  int v17; // ecx
  unsigned __int16 v18; // ax
  PVOID Environment; // rax
  const void *v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rbx
  unsigned __int64 v24; // [rsp+20h] [rbp-48h]
  __int64 v25; // [rsp+78h] [rbp+10h]
  unsigned __int16 v26; // [rsp+80h] [rbp+18h]

  v25 = a2;
  v8 = a1;
  if ( (unsigned __int64)(a3 - 1) > 0x13 )
    return 3221225728LL;
  v9 = 0;
  v10 = (unsigned int *)((char *)&unk_180165B80 + 56 * a3 - 56);
  v11 = *v10;
  v12 = v10 + 2;
  v24 = (unsigned __int64)&v10[4 * *v10 + 2];
  if ( (unsigned __int64)(v10 + 2) >= v24 )
  {
LABEL_12:
    if ( v11 == 3 )
    {
      Environment = (PVOID)*((_QWORD *)v10 + 6);
    }
    else
    {
      Environment = (PVOID)qword_180165FE0;
      if ( !qword_180165FE0 )
        Environment = NtCurrentPeb()->ProcessParameters->Environment;
    }
    *v8 = Environment;
    return 3221225728LL;
  }
  while ( 1 )
  {
    v13 = *(_WORD **)v12;
    v14 = *(_QWORD *)v12 + 2 * a3;
    if ( *(_QWORD *)v12 >= v14 )
    {
LABEL_7:
      v17 = 0;
    }
    else
    {
      v15 = a2 - (_QWORD)v13;
      while ( 1 )
      {
        v16 = *(_WORD *)((char *)v13 + v15);
        if ( *v13 != v16 )
        {
          v26 = sub_18001A234((unsigned __int16)*v13);
          v18 = sub_18001A234(v16);
          if ( v26 != v18 )
            break;
        }
        if ( (unsigned __int64)++v13 >= v14 )
          goto LABEL_7;
      }
      v17 = v26 - v18;
    }
    if ( !v17 )
      break;
    a2 = v25;
    v12 += 4;
    if ( (unsigned __int64)v12 >= v24 )
      goto LABEL_12;
  }
  v21 = (const void *)(*(_QWORD *)v12 + 2 * (a3 + 1));
  v22 = ((__int64)(*((_QWORD *)v12 + 1) - (_QWORD)v21) >> 1) - 1;
  if ( !a4 )
    goto LABEL_22;
  if ( v22 >= a5 )
  {
    if ( a5 )
      *a4 = 0;
LABEL_22:
    v9 = -1073741789;
    *a6 = v22 + 1;
    return v9;
  }
  v23 = v22;
  *a6 = v22;
  memmove(a4, v21, 2 * v22);
  a4[v23] = 0;
  return v9;
}
