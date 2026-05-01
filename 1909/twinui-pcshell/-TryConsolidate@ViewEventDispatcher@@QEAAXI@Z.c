/*
 * XREFs of ?TryConsolidate@ViewEventDispatcher@@QEAAXI@Z @ 0x180290214
 * Callers:
 *     ?OnRequestConsolidateView@ViewManagerBridge@@UEAAJI@Z @ 0x1802A8420 (-OnRequestConsolidateView@ViewManagerBridge@@UEAAJI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180135EFC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Deskt.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1802933B0 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x180294C4C (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180295548 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewEventDispatcher::TryConsolidate(RTL_SRWLOCK *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  struct IViewWrapperInternal *v5; // rdx
  __int64 v6; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-10h] BYREF
  struct IViewWrapperInternal *v8; // [rsp+60h] [rbp+30h] BYREF
  __int64 v9; // [rsp+68h] [rbp+38h] BYREF

  v7[1] = -2LL;
  v3 = a2;
  wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::ReportUsageToService(
    (__int64)this,
    a2,
    a3);
  v8 = 0LL;
  v9 = 0LL;
  AcquireSRWLockShared(this + 35);
  v7[0] = this + 35;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)this, v3, &v8) >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v8, &v9);
  }
  if ( this != (RTL_SRWLOCK *)-280LL )
    ReleaseSRWLockShared(this + 35);
  v5 = v8;
  if ( v8 && v9 )
  {
    v6 = *(_QWORD *)(v9 + 32);
    v7[0] = v6;
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v5 = v8;
    }
    ((void (__fastcall *)(RTL_SRWLOCK *, struct IViewWrapperInternal *, __int64, _QWORD *))ViewEventDispatcher::_RaiseViewEvent)(
      this,
      v5,
      35LL,
      v7);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
}
