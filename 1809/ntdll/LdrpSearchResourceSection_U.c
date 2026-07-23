/*
 * XREFs of LdrpSearchResourceSection_U @ 0x18003D2E8
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x18003451C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlFindMessage @ 0x18003A8D0 (RtlFindMessage.c)
 *     RtlLoadString @ 0x18003B5D0 (RtlLoadString.c)
 *     LdrFindResource_U @ 0x18003C340 (LdrFindResource_U.c)
 *     LdrpGetRcConfig @ 0x18003E0D0 (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18003E440 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrFindResourceEx_U @ 0x180084750 (LdrFindResourceEx_U.c)
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
 *     LdrpResReportResourceAccessInternal @ 0x18007DFF4 (LdrpResReportResourceAccessInternal.c)
 *     LdrpGetParentLangId @ 0x1800830D4 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800918F0 (_wcsicmp.c)
 *     NtQueryDefaultLocale @ 0x1800A05A0 (NtQueryDefaultLocale.c)
 *     RtlULongMult @ 0x1800E1E6C (RtlULongMult.c)
 */

__int64 __fastcall LdrpSearchResourceSection_U(void *a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  unsigned int v5; // esi
  __int64 *v7; // rdi
  PVOID v8; // r8
  __int64 v9; // rbx
  unsigned int v10; // r13d
  __int16 v11; // r14
  unsigned __int64 v12; // rcx
  int v13; // eax
  __int64 result; // rax
  __int64 v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // r14
  __int64 v18; // r9
  unsigned __int64 v19; // rcx
  int ResourceFromAlternativeModule; // r15d
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 *v24; // rcx
  PVOID Heap; // rax
  PVOID v26; // rdx
  unsigned int v27; // edi
  PVOID v28; // rdi
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  __int16 v34; // ax
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  PVOID v38; // r14
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
  PVOID v50; // r14
  unsigned __int64 v51; // r8
  __int64 v52; // rcx
  int v53; // eax
  int v54; // eax
  PVOID v55; // rsi
  _WORD v56[2]; // [rsp+40h] [rbp-118h] BYREF
  bool v57; // [rsp+44h] [rbp-114h]
  NTSTATUS v58; // [rsp+48h] [rbp-110h]
  __int16 v59; // [rsp+4Ch] [rbp-10Ch]
  __int64 v60; // [rsp+50h] [rbp-108h] BYREF
  unsigned int v61; // [rsp+58h] [rbp-100h]
  unsigned int v62; // [rsp+5Ch] [rbp-FCh]
  PVOID BaseOfImage; // [rsp+60h] [rbp-F8h]
  unsigned int v64; // [rsp+68h] [rbp-F0h]
  char v65[4]; // [rsp+6Ch] [rbp-ECh] BYREF
  DWORD v66; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v67; // [rsp+78h] [rbp-E0h]
  __int64 v68; // [rsp+80h] [rbp-D8h]
  __int64 v69; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v70; // [rsp+90h] [rbp-C8h]
  __int64 v71; // [rsp+98h] [rbp-C0h] BYREF
  DWORD DefaultLocaleId; // [rsp+A0h] [rbp-B8h] BYREF
  DWORD Lcid; // [rsp+A4h] [rbp-B4h] BYREF
  unsigned int v74; // [rsp+A8h] [rbp-B0h] BYREF
  unsigned int v75; // [rsp+ACh] [rbp-ACh] BYREF
  unsigned __int64 v76; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v77; // [rsp+B8h] [rbp-A0h] BYREF
  __int64 v78; // [rsp+C0h] [rbp-98h]
  unsigned int v79; // [rsp+C8h] [rbp-90h] BYREF
  struct _TEB *v80; // [rsp+D0h] [rbp-88h]
  unsigned int *v81; // [rsp+D8h] [rbp-80h]
  __int64 *v82; // [rsp+E0h] [rbp-78h]
  _UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-70h] BYREF
  __int64 v84; // [rsp+F8h] [rbp-60h]
  __int64 v85; // [rsp+100h] [rbp-58h]
  __int64 v86; // [rsp+108h] [rbp-50h]
  __int64 v87; // [rsp+110h] [rbp-48h]
  unsigned int v88; // [rsp+178h] [rbp+20h]

  v88 = a4;
  v5 = a4;
  v7 = (__int64 *)a2;
  v8 = a1;
  BaseOfImage = a1;
  v68 = a5;
  v70 = a2;
  v9 = 0LL;
  v57 = 0;
  v76 = 0LL;
  v64 = 0;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 || (a4 & 0x41) != 0 && a3 != 4 || a3 == 4 && (a4 & 0x41) == 0 )
    return 3221225713LL;
  v10 = a3;
  if ( a3 == 4 )
    v10 = 3;
  v62 = v10;
  if ( (~(_BYTE)a4 & 0x10) != 0 && v10 - 1 <= 2 )
  {
    if ( v10 == 3 )
      v11 = *(_WORD *)(a2 + 16);
    else
      v11 = 0;
    v59 = v11;
    v12 = *(_QWORD *)a2;
    if ( ((*(_QWORD *)a2 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v12 & 0xFFFFFFFFFFFF0000uLL) == 0 || (v13 = wcsicmp((const wchar_t *)v12, L"MUI"), v8 = BaseOfImage, v13))
      || (~(_BYTE)v5 & 8) == 0
      || (v11 & 0xF3FF) != 0
      || v11 == 3072 )
    {
      v5 |= LdrIsResItemExist(v8, v7, v8, v5);
      v88 = v5;
      if ( (v5 & 0x40000) != 0 )
      {
        result = 3221225610LL;
        v58 = -1073741686;
        if ( (v5 & 0x20000) == 0 )
        {
          v84 = *v7;
          if ( v10 < 2 )
            v15 = 0LL;
          else
            v15 = v7[1];
          v85 = v15;
          if ( v10 == 3 )
            v9 = v7[2];
          v86 = v9;
          if ( a3 == 4 )
            v87 = v7[3];
          result = LdrpLoadResourceFromAlternativeModule(BaseOfImage, v68);
          v58 = result;
        }
        return result;
      }
    }
    else
    {
      v5 |= 0x10u;
      v88 = v5;
    }
  }
  v16 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseOfImage, 1, 2u, &v79, &v77);
  v17 = v77;
  if ( v16 < 0 )
    v17 = 0LL;
  v77 = v17;
  v78 = v17;
  if ( !v17 )
    return 3221225609LL;
  result = LdrpResGetMappingSize((__int64)BaseOfImage, &v76, 256, 1);
  v58 = result;
  if ( (int)result >= 0 )
  {
    v71 = v17;
    v60 = 61166LL;
    v61 = 0;
    v19 = 0LL;
    v69 = 0LL;
    v67 = 0LL;
    v56[0] = 0;
    v59 = 0;
    v66 = 0;
    ResourceFromAlternativeModule = -1073741811;
    while ( 1 )
    {
      v21 = 3221225610LL;
      if ( !v17 )
        goto LABEL_48;
      v22 = v62;
      v21 = --v62;
      if ( !v22 )
        goto LABEL_47;
      if ( !(_DWORD)v21 )
      {
        v23 = v67;
        if ( v10 == 3 )
          v23 = v17;
        v67 = v23;
      }
      if ( v67 )
      {
        v24 = (__int64 *)v70;
        v59 = *(_WORD *)(v70 + 16);
        v57 = (v59 & 0x3FF) == 0;
        goto LABEL_68;
      }
LABEL_149:
      result = RtlULongAdd(*(unsigned __int16 *)(v17 + 12), *(unsigned __int16 *)(v17 + 14), (int *)&v74);
      v58 = result;
      if ( (int)result < 0 )
        return result;
      result = RtlULongMult(v74, 8LL, &v75);
      v58 = result;
      if ( (int)result < 0 )
        return result;
      v49 = (unsigned int *)(v17 + 16);
      v81 = v49;
      v50 = BaseOfImage;
      v51 = v76 + ((unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (unsigned __int64)v49 + v75 > v51 )
        return 3221225595LL;
      v52 = *v7;
      if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v49 += 2 * v47;
        v81 = v49;
        LOWORD(v47) = v48;
      }
      if ( !(_WORD)v47 )
      {
        switch ( v10 - v62 )
        {
          case 1u:
            ResourceFromAlternativeModule = -1073741686;
            break;
          case 2u:
            ResourceFromAlternativeModule = -1073741685;
            v58 = -1073741685;
            goto LABEL_163;
          case 3u:
            ResourceFromAlternativeModule = -1073741308;
            v58 = -1073741308;
            return (unsigned int)ResourceFromAlternativeModule;
        }
        v58 = ResourceFromAlternativeModule;
        if ( (unsigned int)(ResourceFromAlternativeModule + 1073741686) <= 1 )
        {
LABEL_163:
          v53 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v53 & 0x20000) != 0 && (v53 & 0x10) != 0 && v10 == 3 )
          {
            v84 = *(_QWORD *)v70;
            v85 = *(_QWORD *)(v70 + 8);
            v86 = *(_QWORD *)(v70 + 16);
            if ( a3 == 4 )
              v87 = *(_QWORD *)(v70 + 24);
            ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(BaseOfImage, v68);
            v58 = ResourceFromAlternativeModule;
            if ( ResourceFromAlternativeModule >= 0 )
              LdrpResReportResourceAccessInternal(v50);
          }
        }
        return (unsigned int)ResourceFromAlternativeModule;
      }
      if ( v67 && (v5 & 0x20) != 0 )
        break;
      if ( !(unsigned __int8)ResourceEntryBinarySearch(
                               (_DWORD)BaseOfImage,
                               v76,
                               (unsigned __int16)v47,
                               v78,
                               (__int64)v49,
                               v52,
                               (__int64)&v71,
                               (__int64)&v69) )
        return 3221225595LL;
      v82 = ++v7;
      v17 = v71;
      v19 = v69;
    }
    v17 = 0LL;
    v71 = 0LL;
    v60 = *v49;
    v19 = v78 + v49[1];
    if ( v19 > v51 )
      return 3221225595LL;
    v69 = v78 + v49[1];
LABEL_47:
    v21 = 3221225610LL;
LABEL_48:
    if ( v19 && (v5 & 2) == 0 )
    {
      *(_QWORD *)v68 = v19;
      if ( !NtCurrentTeb()->ResourceRetValue )
      {
        v80 = NtCurrentTeb();
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
        v80->ResourceRetValue = Heap;
      }
      if ( NtCurrentTeb()->ResourceRetValue )
      {
        v26 = BaseOfImage;
        *(_QWORD *)NtCurrentTeb()->ResourceRetValue = BaseOfImage;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v69;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v26;
      }
LABEL_54:
      v27 = 0;
      v58 = 0;
      return v27;
    }
    if ( v17 && (v5 & 2) != 0 )
    {
      *(_QWORD *)v68 = v17;
      goto LABEL_54;
    }
    if ( v10 - v62 == 1 )
    {
      v27 = -1073741686;
      v58 = -1073741686;
      goto LABEL_180;
    }
    if ( v10 - v62 == 2 )
    {
      v27 = -1073741685;
      v58 = -1073741685;
      goto LABEL_181;
    }
    if ( v10 - v62 != 3 )
    {
      v27 = -1073741811;
      v58 = -1073741811;
LABEL_180:
      if ( v27 + 1073741686 > 1 )
        return v27;
LABEL_181:
      v54 = ~v5;
      if ( (~v5 & 0x80000) != 0 && (v54 & 0x20000) != 0 && (v54 & 0x10) != 0 && v10 == 3 )
      {
        v84 = *(_QWORD *)v70;
        v85 = *(_QWORD *)(v70 + 8);
        v86 = *(_QWORD *)(v70 + 16);
        if ( a3 == 4 )
          v87 = *(_QWORD *)(v70 + 24);
        v55 = BaseOfImage;
        v27 = LdrpLoadResourceFromAlternativeModule(BaseOfImage, v68);
        v58 = v27;
        if ( (v27 & 0x80000000) == 0 )
          LdrpResReportResourceAccessInternal(v55);
      }
      return v27;
    }
    v27 = -1073741308;
    v58 = -1073741308;
    if ( !v67 )
      goto LABEL_180;
    v69 = 0LL;
    v24 = (__int64 *)v70;
LABEL_68:
    v28 = BaseOfImage;
    while ( 1 )
    {
      v29 = v61++;
      if ( v29 > 6 )
      {
        v41 = v29 - 7;
        if ( !v41 )
        {
          if ( (~v5 & 0x80000) == 0 )
            goto LABEL_105;
          RcConfig = (_DWORD *)LdrpGetRcConfig(v28);
          if ( !RcConfig )
            goto LABEL_105;
          if ( *RcConfig != -20054323 )
            goto LABEL_105;
          if ( !RcConfig[31] )
            goto LABEL_105;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + (unsigned int)RcConfig[31]));
          if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
            goto LABEL_105;
          v34 = Lcid;
          goto LABEL_106;
        }
        v42 = v41 - 1;
        if ( v42 )
        {
          v43 = v42 - 1;
          if ( !v43 )
          {
            v56[0] = v60;
            v58 = NtQueryDefaultLocale(1u, &v66);
            if ( v58 < 0 )
              goto LABEL_107;
            v34 = v66;
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
              v88 = v5;
              goto LABEL_107;
            }
            v34 = 1033;
            goto LABEL_106;
          }
          v56[0] = v60;
          v58 = NtQueryDefaultLocale(0, &DefaultLocaleId);
          if ( v58 >= 0 )
          {
            v34 = DefaultLocaleId;
            if ( DefaultLocaleId != v66 )
              goto LABEL_106;
          }
        }
        else
        {
          v56[0] = v60;
          if ( (~v5 & 0x80000) != 0 )
            goto LABEL_138;
          if ( NtCurrentTeb() )
            v56[0] = NtCurrentTeb()->CurrentLocale;
          v5 = v88;
        }
      }
      else
      {
        if ( v29 == 6 )
        {
          v56[0] = v60;
          if ( (v5 & 0x20) != 0 )
            goto LABEL_107;
          v56[0] = 0;
          if ( (unsigned __int8)LdrpSetThreadPreferredLangList(v24, v21) )
          {
            v40 = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
            if ( v64 >= v40 )
              v56[0] = 0;
            else
              GetLCIDFromLangListNodeWithLICCheck(
                v40,
                NtCurrentTeb()->MergedPrefLanguages,
                v64,
                (unsigned int)v56,
                (__int64)v65);
            v5 = v88;
          }
          else
          {
            v56[0] = 0;
          }
          if ( v56[0] )
          {
            ++v64;
LABEL_123:
            --v61;
            goto LABEL_107;
          }
LABEL_105:
          v34 = v60;
          goto LABEL_106;
        }
        if ( !v29 )
        {
          if ( v59 )
          {
            v34 = v60;
            if ( (v5 & 0x80000) != 0 )
              v34 = v59;
            goto LABEL_106;
          }
LABEL_87:
          v56[0] = 0;
          goto LABEL_107;
        }
        v30 = v29 - 1;
        if ( !v30 )
        {
          v35 = ~v5;
          if ( (~v5 & 0x80000) != 0 && (v35 & 0x20000) != 0 && (v35 & 0x10) != 0 )
          {
            v84 = *v24;
            if ( v10 < 2 )
              v36 = 0LL;
            else
              v36 = v24[1];
            v85 = v36;
            if ( v10 == 3 )
              v37 = v24[2];
            else
              v37 = 0LL;
            v86 = v37;
            if ( a3 == 4 )
              v87 = v24[3];
            v38 = BaseOfImage;
            v39 = LdrpLoadResourceFromAlternativeModule(BaseOfImage, v68);
            v58 = v39;
            if ( v39 >= 0 )
            {
              LdrpResReportResourceAccessInternal(v38);
              return (unsigned int)v39;
            }
            v28 = v38;
          }
          goto LABEL_105;
        }
        v31 = v30 - 1;
        if ( !v31 )
        {
          v34 = v59;
          if ( v57 )
            v34 = v60;
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
            if ( !v57 )
              return 3221225988LL;
            goto LABEL_105;
          }
          if ( v57 )
            goto LABEL_105;
          v34 = v59 & 0x3FF;
LABEL_106:
          v56[0] = v34;
          goto LABEL_107;
        }
        if ( (v5 & 4) != 0 )
          return 3221225988LL;
        if ( v57 )
          goto LABEL_105;
        if ( (int)LdrpGetParentLangId(v56[0], v56, 1023LL, v18) < 0 )
          goto LABEL_87;
        if ( v56[0] )
          goto LABEL_123;
      }
LABEL_107:
      if ( (~(_BYTE)v5 & 0x20) == 0 || v56[0] != v60 )
      {
        v60 = v56[0];
        v7 = &v60;
        v82 = &v60;
        v17 = v67;
        v71 = v67;
        goto LABEL_149;
      }
      v24 = (__int64 *)v70;
    }
  }
  return result;
}
