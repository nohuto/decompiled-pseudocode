/*
 * XREFs of LdrpSearchResourceSection_U @ 0x18003D2E8
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x18003451C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlFindMessage @ 0x18003A8D0 (RtlFindMessage.c)
 *     RtlLoadString @ 0x18003B5D0 (RtlLoadString.c)
 *     LdrFindResource_U @ 0x18003C340 (LdrFindResource_U.c)
 *     LdrpGetRcConfig @ 0x18003E0D0 (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18003E440 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrFindResourceEx_U @ 0x180084740 (LdrFindResourceEx_U.c)
 *     LdrFindResourceDirectory_U @ 0x1800E2580 (LdrFindResourceDirectory_U.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180007188 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     LdrpResGetMappingSize @ 0x180039780 (LdrpResGetMappingSize.c)
 *     RtlULongAdd @ 0x18003C570 (RtlULongAdd.c)
 *     ResourceEntryBinarySearch @ 0x18003DE8C (ResourceEntryBinarySearch.c)
 *     LdrIsResItemExist @ 0x18003E044 (LdrIsResItemExist.c)
 *     LdrpGetRcConfig @ 0x18003E0D0 (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18003E440 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSetThreadPreferredLangList @ 0x18003F110 (LdrpSetThreadPreferredLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18003F388 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlCultureNameToLCID @ 0x180040460 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     LdrpResReportResourceAccessInternal @ 0x18007DFE4 (LdrpResReportResourceAccessInternal.c)
 *     LdrpGetParentLangId @ 0x1800830C4 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800918E0 (_wcsicmp.c)
 *     NtQueryDefaultLocale @ 0x1800A0580 (NtQueryDefaultLocale.c)
 *     RtlULongMult @ 0x1800E1E6C (RtlULongMult.c)
 */

__int64 __fastcall LdrpSearchResourceSection_U(
        unsigned __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 *a5)
{
  unsigned int v5; // esi
  __int64 *v7; // rdi
  unsigned __int64 v8; // r8
  __int64 v9; // rbx
  unsigned int v10; // r13d
  __int16 v11; // r14
  unsigned __int64 v12; // rcx
  int v13; // eax
  __int64 result; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // r14
  __int64 v18; // r9
  unsigned __int64 v19; // rcx
  int ResourceFromAlternativeModule; // r15d
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 *v24; // rcx
  __int64 Heap; // rax
  unsigned __int64 v26; // rdx
  unsigned int v27; // edi
  unsigned __int64 v28; // rdi
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  __int16 v34; // ax
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // r14
  int v39; // edi
  unsigned int v40; // ecx
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  _DWORD *RcConfig; // rax
  __int64 v47; // r10
  __int16 v48; // r11
  unsigned int *v49; // rdx
  unsigned __int64 v50; // r14
  unsigned __int64 v51; // r8
  __int64 v52; // rcx
  int v53; // eax
  int v54; // eax
  unsigned int v55; // r9d
  unsigned __int64 v56; // rsi
  _WORD v57[2]; // [rsp+40h] [rbp-118h] BYREF
  bool v58; // [rsp+44h] [rbp-114h]
  int v59; // [rsp+48h] [rbp-110h]
  __int16 v60; // [rsp+4Ch] [rbp-10Ch]
  __int64 v61; // [rsp+50h] [rbp-108h] BYREF
  unsigned int v62; // [rsp+58h] [rbp-100h]
  unsigned int v63; // [rsp+5Ch] [rbp-FCh]
  unsigned __int64 v64; // [rsp+60h] [rbp-F8h]
  unsigned int v65; // [rsp+68h] [rbp-F0h]
  char v66[4]; // [rsp+6Ch] [rbp-ECh] BYREF
  int v67; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v68; // [rsp+78h] [rbp-E0h]
  __int64 *v69; // [rsp+80h] [rbp-D8h]
  __int64 v70; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v71; // [rsp+90h] [rbp-C8h]
  __int64 v72; // [rsp+98h] [rbp-C0h] BYREF
  int v73; // [rsp+A0h] [rbp-B8h] BYREF
  int v74; // [rsp+A4h] [rbp-B4h] BYREF
  unsigned int v75; // [rsp+A8h] [rbp-B0h] BYREF
  unsigned int v76; // [rsp+ACh] [rbp-ACh] BYREF
  unsigned __int64 v77; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v78; // [rsp+B8h] [rbp-A0h] BYREF
  __int64 v79; // [rsp+C0h] [rbp-98h]
  int v80; // [rsp+C8h] [rbp-90h] BYREF
  struct _TEB *v81; // [rsp+D0h] [rbp-88h]
  unsigned int *v82; // [rsp+D8h] [rbp-80h]
  __int64 *v83; // [rsp+E0h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-70h] BYREF
  __int64 v85; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v86; // [rsp+100h] [rbp-58h]
  __int64 v87; // [rsp+108h] [rbp-50h]
  __int64 v88; // [rsp+110h] [rbp-48h]
  unsigned int v89; // [rsp+178h] [rbp+20h]

  v89 = a4;
  v5 = a4;
  v7 = (__int64 *)a2;
  v8 = a1;
  v64 = a1;
  v69 = a5;
  v71 = a2;
  v9 = 0LL;
  v58 = 0;
  v77 = 0LL;
  v65 = 0;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 || (a4 & 0x41) != 0 && a3 != 4 || a3 == 4 && (a4 & 0x41) == 0 )
    return 3221225713LL;
  v10 = a3;
  if ( a3 == 4 )
    v10 = 3;
  v63 = v10;
  if ( (~(_BYTE)a4 & 0x10) != 0 && v10 - 1 <= 2 )
  {
    if ( v10 == 3 )
      v11 = *(_WORD *)(a2 + 16);
    else
      v11 = 0;
    v60 = v11;
    v12 = *(_QWORD *)a2;
    if ( ((*(_QWORD *)a2 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v12 & 0xFFFFFFFFFFFF0000uLL) == 0 || (v13 = wcsicmp((const wchar_t *)v12, L"MUI"), v8 = v64, v13))
      || (~(_BYTE)v5 & 8) == 0
      || (v11 & 0xF3FF) != 0
      || v11 == 3072 )
    {
      v5 |= LdrIsResItemExist(v8, v7, v8, v5);
      v89 = v5;
      if ( (v5 & 0x40000) != 0 )
      {
        result = 3221225610LL;
        v59 = -1073741686;
        if ( (v5 & 0x20000) == 0 )
        {
          v85 = *v7;
          if ( v10 < 2 )
            v15 = 0LL;
          else
            v15 = v7[1];
          v86 = v15;
          if ( v10 == 3 )
            v9 = v7[2];
          v87 = v9;
          if ( a3 == 4 )
            v88 = v7[3];
          result = LdrpLoadResourceFromAlternativeModule(v64, (unsigned int)&v85, a3, v5, (__int64)v69);
          v59 = result;
        }
        return result;
      }
    }
    else
    {
      v5 |= 0x10u;
      v89 = v5;
    }
  }
  v16 = RtlpImageDirectoryEntryToDataEx(v64, 1, 2u, &v80, &v78);
  v17 = v78;
  if ( v16 < 0 )
    v17 = 0LL;
  v78 = v17;
  v79 = v17;
  if ( !v17 )
    return 3221225609LL;
  result = LdrpResGetMappingSize(v64, &v77, 256, 1);
  v59 = result;
  if ( (int)result >= 0 )
  {
    v72 = v17;
    v61 = 61166LL;
    v62 = 0;
    v19 = 0LL;
    v70 = 0LL;
    v68 = 0LL;
    v57[0] = 0;
    v60 = 0;
    v67 = 0;
    ResourceFromAlternativeModule = -1073741811;
    while ( 1 )
    {
      v21 = 3221225610LL;
      if ( !v17 )
        goto LABEL_48;
      v22 = v63;
      v21 = --v63;
      if ( !v22 )
        goto LABEL_47;
      if ( !(_DWORD)v21 )
      {
        v23 = v68;
        if ( v10 == 3 )
          v23 = v17;
        v68 = v23;
      }
      if ( v68 )
      {
        v24 = (__int64 *)v71;
        v60 = *(_WORD *)(v71 + 16);
        v58 = (v60 & 0x3FF) == 0;
        goto LABEL_68;
      }
LABEL_149:
      result = RtlULongAdd(*(unsigned __int16 *)(v17 + 12), *(unsigned __int16 *)(v17 + 14), (int *)&v75);
      v59 = result;
      if ( (int)result < 0 )
        return result;
      result = RtlULongMult(v75, 8LL, &v76);
      v59 = result;
      if ( (int)result < 0 )
        return result;
      v49 = (unsigned int *)(v17 + 16);
      v82 = v49;
      v50 = v64;
      v51 = v77 + (v64 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (unsigned __int64)v49 + v76 > v51 )
        return 3221225595LL;
      v52 = *v7;
      if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v49 += 2 * v47;
        v82 = v49;
        LOWORD(v47) = v48;
      }
      if ( !(_WORD)v47 )
      {
        switch ( v10 - v63 )
        {
          case 1u:
            ResourceFromAlternativeModule = -1073741686;
            break;
          case 2u:
            ResourceFromAlternativeModule = -1073741685;
            v59 = -1073741685;
            goto LABEL_163;
          case 3u:
            ResourceFromAlternativeModule = -1073741308;
            v59 = -1073741308;
            return (unsigned int)ResourceFromAlternativeModule;
        }
        v59 = ResourceFromAlternativeModule;
        if ( (unsigned int)(ResourceFromAlternativeModule + 1073741686) <= 1 )
        {
LABEL_163:
          v53 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v53 & 0x20000) != 0 && (v53 & 0x10) != 0 && v10 == 3 )
          {
            v85 = *(_QWORD *)v71;
            v86 = *(_QWORD *)(v71 + 8);
            v87 = *(_QWORD *)(v71 + 16);
            if ( a3 == 4 )
              v88 = *(_QWORD *)(v71 + 24);
            ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(
                                              v64,
                                              (unsigned int)&v85,
                                              a3,
                                              v5,
                                              (__int64)v69);
            v59 = ResourceFromAlternativeModule;
            if ( ResourceFromAlternativeModule >= 0 )
              LdrpResReportResourceAccessInternal(v50, 0LL, &v85, a3);
          }
        }
        return (unsigned int)ResourceFromAlternativeModule;
      }
      if ( v68 && (v5 & 0x20) != 0 )
        break;
      if ( !(unsigned __int8)ResourceEntryBinarySearch(
                               v64,
                               v77,
                               (unsigned __int16)v47,
                               v79,
                               (__int64)v49,
                               v52,
                               (__int64)&v72,
                               (__int64)&v70) )
        return 3221225595LL;
      v83 = ++v7;
      v17 = v72;
      v19 = v70;
    }
    v17 = 0LL;
    v72 = 0LL;
    v61 = *v49;
    v19 = v79 + v49[1];
    if ( v19 > v51 )
      return 3221225595LL;
    v70 = v79 + v49[1];
LABEL_47:
    v21 = 3221225610LL;
LABEL_48:
    if ( v19 && (v5 & 2) == 0 )
    {
      *v69 = v19;
      if ( !NtCurrentTeb()->ResourceRetValue )
      {
        v81 = NtCurrentTeb();
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 24LL);
        v81->ResourceRetValue = (void *)Heap;
      }
      if ( NtCurrentTeb()->ResourceRetValue )
      {
        v26 = v64;
        *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v64;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v70;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v26;
      }
LABEL_54:
      v27 = 0;
      v59 = 0;
      return v27;
    }
    if ( v17 && (v5 & 2) != 0 )
    {
      *v69 = v17;
      goto LABEL_54;
    }
    if ( v10 - v63 == 1 )
    {
      v27 = -1073741686;
      v59 = -1073741686;
      goto LABEL_180;
    }
    if ( v10 - v63 == 2 )
    {
      v27 = -1073741685;
      v59 = -1073741685;
      goto LABEL_181;
    }
    if ( v10 - v63 != 3 )
    {
      v27 = -1073741811;
      v59 = -1073741811;
LABEL_180:
      if ( v27 + 1073741686 > 1 )
        return v27;
LABEL_181:
      v54 = ~v5;
      if ( (~v5 & 0x80000) != 0 && (v54 & 0x20000) != 0 && (v54 & 0x10) != 0 && v10 == 3 )
      {
        v85 = *(_QWORD *)v71;
        v86 = *(_QWORD *)(v71 + 8);
        v87 = *(_QWORD *)(v71 + 16);
        if ( a3 == 4 )
          v88 = *(_QWORD *)(v71 + 24);
        v55 = v5;
        v56 = v64;
        v27 = LdrpLoadResourceFromAlternativeModule(v64, (unsigned int)&v85, a3, v55, (__int64)v69);
        v59 = v27;
        if ( (v27 & 0x80000000) == 0 )
          LdrpResReportResourceAccessInternal(v56, 0LL, &v85, a3);
      }
      return v27;
    }
    v27 = -1073741308;
    v59 = -1073741308;
    if ( !v68 )
      goto LABEL_180;
    v70 = 0LL;
    v24 = (__int64 *)v71;
LABEL_68:
    v28 = v64;
    while ( 1 )
    {
      v29 = v62++;
      if ( v29 > 6 )
      {
        v41 = v29 - 7;
        if ( !v41 )
        {
          if ( (~v5 & 0x80000) == 0 )
            goto LABEL_105;
          LOBYTE(v18) = 1;
          RcConfig = (_DWORD *)LdrpGetRcConfig(v28, v21, 0LL, v18);
          if ( !RcConfig )
            goto LABEL_105;
          if ( *RcConfig != -20054323 )
            goto LABEL_105;
          if ( !RcConfig[31] )
            goto LABEL_105;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + (unsigned int)RcConfig[31]));
          if ( !(unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v74) )
            goto LABEL_105;
          v34 = v74;
          goto LABEL_106;
        }
        v42 = v41 - 1;
        if ( v42 )
        {
          v43 = v42 - 1;
          if ( !v43 )
          {
            v57[0] = v61;
            LOBYTE(v24) = 1;
            v59 = NtQueryDefaultLocale(v24, &v67, 1023LL, v18);
            if ( v59 < 0 )
              goto LABEL_107;
            v34 = v67;
            goto LABEL_106;
          }
          v44 = v43 - 1;
          if ( v44 )
          {
            v45 = v44 - 1;
            if ( v45 )
            {
              if ( v45 != 1 )
                return 3221225988LL;
LABEL_138:
              v5 |= 0x20u;
              v89 = v5;
              goto LABEL_107;
            }
            v34 = 1033;
            goto LABEL_106;
          }
          v57[0] = v61;
          v59 = NtQueryDefaultLocale(0LL, &v73, 1023LL, v18);
          if ( v59 >= 0 )
          {
            v34 = v73;
            if ( v73 != v67 )
              goto LABEL_106;
          }
        }
        else
        {
          v57[0] = v61;
          if ( (~v5 & 0x80000) != 0 )
            goto LABEL_138;
          if ( NtCurrentTeb() )
            v57[0] = NtCurrentTeb()->CurrentLocale;
          v5 = v89;
        }
      }
      else
      {
        if ( v29 == 6 )
        {
          v57[0] = v61;
          if ( (v5 & 0x20) != 0 )
            goto LABEL_107;
          v57[0] = 0;
          if ( (unsigned __int8)LdrpSetThreadPreferredLangList(v24, v21) )
          {
            v40 = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
            if ( v65 >= v40 )
              v57[0] = 0;
            else
              GetLCIDFromLangListNodeWithLICCheck(
                v40,
                NtCurrentTeb()->MergedPrefLanguages,
                v65,
                (unsigned int)v57,
                (__int64)v66);
            v5 = v89;
          }
          else
          {
            v57[0] = 0;
          }
          if ( v57[0] )
          {
            ++v65;
LABEL_123:
            --v62;
            goto LABEL_107;
          }
LABEL_105:
          v34 = v61;
          goto LABEL_106;
        }
        if ( !v29 )
        {
          if ( v60 )
          {
            v34 = v61;
            if ( (v5 & 0x80000) != 0 )
              v34 = v60;
            goto LABEL_106;
          }
LABEL_87:
          v57[0] = 0;
          goto LABEL_107;
        }
        v30 = v29 - 1;
        if ( !v30 )
        {
          v35 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v35 & 0x20000) != 0 && (v35 & 0x10) != 0 )
          {
            v85 = *v24;
            if ( v10 < 2 )
              v36 = 0LL;
            else
              v36 = v24[1];
            v86 = v36;
            if ( v10 == 3 )
              v37 = v24[2];
            else
              v37 = 0LL;
            v87 = v37;
            if ( a3 == 4 )
              v88 = v24[3];
            v38 = v64;
            v39 = LdrpLoadResourceFromAlternativeModule(v64, (unsigned int)&v85, a3, v5, (__int64)v69);
            v59 = v39;
            if ( v39 >= 0 )
            {
              LdrpResReportResourceAccessInternal(v38, 0LL, &v85, a3);
              return (unsigned int)v39;
            }
            v28 = v38;
          }
          goto LABEL_105;
        }
        v31 = v30 - 1;
        if ( !v31 )
        {
          v34 = v60;
          if ( v58 )
            v34 = v61;
          goto LABEL_106;
        }
        v32 = v31 - 1;
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( v33 )
          {
            if ( v33 != 1 )
              return 3221225988LL;
            if ( !v58 )
              return 3221225988LL;
            goto LABEL_105;
          }
          if ( v58 )
            goto LABEL_105;
          v34 = v60 & 0x3FF;
LABEL_106:
          v57[0] = v34;
          goto LABEL_107;
        }
        if ( (v5 & 4) != 0 )
          return 3221225988LL;
        if ( v58 )
          goto LABEL_105;
        if ( (int)LdrpGetParentLangId(v57[0], v57, 1023LL, v18) < 0 )
          goto LABEL_87;
        if ( v57[0] )
          goto LABEL_123;
      }
LABEL_107:
      if ( (~(_BYTE)v5 & 0x20) == 0 || v57[0] != v61 )
      {
        v61 = v57[0];
        v7 = &v61;
        v83 = &v61;
        v17 = v68;
        v72 = v68;
        goto LABEL_149;
      }
      v24 = (__int64 *)v71;
    }
  }
  return result;
}
