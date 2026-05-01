/*
 * XREFs of ?GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z @ 0x1803A9DBC
 * Callers:
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x1803AB054 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D420 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800E1604 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x180103CF8 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV12.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x180108EC4 (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z.c)
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18013F598 (--$GetFailIfEmpty@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpro.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z @ 0x180165774 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z.c)
 *     ??$As@UIResourceCandidate@@@?$ComPtr@UIResourceCandidate2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIResourceCandidate@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803A887C (--$As@UIResourceCandidate@@@-$ComPtr@UIResourceCandidate2@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??$GetString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1803A88C0 (--$GetString@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 *     ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x1803A8FC0 (-ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z.c)
 *     ?DpiToMrtScale@ImmersiveIcons@@YA?AW4RESOURCE_SCALE@@I@Z @ 0x1803A98B8 (-DpiToMrtScale@ImmersiveIcons@@YA-AW4RESOURCE_SCALE@@I@Z.c)
 *     ImmersiveIcons::GetPackageFullNameForAppsFolderItem @ 0x1803AADA4 (ImmersiveIcons--GetPackageFullNameForAppsFolderItem.c)
 *     ?HasMsAppXUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x1803AAF60 (-HasMsAppXUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z.c)
 *     ?InitFromItem@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x1803AAFB0 (-InitFromItem@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYS.c)
 *     ?ReplaceChars@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAXGG@Z @ 0x1803AB6B0 (-ReplaceChars@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAXGG@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1803AB9E4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles@@@wil@@CAX_.c)
 *     ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z @ 0x1803ABFB8 (-TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z.c)
 *     ?ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z @ 0x1803B3F40 (-ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z.c)
 */

__int64 __fastcall ImmersiveIcons::GetIconData(WCHAR *a1, unsigned __int16 *a2, __int64 a3)
{
  HRESULT v6; // eax
  signed int FailIf; // ebx
  int v8; // eax
  _DWORD *v9; // r14
  int v10; // eax
  const WCHAR *v11; // rdi
  const WCHAR *StringRawBuffer; // rax
  unsigned __int16 **v13; // r8
  int v14; // eax
  const WCHAR *v15; // rax
  HRESULT v16; // eax
  int PackageFullNameForAppsFolderItem; // eax
  __int64 v18; // rdx
  LPVOID v19; // rbx
  int v20; // eax
  int v21; // eax
  HRESULT Instance; // eax
  int v23; // eax
  int v24; // eax
  HSTRING v25; // rbx
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // r11
  __int64 v34; // r10
  int v35; // eax
  HSTRING v36; // rbx
  int v37; // eax
  int v38; // eax
  HSTRING v39; // rdx
  char *v40; // rdi
  int v41; // esi
  unsigned __int16 **v42; // r8
  int v43; // eax
  unsigned __int64 v44; // r9
  __int64 v45; // rdx
  const WCHAR *v46; // rax
  int v47; // eax
  unsigned __int64 v48; // r14
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rsi
  unsigned __int64 v51; // r12
  char *v52; // rax
  unsigned __int64 v54; // rcx
  char *v55; // rdx
  __int16 v56; // ax
  char *v57; // rax
  int v58; // eax
  LPVOID v59; // rbx
  __int64 v60; // rdi
  int v61; // eax
  int v62; // eax
  HSTRING v63; // rbx
  __int64 v64; // rdx
  int v65; // eax
  LPVOID v66; // rbx
  int v67; // eax
  int v68; // eax
  HSTRING v69; // rbx
  HSTRING v70; // rbx
  char v71; // di
  HSTRING v72; // rbx
  int v73; // eax
  __int64 v74; // rdx
  HSTRING v75; // rbx
  HSTRING_HEADER *v76; // rax
  ShellMRTHelper::Common *v77; // rcx
  int v78; // eax
  __int64 v79; // rdx
  const WCHAR *v80; // rax
  __int64 v81; // r9
  size_t *v82; // rax
  HSTRING v83; // rcx
  __int64 v84; // rax
  const WCHAR *v85; // rcx
  void **ppv; // [rsp+20h] [rbp-E0h]
  UINT32 length[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v88; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID v89; // [rsp+40h] [rbp-C0h] BYREF
  PROPVARIANT propvarIn; // [rsp+48h] [rbp-B8h] BYREF
  int cchCount1[2]; // [rsp+50h] [rbp-B0h]
  __int64 v92; // [rsp+58h] [rbp-A8h]
  HSTRING v93; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v94; // [rsp+68h] [rbp-98h] BYREF
  __int128 pvParam; // [rsp+70h] [rbp-90h] BYREF
  int v96; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v97; // [rsp+90h] [rbp-70h] BYREF
  __int64 v98; // [rsp+98h] [rbp-68h]
  __int64 v99; // [rsp+A0h] [rbp-60h]
  __int64 v100; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v101; // [rsp+B0h] [rbp-50h] BYREF
  HSTRING__ v102[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v103; // [rsp+C0h] [rbp-40h]
  __int64 v104; // [rsp+C8h] [rbp-38h]
  LPCWSTR pszPath; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v106[2]; // [rsp+D8h] [rbp-28h]
  __int64 v107; // [rsp+E0h] [rbp-20h]
  void *v108; // [rsp+E8h] [rbp-18h] BYREF
  HSTRING_HEADER v109; // [rsp+F0h] [rbp-10h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+110h] [rbp+10h] BYREF
  HSTRING string; // [rsp+128h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v108 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v108);
  v6 = SHCreateItemInKnownFolder(&FOLDERID_AppsFolder, 0x4000u, a1, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &v108);
  FailIf = v6;
  if ( v6 >= 0 )
  {
    v94 = 0LL;
    v8 = wil::PropertyStoreHelperBase<IPropertyStore>::InitFromItem(&v94, v108);
    FailIf = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x98,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v8);
LABEL_87:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v94);
      goto LABEL_88;
    }
    v9 = (_DWORD *)(a3 + 8);
    *(_DWORD *)(a3 + 8) = 0;
    pvParam = PKEY_Tile_Background;
    LOWORD(propvarIn) = 0;
    v96 = 4;
    FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(
               &v94,
               (__int64)&pvParam,
               &propvarIn);
    if ( FailIf >= 0 )
    {
      *v9 = 0;
      if ( (_WORD)propvarIn )
        FailIf = PropVariantToUInt32(&propvarIn, (ULONG *)(a3 + 8));
      else
        FailIf = -2147023728;
    }
    PropVariantClear(&propvarIn);
    if ( FailIf < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9A,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)FailIf);
      goto LABEL_87;
    }
    pszPath = 0LL;
    pvParam = PKEY_Tile_SmallLogoPath;
    *(_QWORD *)v106 = 0LL;
    v107 = 0LL;
    v96 = 2;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
    *(_QWORD *)v106 = -1LL;
    v107 = -1LL;
    v10 = wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(&v94, &pvParam, &pszPath);
    FailIf = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9D,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v10);
LABEL_86:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
      goto LABEL_87;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&pszPath);
    v11 = pszPath;
    Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, pszPath, v106[0]);
    v97 = 0LL;
    v98 = 0LL;
    v99 = 0LL;
    length[0] = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(string, length);
    if ( length[0] >= 5 && CompareStringOrdinal(StringRawBuffer, 5, L"file:", 5, 1) == 2 )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v97);
      v98 = -1LL;
      v99 = -1LL;
      v14 = TileUtils::ConvertFileUriToFilePath(v11, (const unsigned __int16 *)&v97, v13);
      FailIf = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAF,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v14);
LABEL_85:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v97);
        string = 0LL;
        goto LABEL_86;
      }
    }
    else
    {
      length[0] = 0;
      v15 = WindowsGetStringRawBuffer(string, length);
      if ( length[0] >= 0xB && CompareStringOrdinal(v15, 11, L"ms-appdata:", 11, 1) == 2 )
      {
        v89 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v89);
        v16 = CoCreateInstance(
                &GUID_a8ca4495_65ab_4333_9ff9_4feb6fbf5169,
                0LL,
                1u,
                &GUID_428bb582_2a87_4ea0_b529_30067cc4a4d7,
                &v89);
        FailIf = v16;
        if ( v16 >= 0 )
        {
          propvarIn = 0LL;
          *(_QWORD *)cchCount1 = 0LL;
          v92 = 0LL;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
          *(_QWORD *)cchCount1 = -1LL;
          v92 = -1LL;
          PackageFullNameForAppsFolderItem = ImmersiveIcons::GetPackageFullNameForAppsFolderItem((CallerIdentity *)a1);
          FailIf = PackageFullNameForAppsFolderItem;
          if ( PackageFullNameForAppsFolderItem >= 0 )
          {
            v19 = v89;
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v97);
            v98 = -1LL;
            v99 = -1LL;
            PackageFullNameForAppsFolderItem = (*(__int64 (__fastcall **)(LPVOID, const WCHAR *, PROPVARIANT, _QWORD, unsigned __int16 **))(*(_QWORD *)v19 + 48LL))(
                                                 v19,
                                                 v11,
                                                 propvarIn,
                                                 0LL,
                                                 &v97);
            FailIf = PackageFullNameForAppsFolderItem;
            if ( PackageFullNameForAppsFolderItem >= 0 )
            {
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v89);
              goto LABEL_28;
            }
            v18 = 185LL;
          }
          else
          {
            v18 = 183LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v18,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)PackageFullNameForAppsFolderItem);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB4,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v16);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v89);
        goto LABEL_85;
      }
      if ( !PathIsRelativeW(v11) )
      {
        v21 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
                (LPVOID *)&v97,
                (__int64 *)&pszPath);
        FailIf = v21;
        if ( v21 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xBF,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v21);
          goto LABEL_85;
        }
      }
    }
LABEL_28:
    if ( v97 && *v97 )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ReplaceChars(&v97);
      v20 = StringCchCopyW((unsigned __int16 *)(a3 + 12), 0x104uLL, (size_t *)v97);
      FailIf = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13A,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v20);
        goto LABEL_85;
      }
      *(_DWORD *)a3 = 0;
      *(_BYTE *)(a3 + 4) = 0;
LABEL_141:
      wil::Feature<__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles>::ReportUsageToService();
      if ( *(_DWORD *)a3 )
      {
LABEL_153:
        FailIf = 0;
        goto LABEL_85;
      }
      propvarIn = 0LL;
      pvParam = PKEY_AppUserModel_ParentID;
      *(_QWORD *)cchCount1 = 0LL;
      v92 = 0LL;
      v96 = 19;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
      *(_QWORD *)cchCount1 = -1LL;
      v92 = -1LL;
      if ( (int)wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(&v94, &pvParam, &propvarIn) < 0 )
      {
LABEL_152:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
        goto LABEL_153;
      }
      v84 = *(_QWORD *)cchCount1;
      v85 = (const WCHAR *)propvarIn;
      if ( *(_QWORD *)cchCount1 == -1LL )
      {
        if ( !propvarIn )
        {
          LODWORD(v84) = 0;
          goto LABEL_147;
        }
        do
          ++v84;
        while ( *((_WORD *)propvarIn + v84) );
      }
      if ( propvarIn )
      {
LABEL_148:
        if ( CompareStringOrdinal(v85, v84, L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe!MicrosoftEdge", -1, 1) == 2 )
        {
          *v9 = 15921906;
          pvParam = 0x10uLL;
          if ( SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0) )
          {
            if ( (BYTE4(pvParam) & 1) == 0 )
              *(_DWORD *)a3 = 3;
          }
        }
        goto LABEL_152;
      }
LABEL_147:
      v85 = &word_180411F30;
      goto LABEL_148;
    }
    v93 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v93);
    Instance = CoCreateInstance(
                 &GUID_dbce7e40_7345_439d_b12c_114a11819a09,
                 0LL,
                 1u,
                 &GUID_130a2f65_2be7_4309_9a58_a9052ff2b61c,
                 (LPVOID *)&v93);
    FailIf = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC8,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)Instance);
LABEL_84:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v93);
      goto LABEL_85;
    }
    propvarIn = 0LL;
    *(_QWORD *)cchCount1 = 0LL;
    v92 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
    *(_QWORD *)cchCount1 = -1LL;
    v92 = -1LL;
    v23 = ImmersiveIcons::GetPackageFullNameForAppsFolderItem((CallerIdentity *)a1);
    FailIf = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCB,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v23);
LABEL_83:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
      goto LABEL_84;
    }
    v24 = (*(__int64 (__fastcall **)(HSTRING, PROPVARIANT))(*(_QWORD *)v93 + 40LL))(v93, propvarIn);
    FailIf = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCD,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v24);
      goto LABEL_83;
    }
    v25 = v93;
    v88 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v88);
    v26 = (*(__int64 (__fastcall **)(HSTRING, GUID *, __int64 **))(*(_QWORD *)v25 + 72LL))(
            v25,
            &GUID_e3c22b30_8502_4b2f_9133_559674587e51,
            &v88);
    FailIf = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD0,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v26);
LABEL_82:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v88);
      goto LABEL_83;
    }
    v27 = *v88;
    if ( *((_DWORD *)a2 + 5) )
    {
      v30 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v27 + 112))(v88, a2[4]);
      FailIf = v30;
      if ( v30 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDB,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v30);
        goto LABEL_82;
      }
    }
    else
    {
      v28 = (*(__int64 (__fastcall **)(__int64 *, const wchar_t *))(v27 + 136))(v88, L"unplated");
      FailIf = v28;
      if ( v28 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD6,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v28);
        goto LABEL_82;
      }
      v29 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v88 + 112))(v88, *a2);
      FailIf = v29;
      if ( v29 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD7,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v29);
        goto LABEL_82;
      }
    }
    v31 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v88 + 128))(v88, *((unsigned int *)a2 + 5));
    FailIf = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDE,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v31);
      goto LABEL_82;
    }
    v32 = ImmersiveIcons::DpiToMrtScale(*((_DWORD *)a2 + 4));
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v33 + 120))(v34, v32);
    FailIf = v35;
    if ( v35 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDF,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v35);
      goto LABEL_82;
    }
    v36 = v93;
    *(_QWORD *)&pvParam = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pvParam);
    v37 = (*(__int64 (__fastcall **)(HSTRING, GUID *, __int128 *))(*(_QWORD *)v36 + 56LL))(
            v36,
            &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd,
            &pvParam);
    FailIf = v37;
    if ( v37 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE2,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v37);
LABEL_81:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pvParam);
      goto LABEL_82;
    }
    v89 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v89);
    v38 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, LPVOID *))pvParam)(
            pvParam,
            &GUID_2fe6ec6e_da7e_4b2a_a8f9_90b289061f20,
            &v89);
    FailIf = v38;
    if ( v38 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE5,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v38);
LABEL_80:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v89);
      goto LABEL_81;
    }
    v40 = 0LL;
    *(_QWORD *)&v102[0].unused = 0LL;
    v103 = 0LL;
    v104 = 0LL;
    v41 = 2;
    if ( ShellMRTHelper::Common::HasMsAppXUriScheme((ShellMRTHelper::Common *)string, v39) )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v102);
      v103 = -1LL;
      v104 = -1LL;
      v43 = ShellMRTHelper::Common::ConvertMsAppXUriToMsResourceUri(
              (ShellMRTHelper::Common *)string,
              (struct Windows::Foundation::IUriRuntimeClass *)v102,
              v42);
      FailIf = v43;
      if ( v43 < 0 )
      {
        v44 = (unsigned int)v43;
        v45 = 236LL;
LABEL_78:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v45,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)v44);
LABEL_79:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v102);
        goto LABEL_80;
      }
      goto LABEL_105;
    }
    length[0] = 0;
    v46 = WindowsGetStringRawBuffer(string, length);
    if ( length[0] >= 0xC && CompareStringOrdinal(v46, 12, L"ms-resource:", 12, 1) == 2 )
    {
      v47 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
              (LPVOID *)v102,
              (__int64 *)&pszPath);
      FailIf = v47;
      if ( v47 < 0 )
      {
        v44 = (unsigned int)v47;
        v45 = 243LL;
        goto LABEL_78;
      }
LABEL_105:
      v59 = v89;
      v101 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v101);
      v60 = *(_QWORD *)&v102[0].unused;
      v61 = (*(__int64 (__fastcall **)(LPVOID, __int64 *, _QWORD, __int64 *))(*(_QWORD *)v59 + 48LL))(
              v59,
              v88,
              *(_QWORD *)&v102[0].unused,
              &v101);
      *(_QWORD *)length = 0LL;
      if ( v61 >= 0 )
      {
        v62 = Microsoft::WRL::ComPtr<IResourceCandidate2>::As<IResourceCandidate>(&v101, (__int64 *)length);
        FailIf = v62;
        if ( v62 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x105,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v62);
LABEL_128:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)length);
LABEL_138:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v101);
          goto LABEL_79;
        }
        v63 = *(HSTRING *)length;
        memset(&v109, 0, sizeof(v109));
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v109);
        *(_QWORD *)&v109.Reserved.Reserved2[8] = -1LL;
        *(_QWORD *)&v109.Reserved.Reserved2[16] = -1LL;
        if ( (*(int (__fastcall **)(HSTRING, const wchar_t *, HSTRING_HEADER *))(*(_QWORD *)v63 + 64LL))(
               v63,
               L"AlternateForm",
               &v109) < 0 )
        {
          v41 = 1;
          if ( *((_DWORD *)a2 + 5) )
          {
LABEL_119:
            v70 = *(HSTRING *)length;
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v109);
            *(_QWORD *)&v109.Reserved.Reserved2[8] = -1LL;
            *(_QWORD *)&v109.Reserved.Reserved2[16] = -1LL;
            if ( (*(int (__fastcall **)(HSTRING, const wchar_t *, HSTRING_HEADER *))(*(_QWORD *)v70 + 64LL))(
                   v70,
                   L"Contrast",
                   &v109) >= 0 )
            {
              v71 = 1;
LABEL_122:
              v72 = *(HSTRING *)length;
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v97);
              v98 = -1LL;
              v99 = -1LL;
              v73 = (*(__int64 (__fastcall **)(HSTRING, unsigned __int16 **))(*(_QWORD *)v72 + 32LL))(v72, &v97);
              FailIf = v73;
              if ( v73 < 0 )
              {
                v74 = 281LL;
LABEL_126:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v74,
                  (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                  (const char *)(unsigned int)v73);
                goto LABEL_127;
              }
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ReplaceChars(&v97);
              v73 = StringCchCopyW((unsigned __int16 *)(a3 + 12), 0x104uLL, (size_t *)v97);
              FailIf = v73;
              if ( v73 < 0 )
              {
                v74 = 285LL;
                goto LABEL_126;
              }
              *(_DWORD *)a3 = v41;
              *(_BYTE *)(a3 + 4) = v71;
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v109);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)length);
LABEL_140:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v101);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v102);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v89);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pvParam);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v88);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v93);
              goto LABEL_141;
            }
LABEL_121:
            v71 = 0;
            goto LABEL_122;
          }
          v64 = a2[4];
          v100 = 0LL;
          v65 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v88 + 112))(v88, v64);
          if ( v65 >= 0 )
          {
            v66 = v89;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v100);
            v67 = (*(__int64 (__fastcall **)(LPVOID, __int64 *, __int64, __int64 *))(*(_QWORD *)v66 + 48LL))(
                    v66,
                    v88,
                    v60,
                    &v100);
            if ( v67 >= 0 )
            {
              v68 = Microsoft::WRL::ComPtr<IResourceCandidate2>::As<IResourceCandidate>(&v100, (__int64 *)length);
              FailIf = v68;
              if ( v68 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x112,
                  (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                  (const char *)(unsigned int)v68);
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v100);
LABEL_127:
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v109);
                goto LABEL_128;
              }
              v69 = *(HSTRING *)length;
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v109);
              *(_QWORD *)&v109.Reserved.Reserved2[8] = -1LL;
              *(_QWORD *)&v109.Reserved.Reserved2[16] = -1LL;
              v41 = ((*(int (__fastcall **)(HSTRING, const wchar_t *, HSTRING_HEADER *))(*(_QWORD *)v69 + 64LL))(
                       v69,
                       L"AlternateForm",
                       &v109) >= 0)
                  + 1;
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                272LL,
                (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                (const char *)(unsigned int)v67);
            }
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              271LL,
              (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
              (const char *)(unsigned int)v65);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v100);
        }
        if ( !*((_DWORD *)a2 + 5) )
          goto LABEL_121;
        goto LABEL_119;
      }
      WindowsDeleteString(0LL);
      v75 = string;
      *(_QWORD *)length = 0LL;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&propvarIn);
      v76 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v109, (PCWSTR)propvarIn, cchCount1[0]);
      v78 = ShellMRTHelper::Common::TryFallbackToFilePath(
              v77,
              (HSTRING)v76[1].Reserved.Reserved1,
              v75,
              (HSTRING)length,
              (HSTRING *)ppv);
      FailIf = v78;
      if ( v78 >= 0 )
      {
        v80 = WindowsGetStringRawBuffer(*(HSTRING *)length, 0LL);
        if ( !PathFileExistsW(v80) )
        {
          FailIf = -2147024893;
          v79 = 299LL;
          v81 = 2147942403LL;
LABEL_137:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v79,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)v81);
          WindowsDeleteString(*(HSTRING *)length);
          *(_QWORD *)length = 0LL;
          goto LABEL_138;
        }
        v82 = (size_t *)WindowsGetStringRawBuffer(*(HSTRING *)length, 0LL);
        v78 = StringCchCopyW((unsigned __int16 *)(a3 + 12), 0x104uLL, v82);
        FailIf = v78;
        if ( v78 >= 0 )
        {
          v83 = *(HSTRING *)length;
          *(_DWORD *)a3 = 0;
          *(_BYTE *)(a3 + 4) = 0;
          WindowsDeleteString(v83);
          goto LABEL_140;
        }
        v79 = 300LL;
      }
      else
      {
        v79 = 298LL;
      }
      v81 = (unsigned int)v78;
      goto LABEL_137;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&pszPath);
    v48 = 6LL;
    v49 = *(_QWORD *)v106 + 7LL;
    if ( *(_QWORD *)v106 == -8LL )
    {
      v49 = 6LL;
    }
    else if ( v49 < 6 )
    {
      v48 = *(_QWORD *)v106 + 7LL;
    }
    v50 = v49 + 1;
    v51 = -1LL;
    if ( v49 + 1 >= v49 )
      v51 = v49 + 1;
    FailIf = v49 + 1 < v49 ? 0x80070216 : 0;
    if ( v50 >= v49 )
    {
      if ( !is_mul_ok(v51, 2uLL) )
      {
        FailIf = -2147024362;
        goto LABEL_77;
      }
      FailIf = 0;
      v52 = (char *)CoTaskMemAlloc(2 * v51);
      v40 = v52;
      if ( !v52 )
      {
        FailIf = -2147024882;
        goto LABEL_77;
      }
      v104 = v51;
      *(_WORD *)v52 = 0;
      *(_QWORD *)&v102[0].unused = v52;
    }
    if ( FailIf >= 0 )
    {
      if ( v50 - 1 > 0x7FFFFFFE )
      {
        if ( !v50 )
        {
LABEL_102:
          v103 = v48;
          v58 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
                  (__int64)v102,
                  (__int64 *)&pszPath);
          FailIf = v58;
          if ( v58 < 0 )
          {
            v44 = (unsigned int)v58;
            v45 = 251LL;
            goto LABEL_78;
          }
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ReplaceChars(v102);
          v41 = 2;
          v9 = (_DWORD *)(a3 + 8);
          goto LABEL_105;
        }
      }
      else if ( v48 <= 0x7FFFFFFE )
      {
        v54 = v48 - v50;
        v55 = (char *)((char *)L"Files\\" - v40);
        do
        {
          if ( !(v50 + v54) )
            break;
          v56 = *(_WORD *)&v55[(_QWORD)v40];
          if ( !v56 )
            break;
          *(_WORD *)v40 = v56;
          v40 += 2;
          --v50;
        }
        while ( v50 );
        v57 = v40 - 2;
        if ( v50 )
          v57 = v40;
        *(_WORD *)v57 = 0;
        goto LABEL_102;
      }
      *(_WORD *)v40 = 0;
      goto LABEL_102;
    }
LABEL_77:
    v44 = (unsigned int)FailIf;
    v45 = 250LL;
    goto LABEL_78;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x89,
    (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)v6);
LABEL_88:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v108);
  return (unsigned int)FailIf;
}
