/*
 * XREFs of ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x180290380
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802A7B48 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180014890 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180148704 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapperInternal@@PEAU7@AEAW4ViewSizePreference@ViewManagement@UI@6@AEAW489UI@6@AEA_KAEAPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapperInternal@@1AEAW4ViewSizePreference@ViewManagement@UI@7@2AEA_KAEAPEAUIAsyncCallback@@$$QEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x18028651C (--$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManager_ea_18028651C.c)
 *     ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x18029314C (-_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPE.c)
 *     ?_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x18029362C (-_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU-$CLinkedNode@UPendingActivationData@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ViewEventDispatcher::TryShowAsStandaloneAsync(
        RTL_SRWLOCK *a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // rbx
  int HaveWrappersForSameListenerAndNotifyListenerIfNeeded; // eax
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rbx
  int v15; // eax
  struct IInspectable *v16; // rcx
  int v17; // eax
  __int64 result; // rax
  wil *v19; // rcx
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, __int64); // rbx
  __int64 v22; // rdx
  struct IInspectable *v23; // [rsp+40h] [rbp-58h] BYREF
  __int64 v24; // [rsp+48h] [rbp-50h] BYREF
  void *v25; // [rsp+50h] [rbp-48h] BYREF
  __int64 v26; // [rsp+58h] [rbp-40h] BYREF
  int v27[2]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v28; // [rsp+68h] [rbp-30h] BYREF
  __int64 v29; // [rsp+70h] [rbp-28h] BYREF
  __int64 v30; // [rsp+78h] [rbp-20h] BYREF
  _QWORD v31[2]; // [rsp+80h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v33; // [rsp+B8h] [rbp+20h] BYREF

  v33 = a4;
  v31[1] = -2LL;
  v24 = 0LL;
  *(_QWORD *)v27 = 0LL;
  v26 = 0LL;
  v10 = 0LL;
  v28 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v27);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  try
  {
    HaveWrappersForSameListenerAndNotifyListenerIfNeeded = ViewEventDispatcher::_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded(
                                                             (_DWORD)a1,
                                                             a2,
                                                             a3,
                                                             (unsigned int)&v24,
                                                             (unsigned int)v27,
                                                             (__int64)&v26);
    if ( HaveWrappersForSameListenerAndNotifyListenerIfNeeded < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        386LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)HaveWrappersForSameListenerAndNotifyListenerIfNeeded);
    v12 = a6;
    if ( a6 )
    {
      AcquireSRWLockShared(a1 + 35);
      if ( (int)ViewEventDispatcher::_FindPendingActivation(a1, v12, &v29) < 0 )
      {
        a6 = 0LL;
      }
      else
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v28, (__int64 *)(v29 + 32));
        v10 = v28;
      }
      if ( a1 != (RTL_SRWLOCK *)-280LL )
        ReleaseSRWLockShared(a1 + 35);
    }
    v25 = 0LL;
    v29 = v10;
    v30 = *(_QWORD *)v27;
    v31[0] = v24;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    v13 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,IViewWrapperInternal *,IViewWrapperInternal *,enum Windows::UI::ViewManagement::ViewSizePreference &,enum Windows::UI::ViewManagement::ViewSizePreference &,unsigned __int64 &,IAsyncCallback * &,Windows::Foundation::Collections::IPropertySet *>(
            &v25,
            v31,
            &v30,
            &v33,
            &a5,
            &a6,
            &a7,
            &v29);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        412LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v13);
    v23 = 0LL;
    v14 = v26;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    if ( *(_QWORD *)(v14 + 32) )
    {
      v15 = Microsoft::WRL::WeakRef::InternalResolve(
              (Microsoft::WRL::WeakRef *)(v14 + 32),
              &GUID_d599c413_e76f_5f6a_9087_21e6cb563ed9,
              &v23);
      v16 = v23;
    }
    else
    {
      v16 = 0LL;
      v23 = 0LL;
      v15 = -2147024809;
    }
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        415LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v15);
    v17 = ((__int64 (__fastcall *)(struct IInspectable *, __int64, void *))v16->lpVtbl->GetIids)(v16, v24, v25);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        416LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v17);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v27);
    result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  }
  catch ( ... )
  {
    v20 = a7;
    v21 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a7 + 24LL);
    v22 = (unsigned int)wil::ResultFromCaughtException(v19);
    return v21(v20, v22);
  }
  return result;
}
