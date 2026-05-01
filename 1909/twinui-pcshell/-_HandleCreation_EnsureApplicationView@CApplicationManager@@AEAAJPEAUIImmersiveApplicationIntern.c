/*
 * XREFs of ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18003E390
 * Callers:
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18003FB00 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 *     ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z @ 0x1800537F0 (-OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003E8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x18003EA10 (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter@@@Z @ 0x18003EBA0 (--$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_&_ @ 0x18003ED24 (CIAMGlobals--QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const_-_.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801334C8 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjec.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::_HandleCreation_EnsureApplicationView(
        CApplicationManager *this,
        void (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, __int64 *),
        HWND a3,
        struct IApplicationView **a4)
{
  void (__fastcall *v7)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  PVOID Ptr; // rdi
  __int64 (__fastcall *v9)(PVOID, __int64, struct IApplicationView **); // rbx
  int v10; // ebx
  PVOID v11; // rdi
  __int64 (__fastcall *v12)(PVOID, HWND, struct IApplicationView **); // rbx
  __int64 v13; // rcx
  HWND v14; // rcx
  void (__fastcall *v15)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  PVOID v16; // rdi
  __int64 (__fastcall *v17)(PVOID, __int64, struct IApplicationView **); // rbx
  PVOID v18; // rdi
  __int64 (__fastcall *v19)(PVOID, HWND, struct IApplicationView **); // rbx
  __int64 v20; // rcx
  struct IApplicationView *v21; // rax
  unsigned int v23; // [rsp+20h] [rbp-20h]
  unsigned int v24; // [rsp+28h] [rbp-18h]
  _QWORD v25[2]; // [rsp+30h] [rbp-10h] BYREF
  struct IApplicationView *v26; // [rsp+70h] [rbp+30h] BYREF
  __int64 v27; // [rsp+78h] [rbp+38h] BYREF
  __int64 v28; // [rsp+88h] [rbp+48h] BYREF

  v25[1] = -2LL;
  *a4 = 0LL;
  v26 = 0LL;
  if ( a2 )
  {
    v27 = 0LL;
    v7 = **a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    v7((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v27);
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v9 = *(__int64 (__fastcall **)(PVOID, __int64, struct IApplicationView **))(*(_QWORD *)Ptr + 56LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v10 = v9(Ptr, v27, &v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  }
  else
  {
    v11 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v12 = *(__int64 (__fastcall **)(PVOID, HWND, struct IApplicationView **))(*(_QWORD *)v11 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v10 = v12(v11, a3, &v26);
  }
  if ( v10 >= 0 )
    goto LABEL_18;
  v27 = 0LL;
  v10 = Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter,>(&v27);
  if ( v10 >= 0 )
  {
    v13 = v27;
    v25[0] = v27;
    if ( v27 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(v27);
    if ( (int)CIAMGlobals::QueueViewManagementTask__lambda_d5e84e794bbd6b544312437c57f61776__const___(v13, v25) >= 0 )
      SHProcessMessagesUntilEventsEx(v14, (void **)(v27 + 40), 1u, 0x1388u, v23, v24);
    if ( a2 )
    {
      v28 = 0LL;
      v15 = **a2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      v15((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v28);
      v16 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v17 = *(__int64 (__fastcall **)(PVOID, __int64, struct IApplicationView **))(*(_QWORD *)v16 + 56LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      v10 = v17(v16, v28, &v26);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    }
    else
    {
      v18 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
      v19 = *(__int64 (__fastcall **)(PVOID, HWND, struct IApplicationView **))(*(_QWORD *)v18 + 48LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      v10 = v19(v18, a3, &v26);
    }
    if ( v25[0] )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(v25[0]);
  }
  v20 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(v20);
  }
  if ( v10 >= 0 )
  {
LABEL_18:
    v21 = v26;
    v26 = 0LL;
    *a4 = v21;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  return (unsigned int)v10;
}
