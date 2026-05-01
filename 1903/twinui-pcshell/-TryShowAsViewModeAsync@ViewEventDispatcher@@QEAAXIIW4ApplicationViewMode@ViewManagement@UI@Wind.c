/*
 * XREFs of ?TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ViewSizePreference@345@USize@Foundation@5@W4ViewGrouping@345@PEAUIAsyncCallback@@@Z @ 0x1802711E0
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802886E8 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180044D90 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapperInternal@@PEAU7@AEAW4ApplicationViewMode@ViewManagement@UI@6@W4ExperienceKind@WindowManagement@ApplicationModel@56@AEAW4ViewSizePreference@9UI@6@W4ViewSizePreference@9UI@6@AEAUSize@Foundation@6@AEAW4ViewGrouping@9UI@6@AEAPEAUIAsyncCallback@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapperInternal@@1AEAW4ApplicationViewMode@ViewManagement@UI@7@$$QEAW4ExperienceKind@WindowManagement@ApplicationModel@67@AEAW4ViewSizePreference@ViewManagement@UI@7@$$QEAW4ViewSizePreference@ViewManagement@UI@7@AEAUSize@Foundation@7@AEAW4ViewGrouping@ViewManagement@UI@7@AEAPEAUIAsyncCallback@@@Z @ 0x1802671C4 (--$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@I.c)
 *     ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x180273C7C (-_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPE.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::TryShowAsViewModeAsync(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  int HaveWrappersForSameListenerAndNotifyListenerIfNeeded; // eax
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  struct IInspectable *v15; // rcx
  int v16; // eax
  __int64 result; // rax
  wil *v18; // rcx
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, __int64); // rbx
  __int64 v21; // rdx
  struct IInspectable *v22; // [rsp+50h] [rbp-58h] BYREF
  __int64 v23; // [rsp+58h] [rbp-50h] BYREF
  __int64 v24; // [rsp+60h] [rbp-48h] BYREF
  __int64 v25; // [rsp+68h] [rbp-40h] BYREF
  int v26[2]; // [rsp+70h] [rbp-38h] BYREF
  int v27; // [rsp+78h] [rbp-30h] BYREF
  int v28; // [rsp+7Ch] [rbp-2Ch] BYREF
  __int64 v29; // [rsp+80h] [rbp-28h] BYREF
  _QWORD v30[3]; // [rsp+88h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v32; // [rsp+C8h] [rbp+20h] BYREF

  v32 = a4;
  v30[1] = -2LL;
  v23 = 0LL;
  *(_QWORD *)v26 = 0LL;
  v25 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  try
  {
    HaveWrappersForSameListenerAndNotifyListenerIfNeeded = ViewEventDispatcher::_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded(
                                                             a1,
                                                             a2,
                                                             a3,
                                                             (unsigned int)&v23,
                                                             (unsigned int)v26,
                                                             (__int64)&v25);
    if ( HaveWrappersForSameListenerAndNotifyListenerIfNeeded < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        484LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)HaveWrappersForSameListenerAndNotifyListenerIfNeeded);
    v24 = 0LL;
    v27 = 0;
    v28 = 0;
    v29 = *(_QWORD *)v26;
    v30[0] = v23;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v12 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsViewMode,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,IViewWrapperInternal *,IViewWrapperInternal *,enum Windows::UI::ViewManagement::ApplicationViewMode &,enum Windows::Internal::ApplicationModel::WindowManagement::ExperienceKind,enum Windows::UI::ViewManagement::ViewSizePreference &,enum Windows::UI::ViewManagement::ViewSizePreference,Windows::Foundation::Size &,enum Windows::UI::ViewManagement::ViewGrouping &,IAsyncCallback * &>(
            &v24,
            v30,
            &v29,
            &v32,
            &v28,
            &a5,
            &v27,
            &a6,
            &a7,
            &a8);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        496LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v12);
    v22 = 0LL;
    v13 = v25;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    if ( *(_QWORD *)(v13 + 32) )
    {
      v14 = Microsoft::WRL::WeakRef::InternalResolve(
              (Microsoft::WRL::WeakRef *)(v13 + 32),
              &GUID_d599c413_e76f_5f6a_9087_21e6cb563ed9,
              &v22);
      v15 = v22;
    }
    else
    {
      v15 = 0LL;
      v22 = 0LL;
      v14 = -2147024809;
    }
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        499LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v14);
    v16 = ((__int64 (__fastcall *)(struct IInspectable *, __int64, __int64))v15->lpVtbl->GetIids)(v15, v23, v24);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        500LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v26);
    result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  }
  catch ( ... )
  {
    v19 = a8;
    v20 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a8 + 24LL);
    v21 = (unsigned int)wil::ResultFromCaughtException(v18);
    return v20(v19, v21);
  }
  return result;
}
