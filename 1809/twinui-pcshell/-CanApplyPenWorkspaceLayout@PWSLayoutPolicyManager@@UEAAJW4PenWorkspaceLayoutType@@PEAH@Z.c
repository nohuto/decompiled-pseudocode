/*
 * XREFs of ?CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z @ 0x18019F2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIStartLayoutInitializationStatics@SharedStartModel@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIStartLayoutInitializationStatics@SharedStartModel@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180137D4C (--$GetActivationFactory@V-$ComPtr@UIStartLayoutInitializationStatics@SharedStartModel@@@WRL@Micr.c)
 *     ?GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18019F640 (-GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18019F774 (-GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1801A01B0 (-ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1801A0320 (-ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PWSLayoutPolicyManager::CanApplyPenWorkspaceLayout(__int64 a1, int a2, _DWORD *a3)
{
  int v6; // eax
  int OEMLayoutXML; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  PWSLayoutPolicyManager *v10; // rcx
  struct IXMLDOMDocument2 *v11; // rbx
  int v12; // eax
  PWSLayoutPolicyManager *v13; // rcx
  int DefaultLayoutXML; // eax
  __int64 v15; // rdi
  struct IXMLDOMDocument2 *v17; // [rsp+20h] [rbp-50h] BYREF
  __int64 v18; // [rsp+28h] [rbp-48h] BYREF
  __int64 v19[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v19[1] = -2LL;
  *a3 = 0;
  v19[0] = 0LL;
  v21 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"SharedStartModel.StartLayoutInitializationStatics",
    0x32u,
    0x31u);
  v6 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<SharedStartModel::IStartLayoutInitializationStatics>>(
         v21,
         v19);
  OEMLayoutXML = v6;
  if ( v6 >= 0 )
  {
    v17 = 0LL;
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        OEMLayoutXML = -2147467259;
        v8 = 2147500037LL;
        v9 = 113LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
          (const char *)v8);
        goto LABEL_26;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      OEMLayoutXML = PWSLayoutPolicyManager::GetOEMLayoutXML((PWSLayoutPolicyManager *)a1, &v17);
      if ( OEMLayoutXML < 0 )
      {
LABEL_26:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
        goto LABEL_27;
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      DefaultLayoutXML = PWSLayoutPolicyManager::GetDefaultLayoutXML(v13, &v17);
      OEMLayoutXML = DefaultLayoutXML;
      if ( DefaultLayoutXML < 0 )
      {
        v9 = 106LL;
LABEL_16:
        v8 = (unsigned int)DefaultLayoutXML;
        goto LABEL_17;
      }
    }
    v11 = v17;
    if ( v17 )
    {
      v12 = a2
          ? PWSLayoutPolicyManager::ValidateLayoutModificationXML(v10, v17)
          : PWSLayoutPolicyManager::ValidateDefaultLayoutXML(v10, v17);
      if ( v12 >= 0 )
      {
        hstringHeader = *(HSTRING_HEADER *)(a1 + 80);
        DefaultLayoutXML = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, HSTRING_HEADER *))v11->lpVtbl->setProperty)(
                             v11,
                             *(_QWORD *)(a1 + 104),
                             &hstringHeader);
        OEMLayoutXML = DefaultLayoutXML;
        if ( DefaultLayoutXML < 0 )
        {
          v9 = 120LL;
          goto LABEL_16;
        }
        if ( a2 )
          v15 = *(_QWORD *)(a1 + 120);
        else
          v15 = *(_QWORD *)(a1 + 112);
        v18 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        if ( ((int (__fastcall *)(struct IXMLDOMDocument2 *, __int64, __int64 *))v11->lpVtbl->selectSingleNode)(
               v11,
               v15,
               &v18) >= 0
          && v18 )
        {
          *a3 = 1;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      }
    }
    OEMLayoutXML = 0;
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x63,
    (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
  return (unsigned int)OEMLayoutXML;
}
