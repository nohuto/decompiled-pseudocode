/*
 * XREFs of ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18002A3F4
 * Callers:
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@@Z @ 0x18002D980 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 *     ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z @ 0x1800F09C0 (-OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A970 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter@@@Z @ 0x18002AA90 (--$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter.c)
 *     ?Wait@COperationWaiter@@QEAAJXZ @ 0x18002AC0C (-Wait@COperationWaiter@@QEAAJXZ.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_&___ptr64_ @ 0x18002ADD0 (CIAMGlobals--QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_-___ptr64_.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800EF81C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjec.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::_HandleCreation_EnsureApplicationView(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2,
        HWND a3,
        struct IApplicationView **a4)
{
  PVOID Ptr; // rbx
  int v8; // ebx
  PVOID v9; // rbx
  COperationWaiter *v10; // rcx
  PVOID v11; // rbx
  PVOID v12; // rbx
  COperationWaiter *v13; // rcx
  struct IApplicationView *v14; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-10h] BYREF
  struct IApplicationView *v17; // [rsp+60h] [rbp+30h] BYREF
  COperationWaiter *v18; // [rsp+68h] [rbp+38h] BYREF
  __int64 v19; // [rsp+78h] [rbp+48h] BYREF

  v16[1] = -2LL;
  *a4 = 0LL;
  v17 = 0LL;
  if ( a2 )
  {
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    (**(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, COperationWaiter **))a2)(
      a2,
      &GUID_8b14e88b_5663_4caf_b196_c31479262831,
      &v18);
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v8 = (*(__int64 (__fastcall **)(PVOID, COperationWaiter *, struct IApplicationView **))(*(_QWORD *)Ptr + 56LL))(
           Ptr,
           v18,
           &v17);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  }
  else
  {
    v9 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v8 = (*(__int64 (__fastcall **)(PVOID, HWND, struct IApplicationView **))(*(_QWORD *)v9 + 48LL))(v9, a3, &v17);
  }
  if ( v8 >= 0 )
    goto LABEL_18;
  v18 = 0LL;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter,>(&v18);
  if ( v8 >= 0 )
  {
    v10 = v18;
    v16[0] = v18;
    if ( v18 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(v18);
    if ( (int)CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_____ptr64_(v10, v16) >= 0 )
      COperationWaiter::Wait(v18);
    if ( a2 )
    {
      v19 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      (**(void (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))a2)(
        a2,
        &GUID_8b14e88b_5663_4caf_b196_c31479262831,
        &v19);
      v11 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      v8 = (*(__int64 (__fastcall **)(PVOID, __int64, struct IApplicationView **))(*(_QWORD *)v11 + 56LL))(
             v11,
             v19,
             &v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    }
    else
    {
      v12 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      v8 = (*(__int64 (__fastcall **)(PVOID, HWND, struct IApplicationView **))(*(_QWORD *)v12 + 48LL))(v12, a3, &v17);
    }
    if ( v16[0] )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(v16[0]);
  }
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(v13);
  }
  if ( v8 >= 0 )
  {
LABEL_18:
    v14 = v17;
    v17 = 0LL;
    *a4 = v14;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return (unsigned int)v8;
}
