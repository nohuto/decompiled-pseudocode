/*
 * XREFs of EtwpApplyPredicate @ 0x140336EAC
 * Callers:
 *     EtwpApplyPayloadFilterInternal @ 0x140336638 (EtwpApplyPayloadFilterInternal.c)
 * Callees:
 *     strncmp @ 0x14019FC70 (strncmp.c)
 *     wcsncmp @ 0x1401A2770 (wcsncmp.c)
 *     EtwpGetFieldValue @ 0x14033740C (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x140337474 (EtwpGetSignedFieldValue.c)
 *     ExSystemExceptionFilter @ 0x140749ED0 (ExSystemExceptionFilter.c)
 */

char __fastcall EtwpApplyPredicate(
        unsigned __int16 *a1,
        int a2,
        __int64 a3,
        const wchar_t *a4,
        unsigned int a5,
        bool *a6)
{
  const wchar_t *v6; // rdi
  char v10; // r15
  __int16 v11; // r12
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // bl
  bool v19; // zf
  unsigned int v20; // r9d
  char *v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  const wchar_t *v24; // r14
  char *i; // rsi
  __int64 v26; // rsi
  wchar_t v27; // r12
  const wchar_t *v28; // r13
  char *v29; // r14
  unsigned __int64 v30; // rax
  const char *v31; // r14
  const char *j; // rsi
  unsigned int v33; // esi
  const char *v34; // rcx
  char v35; // r12
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  bool v39; // zf
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // [rsp+28h] [rbp-40h] BYREF
  const wchar_t *v43; // [rsp+30h] [rbp-38h]
  const wchar_t *v44; // [rsp+38h] [rbp-30h]
  const wchar_t *v45; // [rsp+40h] [rbp-28h]

  v6 = a4;
  if ( !a5 )
    return 0;
  v10 = 0;
  v11 = *(_WORD *)(a3 + 2);
  v12 = a2 - 1;
  if ( !v12 )
  {
    if ( !(unsigned __int8)EtwpGetSignedFieldValue(a4, a5, &v42) )
      return 0;
    v40 = *(_QWORD *)(a3 + 8);
    v41 = *(_QWORD *)(a3 + 16);
    if ( !v11 )
    {
      v19 = v42 == v40;
      goto LABEL_120;
    }
    if ( v11 != 1 )
    {
      switch ( v11 )
      {
        case 2:
          v18 = v42 <= v40;
          goto LABEL_121;
        case 3:
          v18 = v42 > v40;
          goto LABEL_121;
        case 4:
          v18 = v42 < v40;
          goto LABEL_121;
        case 5:
          v18 = v42 >= v40;
          goto LABEL_121;
        case 6:
          if ( v40 > v42 || v42 > v41 )
            goto LABEL_112;
          break;
        case 7:
          if ( v42 >= v40 && v41 >= v42 )
            goto LABEL_112;
          break;
        default:
          if ( v11 != 8 || !v40 )
            return 0;
          v38 = v42 % v40;
          goto LABEL_82;
      }
LABEL_109:
      v18 = 1;
      goto LABEL_121;
    }
    v39 = v42 == v40;
LABEL_118:
    v18 = !v39;
    goto LABEL_121;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( !(unsigned __int8)EtwpGetFieldValue(a4, a5, &v42, a5) )
      return 0;
    if ( !v11 )
    {
      v19 = v42 == *(_QWORD *)(a3 + 8);
      goto LABEL_120;
    }
    if ( v11 != 1 )
    {
      switch ( v11 )
      {
        case 2:
          v18 = (unsigned __int64)v42 <= *(_QWORD *)(a3 + 8);
          goto LABEL_121;
        case 3:
          v18 = (unsigned __int64)v42 > *(_QWORD *)(a3 + 8);
          goto LABEL_121;
        case 4:
          v18 = (unsigned __int64)v42 < *(_QWORD *)(a3 + 8);
          goto LABEL_121;
        case 5:
          v18 = (unsigned __int64)v42 >= *(_QWORD *)(a3 + 8);
          goto LABEL_121;
        case 6:
          if ( *(_QWORD *)(a3 + 8) > (unsigned __int64)v42 || (unsigned __int64)v42 > *(_QWORD *)(a3 + 16) )
            goto LABEL_112;
          break;
        case 7:
          if ( (unsigned __int64)v42 >= *(_QWORD *)(a3 + 8) && *(_QWORD *)(a3 + 16) >= (unsigned __int64)v42 )
            goto LABEL_112;
          break;
        case 8:
          v37 = *(_QWORD *)(a3 + 8);
          if ( !v37 )
            return 0;
          v38 = v42 % v37;
LABEL_82:
          v19 = v38 == 0;
          goto LABEL_120;
        default:
          return 0;
      }
      goto LABEL_109;
    }
    v39 = v42 == *(_QWORD *)(a3 + 8);
    goto LABEL_118;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      if ( v15 == 1 && a5 == 16 )
      {
        v16 = *(_QWORD *)(a3 + 8);
        v17 = *(_QWORD *)a4 - v16;
        if ( *(_QWORD *)a4 == v16 )
          v17 = *((_QWORD *)a4 + 1) - *(_QWORD *)(a3 + 16);
        v18 = v17 == 0;
        if ( v11 == 30 )
          goto LABEL_121;
        if ( v11 == 31 )
          goto LABEL_13;
      }
      return 0;
    }
    if ( (a5 & 1) != 0 )
      return 0;
    v20 = a5 >> 1;
    v21 = (char *)a1 + a1[22];
    v22 = (unsigned __int64)&v21[2 * ((unsigned __int64)a1[23] >> 1)];
    v23 = *(_QWORD *)(a3 + 8);
    v24 = (const wchar_t *)&v21[2 * v23];
    if ( (unsigned __int64)v24 >= v22 )
      return 0;
    for ( i = &v21[2 * v23]; *(_WORD *)i && (unsigned __int64)i < v22; i += 2 )
      ;
    v26 = (i - (char *)v24) >> 1;
    if ( (_DWORD)v26 )
    {
      if ( v11 != 20 )
      {
        if ( v11 != 21 )
        {
          if ( v11 != 30 )
          {
            if ( v11 != 31 )
              return 0;
            v10 = 1;
          }
          v18 = v10;
          if ( (_DWORD)v26 == v20 )
          {
            v18 = 1;
            while ( (_DWORD)v26 )
            {
              if ( *v24 != *v6 )
              {
                v18 = 0;
                goto LABEL_31;
              }
              v43 = ++v6;
              v45 = ++v24;
              LODWORD(v26) = v26 - 1;
            }
            goto LABEL_31;
          }
          goto LABEL_121;
        }
        v10 = 1;
      }
      v18 = v10;
      if ( (unsigned int)v26 > v20 )
        goto LABEL_121;
      v27 = *v24;
      v28 = &v6[v20 - (unsigned __int64)(unsigned int)v26 + 1];
      v18 = 0;
      while ( v6 < v28 )
      {
        if ( *v6 == v27 && !wcsncmp(v6, v24, (unsigned int)v26) )
        {
          v18 = 1;
          goto LABEL_31;
        }
        v43 = ++v6;
      }
      goto LABEL_31;
    }
LABEL_112:
    v18 = 0;
    goto LABEL_121;
  }
  v29 = (char *)a1 + a1[24];
  v30 = (unsigned __int64)&v29[a1[25]];
  v31 = &v29[*(_QWORD *)(a3 + 8)];
  if ( (unsigned __int64)v31 >= v30 )
    return 0;
  for ( j = v31; *j && (unsigned __int64)j < v30; ++j )
    ;
  v33 = (_DWORD)j - (_DWORD)v31;
  if ( !v33 )
    goto LABEL_112;
  if ( v11 == 20 )
  {
LABEL_62:
    v18 = v10;
    if ( v33 > a5 )
      goto LABEL_121;
    v35 = *v31;
    v36 = (unsigned __int64)a4 + a5 - (unsigned __int64)v33 + 1;
    v18 = 0;
    while ( (unsigned __int64)v6 < v36 )
    {
      if ( *(_BYTE *)v6 == v35 && !strncmp((const char *)v6, v31, v33) )
      {
        v18 = 1;
        goto LABEL_31;
      }
      v6 = (const wchar_t *)((char *)v6 + 1);
      v44 = v6;
    }
    goto LABEL_31;
  }
  if ( v11 == 21 )
  {
    v10 = 1;
    goto LABEL_62;
  }
  if ( v11 != 30 )
  {
    if ( v11 != 31 )
      return 0;
    v10 = 1;
  }
  v18 = v10;
  if ( v33 == a5 )
  {
    v18 = 1;
    while ( 1 )
    {
      v34 = v31;
      if ( !v33 )
        break;
      if ( *(_BYTE *)v6 != *v31 )
      {
        v18 = 0;
        break;
      }
      v6 = (const wchar_t *)((char *)v6 + 1);
      v44 = v6;
      ++v31;
      v42 = (__int64)(v34 + 1);
      --v33;
    }
LABEL_31:
    if ( v10 )
    {
LABEL_13:
      v19 = !v18;
LABEL_120:
      v18 = v19;
    }
  }
LABEL_121:
  *a6 = v18;
  return 1;
}
