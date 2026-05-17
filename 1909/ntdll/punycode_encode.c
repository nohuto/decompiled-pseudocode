/*
 * XREFs of punycode_encode @ 0x180080F60
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x18002B144 (RtlpNameprepAsciiRealWorker.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x180002124 (RtlStringCopyWorkerW.c)
 *     adapt @ 0x180002358 (adapt.c)
 *     FindLabelEnd @ 0x18002C690 (FindLabelEnd.c)
 *     ValidateStd3Range @ 0x180081404 (ValidateStd3Range.c)
 *     _wcsnicmp @ 0x18008E9B0 (_wcsnicmp.c)
 *     GetUTF32 @ 0x1800F8BCC (GetUTF32.c)
 */

__int64 __fastcall punycode_encode(wchar_t *String1, int a2, wchar_t *a3, int *a4, char a5, char a6)
{
  wchar_t *v6; // rbx
  wchar_t *v7; // rbp
  wchar_t *v8; // rdi
  wchar_t *v9; // r10
  unsigned __int64 v10; // r13
  char v11; // r15
  wchar_t *v12; // rsi
  wchar_t *LabelEnd; // rax
  wchar_t *v14; // r9
  wchar_t *v15; // r10
  unsigned __int64 v16; // r11
  wchar_t *v17; // r14
  unsigned int v18; // r10d
  wchar_t *v19; // rdi
  const wchar_t *v20; // r12
  int v21; // eax
  unsigned __int64 v22; // rcx
  int v23; // edi
  wchar_t *i; // r8
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r13
  wchar_t *j; // rcx
  __int64 result; // rax
  int v30; // eax
  __int64 v31; // rdx
  int v32; // r12d
  __int64 v33; // r9
  int v34; // r11d
  wchar_t *v35; // r10
  int UTF32; // eax
  __int64 v37; // r10
  __int64 v38; // rcx
  wchar_t *v39; // rax
  __int64 v40; // r9
  bool k; // cf
  int v42; // eax
  unsigned int v43; // r9d
  unsigned int v44; // ecx
  int v45; // r12d
  int m; // r10d
  int v47; // r8d
  int v48; // edx
  int v49; // ecx
  __int16 v50; // dx
  __int16 v51; // ax
  int v52; // eax
  __int64 v53; // rcx
  int v54; // [rsp+30h] [rbp-88h]
  int v55; // [rsp+34h] [rbp-84h]
  unsigned __int64 v56; // [rsp+38h] [rbp-80h]
  wchar_t *v57; // [rsp+40h] [rbp-78h]
  wchar_t *v58; // [rsp+48h] [rbp-70h]
  wchar_t *v59; // [rsp+50h] [rbp-68h]
  wchar_t *v60; // [rsp+58h] [rbp-60h]
  __int64 v61; // [rsp+60h] [rbp-58h]
  unsigned int v62; // [rsp+C8h] [rbp+10h]
  __int64 v63; // [rsp+D0h] [rbp+18h] BYREF
  int *v64; // [rsp+D8h] [rbp+20h]

  v64 = a4;
  v6 = a3;
  v57 = a3;
  v60 = a3;
  v7 = String1;
  v8 = a3;
  v9 = &String1[a2];
  v59 = v9;
  v10 = (unsigned __int64)&a3[*a4];
  v56 = v10;
  if ( a2 <= 0 )
  {
LABEL_41:
    v18 = 0;
    goto LABEL_42;
  }
  v11 = a5;
  v12 = a3;
  if ( String1 >= v9 )
    goto LABEL_107;
  while ( 1 )
  {
    LabelEnd = FindLabelEnd(v7, (unsigned __int64)v9, v11);
    v17 = LabelEnd;
    if ( LabelEnd == v7 )
      break;
    v18 = 0;
    v19 = v6;
    if ( !v11 && a6 && (*v7 == 45 || (unsigned __int64)LabelEnd > v16 && *(LabelEnd - 1) == 45) )
      goto LABEL_42;
    v20 = L"xl--";
    if ( !v11 )
      v20 = L"xn--";
    v21 = 0;
    v22 = (__int64)(v10 - (_QWORD)v6) >> 1;
    if ( !v22 || v22 > 0x7FFFFFFF )
      v21 = -1073741811;
    if ( v21 < 0 )
    {
      if ( v22 )
        *v6 = 0;
    }
    else
    {
      v21 = 0;
      if ( !v22 )
      {
        if ( *v20 )
        {
          if ( !v6 )
            goto LABEL_105;
          v21 = -2147483643;
        }
LABEL_13:
        v6 = v19;
        goto LABEL_14;
      }
      v63 = 0LL;
      v21 = RtlStringCopyWorkerW(v6, v22, &v63, (__int64)v20, 4LL);
      v18 = 0;
      v19 = &v6[v63];
      if ( (int)(v21 + 0x80000000) < 0 || v21 == -2147483643 )
        goto LABEL_13;
    }
LABEL_14:
    if ( v21 < 0 )
      goto LABEL_105;
    v23 = 0;
    for ( i = v7; i < v17; ++i )
    {
      v25 = *i;
      if ( (unsigned __int16)v25 >= 0x80u )
      {
        if ( (unsigned __int16)(v25 + 10240) <= 0x3FFu )
          ++i;
      }
      else
      {
        if ( !v11
          && (a6 != (_BYTE)v18 && !(unsigned __int8)ValidateStd3Range(v25)
           || (unsigned __int16)v25 < 0x20u
           || (_WORD)v25 == 127)
          || !(_WORD)v25 )
        {
          goto LABEL_42;
        }
        if ( (unsigned __int64)v6 >= v10 )
          goto LABEL_105;
        if ( !v11 && (unsigned __int16)(v25 - 65) <= 0x19u )
          LOWORD(v25) = v25 + 32;
        *v6++ = v25;
        ++v23;
      }
    }
    v26 = v23;
    v55 = v23;
    v27 = v17 - v7;
    v61 = v27;
    if ( v23 == v27 )
    {
      v6 -= 4;
      for ( j = v12; j < v6; ++j )
        *j = j[4];
    }
    else
    {
      if ( (__int64)(((char *)v59 - (char *)v7) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 )
      {
        v30 = wcsnicmp(v7, v20, 4uLL);
        v18 = 0;
        if ( !v30 )
          goto LABEL_42;
        v26 = v23;
      }
      v31 = v18;
      v62 = v18;
      if ( v23 > 0 )
      {
        if ( (unsigned __int64)v6 >= v56 )
          goto LABEL_105;
        *v6++ = 45;
      }
      LODWORD(v63) = 72;
      v32 = 128;
      v33 = v18;
      if ( v26 < v27 )
      {
        do
        {
          v34 = 0x7FFFFFF;
          v35 = v7;
          if ( v7 < v17 )
          {
            do
            {
              UTF32 = GetUTF32(v35, v31, i, v33);
              if ( UTF32 >= v32 && UTF32 < v34 )
                v34 = UTF32;
              v38 = 4LL;
              if ( UTF32 < 0x10000 )
                v38 = 2LL;
              v35 = (wchar_t *)(v38 + v37);
            }
            while ( v35 < v17 );
            v27 = v61;
            v31 = v62;
          }
          v39 = v7;
          v40 = (unsigned int)((v34 - v32) * (v23 - v31 + 1) + v33);
          for ( k = v7 < v17; ; k = &v58[v53] < v17 )
          {
            v58 = v39;
            if ( !k )
              break;
            v42 = GetUTF32(v39, v31, i, v40);
            v44 = v43 + 1;
            v54 = v42;
            if ( v42 >= v34 )
              v44 = v43;
            v40 = v44;
            if ( v42 == v34 )
            {
              v45 = v44;
              for ( m = 36; ; m += 36 )
              {
                if ( m > (int)v63 )
                  v47 = m < (int)v63 + 26 ? m - v63 : 26;
                else
                  v47 = 1;
                if ( v45 < v47 )
                  break;
                if ( (unsigned __int64)v6 >= v56 )
                  goto LABEL_46;
                v48 = (v45 - v47) % (36 - v47);
                v45 = (v45 - v47) / (36 - v47);
                v49 = v48 + v47;
                v50 = 22;
                if ( v49 <= 25 )
                  v50 = 97;
                *v6++ = v49 + v50;
              }
              if ( (unsigned __int64)v6 >= v56 )
                goto LABEL_46;
              v51 = 22;
              if ( v45 <= 25 )
                v51 = 97;
              *v6++ = v45 + v51;
              v52 = adapt(v40, v23 - v62 + 1, v23 == v55);
              v31 = v62;
              v40 = 0LL;
              ++v23;
              LODWORD(v63) = v52;
              v42 = v54;
              if ( v34 >= 0x10000 )
              {
                ++v23;
                v31 = ++v62;
              }
            }
            else
            {
              v31 = v62;
            }
            v53 = 2LL;
            if ( v42 < 0x10000 )
              v53 = 1LL;
            v39 = &v58[v53];
          }
          v33 = (unsigned int)(v40 + 1);
          v32 = v34 + 1;
        }
        while ( v23 < v27 );
        v18 = 0;
      }
    }
    if ( !v11 && (__int64)(((char *)v6 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
      goto LABEL_42;
    v9 = v59;
    v10 = v56;
    if ( v17 == v59 )
      goto LABEL_36;
    if ( (unsigned __int64)v6 >= v56 )
    {
LABEL_46:
      v18 = 0;
LABEL_105:
      result = 3221225507LL;
      goto LABEL_43;
    }
    *v6++ = *v17;
    if ( v11 && *v17 == 64 )
    {
      v11 = 0;
      v57 = v6;
      v8 = v6;
    }
    else
    {
LABEL_36:
      v8 = v57;
    }
    v7 = v17 + 1;
    v12 = v6;
    if ( v17 >= v59 )
      goto LABEL_106;
  }
  if ( v11 )
    goto LABEL_41;
  v12 = v14;
  if ( LabelEnd != v15 )
    goto LABEL_41;
LABEL_106:
  a4 = v64;
  a3 = v60;
LABEL_107:
  v18 = 0;
  if ( (v11 || v12 - v8 <= 255LL - (*(v6 - 1) != 46)) && *(v6 - 1) != 64 )
  {
    *a4 = v12 - a3;
    return 0LL;
  }
LABEL_42:
  result = 3221227286LL;
LABEL_43:
  *v64 = v18;
  return result;
}
