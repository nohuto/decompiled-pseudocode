/*
 * XREFs of punycode_decode @ 0x1408981DC
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1402F46A8 (RtlpIdnToUnicodeWorker.c)
 * Callees:
 *     _wcsnicmp @ 0x140195BB0 (_wcsnicmp.c)
 *     FindLabelEnd @ 0x1402F45C8 (FindLabelEnd.c)
 *     InsertChar @ 0x1402F4680 (InsertChar.c)
 *     ValidateStd3Range @ 0x1402F4CD8 (ValidateStd3Range.c)
 *     adapt @ 0x1402F4D14 (adapt.c)
 */

__int64 __fastcall punycode_decode(
        wchar_t *Str1,
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
  wchar_t *LabelEnd; // rax
  signed __int64 v22; // r10
  unsigned __int64 v23; // r11
  unsigned __int16 *v24; // rdi
  const wchar_t *v25; // rdx
  unsigned __int16 *v26; // r8
  unsigned __int16 *v27; // r9
  __int64 v28; // r10
  __int16 v29; // r11
  unsigned __int16 v30; // cx
  int v32; // eax
  int v33; // r13d
  int v34; // r14d
  int v35; // r11d
  wchar_t *v36; // r12
  int v37; // r10d
  int v38; // r9d
  int i; // r8d
  wchar_t v40; // cx
  int v41; // ecx
  int v42; // eax
  __int64 v43; // r11
  __int64 v44; // r11
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // r14d
  unsigned __int16 *v48; // r10
  unsigned __int16 *v49; // rax
  unsigned __int16 v50; // r11
  __int16 v51; // r11
  __int64 v52; // r10
  unsigned __int16 *v53; // r8
  __int16 v54; // r9
  int v55; // [rsp+28h] [rbp-70h]
  unsigned __int16 *v56; // [rsp+30h] [rbp-68h]
  unsigned __int64 v57; // [rsp+38h] [rbp-60h]
  wchar_t *v58; // [rsp+40h] [rbp-58h]
  unsigned __int16 *v59; // [rsp+48h] [rbp-50h]
  int v60; // [rsp+A8h] [rbp+10h]
  unsigned __int16 *v61; // [rsp+B0h] [rbp+18h] BYREF
  _DWORD *v62; // [rsp+B8h] [rbp+20h]

  v62 = a4;
  v61 = a3;
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
  v14 = Str1;
  v15 = a2;
  v16 = v9;
  v17 = Str1 - 1;
  v56 = v9;
  v58 = Str1 - 1;
  v18 = v9;
  v59 = v9;
  v19 = v9;
  v20 = &Str1[v15];
  v57 = (unsigned __int64)v12;
  *a8 = v9 - 1;
  if ( Str1 >= v20 )
  {
LABEL_108:
    if ( v19 == v18 || !v13 && v20 - v17 > 256LL - (*(v20 - 1) != 46) )
      return 3221227286LL;
    *v11 = v19 - v18;
    return 0LL;
  }
  while ( 1 )
  {
    LabelEnd = FindLabelEnd(v14, (unsigned __int64)v20, v13);
    v24 = LabelEnd;
    if ( LabelEnd == v14 )
      break;
    if ( !v13
      && (a6 && (*v14 == 45 || (unsigned __int64)LabelEnd > v23 && *(LabelEnd - 1) == 45)
       || (__int64)(((char *)LabelEnd - (char *)v14) & 0xFFFFFFFFFFFFFFFEuLL) > v22) )
    {
      return 3221227286LL;
    }
    if ( (__int64)(((char *)v20 - (char *)v14) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 )
    {
      v25 = L"xl--";
      if ( !v13 )
        v25 = L"xn--";
      if ( !wcsnicmp(v14, v25, 4uLL) )
      {
        *v8 = 0;
        v14 += 4;
        v26 = v24 - 1;
        if ( v24 - 1 < v14 )
        {
LABEL_17:
          v26 = 0LL;
        }
        else
        {
          while ( *v26 != 45 )
          {
            if ( --v26 < v14 )
              goto LABEL_17;
          }
        }
        if ( v26 == v24 - 1 )
          return 3221227286LL;
        if ( v26 && v26 > v14 )
        {
          v27 = v14;
          v28 = v26 - v14;
          if ( v14 != v26 )
          {
            v29 = 1;
            do
            {
              if ( v9 >= v12 )
                break;
              if ( !v13 && (a6 && !ValidateStd3Range(*v27) || *v27 < 0x20u || *v27 == 127) )
                return 3221227286LL;
              v30 = *v27;
              if ( (unsigned __int16)(*v27 - v29) > 0x7Eu )
                return 3221227286LL;
              if ( !v13 && (unsigned __int16)(v30 - 65) <= 0x19u )
                v30 += 32;
              *v9 = v30;
              ++v27;
              v61 = ++v9;
            }
            while ( v27 != v26 );
            if ( v27 != v26 )
              return 3221227286LL;
          }
        }
        else
        {
          LODWORD(v28) = 0;
        }
        v60 = 0;
        v32 = v28 + 1;
        v33 = 128;
        if ( (int)v28 <= 0 )
          v32 = 0;
        v34 = 0;
        v35 = 72;
        v36 = &v14[v32];
        if ( v36 < v24 )
        {
LABEL_40:
          v37 = v34;
          v38 = 1;
          for ( i = 36; v36 < v24; i += 36 )
          {
            v40 = *v36;
            if ( (unsigned __int16)(*v36 - 48) > 9u )
            {
              if ( (unsigned __int16)(v40 - 97) > 0x19u )
                v41 = (unsigned __int16)(v40 - 65) > 0x19u ? -1 : v40 - 65;
              else
                v41 = v40 - 97;
            }
            else
            {
              v41 = v40 - 22;
            }
            ++v36;
            if ( v41 < 0 || v41 > (0x7FFFFFF - v34) / v38 )
              break;
            v34 += v38 * v41;
            if ( i > v35 )
            {
              if ( i < v35 + 26 )
                v42 = i - v35;
              else
                v42 = 26;
            }
            else
            {
              v42 = 1;
            }
            if ( v41 < v42 )
            {
              v55 = adapt(v34 - v37, (unsigned int)(v9 - v56) - v60 + 1, v37 == 0);
              v44 = v43 - v60;
              v45 = v34 / (v44 + 1);
              v46 = v34 % (v44 + 1);
              v47 = v46;
              if ( v45 > 0x7FFFFFF - v33 )
                return 3221227286LL;
              v33 += v45;
              if ( (unsigned int)(v33 - 128) > 0x10FF7F || (unsigned int)(v33 - 55296) <= 0x7FF )
                return 3221227286LL;
              if ( v60 <= 0 )
              {
                v48 = &v56[(int)v46];
              }
              else
              {
                v48 = v56;
                if ( (int)v46 > 0 )
                {
                  while ( v48 < v9 )
                  {
                    v49 = v48 + 1;
                    LODWORD(v46) = v46 - 1;
                    if ( (unsigned __int16)(*v48 + 10240) > 0x7FFu )
                      v49 = v48;
                    v48 = v49 + 1;
                    if ( (int)v46 <= 0 )
                      goto LABEL_70;
                  }
                  return 3221227286LL;
                }
              }
LABEL_70:
              if ( v33 >= 0x10000 )
              {
                if ( (unsigned __int64)v9 >= v57 - 2 || v48 > v9 )
                  return 3221227286LL;
                InsertChar((v33 - 0x10000) / 1024 - 10240, v48, &v61);
                ++v60;
                v50 = v51 - 9216;
                v48 = (unsigned __int16 *)(v52 + 2);
              }
              else
              {
                if ( (unsigned __int64)v9 >= v57 || v48 > v9 )
                  return 3221227286LL;
                v50 = v33;
              }
              InsertChar(v50, v48, &v61);
              v9 = v61;
              v34 = v47 + 1;
              if ( v36 >= v24 )
                goto LABEL_91;
              v35 = v55;
              goto LABEL_40;
            }
            if ( v38 > 0x7FFFFFF / (36 - v42) )
              return 3221227286LL;
            v38 *= 36 - v42;
          }
          return 3221227286LL;
        }
LABEL_91:
        v8 = a7;
        v12 = (unsigned __int16 *)v57;
        v16 = v56;
        goto LABEL_92;
      }
      LOWORD(v22) = 126;
    }
    if ( (__int64)(((char *)v12 - (char *)v9) & 0xFFFFFFFFFFFFFFFEuLL) < (__int64)(((char *)v24 - (char *)v14) & 0xFFFFFFFFFFFFFFFEuLL) )
      return 3221227286LL;
    v53 = v14;
    if ( v14 < v24 )
    {
      v54 = 1;
      while ( (v13 || (!a6 || ValidateStd3Range(*v53)) && *v53 >= 0x20u && *v53 != 127)
           && (unsigned __int16)(*v53 - v54) <= (unsigned __int16)v22 )
      {
        *v9 = *v53++;
        v61 = ++v9;
        if ( v53 >= v24 )
          goto LABEL_92;
      }
      return 3221227286LL;
    }
LABEL_92:
    if ( !v13 && ((__int64)(((char *)v24 - (char *)v14) & 0xFFFFFFFFFFFFFFFEuLL) > 126 || v9 == v16) )
      return 3221227286LL;
    if ( v24 != v20 )
    {
      if ( v9 >= v12 )
        return 3221227286LL;
      *v9++ = *v24;
      v61 = v9;
    }
    if ( v13 )
    {
      v17 = v24;
      v58 = v24;
      v13 = 0;
      *a8 = (char *)v9 - (v20 != v24 ? 2 : 0);
      if ( v24 == v20 - 1 )
        return 3221227286LL;
    }
    else
    {
      v17 = v58;
    }
    v14 = v24 + 1;
    v56 = v9;
    v16 = v9;
    v19 = v9;
    if ( v24 >= v20 )
      goto LABEL_107;
  }
  if ( !v13 && LabelEnd == v20 )
  {
    v17 = v58;
LABEL_107:
    v11 = v62;
    v18 = v59;
    goto LABEL_108;
  }
  return 3221227286LL;
}
