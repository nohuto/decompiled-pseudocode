/*
 * XREFs of ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x18040B6F4
 * Callers:
 *     ?_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@1@@Z @ 0x18040E60C (-_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B8A4 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180103E78 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x180129BE0 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV12.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x18012F204 (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z.c)
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18016ACF8 (--$GetFailIfEmpty@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpro.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z @ 0x180192164 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SystemLightTheme@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1803140B4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SystemLightTheme@@@wil@@CAX_NW4Repor.c)
 *     ??$As@UIResourceCandidate@@@?$ComPtr@UIResourceCandidate2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIResourceCandidate@@@WRL@Microsoft@@@Details@12@@Z @ 0x18040982C (--$As@UIResourceCandidate@@@-$ComPtr@UIResourceCandidate2@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??$GetString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x180409870 (--$GetString@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 *     ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x18040A344 (-ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z.c)
 *     ?GetContrastForParams@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z @ 0x18040B4CC (-GetContrastForParams@ImmersiveIcons@@YA-AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z.c)
 *     ImmersiveIcons::GetPackageFullNameForAppsFolderItem @ 0x18040C860 (ImmersiveIcons--GetPackageFullNameForAppsFolderItem.c)
 *     ?HasMsAppXUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x18040CA1C (-HasMsAppXUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z.c)
 *     ?InitFromItem@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x18040CA6C (-InitFromItem@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYS.c)
 *     ?InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x18040CB10 (-InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@.c)
 *     ?InitResourceContextForLightTheme@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x18040CC9C (-InitResourceContextForLightTheme@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@.c)
 *     ?ReplaceChars@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAXGG@Z @ 0x18040D7A8 (-ReplaceChars@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAXGG@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18040DB28 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles@@@wil@@CAX_.c)
 *     ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z @ 0x18040E190 (-TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z.c)
 *     ?ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z @ 0x180416740 (-ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z.c)
 */

__int64 __fastcall ImmersiveIcons::GetIconData(
        WCHAR *pszItem,
        unsigned __int16 *a2,
        const struct ImmersiveIcons::LoadIconParams *a3,
        struct ImmersiveIcons::IconData2 *a4)
{
  unsigned __int16 *v6; // r13
  HRESULT v7; // eax
  int FailIf; // ebx
  int v9; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  const WCHAR *v13; // rdi
  const WCHAR *StringRawBuffer; // rax
  unsigned __int16 **v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  const WCHAR *v18; // rax
  HRESULT Instance; // eax
  int PackageFullNameForAppsFolderItem; // eax
  __int64 v21; // rdx
  HSTRING v22; // rbx
  const WCHAR *v23; // rdi
  HRESULT v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  HSTRING v27; // rbx
  int v28; // eax
  int v29; // eax
  HSTRING v30; // rdx
  char *v31; // rdi
  unsigned __int16 **v32; // r8
  int v33; // eax
  __int64 v34; // rdx
  const WCHAR *v35; // rax
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rsi
  char *v39; // rax
  unsigned __int64 v40; // rcx
  char *v41; // rdx
  __int16 v42; // ax
  char *v43; // rax
  HSTRING v44; // rbx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  int v49; // esi
  int v50; // r12d
  __int64 v51; // rdx
  struct IResourceContext *v52; // r8
  __int64 v53; // r14
  int inited; // eax
  __int64 v55; // rdx
  __int64 v56; // rbx
  int v57; // eax
  __int64 v58; // rbx
  __int64 v59; // rax
  const WCHAR *v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rbx
  __int64 v63; // rbx
  int v64; // eax
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  int ContrastForParams; // edi
  __int64 v69; // r8
  int v70; // eax
  __int64 v71; // rbx
  int v72; // eax
  int v73; // eax
  __int64 v74; // rbx
  __int64 v75; // rbx
  __int64 v76; // rax
  const WCHAR *v77; // rcx
  __int64 v78; // rax
  const WCHAR *v79; // rcx
  __int64 v80; // rbx
  bool v81; // di
  __int64 v82; // rbx
  int v83; // eax
  __int64 v84; // rdx
  HSTRING v85; // rbx
  HSTRING_HEADER *v86; // rax
  ShellMRTHelper::Common *v87; // rcx
  int v88; // eax
  __int64 v89; // rdx
  const WCHAR *v90; // rax
  __int64 v91; // r9
  size_t *v92; // rax
  HSTRING v93; // rcx
  __int64 v94; // rax
  void **ppv; // [rsp+20h] [rbp-E0h]
  UINT32 length[2]; // [rsp+30h] [rbp-D0h] BYREF
  const unsigned __int16 *v98; // [rsp+38h] [rbp-C8h] BYREF
  LPCWCH lpString1; // [rsp+40h] [rbp-C0h] BYREF
  int cchCount1[2]; // [rsp+48h] [rbp-B8h]
  __int64 v101; // [rsp+50h] [rbp-B0h]
  __int64 v102; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING v103; // [rsp+60h] [rbp-A0h] BYREF
  struct ImmersiveIcons::LoadIconParams *v104; // [rsp+68h] [rbp-98h] BYREF
  HSTRING__ v105[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v106; // [rsp+80h] [rbp-80h]
  __int64 v107; // [rsp+90h] [rbp-70h] BYREF
  __int64 v108; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int16 *v109; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v110; // [rsp+A8h] [rbp-58h]
  __int64 v111; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall ***v112)(_QWORD, GUID *, __int64 *); // [rsp+B8h] [rbp-48h] BYREF
  LPCWSTR pszPath; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v114[2]; // [rsp+C8h] [rbp-38h]
  __int64 v115; // [rsp+D0h] [rbp-30h]
  void *v116; // [rsp+D8h] [rbp-28h] BYREF
  PCWSTR sourceString; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v118[2]; // [rsp+E8h] [rbp-18h]
  __int64 v119; // [rsp+F0h] [rbp-10h]
  __int64 v120; // [rsp+F8h] [rbp-8h] BYREF
  HSTRING_HEADER propvarIn; // [rsp+100h] [rbp+0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+120h] [rbp+20h] BYREF
  HSTRING string; // [rsp+138h] [rbp+38h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v98 = a2;
  v116 = 0LL;
  v6 = a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v116);
  v7 = SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0x4000u,
         pszItem,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         &v116);
  FailIf = v7;
  if ( v7 >= 0 )
  {
    v108 = 0LL;
    v9 = wil::PropertyStoreHelperBase<IPropertyStore>::InitFromItem(&v108, v116);
    FailIf = v9;
    if ( v9 < 0 )
    {
      v10 = (unsigned int)v9;
      v11 = 236LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)v10);
LABEL_192:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v108);
      goto LABEL_193;
    }
    *((_DWORD *)a3 + 3) = 0;
    *(_OWORD *)&v105[0].unused = PKEY_Tile_Background;
    LOWORD(propvarIn.Reserved.Reserved1) = 0;
    LODWORD(v106) = 4;
    FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(&v108, (__int64)v105, &propvarIn);
    if ( FailIf >= 0 )
    {
      *((_DWORD *)a3 + 3) = 0;
      if ( LOWORD(propvarIn.Reserved.Reserved1) )
        FailIf = PropVariantToUInt32(&propvarIn.Reserved.Reserved1, (ULONG *)a3 + 3);
      else
        FailIf = -2147023728;
    }
    PropVariantClear(&propvarIn.Reserved.Reserved1);
    if ( FailIf < 0 )
    {
      v10 = (unsigned int)FailIf;
      v11 = 238LL;
      goto LABEL_11;
    }
    pszPath = 0LL;
    *(_OWORD *)&v105[0].unused = PKEY_Tile_SmallLogoPath;
    *(_QWORD *)v114 = 0LL;
    v115 = 0LL;
    LODWORD(v106) = 2;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
    *(_QWORD *)v114 = -1LL;
    v115 = -1LL;
    v12 = wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(
            &v108,
            (__int128 *)&v105[0].unused,
            &pszPath);
    FailIf = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF1,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v12);
LABEL_191:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
      goto LABEL_192;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&pszPath);
    v13 = pszPath;
    Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, pszPath, v114[0]);
    v109 = 0LL;
    v110 = 0LL;
    v111 = 0LL;
    length[0] = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(string, length);
    if ( length[0] >= 5 && CompareStringOrdinal(StringRawBuffer, 5, L"file:", 5, 1) == 2 )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v109);
      v110 = -1LL;
      v111 = -1LL;
      v16 = TileUtils::ConvertFileUriToFilePath(v13, (const unsigned __int16 *)&v109, v15);
      FailIf = v16;
      if ( v16 < 0 )
      {
        v17 = 259LL;
LABEL_35:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v16);
LABEL_190:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v109);
        string = 0LL;
        goto LABEL_191;
      }
    }
    else
    {
      length[0] = 0;
      v18 = WindowsGetStringRawBuffer(string, length);
      if ( length[0] >= 0xB && CompareStringOrdinal(v18, 11, L"ms-appdata:", 11, 1) == 2 )
      {
        v103 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v103);
        Instance = CoCreateInstance(
                     &GUID_a8ca4495_65ab_4333_9ff9_4feb6fbf5169,
                     0LL,
                     1u,
                     &GUID_428bb582_2a87_4ea0_b529_30067cc4a4d7,
                     (LPVOID *)&v103);
        FailIf = Instance;
        if ( Instance >= 0 )
        {
          lpString1 = 0LL;
          *(_QWORD *)cchCount1 = 0LL;
          v101 = 0LL;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
          *(_QWORD *)cchCount1 = -1LL;
          v101 = -1LL;
          PackageFullNameForAppsFolderItem = ImmersiveIcons::GetPackageFullNameForAppsFolderItem((CallerIdentity *)pszItem);
          FailIf = PackageFullNameForAppsFolderItem;
          if ( PackageFullNameForAppsFolderItem >= 0 )
          {
            v22 = v103;
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v109);
            v110 = -1LL;
            v111 = -1LL;
            PackageFullNameForAppsFolderItem = (*(__int64 (__fastcall **)(HSTRING, const WCHAR *, LPCWCH, _QWORD, unsigned __int16 **))(*(_QWORD *)v22 + 48LL))(
                                                 v22,
                                                 v13,
                                                 lpString1,
                                                 0LL,
                                                 &v109);
            FailIf = PackageFullNameForAppsFolderItem;
            if ( PackageFullNameForAppsFolderItem >= 0 )
            {
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v103);
              goto LABEL_28;
            }
            v21 = 269LL;
          }
          else
          {
            v21 = 267LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)PackageFullNameForAppsFolderItem);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x108,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)Instance);
        }
LABEL_189:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v103);
        goto LABEL_190;
      }
      if ( !PathIsRelativeW(v13) )
      {
        v16 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
                (LPVOID *)&v109,
                (__int64 *)&pszPath);
        FailIf = v16;
        if ( v16 < 0 )
        {
          v17 = 275LL;
          goto LABEL_35;
        }
      }
    }
LABEL_28:
    v23 = &String2;
    if ( v109 && *v109 )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ReplaceChars(&v109);
      v16 = StringCchCopyW((unsigned __int16 *)a3 + 8, 0x104uLL, (size_t *)v109);
      FailIf = v16;
      if ( v16 < 0 )
      {
        v17 = 451LL;
        goto LABEL_35;
      }
      *(_QWORD *)a3 = 0LL;
      *((_BYTE *)a3 + 8) = 0;
LABEL_169:
      wil::Feature<__WilFeatureTraits_Feature_EdgePinnedSecondaryTiles>::ReportUsageToService();
      if ( !*(_DWORD *)a3 )
      {
        lpString1 = 0LL;
        *(_OWORD *)&v105[0].unused = PKEY_AppUserModel_ParentID;
        *(_QWORD *)cchCount1 = 0LL;
        v101 = 0LL;
        LODWORD(v106) = 19;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
        *(_QWORD *)cchCount1 = -1LL;
        v101 = -1LL;
        if ( (int)wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(
                    &v108,
                    (__int128 *)&v105[0].unused,
                    &lpString1) >= 0 )
        {
          LODWORD(v94) = cchCount1[0];
          if ( *(_QWORD *)cchCount1 == -1LL )
          {
            if ( lpString1 )
            {
              v94 = -1LL;
              do
                ++v94;
              while ( lpString1[v94] );
            }
            else
            {
              LODWORD(v94) = 0;
            }
          }
          if ( lpString1 )
            v23 = lpString1;
          if ( CompareStringOrdinal(v23, v94, L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe!MicrosoftEdge", -1, 1) == 2 )
            *(_DWORD *)a3 = 3;
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
      }
      FailIf = 0;
      goto LABEL_190;
    }
    v103 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v103);
    v24 = CoCreateInstance(
            &GUID_dbce7e40_7345_439d_b12c_114a11819a09,
            0LL,
            1u,
            &GUID_130a2f65_2be7_4309_9a58_a9052ff2b61c,
            (LPVOID *)&v103);
    FailIf = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11C,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v24);
      goto LABEL_189;
    }
    sourceString = 0LL;
    *(_QWORD *)v118 = 0LL;
    v119 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
    *(_QWORD *)v118 = -1LL;
    v119 = -1LL;
    v25 = ImmersiveIcons::GetPackageFullNameForAppsFolderItem((CallerIdentity *)pszItem);
    FailIf = v25;
    if ( v25 < 0 )
    {
      v26 = 287LL;
LABEL_43:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v25);
LABEL_188:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
      goto LABEL_189;
    }
    v25 = (*(__int64 (__fastcall **)(HSTRING, PCWSTR))(*(_QWORD *)v103 + 40LL))(v103, sourceString);
    FailIf = v25;
    if ( v25 < 0 )
    {
      v26 = 289LL;
      goto LABEL_43;
    }
    v27 = v103;
    v112 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v112);
    v28 = (*(__int64 (__fastcall **)(HSTRING, GUID *, _QWORD))(*(_QWORD *)v27 + 56LL))(
            v27,
            &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd,
            &v112);
    FailIf = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x124,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v28);
LABEL_187:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v112);
      goto LABEL_188;
    }
    v107 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v107);
    v29 = (**v112)(v112, &GUID_2fe6ec6e_da7e_4b2a_a8f9_90b289061f20, &v107);
    FailIf = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x127,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v29);
LABEL_186:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v107);
      goto LABEL_187;
    }
    v31 = 0LL;
    memset(v105, 0, sizeof(v105));
    v106 = 0LL;
    if ( ShellMRTHelper::Common::HasMsAppXUriScheme((ShellMRTHelper::Common *)string, v30) )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v105);
      *(_QWORD *)&v105[2].unused = -1LL;
      v106 = -1LL;
      v33 = ShellMRTHelper::Common::ConvertMsAppXUriToMsResourceUri(
              (ShellMRTHelper::Common *)string,
              (struct Windows::Foundation::IUriRuntimeClass *)v105,
              v32);
      FailIf = v33;
      if ( v33 < 0 )
      {
        v34 = 302LL;
LABEL_78:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v34,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v33);
LABEL_185:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v105);
        goto LABEL_186;
      }
      goto LABEL_80;
    }
    length[0] = 0;
    v35 = WindowsGetStringRawBuffer(string, length);
    if ( length[0] >= 0xC && CompareStringOrdinal(v35, 12, L"ms-resource:", 12, 1) == 2 )
    {
      v33 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
              (LPVOID *)v105,
              (__int64 *)&pszPath);
      FailIf = v33;
      if ( v33 < 0 )
      {
        v34 = 309LL;
        goto LABEL_78;
      }
LABEL_80:
      v44 = v103;
      v104 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v104);
      v45 = (*(__int64 (__fastcall **)(HSTRING, GUID *, struct ImmersiveIcons::LoadIconParams **))(*(_QWORD *)v44 + 72LL))(
              v44,
              &GUID_e3c22b30_8502_4b2f_9133_559674587e51,
              &v104);
      FailIf = v45;
      if ( v45 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x144,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v45);
LABEL_166:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v104);
        goto LABEL_185;
      }
      v102 = 0LL;
      v49 = 0;
      v50 = 0;
      wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsageToService(v47, v46, v48);
      v53 = *(_QWORD *)&v105[0].unused;
      if ( *((_DWORD *)v6 + 11) == 1 && *((_DWORD *)v6 + 10) != 1 && *((_DWORD *)v6 + 9) != 2 )
      {
        inited = ImmersiveIcons::InitResourceContextForLightTheme((ImmersiveIcons *)v6, v104, v52);
        FailIf = inited;
        if ( inited < 0 )
        {
          v55 = 344LL;
LABEL_109:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v55,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)inited);
LABEL_165:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v102);
          goto LABEL_166;
        }
        v56 = v107;
        v98 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v98);
        if ( (*(int (__fastcall **)(__int64, struct ImmersiveIcons::LoadIconParams *, __int64, const unsigned __int16 **))(*(_QWORD *)v56 + 48LL))(
               v56,
               v104,
               v53,
               &v98) >= 0 )
        {
          *(_QWORD *)length = 0LL;
          v57 = Microsoft::WRL::ComPtr<IResourceCandidate2>::As<IResourceCandidate>(&v98, (__int64 *)length);
          FailIf = v57;
          if ( v57 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x15E,
              (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
              (const char *)(unsigned int)v57);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)length);
LABEL_113:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v98);
            goto LABEL_165;
          }
          v58 = *(_QWORD *)length;
          lpString1 = 0LL;
          *(_QWORD *)cchCount1 = 0LL;
          v101 = 0LL;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
          *(_QWORD *)cchCount1 = -1LL;
          v101 = -1LL;
          if ( (*(int (__fastcall **)(__int64, const wchar_t *, LPCWCH *))(*(_QWORD *)v58 + 64LL))(
                 v58,
                 L"AlternateForm",
                 &lpString1) >= 0 )
          {
            LODWORD(v59) = cchCount1[0];
            if ( *(_QWORD *)cchCount1 == -1LL )
            {
              if ( lpString1 )
              {
                v59 = -1LL;
                do
                  ++v59;
                while ( lpString1[v59] );
              }
              else
              {
                LODWORD(v59) = 0;
              }
            }
            v60 = &String2;
            if ( lpString1 )
              v60 = lpString1;
            if ( CompareStringOrdinal(v60, v59, L"lightunplated", -1, 1) == 2 )
            {
              v49 = 2;
              v50 = 1;
              v61 = v102;
              v62 = *(_QWORD *)length;
              if ( v102 != *(_QWORD *)length )
              {
                if ( *(_QWORD *)length )
                {
                  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)length + 8LL))(*(_QWORD *)length);
                  v61 = v102;
                }
                v120 = v61;
                v102 = v62;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v120);
              }
            }
          }
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)length);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v98);
      }
      if ( v102 )
        goto LABEL_116;
      inited = ImmersiveIcons::InitResourceContextForAllThemes((ImmersiveIcons *)v6, v104, v52);
      FailIf = inited;
      if ( inited < 0 )
      {
        v55 = 368LL;
        goto LABEL_109;
      }
      v63 = v107;
      v98 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v98);
      if ( (*(int (__fastcall **)(__int64, struct ImmersiveIcons::LoadIconParams *, __int64, const unsigned __int16 **))(*(_QWORD *)v63 + 48LL))(
             v63,
             v104,
             v53,
             &v98) >= 0 )
      {
        v64 = Microsoft::WRL::ComPtr<IResourceCandidate2>::As<IResourceCandidate>(&v98, &v102);
        FailIf = v64;
        if ( v64 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x174,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v64);
          goto LABEL_113;
        }
        v65 = v102;
        memset(&propvarIn, 0, sizeof(propvarIn));
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
        *(_QWORD *)&propvarIn.Reserved.Reserved2[8] = -1LL;
        *(_QWORD *)&propvarIn.Reserved.Reserved2[16] = -1LL;
        v49 = ((*(int (__fastcall **)(__int64, const wchar_t *, HSTRING_HEADER *))(*(_QWORD *)v65 + 64LL))(
                 v65,
                 L"AlternateForm",
                 &propvarIn) >= 0)
            + 1;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v98);
      if ( v102 )
      {
LABEL_116:
        ContrastForParams = ImmersiveIcons::GetContrastForParams((__int64)v6, v51, (__int64)v52);
        if ( v49 == 1 && !ContrastForParams )
        {
          v98 = 0LL;
          v70 = (*(__int64 (__fastcall **)(struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)v104 + 112LL))(
                  v104,
                  v6[8]);
          if ( v70 >= 0 )
          {
            v71 = v107;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v98);
            v72 = (*(__int64 (__fastcall **)(__int64, struct ImmersiveIcons::LoadIconParams *, __int64, const unsigned __int16 **))(*(_QWORD *)v71 + 48LL))(
                    v71,
                    v104,
                    v53,
                    &v98);
            if ( v72 >= 0 )
            {
              v73 = Microsoft::WRL::ComPtr<IResourceCandidate2>::As<IResourceCandidate>(&v98, &v102);
              FailIf = v73;
              if ( v73 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x186,
                  (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                  (const char *)(unsigned int)v73);
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v98);
                goto LABEL_165;
              }
              v74 = v102;
              lpString1 = 0LL;
              *(_QWORD *)cchCount1 = 0LL;
              v101 = 0LL;
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
              *(_QWORD *)cchCount1 = -1LL;
              v101 = -1LL;
              v49 = ((*(int (__fastcall **)(__int64, const wchar_t *, LPCWCH *))(*(_QWORD *)v74 + 64LL))(
                       v74,
                       L"AlternateForm",
                       &lpString1) >= 0)
                  + 1;
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x184,
                (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                (const char *)(unsigned int)v72);
            }
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x183,
              (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
              (const char *)(unsigned int)v70);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v98);
        }
        wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsageToService(v67, v66, v69);
        v75 = v102;
        lpString1 = 0LL;
        *(_QWORD *)cchCount1 = 0LL;
        v101 = 0LL;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
        *(_QWORD *)cchCount1 = -1LL;
        v101 = -1LL;
        if ( (*(int (__fastcall **)(__int64, const wchar_t *, LPCWCH *))(*(_QWORD *)v75 + 64LL))(
               v75,
               L"Theme",
               &lpString1) >= 0 )
        {
          LODWORD(v76) = cchCount1[0];
          if ( *(_QWORD *)cchCount1 == -1LL )
          {
            if ( lpString1 )
            {
              v76 = -1LL;
              do
                ++v76;
              while ( lpString1[v76] );
            }
            else
            {
              LODWORD(v76) = 0;
            }
          }
          v77 = &String2;
          if ( lpString1 )
            v77 = lpString1;
          if ( CompareStringOrdinal(v77, v76, L"dark", -1, 1) == 2 )
          {
            v50 = 2;
          }
          else
          {
            LODWORD(v78) = cchCount1[0];
            if ( *(_QWORD *)cchCount1 == -1LL )
            {
              if ( lpString1 )
              {
                v78 = -1LL;
                do
                  ++v78;
                while ( lpString1[v78] );
              }
              else
              {
                LODWORD(v78) = 0;
              }
            }
            v79 = &String2;
            if ( lpString1 )
              v79 = lpString1;
            if ( CompareStringOrdinal(v79, v78, L"light", -1, 1) == 2 )
              v50 = 1;
          }
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
        memset(&propvarIn, 0, sizeof(propvarIn));
        v81 = 0;
        if ( ContrastForParams )
        {
          v80 = v102;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
          *(_QWORD *)&propvarIn.Reserved.Reserved2[8] = -1LL;
          *(_QWORD *)&propvarIn.Reserved.Reserved2[16] = -1LL;
          if ( (*(int (__fastcall **)(__int64, const wchar_t *, HSTRING_HEADER *))(*(_QWORD *)v80 + 64LL))(
                 v80,
                 L"Contrast",
                 &propvarIn) >= 0 )
            v81 = 1;
        }
        v82 = v102;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v109);
        v110 = -1LL;
        v111 = -1LL;
        v83 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v82 + 32LL))(v82, &v109);
        FailIf = v83;
        if ( v83 < 0 )
        {
          v84 = 416LL;
LABEL_155:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v84,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v83);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
          goto LABEL_165;
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ReplaceChars(&v109);
        v83 = StringCchCopyW((unsigned __int16 *)a3 + 8, 0x104uLL, (size_t *)v109);
        FailIf = v83;
        if ( v83 < 0 )
        {
          v84 = 420LL;
          goto LABEL_155;
        }
        *(_DWORD *)a3 = v49;
        *((_DWORD *)a3 + 1) = v50;
        *((_BYTE *)a3 + 8) = v81;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
LABEL_168:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v102);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v104);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v105);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v107);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v112);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v103);
        v23 = &String2;
        goto LABEL_169;
      }
      *(_QWORD *)length = 0LL;
      WindowsDeleteString(0LL);
      v85 = string;
      *(_QWORD *)length = 0LL;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
      v86 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&propvarIn, sourceString, v118[0]);
      v88 = ShellMRTHelper::Common::TryFallbackToFilePath(
              v87,
              (HSTRING)v86[1].Reserved.Reserved1,
              v85,
              (HSTRING)length,
              (HSTRING *)ppv);
      FailIf = v88;
      if ( v88 >= 0 )
      {
        v90 = WindowsGetStringRawBuffer(*(HSTRING *)length, 0LL);
        if ( !PathFileExistsW(v90) )
        {
          FailIf = -2147024893;
          v89 = 435LL;
          v91 = 2147942403LL;
LABEL_164:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v89,
            (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)v91);
          WindowsDeleteString(*(HSTRING *)length);
          *(_QWORD *)length = 0LL;
          goto LABEL_165;
        }
        v92 = (size_t *)WindowsGetStringRawBuffer(*(HSTRING *)length, 0LL);
        v88 = StringCchCopyW((unsigned __int16 *)a3 + 8, 0x104uLL, v92);
        FailIf = v88;
        if ( v88 >= 0 )
        {
          v93 = *(HSTRING *)length;
          *(_QWORD *)a3 = 0LL;
          *((_BYTE *)a3 + 8) = 0;
          WindowsDeleteString(v93);
          goto LABEL_168;
        }
        v89 = 436LL;
      }
      else
      {
        v89 = 434LL;
      }
      v91 = (unsigned int)v88;
      goto LABEL_164;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&pszPath);
    v36 = 6LL;
    v37 = *(_QWORD *)v114 + 7LL;
    if ( *(_QWORD *)v114 == -8LL )
    {
      v37 = 6LL;
    }
    else if ( v37 < 6 )
    {
      v36 = *(_QWORD *)v114 + 7LL;
    }
    v38 = v37 + 1;
    if ( v37 + 1 >= v37 && is_mul_ok(v38, 2uLL) )
    {
      FailIf = 0;
      v39 = (char *)CoTaskMemAlloc(2 * v38);
      if ( v39 )
      {
        v106 = v38;
        v31 = v39;
        *(_QWORD *)&v105[0].unused = v39;
        *(_WORD *)v39 = 0;
      }
      else
      {
        FailIf = -2147024882;
      }
      if ( FailIf >= 0 )
      {
        if ( v38 - 1 > 0x7FFFFFFE )
        {
          if ( !v38 )
          {
LABEL_76:
            *(_QWORD *)&v105[2].unused = v36;
            v33 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
                    (__int64)v105,
                    (__int64 *)&pszPath);
            FailIf = v33;
            if ( v33 < 0 )
            {
              v34 = 317LL;
              goto LABEL_78;
            }
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ReplaceChars(v105);
            goto LABEL_80;
          }
        }
        else if ( v36 <= 0x7FFFFFFE )
        {
          v40 = v36 - v38;
          v41 = (char *)((char *)L"Files\\" - v31);
          do
          {
            if ( !(v38 + v40) )
              break;
            v42 = *(_WORD *)&v41[(_QWORD)v31];
            if ( !v42 )
              break;
            *(_WORD *)v31 = v42;
            v31 += 2;
            --v38;
          }
          while ( v38 );
          v6 = (unsigned __int16 *)v98;
          v43 = v31 - 2;
          if ( v38 )
            v43 = v31;
          *(_WORD *)v43 = 0;
          goto LABEL_76;
        }
        *(_WORD *)v31 = 0;
        goto LABEL_76;
      }
    }
    else
    {
      FailIf = -2147024362;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13C,
      (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)(unsigned int)FailIf);
    goto LABEL_185;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDD,
    (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)v7);
LABEL_193:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v116);
  return (unsigned int)FailIf;
}
