/*
 * XREFs of ?SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x180270AE0
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802886E8 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180044D90 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VViewEventArgsForSwitch@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapperInternal@@PEAU7@AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@6@AEAPEAUIAsyncCallback@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapperInternal@@1AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@7@AEAPEAUIAsyncCallback@@@Z @ 0x18026732C (--$MakeAndInitialize@VViewEventArgsForSwitch@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@.c)
 *     ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x180273C7C (-_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPE.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::SwitchAsync(int a1, int a2, int a3, unsigned int a4, __int64 a5)
{
  int HaveWrappersForSameListenerAndNotifyListenerIfNeeded; // eax
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  struct IInspectable *v12; // rcx
  int v13; // eax
  __int64 result; // rax
  wil *v15; // rcx
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, __int64); // rbx
  __int64 v18; // rdx
  struct IInspectable *v19; // [rsp+30h] [rbp-48h] BYREF
  int v20[2]; // [rsp+38h] [rbp-40h] BYREF
  volatile signed __int64 *v21; // [rsp+40h] [rbp-38h] BYREF
  __int64 v22; // [rsp+48h] [rbp-30h] BYREF
  __int64 v23; // [rsp+50h] [rbp-28h] BYREF
  __int64 v24; // [rsp+58h] [rbp-20h] BYREF
  _QWORD v25[2]; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v27; // [rsp+98h] [rbp+20h] BYREF

  v27 = a4;
  v25[1] = -2LL;
  v23 = 0LL;
  *(_QWORD *)v20 = 0LL;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  try
  {
    HaveWrappersForSameListenerAndNotifyListenerIfNeeded = ViewEventDispatcher::_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded(
                                                             a1,
                                                             a2,
                                                             a3,
                                                             (unsigned int)&v23,
                                                             (unsigned int)v20,
                                                             (__int64)&v22);
    if ( HaveWrappersForSameListenerAndNotifyListenerIfNeeded < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        444LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)HaveWrappersForSameListenerAndNotifyListenerIfNeeded);
    v21 = 0LL;
    v24 = *(_QWORD *)v20;
    v25[0] = v23;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    v9 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForSwitch,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,IViewWrapperInternal *,IViewWrapperInternal *,enum Windows::UI::ViewManagement::ApplicationViewSwitchingOptions &,IAsyncCallback * &>(
           &v21,
           v25,
           &v24,
           &v27,
           &a5);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        452LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v9);
    v19 = 0LL;
    v10 = v22;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    if ( *(_QWORD *)(v10 + 32) )
    {
      v11 = Microsoft::WRL::WeakRef::InternalResolve(
              (Microsoft::WRL::WeakRef *)(v10 + 32),
              &GUID_d599c413_e76f_5f6a_9087_21e6cb563ed9,
              &v19);
      v12 = v19;
    }
    else
    {
      v12 = 0LL;
      v19 = 0LL;
      v11 = -2147024809;
    }
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        455LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v11);
    v13 = ((__int64 (__fastcall *)(struct IInspectable *, _QWORD, volatile signed __int64 *))v12->lpVtbl->GetIids)(
            v12,
            *(_QWORD *)v20,
            v21);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        456LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
    result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  }
  catch ( ... )
  {
    v16 = a5;
    v17 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a5 + 24LL);
    v18 = (unsigned int)wil::ResultFromCaughtException(v15);
    return v17(v16, v18);
  }
  return result;
}
