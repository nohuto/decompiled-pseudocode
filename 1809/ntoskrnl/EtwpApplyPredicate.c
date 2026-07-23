/*
 * XREFs of EtwpApplyPredicate @ 0x140318C00
 * Callers:
 *     EtwpApplyPayloadFilterInternal @ 0x140318368 (EtwpApplyPayloadFilterInternal.c)
 * Callees:
 *     strncmp @ 0x140194F40 (strncmp.c)
 *     wcsncmp @ 0x140197940 (wcsncmp.c)
 *     EtwpGetFieldValue @ 0x140319168 (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x1403191D0 (EtwpGetSignedFieldValue.c)
 *     ExSystemExceptionFilter @ 0x1406E3A10 (ExSystemExceptionFilter.c)
 */

char __fastcall EtwpApplyPredicate(unsigned __int16 *a1, int a2, __int64 a3, const char *a4, unsigned int a5, bool *a6)
{
  const char *v6; // rdi
  char v9; // r15
  __int16 v10; // r12
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rcx
  bool v17; // bl
  bool v18; // zf
  unsigned int v19; // r9d
  char *v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  const wchar_t *v23; // r14
  char *j; // rsi
  __int64 v25; // rsi
  wchar_t v26; // r12
  const char *v27; // r13
  char *v28; // r14
  unsigned __int64 v29; // rax
  const char *v30; // r14
  const char *i; // rsi
  unsigned int v32; // esi
  const char *v33; // rcx
  char v34; // r12
  unsigned __int64 v35; // r13
  unsigned __int64 v36; // rcx
  __int64 v37; // rdx
  bool v38; // zf
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v42; // [rsp+28h] [rbp-40h] BYREF
  const char *v43; // [rsp+30h] [rbp-38h]
  const char *v44; // [rsp+38h] [rbp-30h]
  const wchar_t *v45; // [rsp+40h] [rbp-28h]

  v6 = a4;
  if ( !a5 )
    return 0;
  v9 = 0;
  v10 = *(_WORD *)(a3 + 2);
  v11 = a2 - 1;
  if ( !v11 )
  {
    if ( !(unsigned __int8)EtwpGetSignedFieldValue(a4, a5, &v42) )
      return 0;
    v39 = *(_QWORD *)(a3 + 8);
    v40 = *(_QWORD *)(a3 + 16);
    if ( !v10 )
    {
      v18 = v42 == v39;
      goto LABEL_119;
    }
    if ( v10 != 1 )
    {
      switch ( v10 )
      {
        case 2:
          v17 = v42 <= v39;
          goto LABEL_120;
        case 3:
          v17 = v42 > v39;
          goto LABEL_120;
        case 4:
          v17 = v42 < v39;
          goto LABEL_120;
        case 5:
          v17 = v42 >= v39;
          goto LABEL_120;
        case 6:
          if ( v39 > v42 || v42 > v40 )
            goto LABEL_111;
          break;
        case 7:
          if ( v42 >= v39 && v40 >= v42 )
            goto LABEL_111;
          break;
        default:
          if ( v10 != 8 || !v39 )
            return 0;
          v37 = v42 % v39;
          goto LABEL_81;
      }
LABEL_108:
      v17 = 1;
      goto LABEL_120;
    }
    v38 = v42 == v39;
LABEL_117:
    v17 = !v38;
    goto LABEL_120;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( !(unsigned __int8)EtwpGetFieldValue(a4, a5, &v42) )
      return 0;
    if ( !v10 )
    {
      v18 = v42 == *(_QWORD *)(a3 + 8);
      goto LABEL_119;
    }
    if ( v10 != 1 )
    {
      switch ( v10 )
      {
        case 2:
          v17 = (unsigned __int64)v42 <= *(_QWORD *)(a3 + 8);
          goto LABEL_120;
        case 3:
          v17 = (unsigned __int64)v42 > *(_QWORD *)(a3 + 8);
          goto LABEL_120;
        case 4:
          v17 = (unsigned __int64)v42 < *(_QWORD *)(a3 + 8);
          goto LABEL_120;
        case 5:
          v17 = (unsigned __int64)v42 >= *(_QWORD *)(a3 + 8);
          goto LABEL_120;
        case 6:
          if ( *(_QWORD *)(a3 + 8) > (unsigned __int64)v42 || (unsigned __int64)v42 > *(_QWORD *)(a3 + 16) )
            goto LABEL_111;
          break;
        case 7:
          if ( (unsigned __int64)v42 >= *(_QWORD *)(a3 + 8) && *(_QWORD *)(a3 + 16) >= (unsigned __int64)v42 )
            goto LABEL_111;
          break;
        case 8:
          v36 = *(_QWORD *)(a3 + 8);
          if ( !v36 )
            return 0;
          v37 = v42 % v36;
LABEL_81:
          v18 = v37 == 0;
          goto LABEL_119;
        default:
          return 0;
      }
      goto LABEL_108;
    }
    v38 = v42 == *(_QWORD *)(a3 + 8);
    goto LABEL_117;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v28 = (char *)a1 + a1[24];
    v29 = (unsigned __int64)&v28[a1[25]];
    v30 = &v28[*(_QWORD *)(a3 + 8)];
    if ( (unsigned __int64)v30 >= v29 )
      return 0;
    for ( i = v30; *i && (unsigned __int64)i < v29; ++i )
      ;
    v32 = (_DWORD)i - (_DWORD)v30;
    if ( v32 )
    {
      if ( v10 != 20 )
      {
        if ( v10 != 21 )
        {
          if ( v10 != 30 )
          {
            if ( v10 != 31 )
              return 0;
            v9 = 1;
          }
          v17 = v9;
          if ( v32 == a5 )
          {
            v17 = 1;
            while ( 1 )
            {
              v33 = v30;
              if ( !v32 )
                break;
              if ( *v6 != *v30 )
              {
                v17 = 0;
                break;
              }
              v44 = ++v6;
              ++v30;
              v42 = (__int64)(v33 + 1);
              --v32;
            }
LABEL_30:
            if ( v9 )
            {
LABEL_12:
              v18 = !v17;
LABEL_119:
              v17 = v18;
            }
          }
LABEL_120:
          *a6 = v17;
          return 1;
        }
        v9 = 1;
      }
      v17 = v9;
      if ( v32 > a5 )
        goto LABEL_120;
      v34 = *v30;
      v35 = (unsigned __int64)&a4[a5 - (unsigned __int64)v32 + 1];
      v17 = 0;
      while ( (unsigned __int64)v6 < v35 )
      {
        if ( *v6 == v34 && !strncmp(v6, v30, v32) )
        {
          v17 = 1;
          goto LABEL_30;
        }
        v44 = ++v6;
      }
      goto LABEL_30;
    }
LABEL_111:
    v17 = 0;
    goto LABEL_120;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( (a5 & 1) != 0 )
      return 0;
    v19 = a5 >> 1;
    v20 = (char *)a1 + a1[22];
    v21 = (unsigned __int64)&v20[2 * ((unsigned __int64)a1[23] >> 1)];
    v22 = *(_QWORD *)(a3 + 8);
    v23 = (const wchar_t *)&v20[2 * v22];
    if ( (unsigned __int64)v23 >= v21 )
      return 0;
    for ( j = &v20[2 * v22]; *(_WORD *)j && (unsigned __int64)j < v21; j += 2 )
      ;
    v25 = (j - (char *)v23) >> 1;
    if ( (_DWORD)v25 )
    {
      if ( v10 != 20 )
      {
        if ( v10 != 21 )
        {
          if ( v10 != 30 )
          {
            if ( v10 != 31 )
              return 0;
            v9 = 1;
          }
          v17 = v9;
          if ( (_DWORD)v25 == v19 )
          {
            v17 = 1;
            while ( (_DWORD)v25 )
            {
              if ( *v23 != *(_WORD *)v6 )
              {
                v17 = 0;
                goto LABEL_30;
              }
              v6 += 2;
              v43 = v6;
              v45 = ++v23;
              LODWORD(v25) = v25 - 1;
            }
            goto LABEL_30;
          }
          goto LABEL_120;
        }
        v9 = 1;
      }
      v17 = v9;
      if ( (unsigned int)v25 > v19 )
        goto LABEL_120;
      v26 = *v23;
      v27 = &v6[2 * (v19 - (unsigned __int64)(unsigned int)v25) + 2];
      v17 = 0;
      while ( v6 < v27 )
      {
        if ( *(_WORD *)v6 == v26 && !wcsncmp((const wchar_t *)v6, v23, (unsigned int)v25) )
        {
          v17 = 1;
          goto LABEL_30;
        }
        v6 += 2;
        v43 = v6;
      }
      goto LABEL_30;
    }
    goto LABEL_111;
  }
  if ( v14 == 1 && a5 == 16 )
  {
    v15 = *(_QWORD *)(a3 + 8);
    v16 = *(_QWORD *)a4 - v15;
    if ( *(_QWORD *)a4 == v15 )
      v16 = *((_QWORD *)a4 + 1) - *(_QWORD *)(a3 + 16);
    v17 = v16 == 0;
    if ( v10 == 30 )
      goto LABEL_120;
    if ( v10 == 31 )
      goto LABEL_12;
  }
  return 0;
}
