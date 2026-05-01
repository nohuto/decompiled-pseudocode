/*
 * XREFs of ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x18021B3B0
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802332A8 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180025E48 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapperInternal@@PEAU7@AEAW4ViewSizePreference@ViewManagement@UI@6@AEAW489UI@6@AEA_KAEAPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapperInternal@@1AEAW4ViewSizePreference@ViewManagement@UI@7@2AEA_KAEAPEAUIAsyncCallback@@$$QEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x18020F88C (--$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManager_ea_18020F88C.c)
 *     ?_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPEAPEAUIViewWrapperInternal@@0PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x18021E37C (-_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded@ViewEventDispatcher@@AEAAJIIPE.c)
 *     ?_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x18021E86C (-_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU-$CLinkedNode@UPendingActivationData@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ViewEventDispatcher::TryShowAsStandaloneAsync(
        RTL_SRWLOCK *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v10; // rbx
  int HaveWrappersForSameListenerAndNotifyListenerIfNeeded; // eax
  __int64 v12; // rsi
  __int64 v13; // rbx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 result; // rax
  wil *v18; // rcx
  _QWORD *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rdx
  void *v22; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+48h] [rbp-50h] BYREF
  __int64 v24; // [rsp+50h] [rbp-48h] BYREF
  int v25[2]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v26; // [rsp+60h] [rbp-38h] BYREF
  __int64 v27; // [rsp+68h] [rbp-30h] BYREF
  __int64 v28; // [rsp+70h] [rbp-28h] BYREF
  __int64 v29; // [rsp+78h] [rbp-20h] BYREF
  __int64 v30[2]; // [rsp+80h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v32; // [rsp+B8h] [rbp+20h] BYREF

  v32 = a4;
  v30[1] = -2LL;
  v26 = 0LL;
  *(_QWORD *)v25 = 0LL;
  v24 = 0LL;
  v10 = 0LL;
  v27 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  try
  {
    HaveWrappersForSameListenerAndNotifyListenerIfNeeded = ViewEventDispatcher::_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded(
                                                             (_DWORD)a1,
                                                             a2,
                                                             a3,
                                                             (unsigned int)&v26,
                                                             (__int64)v25,
                                                             (__int64)&v24);
    if ( HaveWrappersForSameListenerAndNotifyListenerIfNeeded < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        392LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)HaveWrappersForSameListenerAndNotifyListenerIfNeeded);
    v12 = a6;
    if ( a6 )
    {
      AcquireSRWLockShared(a1 + 37);
      if ( (int)ViewEventDispatcher::_FindPendingActivation(a1, v12, &v28) < 0 )
      {
        a6 = 0LL;
      }
      else
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v27, (__int64 *)(v28 + 32));
        v10 = v27;
      }
      if ( a1 != (RTL_SRWLOCK *)-296LL )
        ReleaseSRWLockShared(a1 + 37);
    }
    v23 = 0LL;
    v28 = v10;
    v29 = *(_QWORD *)v25;
    v13 = v26;
    v30[0] = v26;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    v14 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,IViewWrapperInternal *,IViewWrapperInternal *,enum Windows::UI::ViewManagement::ViewSizePreference &,enum Windows::UI::ViewManagement::ViewSizePreference &,unsigned __int64 &,IAsyncCallback * &,Windows::Foundation::Collections::IPropertySet *>(
            &v23,
            v30,
            &v29,
            &v32,
            &a5,
            &a6,
            (__int64 *)&a7,
            &v28);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        418LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v14);
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    v15 = AgileGitPtr::CopyLocal((AgileGitPtr *)(v24 + 32), &GUID_485d880d_3bd2_519f_b754_8b2e73798d3e, &v22);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        421LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v15);
    v16 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v22 + 24LL))(v22, v13, v23);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        422LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v25);
    result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  }
  catch ( ... )
  {
    v19 = a7;
    v20 = *a7;
    v21 = (unsigned int)wil::ResultFromCaughtException(v18);
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(v20 + 24))(v19, v21);
  }
  return result;
}
