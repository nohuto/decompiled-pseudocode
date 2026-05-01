/*
 * XREFs of ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x180273C7C
 * Callers:
 *     ?SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x180270AE0 (-SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Win.c)
 *     ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x180270EB0 (-TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Win.c)
 *     ?TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ViewSizePreference@345@USize@Foundation@5@W4ViewGrouping@345@PEAUIAsyncCallback@@@Z @ 0x1802711E0 (-TryShowAsViewModeAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wind.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x1802739AC (-_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEA.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18027592C (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewEventDispatcher::_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        struct IUnknown **a4,
        struct IUnknown a5,
        struct IUnknown **a6)
{
  unsigned int v10; // edi
  struct IUnknownVtbl *lpVtbl; // r13
  struct IUnknown *v12; // rsi
  int HasWrapperAndListener; // eax
  int v14; // eax
  struct IUnknownVtbl *v15; // rcx
  struct IUnknownVtbl *v16; // rcx
  struct IUnknown *v17; // rax
  struct IUnknown *v18; // rax
  struct IUnknown *v19; // rax
  struct IUnknown *v21; // [rsp+30h] [rbp-30h] BYREF
  struct IUnknown *v22; // [rsp+38h] [rbp-28h] BYREF
  struct IUnknown *v23[4]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  struct IUnknown v25; // [rsp+A0h] [rbp+40h] BYREF
  struct IUnknown *v26; // [rsp+B8h] [rbp+58h] BYREF

  v23[1] = (struct IUnknown *)-2LL;
  v10 = 0;
  *a4 = 0LL;
  lpVtbl = a5.lpVtbl;
  a5.lpVtbl->QueryInterface = 0LL;
  *a6 = 0LL;
  v22 = 0LL;
  v26 = 0LL;
  LOBYTE(a5.lpVtbl) = 0;
  v21 = 0LL;
  v23[0] = 0LL;
  LOBYTE(v25.lpVtbl) = 0;
  v12 = (struct IUnknown *)(a1 + 280);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 280));
  v23[2] = v12;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  HasWrapperAndListener = ViewEventDispatcher::_EnsureViewHasWrapperAndListener(
                            (ViewManagerBridge **)a1,
                            a2,
                            &v22,
                            (__int64 *)&v26,
                            &a5);
  if ( HasWrapperAndListener < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x91D,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)HasWrapperAndListener);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  v14 = ViewEventDispatcher::_EnsureViewHasWrapperAndListener((ViewManagerBridge **)a1, a3, &v21, (__int64 *)v23, &v25);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x91E,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v14);
  if ( v12 )
    ReleaseSRWLockExclusive((PSRWLOCK)v12);
  if ( LOBYTE(a5.lpVtbl) )
  {
    v15 = v26[4].lpVtbl;
    a5.lpVtbl = v15;
    if ( v15 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v15->QueryInterface + 1))(v15);
    ViewEventDispatcher::_RaiseViewEventWithPropertySet(a1, v22, 0LL, 0LL, &a5);
  }
  if ( LOBYTE(v25.lpVtbl) )
  {
    v16 = v23[0][4].lpVtbl;
    a5.lpVtbl = v16;
    if ( v16 )
      (*((void (__fastcall **)(struct IUnknownVtbl *))v16->QueryInterface + 1))(v16);
    ViewEventDispatcher::_RaiseViewEventWithPropertySet(a1, v21, 0LL, 0LL, &a5);
  }
  if ( (unsigned int)SHIsSameObject(v26, v23[0]) )
  {
    v17 = v22;
    v22 = 0LL;
    *a4 = v17;
    v18 = v21;
    v21 = 0LL;
    lpVtbl->QueryInterface = (HRESULT (__stdcall *)(IUnknown *, const IID *const, void **))v18;
    v19 = v26;
    v26 = 0LL;
    *a6 = v19;
  }
  else
  {
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92D,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x80070057LL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  return v10;
}
