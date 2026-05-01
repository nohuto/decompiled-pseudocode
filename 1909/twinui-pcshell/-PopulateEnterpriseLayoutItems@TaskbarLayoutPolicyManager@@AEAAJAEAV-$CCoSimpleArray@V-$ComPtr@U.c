/*
 * XREFs of ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180184DE0
 * Callers:
 *     ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x180184290 (-GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIXMLDOMElement@@@?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIXMLDOMElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x180181CB0 (--$As@UIXMLDOMElement@@@-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIXML.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x1801828EC (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x180182C7C (-CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ.c)
 *     ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180183AC0 (-GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180183BF0 (-GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18018407C (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@W4TaskbarPinningSource@@@Z @ 0x180184A3C (-PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskbarL.c)
 *     ?SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x1801859EC (-SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskbarLayoutPolicyManager::PopulateEnterpriseLayoutItems(
        TaskbarLayoutPolicyManager *this,
        _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int MDMLayoutXML; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  TaskbarLayoutPolicyManager *v10; // rcx
  TaskbarLayoutPolicyManager *v11; // rcx
  TaskbarLayoutPolicyManager *v12; // rcx
  struct IXMLDOMDocument2 *v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  struct IXMLDOMDocument2 *v20[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v24; // [rsp+80h] [rbp+30h] BYREF
  __int64 v25; // [rsp+88h] [rbp+38h] BYREF

  v20[1] = (struct IXMLDOMDocument2 *)-2LL;
  v20[0] = 0LL;
  if ( (int)TaskbarLayoutPolicyManager::CanApplyGroupPolicyLayout(this, (int *)&v24, (int *)&v25) < 0 || !(_DWORD)v24 )
  {
    if ( (unsigned int)TaskbarLayoutPolicyManager::CanApplyMDMLayout(this, v4, v5, v6) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
      MDMLayoutXML = TaskbarLayoutPolicyManager::GetMDMLayoutXML(v10, v20);
      v8 = MDMLayoutXML;
      if ( MDMLayoutXML < 0 )
      {
        v9 = 449LL;
        goto LABEL_12;
      }
      MDMLayoutXML = TaskbarLayoutPolicyManager::SetMDMPolicyLayoutTimestampToCurrent(v11);
      v8 = MDMLayoutXML;
      if ( MDMLayoutXML < 0 )
      {
        v9 = 450LL;
        goto LABEL_12;
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
      MDMLayoutXML = TaskbarLayoutPolicyManager::GetLayoutModificationXML(v12, v20);
      v8 = MDMLayoutXML;
      if ( MDMLayoutXML < 0 )
      {
        v9 = 454LL;
        goto LABEL_12;
      }
    }
LABEL_13:
    v13 = v20[0];
    if ( v20[0] )
    {
      v24 = 0LL;
      v21 = *((_OWORD *)this + 5);
      v22 = *((_QWORD *)this + 12);
      v14 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int128 *))v20[0]->lpVtbl->setProperty)(
              v20[0],
              *((_QWORD *)this + 13),
              &v21);
      v8 = v14;
      if ( v14 < 0 )
      {
        v15 = 460LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v14);
LABEL_24:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
        goto LABEL_27;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      v14 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int64 *))v13->lpVtbl->selectSingleNode)(
              v13,
              *((_QWORD *)this + 15),
              &v24);
      v8 = v14;
      if ( v14 < 0 )
      {
        v15 = 461LL;
        goto LABEL_18;
      }
      v25 = 0LL;
      v16 = Microsoft::WRL::ComPtr<IXMLDOMNode>::As<IXMLDOMElement>(&v24, &v25);
      v8 = v16;
      if ( v16 < 0 )
      {
        v18 = 464LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
        goto LABEL_24;
      }
      v16 = TaskbarLayoutPolicyManager::PopulateAndSetPinned(v17, a2, (__int64)&v24, 3u);
      v8 = v16;
      if ( v16 < 0 )
      {
        v18 = 465LL;
        goto LABEL_23;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    }
    v8 = 0;
    goto LABEL_27;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
  MDMLayoutXML = TaskbarLayoutPolicyManager::GetPolicyLayoutXML(this, v20);
  v8 = MDMLayoutXML;
  if ( MDMLayoutXML >= 0 )
    goto LABEL_13;
  v9 = 445LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)(unsigned int)MDMLayoutXML);
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
  return v8;
}
