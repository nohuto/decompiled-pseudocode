/*
 * XREFs of ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x1801828EC
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180182CD0 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180184DE0 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$?0V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@UDummy@Details@23@@Z @ 0x180181BAC (--$-0V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference.c)
 *     ??$GetActivationFactory@V?$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180181DBC (--$GetActivationFactory@V-$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollection.c)
 *     ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x180183204 (-EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x180184468 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x180184570 (-LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Mi.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18018648C (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801868EC (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TaskbarLayoutPolicyManager::CanApplyGroupPolicyLayout(
        TaskbarLayoutPolicyManager *this,
        int *a2,
        int *a3)
{
  signed int v6; // ebx
  __int64 v7; // rdx
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  int ValueW; // eax
  bool v13; // sf
  TaskbarLayoutPolicyManager *v14; // rcx
  int v15; // eax
  TaskbarLayoutPolicyManager *v16; // rcx
  struct IXMLDOMDocument2 *v17; // rbx
  int v18; // eax
  int v19; // eax
  struct _SECURITY_ATTRIBUTES *pcbData; // [rsp+30h] [rbp-79h]
  DWORD v21[2]; // [rsp+40h] [rbp-69h] BYREF
  struct IXMLDOMDocument2 *v22; // [rsp+48h] [rbp-61h] BYREF
  FILETIME FileTime1; // [rsp+50h] [rbp-59h] BYREF
  __int64 v24; // [rsp+58h] [rbp-51h] BYREF
  FILETIME v25; // [rsp+60h] [rbp-49h] BYREF
  FILETIME v26; // [rsp+68h] [rbp-41h] BYREF
  FILETIME FileTime2; // [rsp+70h] [rbp-39h] BYREF
  __int64 v28; // [rsp+78h] [rbp-31h]
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-29h] BYREF
  __int64 v30; // [rsp+98h] [rbp-11h]
  HSTRING_HEADER v31; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v28 = -2LL;
  *a2 = 0;
  *a3 = 0;
  if ( (unsigned int)SHWindowsPolicy(&POLID_LockedStartLayout) )
  {
    v6 = TaskbarLayoutPolicyManager::EnsureEnterpriseLayoutFilePath(this);
    if ( v6 < 0 )
    {
      v7 = 234LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v24 = 0LL;
    v30 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"WindowsInternal.Shell.UnifiedTile.CuratedTileCollections.CuratedCollectionInitializationStatics",
      0x60u,
      0x5Fu);
    v9 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedCollectionInitializationStatics>>(
           v30,
           &v24);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEE,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_26:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      return v10;
    }
    Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, (const WCHAR **)this + 4);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, FILETIME *))(*(_QWORD *)v24 + 64LL))(v24, v32, &v26);
    v10 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF2,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_25:
      v32 = 0LL;
      goto LABEL_26;
    }
    v25 = v26;
    FileTime1 = 0LL;
    v21[0] = 8;
    ValueW = RegGetValueW(
               HKEY_CURRENT_USER,
               L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
               L"LayoutXMLLastModified",
               8u,
               0LL,
               &FileTime1,
               v21);
    v13 = ValueW < 0;
    if ( ValueW > 0 )
    {
      ValueW = (unsigned __int16)ValueW | 0x80070000;
      v13 = ValueW < 0;
    }
    if ( v13 )
      goto LABEL_15;
    if ( v21[0] != 8 )
      ValueW = -2147467259;
    if ( ValueW < 0 )
LABEL_15:
      FileTime1 = 0LL;
    FileTime2 = 0LL;
    if ( !CompareFileTime(&FileTime1, &FileTime2) || CompareFileTime(&FileTime1, &v25) )
    {
      v22 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      v15 = TaskbarLayoutPolicyManager::LoadLayoutXMLFromFilePath(
              v14,
              (struct Microsoft::WRL::Wrappers::HStringReference *)&v31,
              &v22);
      v10 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFF,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v15);
LABEL_24:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
        goto LABEL_25;
      }
      v17 = v22;
      if ( v22 && (int)TaskbarLayoutPolicyManager::ValidateLayoutModificationXML(v16, v22) >= 0 )
      {
        *(_QWORD *)v21 = 0LL;
        hstringHeader = *(HSTRING_HEADER *)((char *)this + 80);
        v18 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, HSTRING_HEADER *))v17->lpVtbl->setProperty)(
                v17,
                *((_QWORD *)this + 13),
                &hstringHeader);
        v10 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x105,
            (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
            (const char *)(unsigned int)v18);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
          goto LABEL_24;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
        if ( ((int (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, DWORD *))v17->lpVtbl->selectSingleNode)(
               v17,
               *((_QWORD *)this + 15),
               v21) >= 0 )
        {
          if ( *(_QWORD *)v21 )
          {
            *a3 = TaskbarLayoutPolicyManager::IsOverrideLayout(this, *(struct IXMLDOMNode **)v21);
            *a2 = 1;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    }
    v32 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  }
  else
  {
    v25 = 0LL;
    v19 = _RegSetKeyValueWithSDDL(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
            L"LayoutXMLLastModified",
            3u,
            &v25,
            8u,
            pcbData);
    v6 = v19;
    if ( v19 > 0 )
      v6 = (unsigned __int16)v19 | 0x80070000;
    if ( v6 < 0 )
    {
      v7 = 274LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
