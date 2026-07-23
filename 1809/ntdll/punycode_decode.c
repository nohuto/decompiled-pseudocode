/*
 * XREFs of punycode_decode @ 0x1800476F8
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x180047580 (RtlpIdnToUnicodeWorker.c)
 * Callees:
 *     adapt @ 0x1800022F4 (adapt.c)
 *     InsertChar @ 0x180002664 (InsertChar.c)
 *     FindLabelEnd @ 0x180047C50 (FindLabelEnd.c)
 *     _wcsnicmp @ 0x180091A30 (_wcsnicmp.c)
 *     ValidateStd3Range @ 0x1800FAF44 (ValidateStd3Range.c)
 */

__int64 __fastcall punycode_decode(
        wchar_t *String1,
        int a2,
        unsigned __int16 *a3,
        int *a4,
        char a5,
        char a6,
        _BYTE *a7,
        _QWORD *a8)
{
  _BYTE *v8; // r12
  unsigned __int16 *v9; // rbx
  __int64 v10; // r8
  _DWORD *v11; // rdi
  unsigned __int16 *v12; // r13
  char v13; // r15
  wchar_t *v14; // rsi
  __int64 v15; // rax
  unsigned __int16 *v16; // r14
  wchar_t *v17; // rdx
  unsigned __int16 *v18; // r10
  unsigned __int16 *v19; // r9
  wchar_t *v20; // rbp
  unsigned __int64 LabelEnd; // rax
  signed __int64 v22; // r10
  unsigned __int64 v23; // r11
  wchar_t *v24; // rdi
  const wchar_t *v25; // rdx
  wchar_t *v26; // r8
  __int16 v27; // r9
  wchar_t *v29; // r8
  wchar_t *v30; // r9
  __int64 v31; // r10
  __int16 v32; // r11
  unsigned __int16 v33; // cx
  int v34; // eax
  int v35; // r13d
  int v36; // r14d
  int v37; // r11d
  wchar_t *v38; // r12
  int v39; // r10d
  int v40; // r9d
  int i; // r8d
  int v42; // ecx
  int v43; // eax
  __int64 v44; // r11
  __int64 v45; // r11
  __int64 v46; // rax
  __int64 v47; // rdx
  int v48; // r14d
  unsigned __int16 *v49; // r10
  unsigned __int16 v50; // r11
  unsigned __int16 *v51; // rax
  __int16 v52; // r11
  __int64 v53; // r10
  int v54; // [rsp+20h] [rbp-78h]
  unsigned __int16 *v55; // [rsp+28h] [rbp-70h]
  unsigned __int64 v56; // [rsp+30h] [rbp-68h]
  wchar_t *v57; // [rsp+38h] [rbp-60h]
  unsigned __int16 *v58; // [rsp+40h] [rbp-58h]
  int v59; // [rsp+A8h] [rbp+10h]
  unsigned __int16 *v60; // [rsp+B0h] [rbp+18h] BYREF
  _DWORD *v61; // [rsp+B8h] [rbp+20h]

  v61 = a4;
  v60 = a3;
  v8 = a7;
  v9 = a3;
  v10 = *a4;
  v11 = a4;
  *a4 = 0;
  *v8 = 1;
  if ( a2 <= 0 )
    return 3221227286LL;
  v12 = &v9[v10];
  v13 = a5;
  v14 = String1;
  v15 = a2;
  v16 = v9;
  v17 = String1 - 1;
  v55 = v9;
  v57 = String1 - 1;
  v18 = v9;
  v58 = v9;
  v19 = v9;
  v20 = &String1[v15];
  v56 = (unsigned __int64)v12;
  *a8 = v9 - 1;
  if ( String1 >= v20 )
  {
LABEL_31:
    if ( v19 == v18 || !v13 && v20 - v17 > 256LL - (*(v20 - 1) != 46) )
      return 3221227286LL;
    *v11 = v19 - v18;
    return 0LL;
  }
  while ( 1 )
  {
    LOBYTE(v10) = v13;
    LabelEnd = FindLabelEnd(v14, v20, v10, v19);
    v24 = (wchar_t *)LabelEnd;
    if ( (wchar_t *)LabelEnd == v14 )
      break;
    if ( !v13
      && (a6 && (*v14 == 45 || LabelEnd > v23 && *(_WORD *)(LabelEnd - 2) == 45)
       || (__int64)((LabelEnd - (_QWORD)v14) & 0xFFFFFFFFFFFFFFFEuLL) > v22) )
    {
      return 3221227286LL;
    }
    if ( (__int64)(((char *)v20 - (char *)v14) & 0xFFFFFFFFFFFFFFFEuLL) < 8 )
      goto LABEL_12;
    v25 = L"xl--";
    if ( !v13 )
      v25 = L"xn--";
    if ( wcsnicmp(v14, v25, 4uLL) )
    {
      LOWORD(v22) = 126;
LABEL_12:
      if ( (__int64)(((char *)v12 - (char *)v9) & 0xFFFFFFFFFFFFFFFEuLL) < (__int64)(((char *)v24 - (char *)v14) & 0xFFFFFFFFFFFFFFFEuLL) )
        return 3221227286LL;
      v26 = v14;
      if ( v14 < v24 )
      {
        v27 = 1;
        while ( (v13 || (!a6 || (unsigned __int8)ValidateStd3Range(*v26)) && *v26 >= 0x20u && *v26 != 127)
             && (unsigned __int16)(*v26 - v27) <= (unsigned __int16)v22 )
        {
          *v9 = *v26++;
          v60 = ++v9;
          if ( v26 >= v24 )
            goto LABEL_21;
        }
        return 3221227286LL;
      }
      goto LABEL_21;
    }
    *v8 = 0;
    v14 += 4;
    v29 = v24 - 1;
    if ( v24 - 1 < v14 )
    {
LABEL_92:
      v29 = 0LL;
    }
    else
    {
      while ( *v29 != 45 )
      {
        if ( --v29 < v14 )
          goto LABEL_92;
      }
    }
    if ( v29 == v24 - 1 )
      return 3221227286LL;
    if ( v29 && v29 > v14 )
    {
      v30 = v14;
      v31 = v29 - v14;
      if ( v14 != v29 )
      {
        v32 = 1;
        do
        {
          if ( v9 >= v12 )
            break;
          if ( !v13 && (a6 && !(unsigned __int8)ValidateStd3Range(*v30) || *v30 < 0x20u || *v30 == 127) )
            return 3221227286LL;
          v33 = *v30;
          if ( (unsigned __int16)(*v30 - v32) > 0x7Eu )
            return 3221227286LL;
          if ( !v13 && (unsigned __int16)(v33 - 65) <= 0x19u )
            v33 += 32;
          *v9 = v33;
          ++v30;
          v60 = ++v9;
        }
        while ( v30 != v29 );
        if ( v30 != v29 )
          return 3221227286LL;
      }
    }
    else
    {
      LODWORD(v31) = 0;
    }
    v59 = 0;
    v34 = v31 + 1;
    v35 = 128;
    if ( (int)v31 <= 0 )
      v34 = 0;
    v36 = 0;
    v37 = 72;
    v38 = &v14[v34];
    if ( v38 < v24 )
    {
LABEL_61:
      v39 = v36;
      v40 = 1;
      for ( i = 36; v38 < v24; i += 36 )
      {
        if ( (unsigned __int16)(*v38 - 48) <= 9u )
        {
          v42 = *v38 - 22;
        }
        else if ( (unsigned __int16)(*v38 - 97) > 0x19u )
        {
          v42 = (unsigned __int16)(*v38 - 65) > 0x19u ? -1 : *v38 - 65;
        }
        else
        {
          v42 = *v38 - 97;
        }
        ++v38;
        if ( v42 < 0 || v42 > (0x7FFFFFF - v36) / v40 )
          break;
        v36 += v40 * v42;
        if ( i <= v37 )
        {
          v43 = 1;
        }
        else if ( i < v37 + 26 )
        {
          v43 = i - v37;
        }
        else
        {
          v43 = 26;
        }
        if ( v42 < v43 )
        {
          v54 = adapt(v36 - v39, (unsigned int)(v9 - v55) - v59 + 1, v39 == 0);
          v45 = v44 - v59;
          v46 = v36 / (v45 + 1);
          v47 = v36 % (v45 + 1);
          v48 = v47;
          if ( v46 > 0x7FFFFFF - v35 )
            return 3221227286LL;
          v35 += v46;
          if ( (unsigned int)(v35 - 128) > 0x10FF7F || (unsigned int)(v35 - 55296) <= 0x7FF )
            return 3221227286LL;
          if ( v59 > 0 )
          {
            v49 = v55;
            if ( (int)v47 > 0 )
            {
              while ( v49 < v9 )
              {
                v51 = v49 + 1;
                LODWORD(v47) = v47 - 1;
                if ( (unsigned __int16)(*v49 + 10240) > 0x7FFu )
                  v51 = v49;
                v49 = v51 + 1;
                if ( (int)v47 <= 0 )
                  goto LABEL_80;
              }
              return 3221227286LL;
            }
          }
          else
          {
            v49 = &v55[(int)v47];
          }
LABEL_80:
          if ( v35 >= 0x10000 )
          {
            if ( (unsigned __int64)v9 >= v56 - 2 || v49 > v9 )
              return 3221227286LL;
            InsertChar((v35 - 0x10000) / 1024 - 10240, v49, &v60);
            ++v59;
            v50 = v52 - 9216;
            v49 = (unsigned __int16 *)(v53 + 2);
          }
          else
          {
            if ( (unsigned __int64)v9 >= v56 || v49 > v9 )
              return 3221227286LL;
            v50 = v35;
          }
          InsertChar(v50, v49, &v60);
          v9 = v60;
          v36 = v48 + 1;
          if ( v38 >= v24 )
            goto LABEL_86;
          v37 = v54;
          goto LABEL_61;
        }
        if ( v40 > 0x7FFFFFF / (36 - v43) )
          return 3221227286LL;
        v40 *= 36 - v43;
      }
      return 3221227286LL;
    }
LABEL_86:
    v8 = a7;
    v12 = (unsigned __int16 *)v56;
    v16 = v55;
LABEL_21:
    v10 = 0LL;
    if ( !v13 && ((__int64)(((char *)v24 - (char *)v14) & 0xFFFFFFFFFFFFFFFEuLL) > 126 || v9 == v16) )
      return 3221227286LL;
    if ( v24 != v20 )
    {
      if ( v9 >= v12 )
        return 3221227286LL;
      *v9++ = *v24;
      v60 = v9;
    }
    if ( v13 )
    {
      v17 = v24;
      v57 = v24;
      v13 = 0;
      *a8 = (char *)v9 - (v20 != v24 ? 2 : 0);
      if ( v24 == v20 - 1 )
        return 3221227286LL;
    }
    else
    {
      v17 = v57;
    }
    v14 = v24 + 1;
    v55 = v9;
    v16 = v9;
    v19 = v9;
    if ( v24 >= v20 )
      goto LABEL_30;
  }
  if ( !v13 && (wchar_t *)LabelEnd == v20 )
  {
    v17 = v57;
LABEL_30:
    v11 = v61;
    v18 = v58;
    goto LABEL_31;
  }
  return 3221227286LL;
}
