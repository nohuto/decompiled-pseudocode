/*
 * XREFs of LdrpSearchResourceSection_U @ 0x180018D8C
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x1800173F0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpGetRcConfig @ 0x180018940 (LdrpGetRcConfig.c)
 *     RtlLoadString @ 0x180054F40 (RtlLoadString.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18005A6C4 (RtlpFileIsWin32WithRCManifest.c)
 *     RtlFindMessage @ 0x180068570 (RtlFindMessage.c)
 *     LdrFindResource_U @ 0x18006FBA0 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x18007FD00 (LdrFindResourceEx_U.c)
 *     LdrFindResourceDirectory_U @ 0x1800E0130 (LdrFindResourceDirectory_U.c)
 * Callees:
 *     LdrpResReportResourceAccessInternal @ 0x18000A590 (LdrpResReportResourceAccessInternal.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800136CC (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpSetThreadPreferredLangList @ 0x180013968 (LdrpSetThreadPreferredLangList.c)
 *     RtlULongAdd @ 0x180015754 (RtlULongAdd.c)
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1800173F0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrIsResItemExist @ 0x180018610 (LdrIsResItemExist.c)
 *     LdrpGetRcConfig @ 0x180018940 (LdrpGetRcConfig.c)
 *     ResourceEntryBinarySearch @ 0x180019A34 (ResourceEntryBinarySearch.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18001C4DC (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     LdrpResGetMappingSize @ 0x1800587E0 (LdrpResGetMappingSize.c)
 *     LdrpGetParentLangId @ 0x18007E8F4 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     _wcsicmp @ 0x18008E870 (_wcsicmp.c)
 *     RtlULongMult @ 0x18009C328 (RtlULongMult.c)
 *     NtQueryDefaultLocale @ 0x18009D130 (NtQueryDefaultLocale.c)
 */

__int64 __fastcall LdrpSearchResourceSection_U(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // esi
  __int64 *v7; // rdi
  __int64 v8; // r8
  __int64 v10; // rbx
  int v11; // edx
  __int64 result; // rax
  int v13; // ecx
  unsigned __int16 v14; // r14
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r9
  unsigned __int64 v20; // r14
  unsigned __int64 CurrentLocale_low; // rcx
  int v22; // r15d
  __int64 v23; // rdx
  int v24; // eax
  unsigned __int64 v25; // rax
  unsigned int v26; // r14d
  int v27; // eax
  __int64 Heap; // rax
  __int64 v29; // rdx
  int v30; // edi
  unsigned __int64 *v31; // rcx
  __int64 v32; // r15
  int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned __int16 v39; // ax
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // edi
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  struct _TEB *v49; // rax
  _DWORD *RcConfig; // rax
  __int64 v51; // r10
  __int16 v52; // r11
  unsigned int *v53; // rdx
  __int64 v54; // r14
  unsigned __int64 v55; // r8
  const wchar_t *v56; // rcx
  unsigned int v57; // ecx
  unsigned __int64 *v58; // rdi
  int ResourceFromAlternativeModule; // eax
  int v60; // eax
  int v61; // eax
  unsigned __int16 v62[2]; // [rsp+40h] [rbp-118h] BYREF
  bool v63; // [rsp+44h] [rbp-114h]
  int v64; // [rsp+48h] [rbp-110h]
  unsigned __int16 v65; // [rsp+4Ch] [rbp-10Ch]
  unsigned int v66; // [rsp+50h] [rbp-108h]
  __int64 v67; // [rsp+58h] [rbp-100h] BYREF
  unsigned int v68; // [rsp+60h] [rbp-F8h]
  __int64 v69; // [rsp+68h] [rbp-F0h]
  unsigned __int64 *v70; // [rsp+70h] [rbp-E8h]
  int v71; // [rsp+78h] [rbp-E0h]
  unsigned int v72; // [rsp+7Ch] [rbp-DCh]
  bool v73; // [rsp+80h] [rbp-D8h] BYREF
  int v74; // [rsp+84h] [rbp-D4h] BYREF
  unsigned __int64 v75; // [rsp+88h] [rbp-D0h]
  unsigned __int64 v76; // [rsp+90h] [rbp-C8h] BYREF
  unsigned __int64 v77; // [rsp+98h] [rbp-C0h] BYREF
  int v78; // [rsp+A0h] [rbp-B8h] BYREF
  int v79; // [rsp+A4h] [rbp-B4h] BYREF
  unsigned int v80; // [rsp+A8h] [rbp-B0h] BYREF
  unsigned int v81; // [rsp+ACh] [rbp-ACh] BYREF
  __int64 v82; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned __int64 v83; // [rsp+B8h] [rbp-A0h] BYREF
  unsigned __int64 v84; // [rsp+C0h] [rbp-98h]
  char v85; // [rsp+C8h] [rbp-90h] BYREF
  struct _TEB *v86; // [rsp+D0h] [rbp-88h]
  unsigned int *v87; // [rsp+D8h] [rbp-80h]
  __int64 *v88; // [rsp+E0h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-70h] BYREF
  const wchar_t *v90; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v91; // [rsp+100h] [rbp-58h]
  __int64 v92; // [rsp+108h] [rbp-50h]
  __int64 v93; // [rsp+110h] [rbp-48h]
  unsigned int v94; // [rsp+178h] [rbp+20h]

  v94 = a4;
  v5 = a4;
  v7 = (__int64 *)a2;
  v8 = a1;
  v69 = a1;
  v70 = a5;
  v10 = 0LL;
  v63 = 0;
  v82 = 0LL;
  v72 = 0;
  v11 = 3;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 )
    return 3221225713LL;
  if ( (a4 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return 3221225713LL;
  }
  else if ( a3 != 4 )
  {
    goto LABEL_10;
  }
  if ( (a4 & 0x41) == 0 )
    return 3221225713LL;
LABEL_10:
  v13 = a3;
  if ( a3 == 4 )
    v13 = 3;
  v66 = v13;
  v71 = v13;
  if ( (~(_BYTE)a4 & 0x10) != 0 && (unsigned int)(v13 - 1) <= 2 )
  {
    if ( v13 == 3 )
      v14 = *((_WORD *)v7 + 8);
    else
      v14 = 0;
    v65 = v14;
    v15 = *v7;
    if ( ((*v7 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v15 & 0xFFFFFFFFFFFF0000uLL) == 0 || (v16 = wcsicmp((const wchar_t *)v15, L"MUI"), v8 = v69, v16))
      || (~(_BYTE)v5 & 8) == 0
      || (v14 & 0xF3FF) != 0
      || v14 == 3072 )
    {
      v5 |= LdrIsResItemExist(v8, (const wchar_t **)v7, v8, v5);
      v94 = v5;
      if ( (v5 & 0x40000) != 0 )
      {
        result = 3221225610LL;
        v64 = -1073741686;
        if ( (v5 & 0x20000) == 0 )
        {
          v90 = (const wchar_t *)*v7;
          if ( v66 < 2 )
            v17 = 0LL;
          else
            v17 = v7[1];
          v91 = v17;
          if ( v66 == 3 )
            v10 = v7[2];
          v92 = v10;
          if ( a3 == 4 )
            v93 = v7[3];
          result = LdrpLoadResourceFromAlternativeModule(v69, (__int64)&v90, a3, v5, v70);
          v64 = result;
        }
        return result;
      }
    }
    else
    {
      v5 |= 0x10u;
      v94 = v5;
    }
  }
  LOBYTE(v11) = 1;
  v18 = RtlpImageDirectoryEntryToDataEx(v69, v11, 2, (unsigned int)&v85, (__int64)&v83);
  v20 = v83;
  if ( v18 < 0 )
    v20 = 0LL;
  v83 = v20;
  v84 = v20;
  if ( !v20 )
    return 3221225609LL;
  LOBYTE(v19) = 1;
  result = LdrpResGetMappingSize(v69, &v82, 256LL, v19);
  v64 = result;
  if ( (int)result >= 0 )
  {
    v77 = v20;
    v67 = 61166LL;
    v68 = 0;
    CurrentLocale_low = 0LL;
    v76 = 0LL;
    v75 = 0LL;
    v62[0] = 0;
    v65 = 0;
    v74 = 0;
    v22 = -1073741811;
    while ( 1 )
    {
      v23 = 3221225610LL;
      if ( !v20 )
        goto LABEL_50;
      v24 = v71;
      v23 = (unsigned int)--v71;
      if ( !v24 )
        goto LABEL_49;
      if ( !(_DWORD)v23 )
      {
        v25 = v75;
        if ( v66 == 3 )
          v25 = v20;
        v75 = v25;
      }
      if ( v75 )
      {
        v62[0] = 0;
        v65 = *(_WORD *)(a2 + 16);
        v63 = (v65 & 0x3FF) == 0;
        v26 = v66;
        goto LABEL_80;
      }
LABEL_158:
      result = RtlULongAdd(*(unsigned __int16 *)(v20 + 12), *(unsigned __int16 *)(v20 + 14), (int *)&v80);
      v64 = result;
      if ( (int)result < 0 )
        return result;
      result = RtlULongMult(v80, 8LL, &v81);
      v64 = result;
      if ( (int)result < 0 )
        return result;
      v53 = (unsigned int *)(v20 + 16);
      v87 = v53;
      v54 = v69;
      v55 = v82 + (v69 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (unsigned __int64)v53 + v81 > v55 )
        return 3221225595LL;
      v56 = (const wchar_t *)*v7;
      if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v53 += 2 * v51;
        v87 = v53;
        LOWORD(v51) = v52;
      }
      if ( !(_WORD)v51 )
      {
        v57 = v66;
        switch ( v66 - v71 )
        {
          case 1u:
            v22 = -1073741686;
            break;
          case 2u:
            v22 = -1073741685;
            v64 = -1073741685;
            goto LABEL_172;
          case 3u:
            v22 = -1073741308;
            v64 = -1073741308;
            return (unsigned int)v22;
        }
        v64 = v22;
        if ( (unsigned int)(v22 + 1073741686) <= 1 )
        {
LABEL_172:
          if ( (v5 & 0x2040000) == 0 && v66 == 3 )
          {
            v90 = *(const wchar_t **)a2;
            v91 = *(_QWORD *)(a2 + 8);
            v92 = *(_QWORD *)(a2 + 16);
            if ( a3 == 4 )
              v93 = *(_QWORD *)(a2 + 24);
            v58 = v70;
            ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(
                                              v69,
                                              (__int64)&v90,
                                              a3,
                                              v5 | 0x1000000,
                                              v70);
            v57 = v66;
            if ( ResourceFromAlternativeModule != -1073020927 )
            {
              if ( ResourceFromAlternativeModule != -1073020922 )
                v22 = ResourceFromAlternativeModule;
              v64 = v22;
            }
            goto LABEL_181;
          }
        }
        v58 = v70;
LABEL_181:
        if ( (unsigned int)(v22 + 1073741686) <= 1 )
        {
          v60 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v60 & 0x20000) != 0 && (v60 & 0x10) != 0 && v57 == 3 )
          {
            v90 = *(const wchar_t **)a2;
            v91 = *(_QWORD *)(a2 + 8);
            v92 = *(_QWORD *)(a2 + 16);
            if ( a3 == 4 )
              v93 = *(_QWORD *)(a2 + 24);
            v22 = LdrpLoadResourceFromAlternativeModule(v54, (__int64)&v90, a3, v5, v58);
            v64 = v22;
            if ( v22 >= 0 )
              LdrpResReportResourceAccessInternal(v54, 0LL, (__int64 *)&v90, a3);
          }
        }
        return (unsigned int)v22;
      }
      if ( v75 && (v5 & 0x20) != 0 )
        break;
      if ( !(unsigned __int8)ResourceEntryBinarySearch(
                               v69,
                               v82,
                               (unsigned __int16)v51,
                               v84,
                               (__int64)v53,
                               (__int64)v56,
                               (__int64)&v77,
                               (__int64)&v76) )
        return 3221225595LL;
      v88 = ++v7;
      v20 = v77;
      CurrentLocale_low = v76;
    }
    v20 = 0LL;
    v77 = 0LL;
    v67 = *v53;
    CurrentLocale_low = v84 + v53[1];
    if ( CurrentLocale_low > v55 )
      return 3221225595LL;
    v76 = v84 + v53[1];
LABEL_49:
    v23 = 3221225610LL;
LABEL_50:
    if ( CurrentLocale_low )
    {
      v27 = v5 & 2;
      if ( (v5 & 2) == 0 )
      {
        *v70 = CurrentLocale_low;
        if ( !NtCurrentTeb()->ResourceRetValue )
        {
          v86 = NtCurrentTeb();
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 24LL);
          v86->ResourceRetValue = (void *)Heap;
        }
        if ( NtCurrentTeb()->ResourceRetValue )
        {
          v29 = v69;
          *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v69;
          *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v76;
          *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v29;
        }
        v30 = 0;
        v64 = 0;
        v5 = v94;
        v26 = v66;
        goto LABEL_57;
      }
    }
    else
    {
      v27 = v5 & 2;
    }
    if ( v20 && v27 )
    {
      v31 = v70;
      *v70 = v20;
      v30 = 0;
      v64 = 0;
      v26 = v66;
      goto LABEL_58;
    }
    v26 = v66;
    if ( v66 - v71 == 1 )
    {
      v30 = -1073741686;
      v64 = -1073741686;
      goto LABEL_57;
    }
    if ( v66 - v71 == 2 )
    {
      v30 = -1073741685;
      v64 = -1073741685;
      goto LABEL_57;
    }
    if ( v66 - v71 != 3 )
    {
      v30 = -1073741811;
      v64 = -1073741811;
      goto LABEL_57;
    }
    v30 = -1073741308;
    v64 = -1073741308;
    if ( v75 )
    {
      v76 = 0LL;
      while ( 1 )
      {
LABEL_80:
        v34 = v68++;
        if ( v34 > 6 )
        {
          v44 = v34 - 7;
          if ( v44 )
          {
            v45 = v44 - 1;
            if ( !v45 )
            {
              v62[0] = v67;
              if ( (~v5 & 0x80000) == 0 )
              {
                if ( NtCurrentTeb() )
                {
                  v49 = NtCurrentTeb();
                  CurrentLocale_low = LOWORD(v49->CurrentLocale);
                  v62[0] = v49->CurrentLocale;
                }
                v5 = v94;
                goto LABEL_155;
              }
              goto LABEL_143;
            }
            v46 = v45 - 1;
            if ( v46 )
            {
              v47 = v46 - 1;
              if ( v47 )
              {
                v48 = v47 - 1;
                if ( v48 )
                {
                  if ( v48 != 1 )
                    return 3221225988LL;
LABEL_143:
                  v5 |= 0x20u;
                  v94 = v5;
                  goto LABEL_155;
                }
                v39 = 1033;
              }
              else
              {
                v62[0] = v67;
                v64 = NtQueryDefaultLocale(0LL, &v78, 1023LL);
                if ( v64 < 0 )
                  goto LABEL_155;
                v39 = v78;
                if ( v78 == v74 )
                  goto LABEL_155;
              }
            }
            else
            {
              v62[0] = v67;
              LOBYTE(CurrentLocale_low) = 1;
              v64 = NtQueryDefaultLocale(CurrentLocale_low, &v74, 1023LL);
              if ( v64 < 0 )
                goto LABEL_155;
              v39 = v74;
            }
          }
          else
          {
            if ( (~v5 & 0x80000) == 0 )
              goto LABEL_153;
            RcConfig = LdrpGetRcConfig(v69, v23, 0, 1);
            if ( !RcConfig )
              goto LABEL_153;
            if ( *RcConfig != -20054323 )
              goto LABEL_153;
            if ( !RcConfig[31] )
              goto LABEL_153;
            RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + (unsigned int)RcConfig[31]));
            if ( !RtlCultureNameToLCID(&DestinationString.Length, &v79) )
              goto LABEL_153;
            v39 = v79;
          }
        }
        else
        {
          if ( v34 == 6 )
          {
            v62[0] = v67;
            if ( (v5 & 0x20) != 0 )
              goto LABEL_155;
            v62[0] = 0;
            if ( LdrpSetThreadPreferredLangList() )
            {
              CurrentLocale_low = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
              if ( v72 >= (unsigned int)CurrentLocale_low )
                v62[0] = 0;
              else
                GetLCIDFromLangListNodeWithLICCheck(
                  CurrentLocale_low,
                  (__int64)NtCurrentTeb()->MergedPrefLanguages,
                  v72,
                  v62,
                  &v73);
              v5 = v94;
            }
            else
            {
              v62[0] = 0;
            }
            if ( v62[0] )
            {
              ++v72;
LABEL_128:
              --v68;
              goto LABEL_155;
            }
            goto LABEL_153;
          }
          if ( !v34 )
          {
            if ( !v65 )
            {
LABEL_98:
              v62[0] = 0;
              goto LABEL_155;
            }
            v39 = v67;
            if ( (v5 & 0x80000) != 0 )
              v39 = v65;
            goto LABEL_154;
          }
          v35 = v34 - 1;
          if ( !v35 )
          {
            v40 = ~v5;
            if ( (~v5 & 0x80000) != 0 && (v40 & 0x20000) != 0 && (v40 & 0x10) != 0 )
            {
              v90 = *(const wchar_t **)a2;
              if ( v26 < 2 )
                v41 = 0LL;
              else
                v41 = *(_QWORD *)(a2 + 8);
              v91 = v41;
              if ( v26 == 3 )
                v42 = *(_QWORD *)(a2 + 16);
              else
                v42 = 0LL;
              v92 = v42;
              if ( a3 == 4 )
                v93 = *(_QWORD *)(a2 + 24);
              v43 = LdrpLoadResourceFromAlternativeModule(v69, (__int64)&v90, a3, v5, v70);
              v64 = v43;
              if ( v43 >= 0 )
              {
                LdrpResReportResourceAccessInternal(v69, 0LL, (__int64 *)&v90, a3);
                return (unsigned int)v43;
              }
            }
LABEL_153:
            v39 = v67;
            goto LABEL_154;
          }
          v36 = v35 - 1;
          if ( !v36 )
          {
            v39 = v65;
            if ( v63 )
              v39 = v67;
            goto LABEL_154;
          }
          v37 = v36 - 1;
          if ( !v37 )
          {
            if ( (v5 & 4) != 0 )
              return 3221225988LL;
            if ( !v63 )
            {
              if ( (int)LdrpGetParentLangId(v62[0], v62, 1023LL) < 0 )
                goto LABEL_98;
              if ( !v62[0] )
                goto LABEL_155;
              goto LABEL_128;
            }
            goto LABEL_153;
          }
          v38 = v37 - 1;
          if ( v38 )
          {
            if ( v38 != 1 )
              return 3221225988LL;
            if ( !v63 )
              return 3221225988LL;
            goto LABEL_153;
          }
          if ( v63 )
            goto LABEL_153;
          v39 = v65 & 0x3FF;
        }
LABEL_154:
        v62[0] = v39;
LABEL_155:
        if ( (~(_BYTE)v5 & 0x20) == 0 || v62[0] != v67 )
        {
          v67 = v62[0];
          v7 = &v67;
          v88 = &v67;
          v20 = v75;
          v77 = v75;
          goto LABEL_158;
        }
      }
    }
LABEL_57:
    v31 = v70;
LABEL_58:
    if ( (v5 & 0x2040000) != 0 || (unsigned int)(v30 + 1073741686) > 1 || v26 != 3 )
    {
      v32 = v69;
    }
    else
    {
      v90 = *(const wchar_t **)a2;
      v91 = *(_QWORD *)(a2 + 8);
      v92 = *(_QWORD *)(a2 + 16);
      if ( a3 == 4 )
        v93 = *(_QWORD *)(a2 + 24);
      v32 = v69;
      v33 = LdrpLoadResourceFromAlternativeModule(v69, (__int64)&v90, a3, v5 | 0x1000000, v31);
      if ( v33 != -1073020927 )
      {
        if ( v33 != -1073020922 )
          v30 = v33;
        v64 = v30;
      }
    }
    if ( (unsigned int)(v30 + 1073741686) <= 1 )
    {
      v61 = ~v5;
      if ( (~v5 & 0x80000) != 0 && (v61 & 0x20000) != 0 && (v61 & 0x10) != 0 && v26 == 3 )
      {
        v90 = *(const wchar_t **)a2;
        v91 = *(_QWORD *)(a2 + 8);
        v92 = *(_QWORD *)(a2 + 16);
        if ( a3 == 4 )
          v93 = *(_QWORD *)(a2 + 24);
        v30 = LdrpLoadResourceFromAlternativeModule(v32, (__int64)&v90, a3, v5, v70);
        v64 = v30;
        if ( v30 >= 0 )
          LdrpResReportResourceAccessInternal(v32, 0LL, (__int64 *)&v90, a3);
      }
    }
    return (unsigned int)v30;
  }
  return result;
}
