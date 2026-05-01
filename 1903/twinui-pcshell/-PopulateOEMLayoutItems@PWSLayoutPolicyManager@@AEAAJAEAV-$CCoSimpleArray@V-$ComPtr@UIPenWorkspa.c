/*
 * XREFs of ?PopulateOEMLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1801E6DA8
 * Callers:
 *     ?GetPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x1801E6790 (-GetPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAPEAUIObjectArra.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1801E66E4 (-GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?Populate@PWSLayoutPolicyManager@@CAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@@Z @ 0x1801E6A88 (-Populate@PWSLayoutPolicyManager@@CAJAEAV-$CCoSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@W.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PWSLayoutPolicyManager::PopulateOEMLayoutItems(const WCHAR **this, _QWORD *a2)
{
  int OEMLayoutXML; // eax
  unsigned int v5; // edi
  struct IXMLDOMDocument2 *v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int128 v10; // [rsp+30h] [rbp-20h] BYREF
  const WCHAR *v11; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF
  struct IXMLDOMDocument2 *v14; // [rsp+88h] [rbp+38h] BYREF

  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  OEMLayoutXML = PWSLayoutPolicyManager::GetOEMLayoutXML(this, &v14);
  v5 = OEMLayoutXML;
  if ( OEMLayoutXML >= 0 )
  {
    v13 = 0LL;
    v10 = *((_OWORD *)this + 5);
    v11 = this[12];
    v6 = v14;
    v7 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, const WCHAR *, __int128 *))v14->lpVtbl->setProperty)(
           v14,
           this[13],
           &v10);
    v5 = v7;
    if ( v7 >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      v7 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, const WCHAR *, __int64 *))v6->lpVtbl->selectSingleNode)(
             v6,
             this[15],
             &v13);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v7 = PWSLayoutPolicyManager::Populate(a2, (__int64)&v13);
        v5 = v7;
        if ( v7 >= 0 )
        {
          v5 = 0;
          goto LABEL_11;
        }
        v8 = 217LL;
      }
      else
      {
        v8 = 216LL;
      }
    }
    else
    {
      v8 = 215LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD4,
    (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
    (const char *)(unsigned int)OEMLayoutXML);
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return v5;
}
