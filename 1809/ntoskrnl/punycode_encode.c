/*
 * XREFs of punycode_encode @ 0x140898850
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x1402F4948 (RtlpNameprepAsciiRealWorker.c)
 * Callees:
 *     RtlStringCchCopyNExW @ 0x140015A04 (RtlStringCchCopyNExW.c)
 *     _wcsnicmp @ 0x140195BB0 (_wcsnicmp.c)
 *     FindLabelEnd @ 0x1402F45C8 (FindLabelEnd.c)
 *     GetUTF32 @ 0x1402F4604 (GetUTF32.c)
 *     ValidateStd3Range @ 0x1402F4CD8 (ValidateStd3Range.c)
 *     adapt @ 0x1402F4D14 (adapt.c)
 */

__int64 punycode_encode(wchar_t *Str1, int a2, ...)
{
  wchar_t *v2; // rbx
  int *v3; // r13
  wchar_t *v4; // r14
  wchar_t *v5; // rsi
  NTSTRSAFE_PWSTR v6; // r11
  wchar_t *v7; // r10
  int v8; // r9d
  wchar_t *v9; // r15
  char v10; // bp
  NTSTRSAFE_PWSTR v11; // r12
  wchar_t *LabelEnd; // rax
  NTSTRSAFE_PWSTR v13; // r9
  wchar_t *v14; // r10
  __int16 v15; // r11
  unsigned __int16 *v16; // rdi
  const wchar_t *v17; // rax
  NTSTATUS v18; // eax
  int v19; // r14d
  unsigned __int16 *i; // r8
  unsigned __int16 v21; // cx
  __int64 v22; // r15
  wchar_t *j; // rcx
  int v24; // eax
  int v25; // edx
  int k; // r12d
  int v27; // r11d
  unsigned __int16 *v28; // r10
  int UTF32; // eax
  __int64 v30; // r10
  __int64 v31; // rcx
  unsigned __int16 *v32; // r13
  int m; // r9d
  int v34; // eax
  int v35; // r9d
  int v36; // ecx
  int v37; // r12d
  int n; // r10d
  int v39; // r8d
  int v40; // edx
  int v41; // ecx
  __int16 v42; // dx
  __int16 v43; // ax
  int v44; // eax
  __int64 v45; // rcx
  NTSTRSAFE_PWSTR v46; // rcx
  __int64 result; // rax
  int v48; // [rsp+40h] [rbp-98h]
  wchar_t *v49; // [rsp+48h] [rbp-90h]
  wchar_t *Str2; // [rsp+50h] [rbp-88h]
  int Str2a; // [rsp+50h] [rbp-88h]
  int v52; // [rsp+58h] [rbp-80h]
  NTSTRSAFE_PWSTR v53; // [rsp+60h] [rbp-78h]
  wchar_t *v54; // [rsp+68h] [rbp-70h]
  NTSTRSAFE_PWSTR v55; // [rsp+70h] [rbp-68h]
  NTSTRSAFE_PWSTR v56; // [rsp+78h] [rbp-60h]
  __int64 v57; // [rsp+80h] [rbp-58h]
  int v59; // [rsp+E8h] [rbp+10h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+F0h] [rbp+18h] BYREF
  va_list va; // [rsp+F0h] [rbp+18h]
  int *v62; // [rsp+F8h] [rbp+20h]
  __int64 v63; // [rsp+100h] [rbp+28h]
  __int64 v64; // [rsp+108h] [rbp+30h]
  va_list va1; // [rsp+110h] [rbp+38h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  ppszDestEnd = va_arg(va1, NTSTRSAFE_PWSTR);
  v62 = va_arg(va1, int *);
  v63 = va_arg(va1, _QWORD);
  v64 = va_arg(va1, _QWORD);
  v2 = ppszDestEnd;
  v3 = v62;
  v56 = ppszDestEnd;
  v4 = Str1;
  v55 = ppszDestEnd;
  v5 = Str1;
  v6 = ppszDestEnd;
  v7 = &Str1[a2];
  v8 = 0;
  v54 = v7;
  v9 = &ppszDestEnd[*v62];
  v49 = v9;
  if ( a2 > 0 )
  {
    v10 = v63;
    v11 = ppszDestEnd;
    if ( Str1 >= v7 )
    {
LABEL_82:
      v13 = v11;
      v46 = v11;
      if ( v10 )
        goto LABEL_93;
    }
    else
    {
      v53 = ppszDestEnd;
      while ( 1 )
      {
        LabelEnd = FindLabelEnd(v5, (unsigned __int64)v7, v10);
        v16 = LabelEnd;
        if ( LabelEnd == v5 )
          break;
        v8 = 0;
        if ( !v10 && (_BYTE)v64 && (*v5 == v15 || LabelEnd > v4 && *(LabelEnd - 1) == v15) )
          goto LABEL_89;
        v17 = L"xl--";
        if ( !v10 )
          v17 = L"xn--";
        Str2 = (wchar_t *)v17;
        v18 = RtlStringCchCopyNExW(v2, v9 - v2, v17, 4uLL, (NTSTRSAFE_PWSTR *)va, 0LL, 0);
        v8 = 0;
        if ( v18 < 0 )
        {
LABEL_85:
          result = 3221225507LL;
          goto LABEL_90;
        }
        v2 = ppszDestEnd;
        v19 = 0;
        for ( i = v5; i < v16; ++i )
        {
          v21 = *i;
          if ( *i >= 0x80u )
          {
            if ( (unsigned __int16)(v21 + 10240) <= 0x3FFu )
              ++i;
          }
          else
          {
            if ( !v10 && ((_BYTE)v64 != (_BYTE)v8 && !ValidateStd3Range(v21) || v21 < 0x20u || v21 == 127) || !v21 )
              goto LABEL_89;
            if ( v2 >= v9 )
              goto LABEL_85;
            if ( !v10 && (unsigned __int16)(v21 - 65) <= 0x19u )
              v21 += 32;
            *v2++ = v21;
            ppszDestEnd = v2;
            ++v19;
          }
        }
        v52 = v19;
        v22 = v16 - v5;
        v57 = v22;
        if ( v19 == v22 )
        {
          v2 -= 4;
          for ( j = v11; j < v2; ++j )
            *j = j[4];
          ppszDestEnd = v2;
        }
        else
        {
          if ( (__int64)(((char *)v54 - (char *)v5) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 )
          {
            v24 = wcsnicmp(v5, Str2, 4uLL);
            v8 = 0;
            if ( !v24 )
              goto LABEL_89;
          }
          v25 = v8;
          v59 = v8;
          if ( v19 > 0 )
          {
            if ( v2 >= v49 )
              goto LABEL_85;
            *v2++ = 45;
            ppszDestEnd = v2;
          }
          v48 = 72;
          for ( k = 128; v19 < v22; k = v27 + 1 )
          {
            v27 = 0x7FFFFFF;
            v28 = v5;
            if ( v5 < v16 )
            {
              do
              {
                UTF32 = GetUTF32(v28);
                if ( UTF32 >= k && UTF32 < v27 )
                  v27 = UTF32;
                v31 = 4LL;
                if ( UTF32 < 0x10000 )
                  v31 = 2LL;
                v28 = (unsigned __int16 *)(v31 + v30);
              }
              while ( v28 < v16 );
              v22 = v57;
              v25 = v59;
            }
            v32 = v5;
            for ( m = (v27 - k) * (v19 - v25 + 1) + v8; v32 < v16; v32 = (unsigned __int16 *)((char *)v32 + v45) )
            {
              v34 = GetUTF32(v32);
              v36 = v35 + 1;
              Str2a = v34;
              if ( v34 >= v27 )
                v36 = v35;
              m = v36;
              if ( v34 == v27 )
              {
                v37 = v36;
                for ( n = 36; ; n += 36 )
                {
                  if ( n > v48 )
                    v39 = n < v48 + 26 ? n - v48 : 26;
                  else
                    v39 = 1;
                  if ( v37 < v39 )
                    break;
                  if ( v2 >= v49 )
                    goto LABEL_84;
                  v40 = (v37 - v39) % (36 - v39);
                  v37 = (v37 - v39) / (36 - v39);
                  v41 = v40 + v39;
                  v42 = 22;
                  if ( v41 <= 25 )
                    v42 = 97;
                  *v2++ = v41 + v42;
                }
                if ( v2 >= v49 )
                {
LABEL_84:
                  v8 = 0;
                  goto LABEL_85;
                }
                v43 = 22;
                if ( v37 <= 25 )
                  v43 = 97;
                *v2++ = v37 + v43;
                ppszDestEnd = v2;
                v44 = adapt(m, v19 - v59 + 1, v19 == v52);
                v25 = v59;
                m = 0;
                ++v19;
                v48 = v44;
                v34 = Str2a;
                if ( v27 >= 0x10000 )
                {
                  ++v19;
                  v25 = ++v59;
                }
              }
              else
              {
                v25 = v59;
              }
              v45 = 4LL;
              if ( v34 < 0x10000 )
                v45 = 2LL;
            }
            v8 = m + 1;
          }
          v11 = v53;
          v8 = 0;
        }
        if ( !v10 && (__int64)(((char *)v2 - (char *)v11) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
          goto LABEL_89;
        v7 = v54;
        v9 = v49;
        if ( v16 != v54 )
        {
          if ( v2 >= v49 )
            goto LABEL_85;
          *v2++ = *v16;
          ppszDestEnd = v2;
          if ( v10 )
          {
            if ( *v16 == 64 )
            {
              v10 = v8;
              v56 = v2;
            }
          }
        }
        v4 = Str1;
        v53 = v2;
        v5 = v16 + 1;
        v11 = v2;
        if ( v16 >= v54 )
        {
          v6 = v55;
          v3 = v62;
          goto LABEL_82;
        }
      }
      if ( v10 || LabelEnd != v14 )
        goto LABEL_88;
      v6 = v55;
      v3 = v62;
    }
    v46 = v13;
    if ( v13 - v56 > 255LL - (*(v2 - 1) != 46) )
    {
LABEL_88:
      v8 = 0;
      goto LABEL_89;
    }
LABEL_93:
    if ( *(v2 - 1) != 64 )
    {
      *v3 = v46 - v6;
      return 0LL;
    }
    goto LABEL_88;
  }
LABEL_89:
  result = 3221227286LL;
LABEL_90:
  *v62 = v8;
  return result;
}
