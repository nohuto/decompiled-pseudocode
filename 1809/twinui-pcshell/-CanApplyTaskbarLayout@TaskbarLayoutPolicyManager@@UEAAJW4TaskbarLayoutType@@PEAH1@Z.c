/*
 * XREFs of ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180138B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIStartLayoutInitializationStatics@SharedStartModel@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIStartLayoutInitializationStatics@SharedStartModel@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180137D4C (--$GetActivationFactory@V-$ComPtr@UIStartLayoutInitializationStatics@SharedStartModel@@@WRL@Micr.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180138130 (--0-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@.c)
 *     ??1CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x1801384F8 (--1CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x18013878C (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x180138B30 (-CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ.c)
 *     ?GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1801397A0 (-GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1801398D4 (-GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180139A04 (-GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180139DB4 (-GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x18013A2E8 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?StartActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x18013B7FC (-StartActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18013B974 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QE.c)
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18013BF88 (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18013C0EC (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TaskbarLayoutPolicyManager::CanApplyTaskbarLayout(__int64 a1, int a2, int *a3, int *a4)
{
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int CanApplyGroupPolicyLayout; // eax
  __int64 v14; // rdx
  int CanApplyMDMLayout; // ebx
  TaskbarLayoutPolicyManager *v16; // rcx
  int OEMLayoutXML; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rdx
  TaskbarLayoutPolicyManager *v20; // rcx
  struct IXMLDOMDocument2 *v21; // rbx
  int v22; // eax
  __int64 v23; // rdi
  struct IXMLDOMDocument2 *v25; // [rsp+20h] [rbp-E0h] BYREF
  struct IXMLDOMNode *v26; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v27[2]; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h]
  _QWORD v30[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v27[1] = -2LL;
  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v30,
    (__int64)"CanApplyTaskbarLayout");
  v30[0] = &TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::`vftable';
  TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::StartActivity((TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout *)v30);
  *a3 = 0;
  *a4 = 0;
  v27[0] = 0LL;
  v29 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"SharedStartModel.StartLayoutInitializationStatics",
    0x32u,
    0x31u);
  v8 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<SharedStartModel::IStartLayoutInitializationStatics>>(
         v29,
         v27);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v25 = 0LL;
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
        OEMLayoutXML = TaskbarLayoutPolicyManager::GetOEMLayoutXML((TaskbarLayoutPolicyManager *)a1, &v25);
        v18 = retaddr;
        if ( OEMLayoutXML < 0 )
        {
          v19 = 134LL;
          goto LABEL_18;
        }
      }
      else
      {
        if ( a2 != 2 )
          goto LABEL_36;
        if ( (unsigned int)SHWindowsPolicy(&POLID_LockedStartLayout) )
        {
          CanApplyGroupPolicyLayout = TaskbarLayoutPolicyManager::CanApplyGroupPolicyLayout(
                                        (TaskbarLayoutPolicyManager *)a1,
                                        a3,
                                        a4);
          v9 = CanApplyGroupPolicyLayout;
          if ( CanApplyGroupPolicyLayout < 0 )
          {
            v14 = 139LL;
LABEL_26:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v14,
              (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
              (const char *)(unsigned int)CanApplyGroupPolicyLayout);
LABEL_37:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
            goto LABEL_38;
          }
          goto LABEL_36;
        }
        CanApplyMDMLayout = TaskbarLayoutPolicyManager::CanApplyMDMLayout(
                              (TaskbarLayoutPolicyManager *)a1,
                              v10,
                              v11,
                              v12);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
        if ( CanApplyMDMLayout )
        {
          OEMLayoutXML = TaskbarLayoutPolicyManager::GetMDMLayoutXML(v16, &v25);
          v18 = retaddr;
          if ( OEMLayoutXML < 0 )
          {
            v19 = 146LL;
LABEL_18:
            wil::details::in1diag3::_Log_Hr(
              v18,
              v19,
              (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
              (const char *)(unsigned int)OEMLayoutXML);
          }
        }
        else
        {
          OEMLayoutXML = TaskbarLayoutPolicyManager::GetLayoutModificationXML(v16, &v25);
          v18 = retaddr;
          if ( OEMLayoutXML < 0 )
          {
            v19 = 151LL;
            goto LABEL_18;
          }
        }
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
      OEMLayoutXML = TaskbarLayoutPolicyManager::GetDefaultLayoutXML(v20, &v25);
      v18 = retaddr;
      if ( OEMLayoutXML < 0 )
      {
        v19 = 131LL;
        goto LABEL_18;
      }
    }
    v21 = v25;
    if ( v25 )
    {
      v22 = a2
          ? TaskbarLayoutPolicyManager::ValidateLayoutModificationXML(v18, v25)
          : TaskbarLayoutPolicyManager::ValidateDefaultLayoutXML(v18, v25);
      if ( v22 >= 0 )
      {
        hstringHeader = *(HSTRING_HEADER *)(a1 + 80);
        CanApplyGroupPolicyLayout = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, HSTRING_HEADER *))v21->lpVtbl->setProperty)(
                                      v21,
                                      *(_QWORD *)(a1 + 104),
                                      &hstringHeader);
        v9 = CanApplyGroupPolicyLayout;
        if ( CanApplyGroupPolicyLayout < 0 )
        {
          v14 = 164LL;
          goto LABEL_26;
        }
        if ( a2 )
          v23 = *(_QWORD *)(a1 + 120);
        else
          v23 = *(_QWORD *)(a1 + 112);
        v26 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
        if ( ((int (__fastcall *)(struct IXMLDOMDocument2 *, __int64, struct IXMLDOMNode **))v21->lpVtbl->selectSingleNode)(
               v21,
               v23,
               &v26) >= 0
          && v26 )
        {
          if ( a2 == 2 )
            *a4 = TaskbarLayoutPolicyManager::IsOverrideLayout((TaskbarLayoutPolicyManager *)a1, v26);
          *a3 = 1;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
      }
    }
LABEL_36:
    wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v30);
    v9 = 0;
    goto LABEL_37;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7C,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_38:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v27);
  TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout::~CanApplyTaskbarLayout((TaskbarFlexibleLayoutTelemetry::CanApplyTaskbarLayout *)v30);
  return v9;
}
