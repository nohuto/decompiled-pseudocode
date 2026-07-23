/*
 * XREFs of punycode_encode @ 0x180085748
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x180046788 (RtlpNameprepAsciiRealWorker.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x180001CE4 (RtlStringCopyWorkerW.c)
 *     adapt @ 0x1800022F4 (adapt.c)
 *     FindLabelEnd @ 0x180047C50 (FindLabelEnd.c)
 *     _wcsnicmp @ 0x180091A30 (_wcsnicmp.c)
 *     GetUTF32 @ 0x1800FAEE8 (GetUTF32.c)
 *     ValidateStd3Range @ 0x1800FAF44 (ValidateStd3Range.c)
 */

__int64 __fastcall punycode_encode(wchar_t *String1, int a2, wchar_t *a3, int *a4, char a5, char a6)
{
  wchar_t *v6; // rbx
  wchar_t *v7; // r15
  wchar_t *v8; // rbp
  wchar_t *v9; // r10
  unsigned __int64 v10; // r14
  char v11; // r12
  wchar_t *v12; // rdi
  wchar_t *LabelEnd; // rax
  wchar_t *v14; // r9
  wchar_t *v15; // r10
  unsigned __int64 v16; // r11
  wchar_t *v17; // rsi
  const wchar_t *v18; // r8
  int v19; // edx
  __int64 v20; // rcx
  wchar_t *v21; // r14
  int v22; // ebp
  wchar_t *i; // r8
  __int64 v24; // rcx
  __int64 v25; // r14
  wchar_t *j; // rcx
  __int64 result; // rax
  int v28; // edx
  int v29; // r9d
  int k; // r10d
  int v31; // r11d
  wchar_t *v32; // r8
  int UTF32; // eax
  __int64 v34; // r8
  __int64 v35; // rcx
  wchar_t *v36; // rax
  int v37; // r9d
  bool m; // cf
  int v39; // eax
  int v40; // r9d
  int v41; // ecx
  int v42; // r13d
  int n; // r10d
  int v44; // r8d
  int v45; // edx
  int v46; // ecx
  __int16 v47; // dx
  __int16 v48; // ax
  int v49; // eax
  __int64 v50; // rcx
  int v51; // [rsp+30h] [rbp-88h]
  int v52; // [rsp+34h] [rbp-84h]
  unsigned __int64 v53; // [rsp+38h] [rbp-80h]
  wchar_t *v54; // [rsp+40h] [rbp-78h]
  wchar_t *String2; // [rsp+48h] [rbp-70h]
  wchar_t *String2a; // [rsp+48h] [rbp-70h]
  wchar_t *v57; // [rsp+50h] [rbp-68h]
  wchar_t *v58; // [rsp+58h] [rbp-60h]
  __int64 v59; // [rsp+60h] [rbp-58h]
  int v60; // [rsp+C8h] [rbp+10h]
  __int64 v61; // [rsp+D0h] [rbp+18h] BYREF
  int *v62; // [rsp+D8h] [rbp+20h]

  v62 = a4;
  v6 = a3;
  v54 = a3;
  v58 = a3;
  v7 = String1;
  v8 = a3;
  v9 = &String1[a2];
  v57 = v9;
  v10 = (unsigned __int64)&a3[*a4];
  v53 = v10;
  if ( a2 <= 0 )
    goto LABEL_42;
  v11 = a5;
  v12 = a3;
  if ( String1 >= v9 )
  {
LABEL_105:
    if ( !v11 && v12 - v8 > 255LL - (*(v6 - 1) != 46) || *(v6 - 1) == 64 )
      goto LABEL_42;
    *a4 = v12 - a3;
    return 0LL;
  }
  while ( 1 )
  {
    LabelEnd = FindLabelEnd(v7, (unsigned __int64)v9, v11);
    v17 = LabelEnd;
    if ( LabelEnd == v7 )
      break;
    if ( !v11 && a6 && (*v7 == 45 || (unsigned __int64)LabelEnd > v16 && *(LabelEnd - 1) == 45) )
      goto LABEL_42;
    v18 = L"xl--";
    if ( !v11 )
      v18 = L"xn--";
    v19 = 0;
    String2 = (wchar_t *)v18;
    v20 = (__int64)(v10 - (_QWORD)v6) >> 1;
    if ( (unsigned __int64)(v20 - 1) > 0x7FFFFFFE )
      v19 = -1073741811;
    if ( v19 < 0 )
    {
      if ( v20 )
        *v6 = 0;
      goto LABEL_15;
    }
    v21 = v6;
    v19 = 0;
    if ( v20 )
    {
      v61 = 0LL;
      v19 = RtlStringCopyWorkerW(v6, v20, &v61, (__int64)v18, 4LL);
      v21 = &v6[v61];
      if ( (int)(v19 + 0x80000000) >= 0 && v19 != -2147483643 )
        goto LABEL_14;
    }
    else if ( *v18 )
    {
      if ( !v6 )
        goto LABEL_46;
      v19 = -2147483643;
    }
    v6 = v21;
LABEL_14:
    v10 = v53;
LABEL_15:
    if ( v19 < 0 )
      goto LABEL_46;
    v22 = 0;
    for ( i = v7; i < v17; ++i )
    {
      v24 = *i;
      if ( (unsigned __int16)v24 >= 0x80u )
      {
        if ( (unsigned __int16)(v24 + 10240) <= 0x3FFu )
          ++i;
      }
      else
      {
        if ( !v11
          && (a6 && !(unsigned __int8)ValidateStd3Range(v24) || (unsigned __int16)v24 < 0x20u || (_WORD)v24 == 127)
          || !(_WORD)v24 )
        {
          goto LABEL_42;
        }
        if ( (unsigned __int64)v6 >= v10 )
          goto LABEL_46;
        if ( !v11 && (unsigned __int16)(v24 - 65) <= 0x19u )
          LOWORD(v24) = v24 + 32;
        *v6++ = v24;
        ++v22;
      }
    }
    v52 = v22;
    v25 = v17 - v7;
    v59 = v25;
    if ( v22 == v25 )
    {
      v6 -= 4;
      for ( j = v12; j < v6; ++j )
        *j = j[4];
    }
    else
    {
      if ( (__int64)(((char *)v57 - (char *)v7) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 && !wcsnicmp(v7, String2, 4uLL) )
        goto LABEL_42;
      v28 = 0;
      v60 = 0;
      if ( v22 > 0 )
      {
        if ( (unsigned __int64)v6 >= v53 )
        {
LABEL_46:
          result = 3221225507LL;
          goto LABEL_43;
        }
        *v6++ = 45;
      }
      v29 = 0;
      LODWORD(v61) = 72;
      for ( k = 128; v22 < v25; k = v31 + 1 )
      {
        v31 = 0x7FFFFFF;
        v32 = v7;
        if ( v7 < v17 )
        {
          do
          {
            UTF32 = GetUTF32(v32);
            if ( UTF32 >= k && UTF32 < v31 )
              v31 = UTF32;
            v35 = 4LL;
            if ( UTF32 < 0x10000 )
              v35 = 2LL;
            v32 = (wchar_t *)(v35 + v34);
          }
          while ( v32 < v17 );
          v25 = v59;
          v28 = v60;
        }
        v36 = v7;
        v37 = (v31 - k) * (v22 - v28 + 1) + v29;
        for ( m = v7 < v17; ; m = &String2a[v50] < v17 )
        {
          String2a = v36;
          if ( !m )
            break;
          v39 = GetUTF32(v36);
          v41 = v40 + 1;
          v51 = v39;
          if ( v39 >= v31 )
            v41 = v40;
          v37 = v41;
          if ( v39 == v31 )
          {
            v42 = v41;
            for ( n = 36; ; n += 36 )
            {
              if ( n > (int)v61 )
                v44 = n < (int)v61 + 26 ? n - v61 : 26;
              else
                v44 = 1;
              if ( v42 < v44 )
                break;
              if ( (unsigned __int64)v6 >= v53 )
                goto LABEL_46;
              v45 = (v42 - v44) % (36 - v44);
              v42 = (v42 - v44) / (36 - v44);
              v46 = v45 + v44;
              v47 = 22;
              if ( v46 <= 25 )
                v47 = 97;
              *v6++ = v46 + v47;
            }
            if ( (unsigned __int64)v6 >= v53 )
              goto LABEL_46;
            v48 = 22;
            if ( v42 <= 25 )
              v48 = 97;
            *v6++ = v42 + v48;
            v49 = adapt(v37, v22 - v60 + 1, v22 == v52);
            v28 = v60;
            v37 = 0;
            ++v22;
            LODWORD(v61) = v49;
            v39 = v51;
            if ( v31 >= 0x10000 )
            {
              ++v22;
              v28 = ++v60;
            }
          }
          else
          {
            v28 = v60;
          }
          v50 = 2LL;
          if ( v39 < 0x10000 )
            v50 = 1LL;
          v36 = &String2a[v50];
        }
        v29 = v37 + 1;
      }
    }
    if ( !v11 && (__int64)(((char *)v6 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
      goto LABEL_42;
    v9 = v57;
    v10 = v53;
    if ( v17 == v57 )
      goto LABEL_37;
    if ( (unsigned __int64)v6 >= v53 )
      goto LABEL_46;
    *v6++ = *v17;
    if ( v11 && *v17 == 64 )
    {
      v11 = 0;
      v54 = v6;
      v8 = v6;
    }
    else
    {
LABEL_37:
      v8 = v54;
    }
    v7 = v17 + 1;
    v12 = v6;
    if ( v17 >= v57 )
      goto LABEL_104;
  }
  if ( !v11 )
  {
    v12 = v14;
    if ( LabelEnd == v15 )
    {
LABEL_104:
      a4 = v62;
      a3 = v58;
      goto LABEL_105;
    }
  }
LABEL_42:
  result = 3221227286LL;
LABEL_43:
  *v62 = 0;
  return result;
}
