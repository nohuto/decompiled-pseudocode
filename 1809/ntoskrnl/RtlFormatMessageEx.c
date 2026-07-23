/*
 * XREFs of RtlFormatMessageEx @ 0x1408925F4
 * Callers:
 *     PiGetDeviceRegProperty @ 0x140588C10 (PiGetDeviceRegProperty.c)
 *     PiGetDeviceRegistryProperty @ 0x140825918 (PiGetDeviceRegistryProperty.c)
 *     RtlFormatMessage @ 0x1408925A0 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x140007504 (RtlStringCbCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x140015EF4 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

NTSTATUS __cdecl RtlFormatMessageEx(
        PWSTR MessageFormat,
        ULONG MaximumWidth,
        BOOLEAN IgnoreInserts,
        BOOLEAN ArgumentsAreAnsi,
        BOOLEAN ArgumentsAreAnArray,
        va_list *Arguments,
        PWSTR Buffer,
        ULONG Length,
        PULONG ReturnLength,
        PPARSE_MESSAGE_CONTEXT ParseContext)
{
  va_list *v10; // r10
  unsigned int v11; // r12d
  BOOLEAN v12; // r15
  unsigned int v14; // r11d
  ULONG v15; // r9d
  PWSTR v16; // r8
  PWSTR v17; // rbx
  signed int v18; // r14d
  unsigned int v19; // esi
  PWSTR v20; // r13
  WCHAR v21; // ax
  PWSTR v22; // rcx
  WCHAR v23; // cx
  PWSTR v24; // rdx
  WCHAR v25; // dx
  WCHAR v26; // ax
  int v27; // r15d
  int v28; // eax
  WCHAR v29; // dx
  int v30; // esi
  __int64 v31; // r15
  PWSTR v32; // rdi
  NTSTRSAFE_PWSTR v33; // r8
  char v34; // r9
  __int16 v35; // cx
  char *v36; // rdx
  unsigned int v37; // eax
  va_list v38; // rcx
  int v39; // ecx
  NTSTATUS v40; // eax
  __int16 v41; // dx
  char *v42; // rcx
  unsigned __int16 v43; // ax
  int v44; // r9d
  __int64 v45; // rdx
  signed __int64 v46; // r8
  __int16 v47; // ax
  unsigned __int16 v48; // ax
  signed __int64 v49; // r8
  __int16 v50; // ax
  char *v51; // rax
  __int16 v52; // ax
  unsigned int v53; // r8d
  __int64 v54; // rax
  wchar_t *v55; // r9
  va_list v56; // r8
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // r11d
  __int64 v60; // rax
  PWSTR v61; // rdx
  __int16 v62; // ax
  PWSTR v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rbx
  _WORD *v66; // r13
  _WORD *v67; // rbx
  PULONG v69; // rdx
  __int64 v70; // [rsp+30h] [rbp-D0h]
  unsigned int v73; // [rsp+54h] [rbp-ACh]
  unsigned int v74; // [rsp+58h] [rbp-A8h]
  va_list *v75; // [rsp+60h] [rbp-A0h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+70h] [rbp-90h] BYREF
  NTSTRSAFE_PWSTR v78; // [rsp+78h] [rbp-88h] BYREF
  PWSTR v79; // [rsp+80h] [rbp-80h]
  PWSTR v80; // [rsp+88h] [rbp-78h]
  PULONG v81; // [rsp+90h] [rbp-70h]
  _QWORD v82[200]; // [rsp+A0h] [rbp-60h]
  wchar_t pszDest; // [rsp+6E0h] [rbp+5E0h] BYREF
  _WORD v84[30]; // [rsp+6E2h] [rbp+5E2h] BYREF
  char v85; // [rsp+71Eh] [rbp+61Eh] BYREF

  v10 = Arguments;
  v11 = 0;
  v12 = IgnoreInserts;
  v14 = 0;
  v15 = MaximumWidth;
  v16 = Buffer;
  v81 = ReturnLength;
  v17 = Buffer;
  v75 = Arguments;
  v79 = Buffer;
  v73 = 0;
  v18 = Length >> 1;
LABEL_2:
  v19 = 0;
  v74 = 0;
LABEL_3:
  v20 = 0LL;
  while ( 1 )
  {
    v21 = *MessageFormat;
    v22 = v17;
    if ( !*MessageFormat )
      break;
    ++MessageFormat;
    if ( v21 != 37 )
    {
      if ( v21 == 13 )
      {
        if ( *MessageFormat != 10 )
          goto LABEL_112;
      }
      else
      {
        if ( v21 != 10 )
        {
LABEL_114:
          if ( --v18 < 0 )
            return -2147483643;
          *v17 = v21;
          ++v19;
          ++v17;
          if ( v21 != 32 )
            v22 = v20;
          v20 = v22;
          goto LABEL_118;
        }
        if ( *MessageFormat != 13 )
        {
LABEL_112:
          if ( !v15 )
          {
            v18 -= 2;
            if ( v18 < 0 )
              return -2147483643;
            *(_DWORD *)v17 = 655373;
            v17 += 2;
            goto LABEL_2;
          }
          v20 = v17;
          v21 = 32;
          goto LABEL_114;
        }
      }
      ++MessageFormat;
      goto LABEL_112;
    }
    v23 = *MessageFormat;
    v24 = v17;
    v80 = v17;
    if ( (unsigned __int16)(v23 - 49) > 8u )
    {
      switch ( v23 )
      {
        case 0x30u:
          goto LABEL_142;
        case 0u:
          return -1073741811;
        case 0x72u:
          if ( --v18 < 0 )
            return -2147483643;
          *v17++ = 13;
          ++MessageFormat;
LABEL_104:
          v20 = 0LL;
          v19 = 0;
          goto LABEL_118;
        case 0x6Eu:
          v18 -= 2;
          if ( v18 < 0 )
            return -2147483643;
          *(_DWORD *)v17 = 655373;
          v17 += 2;
          ++MessageFormat;
          goto LABEL_104;
        case 0x74u:
          if ( --v18 < 0 )
            return -2147483643;
          if ( (v19 & 7) != 0 )
            v19 = (v19 + 7) & 0xFFFFFFF8;
          else
            v19 += 8;
          v20 = v17;
          *v17 = 9;
          goto LABEL_101;
        case 0x62u:
          if ( --v18 < 0 )
            return -2147483643;
          v20 = v17;
          *v17 = 32;
          goto LABEL_101;
      }
      if ( v12 )
      {
        v18 -= 2;
        if ( v18 < 0 )
          return -2147483643;
        *v17 = 37;
        v17[1] = *MessageFormat;
        v17 += 2;
      }
      else
      {
        if ( --v18 < 0 )
          return -2147483643;
        *v17 = v23;
LABEL_101:
        ++v17;
      }
      ++MessageFormat;
      goto LABEL_103;
    }
    v25 = MessageFormat[1];
    ++MessageFormat;
    v26 = v25;
    v27 = v23 - 48;
    if ( v25 >= 0x30u && v25 <= 0x39u )
    {
      v28 = v25;
      v29 = MessageFormat[1];
      ++MessageFormat;
      v27 = v28 + 2 * (5 * v27 - 24);
      v26 = v29;
      if ( v29 >= 0x30u && v29 <= 0x39u )
      {
        ++MessageFormat;
        v27 = v29 + 2 * (5 * v27 - 24);
        v26 = *MessageFormat;
        if ( *MessageFormat >= 0x30u && *MessageFormat <= 0x39u )
          return -1073741811;
      }
    }
    v30 = v27;
    v31 = (unsigned int)(v27 - 1);
    if ( v26 == 33 )
    {
      v32 = MessageFormat + 1;
      v33 = v84;
      ppszDestEnd = v84;
      pszDest = 37;
      v34 = 0;
      v35 = *v32;
      if ( *v32 != 33 )
      {
        v36 = (char *)v84;
        while ( v35 )
        {
          if ( v36 >= &v85 )
            break;
          if ( v35 == 42 )
          {
            v37 = v11;
            v35 = 42;
            ++v11;
            if ( v37 > 1 )
              break;
          }
          ++v32;
          *v33 = v35;
          v33 = (NTSTRSAFE_PWSTR)(v36 + 2);
          ppszDestEnd = (NTSTRSAFE_PWSTR)(v36 + 2);
          v36 += 2;
          v35 = *v32;
          if ( *v32 == 33 )
            goto LABEL_21;
        }
        return -1073741811;
      }
LABEL_21:
      MessageFormat = v32 + 1;
      v38 = 0LL;
      *v33 = 0;
    }
    else
    {
      RtlStringCbCopyExW(&pszDest, 0x40uLL, L"%s", &ppszDestEnd, 0LL, 0);
      v33 = ppszDestEnd;
      v34 = 1;
      v10 = v75;
      v38 = 0LL;
      v14 = v73;
    }
    if ( !IgnoreInserts )
    {
      if ( !v10 || v11 + (unsigned int)v31 >= 0xC8 )
        return -1073741811;
      if ( !ArgumentsAreAnsi )
        goto LABEL_61;
      v41 = *(v33 - 1);
      v42 = (char *)(v33 - 1);
      if ( v41 == 99 )
      {
        v43 = *(v33 - 2) - 104;
        if ( v43 > 0xFu || (v44 = 32785, !_bittest(&v44, v43)) )
        {
          v45 = 3LL;
          v46 = (char *)L"hc" - v42;
          do
          {
            if ( v45 == -2147483643 )
              break;
            v47 = *(_WORD *)&v42[v46];
            if ( !v47 )
              break;
            *(_WORD *)v42 = v47;
            v42 += 2;
            --v45;
          }
          while ( v45 );
          goto LABEL_52;
        }
      }
      else
      {
        v44 = 32785;
      }
      if ( v41 == 115 )
      {
        v48 = *(v33 - 2) - 104;
        if ( v48 > 0xFu || !_bittest(&v44, v48) )
        {
          v45 = 3LL;
          v49 = (char *)L"hs" - v42;
          do
          {
            if ( v45 == -2147483643 )
              break;
            v50 = *(_WORD *)&v42[v49];
            if ( !v50 )
              break;
            *(_WORD *)v42 = v50;
            v42 += 2;
            --v45;
          }
          while ( v45 );
LABEL_52:
          v51 = v42 - 2;
          if ( v45 )
            v51 = v42;
          v38 = 0LL;
          *(_WORD *)v51 = 0;
LABEL_61:
          if ( (unsigned int)v31 >= v14 )
          {
            do
            {
              v53 = v14 + 1;
              if ( ArgumentsAreAnArray )
              {
                v54 = (__int64)*v10++;
                v82[v14] = v54;
              }
              else
              {
                *v10 += 8;
                v82[v14] = *((_QWORD *)*v10 - 1);
              }
              ++v14;
            }
            while ( v53 <= (unsigned int)v31 );
            v75 = v10;
            v38 = 0LL;
            v73 = v53;
          }
          v55 = (wchar_t *)v82[v31];
          v56 = 0LL;
          ppszDestEnd = v55;
          if ( v11 )
          {
            if ( ArgumentsAreAnArray )
            {
              v56 = *v10;
              v57 = v14++;
              ++v10;
              v73 = v14;
              v75 = v10;
              v82[v57] = v56;
            }
            else
            {
              *v10 += 8;
              v56 = (va_list)*((_QWORD *)*v10 - 1);
            }
            if ( v11 > 1 )
            {
              v58 = v14;
              v59 = v14 + 1;
              v73 = v59;
              if ( ArgumentsAreAnArray )
              {
                v38 = *v10;
                v75 = v10 + 1;
              }
              else
              {
                *v10 += 8;
                v73 = v59;
                v38 = (va_list)*((_QWORD *)*v10 - 1);
              }
              v82[v58] = v38;
            }
          }
          v11 = 0;
          if ( RtlStringCchPrintfExW(v17, v18, &v78, 0LL, 0, &pszDest, v55, v56, v38) < 0 )
            return -2147483643;
          goto LABEL_77;
        }
      }
      if ( v41 == 83 )
      {
        v52 = 115;
        goto LABEL_59;
      }
      if ( v41 == 67 )
      {
        v52 = 99;
LABEL_59:
        *(_WORD *)v42 = v52;
      }
      v38 = 0LL;
      goto LABEL_61;
    }
    if ( v34 == 1 )
      goto LABEL_30;
    v39 = pszDest - aS_1[0];
    if ( pszDest == aS_1[0] )
    {
      v39 = v84[0] - aS_1[1];
      if ( v84[0] == aS_1[1] )
        v39 = v84[1] - aS_1[2];
    }
    if ( !v39 )
    {
LABEL_30:
      LODWORD(v70) = v30;
      v11 = 0;
      v40 = RtlStringCchPrintfExW(v17, v18, &v78, 0LL, 0, L"%%%u", v70);
    }
    else
    {
      LODWORD(v70) = v30;
      v11 = 0;
      v40 = RtlStringCchPrintfExW(v17, v18, &v78, 0LL, 0, L"%%%u!%s!", v70, v84);
    }
    if ( v40 < 0 )
      return -2147483643;
LABEL_77:
    v60 = v78 - v17;
    v18 -= v60;
    if ( v18 < 0 )
      return -2147483643;
    v19 = v74;
    v10 = v75;
    v24 = v80;
    v14 = v73;
    v16 = v79;
    v15 = MaximumWidth;
    v12 = IgnoreInserts;
    v17 += (int)v60;
LABEL_103:
    if ( !v24 )
      goto LABEL_104;
    v19 += v17 - v24;
LABEL_118:
    v74 = v19;
    if ( v15 && v15 != -1 && v19 >= v15 )
    {
      if ( v20 )
      {
        v61 = v20;
        do
        {
          if ( *v61 != 32 && *v61 != 9 )
            break;
          ++v61;
        }
        while ( v61 != v17 );
        if ( v20 > v16 )
        {
          do
          {
            v62 = *(v20 - 1);
            v63 = v20 - 1;
            if ( v62 != 32 && v62 != 9 )
              break;
            --v20;
          }
          while ( v63 > v16 );
        }
        v64 = v61 - v20;
        if ( (_DWORD)v64 == 1 )
        {
          if ( --v18 >= 0 )
            goto LABEL_135;
          return -2147483643;
        }
        if ( (unsigned int)v64 > 2 )
          v18 = v64 + v18 - 2;
LABEL_135:
        v65 = v17 - v61;
        v19 = v65;
        v74 = v65;
        memmove(v20 + 2, v61, 2 * v65);
        v10 = v75;
        v14 = v73;
        v16 = v79;
        v15 = MaximumWidth;
        *v20 = 13;
        v66 = v20 + 1;
        *v66 = 10;
        v67 = &v66[(unsigned int)v65];
      }
      else
      {
        v18 -= 2;
        if ( v18 < 0 )
          return -2147483643;
        *v17 = 13;
        v19 = 0;
        v67 = v17 + 1;
        v74 = 0;
        *v67 = 10;
      }
      v17 = v67 + 1;
      goto LABEL_3;
    }
  }
LABEL_142:
  if ( v18 < 1 )
    return -2147483643;
  v69 = v81;
  *v17 = 0;
  if ( v69 )
    *v69 = 2 * (((char *)v17 - (char *)v16 + 2) >> 1);
  return 0;
}
