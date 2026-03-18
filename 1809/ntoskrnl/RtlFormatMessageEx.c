/*
 * XREFs of RtlFormatMessageEx @ 0x1408913B4
 * Callers:
 *     PiGetDeviceRegProperty @ 0x140587C10 (PiGetDeviceRegProperty.c)
 *     PiGetDeviceRegistryProperty @ 0x140824738 (PiGetDeviceRegistryProperty.c)
 *     RtlFormatMessage @ 0x140891360 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x140007504 (RtlStringCbCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x140015EF4 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 */

__int64 __fastcall RtlFormatMessageEx(
        __int16 *a1,
        unsigned int a2,
        char a3,
        char a4,
        char a5,
        __int64 *a6,
        NTSTRSAFE_PWSTR a7,
        unsigned int a8,
        __int64 a9)
{
  __int64 *v9; // r10
  unsigned int v10; // r12d
  char v11; // r15
  unsigned int v13; // r11d
  unsigned int v14; // r9d
  NTSTRSAFE_PWSTR v15; // r8
  NTSTRSAFE_PWSTR v16; // rbx
  signed int v17; // r14d
  unsigned int v18; // esi
  NTSTRSAFE_PWSTR v19; // r13
  __int16 v20; // ax
  NTSTRSAFE_PWSTR v21; // rcx
  wchar_t v22; // cx
  NTSTRSAFE_PWSTR v23; // rdx
  unsigned __int16 v24; // dx
  __int16 v25; // ax
  int v26; // r15d
  int v27; // eax
  unsigned __int16 v28; // dx
  int v29; // esi
  __int64 v30; // r15
  __int16 *v31; // rdi
  NTSTRSAFE_PWSTR v32; // r8
  char v33; // r9
  __int16 v34; // cx
  char *v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // rcx
  int v38; // ecx
  NTSTATUS v39; // eax
  __int16 v40; // dx
  char *v41; // rcx
  unsigned __int16 v42; // ax
  int v43; // r9d
  __int64 v44; // rdx
  signed __int64 v45; // r8
  __int16 v46; // ax
  unsigned __int16 v47; // ax
  signed __int64 v48; // r8
  __int16 v49; // ax
  char *v50; // rax
  __int16 v51; // ax
  unsigned int v52; // r8d
  __int64 v53; // rax
  wchar_t *v54; // r9
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned int v58; // r11d
  __int64 v59; // rax
  NTSTRSAFE_PWSTR v60; // rdx
  __int16 v61; // ax
  NTSTRSAFE_PWSTR v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rbx
  _WORD *v65; // r13
  _WORD *v66; // rbx
  _DWORD *v68; // rdx
  __int64 v69; // [rsp+30h] [rbp-D0h]
  unsigned int v72; // [rsp+54h] [rbp-ACh]
  unsigned int v73; // [rsp+58h] [rbp-A8h]
  __int64 v74; // [rsp+60h] [rbp-A0h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+70h] [rbp-90h] BYREF
  NTSTRSAFE_PWSTR v77; // [rsp+78h] [rbp-88h] BYREF
  NTSTRSAFE_PWSTR v78; // [rsp+80h] [rbp-80h]
  NTSTRSAFE_PWSTR v79; // [rsp+88h] [rbp-78h]
  __int64 v80; // [rsp+90h] [rbp-70h]
  _QWORD v81[200]; // [rsp+A0h] [rbp-60h]
  wchar_t pszDest; // [rsp+6E0h] [rbp+5E0h] BYREF
  _WORD v83[30]; // [rsp+6E2h] [rbp+5E2h] BYREF
  char v84; // [rsp+71Eh] [rbp+61Eh] BYREF

  v9 = a6;
  v10 = 0;
  v11 = a3;
  v13 = 0;
  v14 = a2;
  v15 = a7;
  v80 = a9;
  v16 = a7;
  v74 = (__int64)a6;
  v78 = a7;
  v72 = 0;
  v17 = a8 >> 1;
LABEL_2:
  v18 = 0;
  v73 = 0;
LABEL_3:
  v19 = 0LL;
  while ( 1 )
  {
    v20 = *a1;
    v21 = v16;
    if ( !*a1 )
      break;
    ++a1;
    if ( v20 != 37 )
    {
      if ( v20 == 13 )
      {
        if ( *a1 != 10 )
          goto LABEL_112;
      }
      else
      {
        if ( v20 != 10 )
        {
LABEL_114:
          if ( --v17 < 0 )
            return 2147483653LL;
          *v16 = v20;
          ++v18;
          ++v16;
          if ( v20 != 32 )
            v21 = v19;
          v19 = v21;
          goto LABEL_118;
        }
        if ( *a1 != 13 )
        {
LABEL_112:
          if ( !v14 )
          {
            v17 -= 2;
            if ( v17 < 0 )
              return 2147483653LL;
            *(_DWORD *)v16 = 655373;
            v16 += 2;
            goto LABEL_2;
          }
          v19 = v16;
          v20 = 32;
          goto LABEL_114;
        }
      }
      ++a1;
      goto LABEL_112;
    }
    v22 = *a1;
    v23 = v16;
    v79 = v16;
    if ( (unsigned __int16)(v22 - 49) > 8u )
    {
      switch ( v22 )
      {
        case 0x30u:
          goto LABEL_142;
        case 0u:
          return 3221225485LL;
        case 0x72u:
          if ( --v17 < 0 )
            return 2147483653LL;
          *v16++ = 13;
          ++a1;
LABEL_104:
          v19 = 0LL;
          v18 = 0;
          goto LABEL_118;
        case 0x6Eu:
          v17 -= 2;
          if ( v17 < 0 )
            return 2147483653LL;
          *(_DWORD *)v16 = 655373;
          v16 += 2;
          ++a1;
          goto LABEL_104;
        case 0x74u:
          if ( --v17 < 0 )
            return 2147483653LL;
          if ( (v18 & 7) != 0 )
            v18 = (v18 + 7) & 0xFFFFFFF8;
          else
            v18 += 8;
          v19 = v16;
          *v16 = 9;
          goto LABEL_101;
        case 0x62u:
          if ( --v17 < 0 )
            return 2147483653LL;
          v19 = v16;
          *v16 = 32;
          goto LABEL_101;
      }
      if ( v11 )
      {
        v17 -= 2;
        if ( v17 < 0 )
          return 2147483653LL;
        *v16 = 37;
        v16[1] = *a1;
        v16 += 2;
      }
      else
      {
        if ( --v17 < 0 )
          return 2147483653LL;
        *v16 = v22;
LABEL_101:
        ++v16;
      }
      ++a1;
      goto LABEL_103;
    }
    v24 = a1[1];
    ++a1;
    v25 = v24;
    v26 = v22 - 48;
    if ( v24 >= 0x30u && v24 <= 0x39u )
    {
      v27 = v24;
      v28 = a1[1];
      ++a1;
      v26 = v27 + 2 * (5 * v26 - 24);
      v25 = v28;
      if ( v28 >= 0x30u && v28 <= 0x39u )
      {
        ++a1;
        v26 = v28 + 2 * (5 * v26 - 24);
        v25 = *a1;
        if ( (unsigned __int16)*a1 >= 0x30u && (unsigned __int16)*a1 <= 0x39u )
          return 3221225485LL;
      }
    }
    v29 = v26;
    v30 = (unsigned int)(v26 - 1);
    if ( v25 == 33 )
    {
      v31 = a1 + 1;
      v32 = v83;
      ppszDestEnd = v83;
      pszDest = 37;
      v33 = 0;
      v34 = *v31;
      if ( *v31 != 33 )
      {
        v35 = (char *)v83;
        while ( v34 )
        {
          if ( v35 >= &v84 )
            break;
          if ( v34 == 42 )
          {
            v36 = v10;
            v34 = 42;
            ++v10;
            if ( v36 > 1 )
              break;
          }
          ++v31;
          *v32 = v34;
          v32 = (NTSTRSAFE_PWSTR)(v35 + 2);
          ppszDestEnd = (NTSTRSAFE_PWSTR)(v35 + 2);
          v35 += 2;
          v34 = *v31;
          if ( *v31 == 33 )
            goto LABEL_21;
        }
        return 3221225485LL;
      }
LABEL_21:
      a1 = v31 + 1;
      v37 = 0LL;
      *v32 = 0;
    }
    else
    {
      RtlStringCbCopyExW(&pszDest, 0x40uLL, L"%s", &ppszDestEnd, 0LL, 0);
      v32 = ppszDestEnd;
      v33 = 1;
      v9 = (__int64 *)v74;
      v37 = 0LL;
      v13 = v72;
    }
    if ( !a3 )
    {
      if ( !v9 || v10 + (unsigned int)v30 >= 0xC8 )
        return 3221225485LL;
      if ( !a4 )
        goto LABEL_61;
      v40 = *(v32 - 1);
      v41 = (char *)(v32 - 1);
      if ( v40 == 99 )
      {
        v42 = *(v32 - 2) - 104;
        if ( v42 > 0xFu || (v43 = 32785, !_bittest(&v43, v42)) )
        {
          v44 = 3LL;
          v45 = (char *)L"hc" - v41;
          do
          {
            if ( v44 == -2147483643 )
              break;
            v46 = *(_WORD *)&v41[v45];
            if ( !v46 )
              break;
            *(_WORD *)v41 = v46;
            v41 += 2;
            --v44;
          }
          while ( v44 );
          goto LABEL_52;
        }
      }
      else
      {
        v43 = 32785;
      }
      if ( v40 == 115 )
      {
        v47 = *(v32 - 2) - 104;
        if ( v47 > 0xFu || !_bittest(&v43, v47) )
        {
          v44 = 3LL;
          v48 = (char *)L"hs" - v41;
          do
          {
            if ( v44 == -2147483643 )
              break;
            v49 = *(_WORD *)&v41[v48];
            if ( !v49 )
              break;
            *(_WORD *)v41 = v49;
            v41 += 2;
            --v44;
          }
          while ( v44 );
LABEL_52:
          v50 = v41 - 2;
          if ( v44 )
            v50 = v41;
          v37 = 0LL;
          *(_WORD *)v50 = 0;
LABEL_61:
          if ( (unsigned int)v30 >= v13 )
          {
            do
            {
              v52 = v13 + 1;
              if ( a5 )
              {
                v53 = *v9++;
                v81[v13] = v53;
              }
              else
              {
                *v9 += 8LL;
                v81[v13] = *(_QWORD *)(*v9 - 8);
              }
              ++v13;
            }
            while ( v52 <= (unsigned int)v30 );
            v74 = (__int64)v9;
            v37 = 0LL;
            v72 = v52;
          }
          v54 = (wchar_t *)v81[v30];
          v55 = 0LL;
          ppszDestEnd = v54;
          if ( v10 )
          {
            if ( a5 )
            {
              v55 = *v9;
              v56 = v13++;
              ++v9;
              v72 = v13;
              v74 = (__int64)v9;
              v81[v56] = v55;
            }
            else
            {
              *v9 += 8LL;
              v55 = *(_QWORD *)(*v9 - 8);
            }
            if ( v10 > 1 )
            {
              v57 = v13;
              v58 = v13 + 1;
              v72 = v58;
              if ( a5 )
              {
                v37 = *v9;
                v74 = (__int64)(v9 + 1);
              }
              else
              {
                *v9 += 8LL;
                v72 = v58;
                v37 = *(_QWORD *)(*v9 - 8);
              }
              v81[v57] = v37;
            }
          }
          v10 = 0;
          if ( RtlStringCchPrintfExW(v16, v17, &v77, 0LL, 0, &pszDest, v54, v55, v37) < 0 )
            return 2147483653LL;
          goto LABEL_77;
        }
      }
      if ( v40 == 83 )
      {
        v51 = 115;
        goto LABEL_59;
      }
      if ( v40 == 67 )
      {
        v51 = 99;
LABEL_59:
        *(_WORD *)v41 = v51;
      }
      v37 = 0LL;
      goto LABEL_61;
    }
    if ( v33 == 1 )
      goto LABEL_30;
    v38 = pszDest - aS_1[0];
    if ( pszDest == aS_1[0] )
    {
      v38 = v83[0] - aS_1[1];
      if ( v83[0] == aS_1[1] )
        v38 = v83[1] - aS_1[2];
    }
    if ( !v38 )
    {
LABEL_30:
      LODWORD(v69) = v29;
      v10 = 0;
      v39 = RtlStringCchPrintfExW(v16, v17, &v77, 0LL, 0, L"%%%u", v69);
    }
    else
    {
      LODWORD(v69) = v29;
      v10 = 0;
      v39 = RtlStringCchPrintfExW(v16, v17, &v77, 0LL, 0, L"%%%u!%s!", v69, v83);
    }
    if ( v39 < 0 )
      return 2147483653LL;
LABEL_77:
    v59 = v77 - v16;
    v17 -= v59;
    if ( v17 < 0 )
      return 2147483653LL;
    v18 = v73;
    v9 = (__int64 *)v74;
    v23 = v79;
    v13 = v72;
    v15 = v78;
    v14 = a2;
    v11 = a3;
    v16 += (int)v59;
LABEL_103:
    if ( !v23 )
      goto LABEL_104;
    v18 += v16 - v23;
LABEL_118:
    v73 = v18;
    if ( v14 && v14 != -1 && v18 >= v14 )
    {
      if ( v19 )
      {
        v60 = v19;
        do
        {
          if ( *v60 != 32 && *v60 != 9 )
            break;
          ++v60;
        }
        while ( v60 != v16 );
        if ( v19 > v15 )
        {
          do
          {
            v61 = *(v19 - 1);
            v62 = v19 - 1;
            if ( v61 != 32 && v61 != 9 )
              break;
            --v19;
          }
          while ( v62 > v15 );
        }
        v63 = v60 - v19;
        if ( (_DWORD)v63 == 1 )
        {
          if ( --v17 >= 0 )
            goto LABEL_135;
          return 2147483653LL;
        }
        if ( (unsigned int)v63 > 2 )
          v17 = v63 + v17 - 2;
LABEL_135:
        v64 = v16 - v60;
        v18 = v64;
        v73 = v64;
        memmove(v19 + 2, v60, 2 * v64);
        v9 = (__int64 *)v74;
        v13 = v72;
        v15 = v78;
        v14 = a2;
        *v19 = 13;
        v65 = v19 + 1;
        *v65 = 10;
        v66 = &v65[(unsigned int)v64];
      }
      else
      {
        v17 -= 2;
        if ( v17 < 0 )
          return 2147483653LL;
        *v16 = 13;
        v18 = 0;
        v66 = v16 + 1;
        v73 = 0;
        *v66 = 10;
      }
      v16 = v66 + 1;
      goto LABEL_3;
    }
  }
LABEL_142:
  if ( v17 < 1 )
    return 2147483653LL;
  v68 = (_DWORD *)v80;
  *v16 = 0;
  if ( v68 )
    *v68 = 2 * (((char *)v16 - (char *)v15 + 2) >> 1);
  return 0LL;
}
