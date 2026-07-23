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

__int64 __fastcall LdrpSearchResourceSection_U(void *a1, __int64 a2, DWORD a3, unsigned int a4, __int64 a5)
{
  unsigned int v5; // esi
  __int64 *v7; // rdi
  PVOID v8; // r8
  __int64 v10; // rbx
  __int64 result; // rax
  int v12; // ecx
  unsigned __int16 v13; // r14
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // r14
  unsigned __int64 v20; // rcx
  int v21; // r15d
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // r14d
  int v26; // eax
  PVOID Heap; // rax
  PVOID v28; // rdx
  int v29; // edi
  _QWORD *v30; // rcx
  PVOID v31; // r15
  int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned __int16 v38; // ax
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // edi
  __int64 v43; // rcx
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  _DWORD *RcConfig; // rax
  __int64 v50; // r10
  __int16 v51; // r11
  unsigned int *v52; // rdx
  PVOID v53; // r14
  unsigned __int64 v54; // r8
  const wchar_t *v55; // rcx
  unsigned int v56; // ecx
  _QWORD *v57; // rdi
  int ResourceFromAlternativeModule; // eax
  int v59; // eax
  int v60; // eax
  unsigned __int16 v61[2]; // [rsp+40h] [rbp-118h] BYREF
  bool v62; // [rsp+44h] [rbp-114h]
  NTSTATUS v63; // [rsp+48h] [rbp-110h]
  unsigned __int16 v64; // [rsp+4Ch] [rbp-10Ch]
  unsigned int v65; // [rsp+50h] [rbp-108h]
  __int64 v66; // [rsp+58h] [rbp-100h] BYREF
  unsigned int v67; // [rsp+60h] [rbp-F8h]
  PVOID DllHandle; // [rsp+68h] [rbp-F0h]
  __int64 v69; // [rsp+70h] [rbp-E8h]
  int v70; // [rsp+78h] [rbp-E0h]
  unsigned int v71; // [rsp+7Ch] [rbp-DCh]
  bool v72; // [rsp+80h] [rbp-D8h] BYREF
  DWORD v73; // [rsp+84h] [rbp-D4h] BYREF
  __int64 v74; // [rsp+88h] [rbp-D0h]
  __int64 v75; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v76; // [rsp+98h] [rbp-C0h] BYREF
  DWORD DefaultLocaleId; // [rsp+A0h] [rbp-B8h] BYREF
  DWORD Lcid; // [rsp+A4h] [rbp-B4h] BYREF
  unsigned int v79; // [rsp+A8h] [rbp-B0h] BYREF
  unsigned int v80; // [rsp+ACh] [rbp-ACh] BYREF
  __int64 v81; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v82; // [rsp+B8h] [rbp-A0h] BYREF
  __int64 v83; // [rsp+C0h] [rbp-98h]
  struct _TEB *v84; // [rsp+D0h] [rbp-88h]
  unsigned int *v85; // [rsp+D8h] [rbp-80h]
  __int64 *v86; // [rsp+E0h] [rbp-78h]
  _UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-70h] BYREF
  const wchar_t *v88; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v89; // [rsp+100h] [rbp-58h]
  __int64 v90; // [rsp+108h] [rbp-50h]
  __int64 v91; // [rsp+110h] [rbp-48h]
  unsigned int v92; // [rsp+178h] [rbp+20h]

  v92 = a4;
  v5 = a4;
  v7 = (__int64 *)a2;
  v8 = a1;
  DllHandle = a1;
  v69 = a5;
  v10 = 0LL;
  v62 = 0;
  v81 = 0LL;
  v71 = 0;
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
  v12 = a3;
  if ( a3 == 4 )
    v12 = 3;
  v65 = v12;
  v70 = v12;
  if ( (~(_BYTE)a4 & 0x10) != 0 && (unsigned int)(v12 - 1) <= 2 )
  {
    if ( v12 == 3 )
      v13 = *(_WORD *)(a2 + 16);
    else
      v13 = 0;
    v64 = v13;
    v14 = *(_QWORD *)a2;
    if ( ((*(_QWORD *)a2 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v14 & 0xFFFFFFFFFFFF0000uLL) == 0 || (v15 = wcsicmp((const wchar_t *)v14, L"MUI"), v8 = DllHandle, v15))
      || (~(_BYTE)v5 & 8) == 0
      || (v13 & 0xF3FF) != 0
      || v13 == 3072 )
    {
      v5 |= LdrIsResItemExist(v8, (const wchar_t **)v7, (__int64)v8, v5);
      v92 = v5;
      if ( (v5 & 0x40000) != 0 )
      {
        result = 3221225610LL;
        v63 = -1073741686;
        if ( (v5 & 0x20000) == 0 )
        {
          v88 = (const wchar_t *)*v7;
          if ( v65 < 2 )
            v16 = 0LL;
          else
            v16 = v7[1];
          v89 = v16;
          if ( v65 == 3 )
            v10 = v7[2];
          v90 = v10;
          if ( a3 == 4 )
            v91 = v7[3];
          result = LdrpLoadResourceFromAlternativeModule(DllHandle, (__int64)&v88, a3, v5, (_QWORD *)v69);
          v63 = result;
        }
        return result;
      }
    }
    else
    {
      v5 |= 0x10u;
      v92 = v5;
    }
  }
  v17 = RtlpImageDirectoryEntryToDataEx((int)DllHandle, (__int64)&v82);
  v19 = v82;
  if ( v17 < 0 )
    v19 = 0LL;
  v82 = v19;
  v83 = v19;
  if ( !v19 )
    return 3221225609LL;
  LOBYTE(v18) = 1;
  result = LdrpResGetMappingSize(DllHandle, &v81, 256LL, v18);
  v63 = result;
  if ( (int)result >= 0 )
  {
    v76 = v19;
    v66 = 61166LL;
    v67 = 0;
    v20 = 0LL;
    v75 = 0LL;
    v74 = 0LL;
    v61[0] = 0;
    v64 = 0;
    v73 = 0;
    v21 = -1073741811;
    while ( 1 )
    {
      v22 = 3221225610LL;
      if ( !v19 )
        goto LABEL_50;
      v23 = v70;
      v22 = (unsigned int)--v70;
      if ( !v23 )
        goto LABEL_49;
      if ( !(_DWORD)v22 )
      {
        v24 = v74;
        if ( v65 == 3 )
          v24 = v19;
        v74 = v24;
      }
      if ( v74 )
      {
        v61[0] = 0;
        v64 = *(_WORD *)(a2 + 16);
        v62 = (v64 & 0x3FF) == 0;
        v25 = v65;
        goto LABEL_80;
      }
LABEL_158:
      result = RtlULongAdd(*(unsigned __int16 *)(v19 + 12), *(unsigned __int16 *)(v19 + 14), (int *)&v79);
      v63 = result;
      if ( (int)result < 0 )
        return result;
      result = RtlULongMult(v79, 8LL, &v80);
      v63 = result;
      if ( (int)result < 0 )
        return result;
      v52 = (unsigned int *)(v19 + 16);
      v85 = v52;
      v53 = DllHandle;
      v54 = v81 + ((unsigned __int64)DllHandle & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (unsigned __int64)v52 + v80 > v54 )
        return 3221225595LL;
      v55 = (const wchar_t *)*v7;
      if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v52 += 2 * v50;
        v85 = v52;
        LOWORD(v50) = v51;
      }
      if ( !(_WORD)v50 )
      {
        v56 = v65;
        switch ( v65 - v70 )
        {
          case 1u:
            v21 = -1073741686;
            break;
          case 2u:
            v21 = -1073741685;
            v63 = -1073741685;
            goto LABEL_172;
          case 3u:
            v21 = -1073741308;
            v63 = -1073741308;
            return (unsigned int)v21;
        }
        v63 = v21;
        if ( (unsigned int)(v21 + 1073741686) <= 1 )
        {
LABEL_172:
          if ( (v5 & 0x2040000) == 0 && v65 == 3 )
          {
            v88 = *(const wchar_t **)a2;
            v89 = *(_QWORD *)(a2 + 8);
            v90 = *(_QWORD *)(a2 + 16);
            if ( a3 == 4 )
              v91 = *(_QWORD *)(a2 + 24);
            v57 = (_QWORD *)v69;
            ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(
                                              DllHandle,
                                              (__int64)&v88,
                                              a3,
                                              v5 | 0x1000000,
                                              (_QWORD *)v69);
            v56 = v65;
            if ( ResourceFromAlternativeModule != -1073020927 )
            {
              if ( ResourceFromAlternativeModule != -1073020922 )
                v21 = ResourceFromAlternativeModule;
              v63 = v21;
            }
            goto LABEL_181;
          }
        }
        v57 = (_QWORD *)v69;
LABEL_181:
        if ( (unsigned int)(v21 + 1073741686) <= 1 )
        {
          v59 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v59 & 0x20000) != 0 && (v59 & 0x10) != 0 && v56 == 3 )
          {
            v88 = *(const wchar_t **)a2;
            v89 = *(_QWORD *)(a2 + 8);
            v90 = *(_QWORD *)(a2 + 16);
            if ( a3 == 4 )
              v91 = *(_QWORD *)(a2 + 24);
            v21 = LdrpLoadResourceFromAlternativeModule(v53, (__int64)&v88, a3, v5, v57);
            v63 = v21;
            if ( v21 >= 0 )
              LdrpResReportResourceAccessInternal(v53, 0LL, (__int64 *)&v88, a3);
          }
        }
        return (unsigned int)v21;
      }
      if ( v74 && (v5 & 0x20) != 0 )
        break;
      if ( !(unsigned __int8)ResourceEntryBinarySearch(
                               (_DWORD)DllHandle,
                               v81,
                               (unsigned __int16)v50,
                               v83,
                               (__int64)v52,
                               (__int64)v55,
                               (__int64)&v76,
                               (__int64)&v75) )
        return 3221225595LL;
      v86 = ++v7;
      v19 = v76;
      v20 = v75;
    }
    v19 = 0LL;
    v76 = 0LL;
    v66 = *v52;
    v20 = v83 + v52[1];
    if ( v20 > v54 )
      return 3221225595LL;
    v75 = v83 + v52[1];
LABEL_49:
    v22 = 3221225610LL;
LABEL_50:
    if ( v20 )
    {
      v26 = v5 & 2;
      if ( (v5 & 2) == 0 )
      {
        *(_QWORD *)v69 = v20;
        if ( !NtCurrentTeb()->ResourceRetValue )
        {
          v84 = NtCurrentTeb();
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
          v84->ResourceRetValue = Heap;
        }
        if ( NtCurrentTeb()->ResourceRetValue )
        {
          v28 = DllHandle;
          *(_QWORD *)NtCurrentTeb()->ResourceRetValue = DllHandle;
          *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v75;
          *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v28;
        }
        v29 = 0;
        v63 = 0;
        v5 = v92;
        v25 = v65;
        goto LABEL_57;
      }
    }
    else
    {
      v26 = v5 & 2;
    }
    if ( v19 && v26 )
    {
      v30 = (_QWORD *)v69;
      *(_QWORD *)v69 = v19;
      v29 = 0;
      v63 = 0;
      v25 = v65;
      goto LABEL_58;
    }
    v25 = v65;
    if ( v65 - v70 == 1 )
    {
      v29 = -1073741686;
      v63 = -1073741686;
      goto LABEL_57;
    }
    if ( v65 - v70 == 2 )
    {
      v29 = -1073741685;
      v63 = -1073741685;
      goto LABEL_57;
    }
    if ( v65 - v70 != 3 )
    {
      v29 = -1073741811;
      v63 = -1073741811;
      goto LABEL_57;
    }
    v29 = -1073741308;
    v63 = -1073741308;
    if ( v74 )
    {
      v75 = 0LL;
      while ( 1 )
      {
LABEL_80:
        v33 = v67++;
        if ( v33 > 6 )
        {
          v44 = v33 - 7;
          if ( v44 )
          {
            v45 = v44 - 1;
            if ( !v45 )
            {
              v61[0] = v66;
              if ( (~v5 & 0x80000) == 0 )
              {
                if ( NtCurrentTeb() )
                  v61[0] = NtCurrentTeb()->CurrentLocale;
                v5 = v92;
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
                  v92 = v5;
                  goto LABEL_155;
                }
                v38 = 1033;
              }
              else
              {
                v61[0] = v66;
                v63 = NtQueryDefaultLocale(0, &DefaultLocaleId);
                if ( v63 < 0 )
                  goto LABEL_155;
                v38 = DefaultLocaleId;
                if ( DefaultLocaleId == v73 )
                  goto LABEL_155;
              }
            }
            else
            {
              v61[0] = v66;
              v63 = NtQueryDefaultLocale(1u, &v73);
              if ( v63 < 0 )
                goto LABEL_155;
              v38 = v73;
            }
          }
          else
          {
            if ( (~v5 & 0x80000) == 0 )
              goto LABEL_153;
            RcConfig = LdrpGetRcConfig(DllHandle, v22, 0, 1);
            if ( !RcConfig )
              goto LABEL_153;
            if ( *RcConfig != -20054323 )
              goto LABEL_153;
            if ( !RcConfig[31] )
              goto LABEL_153;
            RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + (unsigned int)RcConfig[31]));
            if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
              goto LABEL_153;
            v38 = Lcid;
          }
        }
        else
        {
          if ( v33 == 6 )
          {
            v61[0] = v66;
            if ( (v5 & 0x20) != 0 )
              goto LABEL_155;
            v61[0] = 0;
            if ( LdrpSetThreadPreferredLangList() )
            {
              v43 = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
              if ( v71 >= (unsigned int)v43 )
                v61[0] = 0;
              else
                GetLCIDFromLangListNodeWithLICCheck(v43, (__int64)NtCurrentTeb()->MergedPrefLanguages, v71, v61, &v72);
              v5 = v92;
            }
            else
            {
              v61[0] = 0;
            }
            if ( v61[0] )
            {
              ++v71;
LABEL_128:
              --v67;
              goto LABEL_155;
            }
            goto LABEL_153;
          }
          if ( !v33 )
          {
            if ( !v64 )
            {
LABEL_98:
              v61[0] = 0;
              goto LABEL_155;
            }
            v38 = v66;
            if ( (v5 & 0x80000) != 0 )
              v38 = v64;
            goto LABEL_154;
          }
          v34 = v33 - 1;
          if ( !v34 )
          {
            v39 = ~v5;
            if ( (~v5 & 0x80000) != 0 && (v39 & 0x20000) != 0 && (v39 & 0x10) != 0 )
            {
              v88 = *(const wchar_t **)a2;
              if ( v25 < 2 )
                v40 = 0LL;
              else
                v40 = *(_QWORD *)(a2 + 8);
              v89 = v40;
              if ( v25 == 3 )
                v41 = *(_QWORD *)(a2 + 16);
              else
                v41 = 0LL;
              v90 = v41;
              if ( a3 == 4 )
                v91 = *(_QWORD *)(a2 + 24);
              v42 = LdrpLoadResourceFromAlternativeModule(DllHandle, (__int64)&v88, a3, v5, (_QWORD *)v69);
              v63 = v42;
              if ( v42 >= 0 )
              {
                LdrpResReportResourceAccessInternal(DllHandle, 0LL, (__int64 *)&v88, a3);
                return (unsigned int)v42;
              }
            }
LABEL_153:
            v38 = v66;
            goto LABEL_154;
          }
          v35 = v34 - 1;
          if ( !v35 )
          {
            v38 = v64;
            if ( v62 )
              v38 = v66;
            goto LABEL_154;
          }
          v36 = v35 - 1;
          if ( !v36 )
          {
            if ( (v5 & 4) != 0 )
              return 3221225988LL;
            if ( !v62 )
            {
              if ( (int)LdrpGetParentLangId(v61[0], v61, 1023LL) < 0 )
                goto LABEL_98;
              if ( !v61[0] )
                goto LABEL_155;
              goto LABEL_128;
            }
            goto LABEL_153;
          }
          v37 = v36 - 1;
          if ( v37 )
          {
            if ( v37 != 1 )
              return 3221225988LL;
            if ( !v62 )
              return 3221225988LL;
            goto LABEL_153;
          }
          if ( v62 )
            goto LABEL_153;
          v38 = v64 & 0x3FF;
        }
LABEL_154:
        v61[0] = v38;
LABEL_155:
        if ( (~(_BYTE)v5 & 0x20) == 0 || v61[0] != v66 )
        {
          v66 = v61[0];
          v7 = &v66;
          v86 = &v66;
          v19 = v74;
          v76 = v74;
          goto LABEL_158;
        }
      }
    }
LABEL_57:
    v30 = (_QWORD *)v69;
LABEL_58:
    if ( (v5 & 0x2040000) != 0 || (unsigned int)(v29 + 1073741686) > 1 || v25 != 3 )
    {
      v31 = DllHandle;
    }
    else
    {
      v88 = *(const wchar_t **)a2;
      v89 = *(_QWORD *)(a2 + 8);
      v90 = *(_QWORD *)(a2 + 16);
      if ( a3 == 4 )
        v91 = *(_QWORD *)(a2 + 24);
      v31 = DllHandle;
      v32 = LdrpLoadResourceFromAlternativeModule(DllHandle, (__int64)&v88, a3, v5 | 0x1000000, v30);
      if ( v32 != -1073020927 )
      {
        if ( v32 != -1073020922 )
          v29 = v32;
        v63 = v29;
      }
    }
    if ( (unsigned int)(v29 + 1073741686) <= 1 )
    {
      v60 = ~v5;
      if ( (~v5 & 0x80000) != 0 && (v60 & 0x20000) != 0 && (v60 & 0x10) != 0 && v25 == 3 )
      {
        v88 = *(const wchar_t **)a2;
        v89 = *(_QWORD *)(a2 + 8);
        v90 = *(_QWORD *)(a2 + 16);
        if ( a3 == 4 )
          v91 = *(_QWORD *)(a2 + 24);
        v29 = LdrpLoadResourceFromAlternativeModule(v31, (__int64)&v88, a3, v5, (_QWORD *)v69);
        v63 = v29;
        if ( v29 >= 0 )
          LdrpResReportResourceAccessInternal(v31, 0LL, (__int64 *)&v88, a3);
      }
    }
    return (unsigned int)v29;
  }
  return result;
}
