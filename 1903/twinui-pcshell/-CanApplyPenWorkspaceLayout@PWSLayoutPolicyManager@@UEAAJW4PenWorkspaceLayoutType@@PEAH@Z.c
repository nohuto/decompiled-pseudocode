/*
 * XREFs of ?CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z @ 0x1801E62A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1801E65B0 (-GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1801E66E4 (-GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1801E70FC (-ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1801E726C (-ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PWSLayoutPolicyManager::CanApplyPenWorkspaceLayout(__int64 a1, int a2, _DWORD *a3)
{
  int OEMLayoutXML; // edi
  __int64 v7; // r9
  __int64 v8; // rdx
  PWSLayoutPolicyManager *v9; // rcx
  struct IXMLDOMDocument2 *v10; // rbx
  int v11; // eax
  PWSLayoutPolicyManager *v12; // rcx
  int DefaultLayoutXML; // eax
  __int64 v14; // rdi
  __int128 v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IXMLDOMDocument2 *v19; // [rsp+90h] [rbp+40h] BYREF
  __int64 v20; // [rsp+98h] [rbp+48h] BYREF

  *a3 = 0;
  v19 = 0LL;
  if ( !a2 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    DefaultLayoutXML = PWSLayoutPolicyManager::GetDefaultLayoutXML(v12, &v19);
    OEMLayoutXML = DefaultLayoutXML;
    if ( DefaultLayoutXML < 0 )
    {
      v8 = 103LL;
LABEL_14:
      v7 = (unsigned int)DefaultLayoutXML;
      goto LABEL_15;
    }
LABEL_5:
    v10 = v19;
    if ( v19 )
    {
      v11 = a2
          ? PWSLayoutPolicyManager::ValidateLayoutModificationXML(v9, v19)
          : PWSLayoutPolicyManager::ValidateDefaultLayoutXML(v9, v19);
      if ( v11 >= 0 )
      {
        v16 = *(_OWORD *)(a1 + 80);
        v17 = *(_QWORD *)(a1 + 96);
        DefaultLayoutXML = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int128 *))v10->lpVtbl->setProperty)(
                             v10,
                             *(_QWORD *)(a1 + 104),
                             &v16);
        OEMLayoutXML = DefaultLayoutXML;
        if ( DefaultLayoutXML < 0 )
        {
          v8 = 117LL;
          goto LABEL_14;
        }
        if ( a2 )
          v14 = *(_QWORD *)(a1 + 120);
        else
          v14 = *(_QWORD *)(a1 + 112);
        v20 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
        if ( ((int (__fastcall *)(struct IXMLDOMDocument2 *, __int64, __int64 *))v10->lpVtbl->selectSingleNode)(
               v10,
               v14,
               &v20) >= 0
          && v20 )
        {
          *a3 = 1;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      }
    }
    OEMLayoutXML = 0;
    goto LABEL_24;
  }
  if ( a2 != 1 )
  {
    OEMLayoutXML = -2147467259;
    v7 = 2147500037LL;
    v8 = 110LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)v7);
    goto LABEL_24;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  OEMLayoutXML = PWSLayoutPolicyManager::GetOEMLayoutXML((PWSLayoutPolicyManager *)a1, &v19);
  if ( OEMLayoutXML >= 0 )
    goto LABEL_5;
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  return (unsigned int)OEMLayoutXML;
}
