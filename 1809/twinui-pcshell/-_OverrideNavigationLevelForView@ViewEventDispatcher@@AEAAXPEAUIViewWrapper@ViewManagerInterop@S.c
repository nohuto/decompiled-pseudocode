/*
 * XREFs of ?_OverrideNavigationLevelForView@ViewEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x18021FB8C
 * Callers:
 *     ?OverrideNavigationLevelForView@ViewEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x1802164B0 (-OverrideNavigationLevelForView@ViewEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x18021E5DC (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x180220348 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewEventDispatcher::_OverrideNavigationLevelForView(RTL_SRWLOCK *a1, void (***a2)(void), int a3)
{
  unsigned __int8 (__fastcall *v6)(__int64, __int64); // rax
  int MatchingViewEventRegistration; // eax
  __int64 v8; // rcx
  __int64 result; // rax
  const char *v10; // r9
  int v11[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 *v13; // [rsp+30h] [rbp-18h]
  char v14; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v12 = -2LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  try
  {
    (**a2)();
    v6 = *(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 840LL);
    if ( a3 == 2 )
    {
      if ( v6(v16, 1LL) )
      {
        v13 = &v16;
        v14 = 1;
        v17 = 0LL;
        AcquireSRWLockShared(a1 + 37);
        *(_QWORD *)v11 = a1 + 37;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
        MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration((__int64)a1, v16, &v17);
        if ( MatchingViewEventRegistration < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            2103LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)MatchingViewEventRegistration);
        if ( a1 != (RTL_SRWLOCK *)-296LL )
          ReleaseSRWLockShared(a1 + 37);
        v8 = *(_QWORD *)(v17 + 32);
        *(_QWORD *)v11 = v8;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        ViewEventDispatcher::_RaiseViewEvent(a1, a2, 7LL, v11);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 840LL))(v16, 2LL);
      }
    }
    else
    {
      v6(v16, 0LL);
    }
    result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x845,
             (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
             v10);
  }
  return result;
}
