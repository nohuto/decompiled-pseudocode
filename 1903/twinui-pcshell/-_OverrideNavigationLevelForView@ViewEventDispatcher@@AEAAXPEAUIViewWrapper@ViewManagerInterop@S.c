/*
 * XREFs of ?_OverrideNavigationLevelForView@ViewEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x180275174
 * Callers:
 *     ?OverrideNavigationLevelForView@ViewEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x18026CCC0 (-OverrideNavigationLevelForView@ViewEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x180273EE0 (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x18027577C (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewEventDispatcher::_OverrideNavigationLevelForView(RTL_SRWLOCK *a1, void (***a2)(void), int a3)
{
  void (*v6)(void); // rbx
  unsigned __int8 (__fastcall *v7)(__int64, __int64); // rax
  int MatchingViewEventRegistration; // eax
  __int64 v9; // rcx
  __int64 result; // rax
  const char *v11; // r9
  int v12[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 *v14; // [rsp+30h] [rbp-28h]
  char v15; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  v13 = -2LL;
  v17 = 0LL;
  v6 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  try
  {
    v6();
    v7 = *(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 848LL);
    if ( a3 == 2 )
    {
      if ( v7(v17, 1LL) )
      {
        v14 = &v17;
        v15 = 1;
        v18 = 0LL;
        AcquireSRWLockShared(a1 + 35);
        *(_QWORD *)v12 = a1 + 35;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration((__int64)a1, v17, &v18);
        if ( MatchingViewEventRegistration < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            1840LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)MatchingViewEventRegistration);
        if ( a1 != (RTL_SRWLOCK *)-280LL )
          ReleaseSRWLockShared(a1 + 35);
        v9 = *(_QWORD *)(v18 + 32);
        *(_QWORD *)v12 = v9;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
        ViewEventDispatcher::_RaiseViewEvent(a1, a2, 7LL, v12);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 848LL))(v17, 2LL);
      }
    }
    else
    {
      v7(v17, 0LL);
    }
    result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x73E,
             (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
             v11);
  }
  return result;
}
