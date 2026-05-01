/*
 * XREFs of ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180163960
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180162E48 (--0-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@Q.c)
 *     ??1CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x180163318 (--1CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x18016357C (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x18016390C (-CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ.c)
 *     ?GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180164590 (-GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180164750 (-GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180164880 (-GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180164C64 (-GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x1801650E8 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?StartActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x180166710 (-StartActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801668D0 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180166F98 (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1801670FC (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskbarLayoutPolicyManager::CanApplyTaskbarLayout(__int64 a1, int a2, int *a3, int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int CanApplyGroupPolicyLayout; // eax
  unsigned int v12; // edi
  __int64 v13; // rdx
  TaskbarLayoutPolicyManager *v14; // rcx
  int DefaultLayoutXML; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rdx
  TaskbarLayoutPolicyManager *v18; // rcx
  TaskbarLayoutPolicyManager *v19; // rcx
  struct IXMLDOMDocument2 *v20; // rbx
  int v21; // eax
  __int64 v22; // rdi
  struct IXMLDOMDocument2 *v24; // [rsp+20h] [rbp-E0h] BYREF
  struct IXMLDOMNode *v25[3]; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h]
  _QWORD v28[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v25[1] = (struct IXMLDOMNode *)-2LL;
  wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v28,
    (__int64)"CanApplyTaskbarLayout");
  v28[0] = &TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::`vftable';
  TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::StartActivity((TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout *)v28);
  *a3 = 0;
  *a4 = 0;
  v24 = 0LL;
  if ( !a2 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    DefaultLayoutXML = TaskbarLayoutPolicyManager::GetDefaultLayoutXML(v19, &v24);
    v16 = retaddr;
    if ( DefaultLayoutXML < 0 )
    {
      v17 = 129LL;
      goto LABEL_16;
    }
    goto LABEL_17;
  }
  if ( a2 == 1 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    DefaultLayoutXML = TaskbarLayoutPolicyManager::GetOEMLayoutXML((TaskbarLayoutPolicyManager *)a1, &v24);
    v16 = retaddr;
    if ( DefaultLayoutXML < 0 )
    {
      v17 = 132LL;
      goto LABEL_16;
    }
    goto LABEL_17;
  }
  if ( a2 != 2 )
    goto LABEL_34;
  if ( !(unsigned int)SHWindowsPolicy(&POLID_LockedStartLayout) )
  {
    if ( (unsigned int)TaskbarLayoutPolicyManager::CanApplyMDMLayout((TaskbarLayoutPolicyManager *)a1, v8, v9, v10) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
      DefaultLayoutXML = TaskbarLayoutPolicyManager::GetMDMLayoutXML(v14, &v24);
      v16 = retaddr;
      if ( DefaultLayoutXML < 0 )
      {
        v17 = 144LL;
LABEL_16:
        wil::details::in1diag3::_Log_Hr(
          v16,
          (void *)v17,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)DefaultLayoutXML);
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
      DefaultLayoutXML = TaskbarLayoutPolicyManager::GetLayoutModificationXML(v18, &v24);
      v16 = retaddr;
      if ( DefaultLayoutXML < 0 )
      {
        v17 = 149LL;
        goto LABEL_16;
      }
    }
LABEL_17:
    v20 = v24;
    if ( v24 )
    {
      v21 = a2
          ? TaskbarLayoutPolicyManager::ValidateLayoutModificationXML(v16, v24)
          : TaskbarLayoutPolicyManager::ValidateDefaultLayoutXML(v16, v24);
      if ( v21 >= 0 )
      {
        v26 = *(_OWORD *)(a1 + 80);
        v27 = *(_QWORD *)(a1 + 96);
        CanApplyGroupPolicyLayout = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int128 *))v20->lpVtbl->setProperty)(
                                      v20,
                                      *(_QWORD *)(a1 + 104),
                                      &v26);
        v12 = CanApplyGroupPolicyLayout;
        if ( CanApplyGroupPolicyLayout < 0 )
        {
          v13 = 162LL;
          goto LABEL_24;
        }
        if ( a2 )
          v22 = *(_QWORD *)(a1 + 120);
        else
          v22 = *(_QWORD *)(a1 + 112);
        v25[0] = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v25);
        if ( ((int (__fastcall *)(struct IXMLDOMDocument2 *, __int64, struct IXMLDOMNode **))v20->lpVtbl->selectSingleNode)(
               v20,
               v22,
               v25) >= 0
          && v25[0] )
        {
          if ( a2 == 2 )
            *a4 = TaskbarLayoutPolicyManager::IsOverrideLayout((TaskbarLayoutPolicyManager *)a1, v25[0]);
          *a3 = 1;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v25);
      }
    }
LABEL_34:
    wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v28);
    v12 = 0;
    goto LABEL_35;
  }
  CanApplyGroupPolicyLayout = TaskbarLayoutPolicyManager::CanApplyGroupPolicyLayout(
                                (TaskbarLayoutPolicyManager *)a1,
                                a3,
                                a4);
  v12 = CanApplyGroupPolicyLayout;
  if ( CanApplyGroupPolicyLayout >= 0 )
    goto LABEL_34;
  v13 = 137LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)(unsigned int)CanApplyGroupPolicyLayout);
LABEL_35:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
  TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::~CanApplyTaskbarLayout((TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout *)v28);
  return v12;
}
