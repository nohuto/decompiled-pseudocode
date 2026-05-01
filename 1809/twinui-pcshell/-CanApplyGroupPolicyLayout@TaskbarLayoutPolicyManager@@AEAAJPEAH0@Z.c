/*
 * XREFs of ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x18013878C
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180138B80 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18013AC88 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$?0V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@UDummy@Details@23@@Z @ 0x180137B3C (--$-0V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIStartLayoutInitializationStatics@SharedStartModel@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIStartLayoutInitializationStatics@SharedStartModel@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180137D4C (--$GetActivationFactory@V-$ComPtr@UIStartLayoutInitializationStatics@SharedStartModel@@@WRL@Micr.c)
 *     ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x180139124 (-EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x18013A2E8 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x18013A3F0 (-LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Mi.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18013C0EC (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x18013C54C (-_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z.c)
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
  DWORD pcbData[2]; // [rsp+48h] [rbp-59h] BYREF
  struct IXMLDOMDocument2 *v21; // [rsp+50h] [rbp-51h] BYREF
  FILETIME FileTime1; // [rsp+58h] [rbp-49h] BYREF
  __int64 v23; // [rsp+60h] [rbp-41h] BYREF
  FILETIME v24; // [rsp+68h] [rbp-39h] BYREF
  FILETIME v25; // [rsp+70h] [rbp-31h] BYREF
  FILETIME FileTime2; // [rsp+78h] [rbp-29h] BYREF
  __int64 v27; // [rsp+80h] [rbp-21h]
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-19h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-1h]
  HSTRING_HEADER v30; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v31; // [rsp+C0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v27 = -2LL;
  *a2 = 0;
  *a3 = 0;
  if ( (unsigned int)SHWindowsPolicy(&POLID_LockedStartLayout) )
  {
    v6 = TaskbarLayoutPolicyManager::EnsureEnterpriseLayoutFilePath(this);
    if ( v6 < 0 )
    {
      v7 = 236LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v23 = 0LL;
    v29 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"SharedStartModel.StartLayoutInitializationStatics",
      0x32u,
      0x31u);
    v9 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<SharedStartModel::IStartLayoutInitializationStatics>>(
           v29,
           &v23);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF0,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_26:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      return v10;
    }
    Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, (const WCHAR **)this + 4);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, FILETIME *))(*(_QWORD *)v23 + 64LL))(v23, v31, &v25);
    v10 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF4,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_25:
      v31 = 0LL;
      goto LABEL_26;
    }
    v24 = v25;
    FileTime1 = 0LL;
    pcbData[0] = 8;
    ValueW = RegGetValueW(
               HKEY_CURRENT_USER,
               L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
               L"LayoutXMLLastModified",
               8u,
               0LL,
               &FileTime1,
               pcbData);
    v13 = ValueW < 0;
    if ( ValueW > 0 )
    {
      ValueW = (unsigned __int16)ValueW | 0x80070000;
      v13 = ValueW < 0;
    }
    if ( v13 )
      goto LABEL_15;
    if ( pcbData[0] != 8 )
      ValueW = -2147467259;
    if ( ValueW < 0 )
LABEL_15:
      FileTime1 = 0LL;
    FileTime2 = 0LL;
    if ( !CompareFileTime(&FileTime1, &FileTime2) || CompareFileTime(&FileTime1, &v24) )
    {
      v21 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      v15 = TaskbarLayoutPolicyManager::LoadLayoutXMLFromFilePath(
              v14,
              (struct Microsoft::WRL::Wrappers::HStringReference *)&v30,
              &v21);
      v10 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x101,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v15);
LABEL_24:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
        goto LABEL_25;
      }
      v17 = v21;
      if ( v21 && (int)TaskbarLayoutPolicyManager::ValidateLayoutModificationXML(v16, v21) >= 0 )
      {
        *(_QWORD *)pcbData = 0LL;
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
            (void *)0x107,
            (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
            (const char *)(unsigned int)v18);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)pcbData);
          goto LABEL_24;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)pcbData);
        if ( ((int (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, DWORD *))v17->lpVtbl->selectSingleNode)(
               v17,
               *((_QWORD *)this + 15),
               pcbData) >= 0 )
        {
          if ( *(_QWORD *)pcbData )
          {
            *a3 = TaskbarLayoutPolicyManager::IsOverrideLayout(this, *(struct IXMLDOMNode **)pcbData);
            *a2 = 1;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)pcbData);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    }
    v31 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  }
  else
  {
    v24 = 0LL;
    v19 = _RegSetKeyValue(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
            L"LayoutXMLLastModified",
            3u,
            &v24,
            8u);
    v6 = v19;
    if ( v19 > 0 )
      v6 = (unsigned __int16)v19 | 0x80070000;
    if ( v6 < 0 )
    {
      v7 = 276LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
