/*
 * XREFs of ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180341218
 * Callers:
 *     ?ControlLost@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x18033C830 (-ControlLost@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown.c)
 *     ?OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x18033D990 (-OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039C30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$_Try_emplace@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@?$map@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x18033B48C (--$_Try_emplace@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@-$map@V-$ComPtr@UIApplicationVi.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x180340D0C (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 *     ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1803ACB34 (-CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::_PersistPosition(
        CDesktopPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  HWND WindowForView; // rax
  int v5; // eax
  unsigned int v6; // ebx
  CDesktopPositioner *v7; // rcx
  int FullPositionSnapshot; // eax
  __int64 v9; // rdx
  __int64 v10; // rsi
  struct IOcclusionBasedApplicationViewPosition *v11; // rbx
  struct IApplicationView *v12; // rdx
  __int64 v14[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h]
  __int64 v18; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct IOcclusionBasedApplicationViewPosition *v20; // [rsp+90h] [rbp+30h] BYREF
  struct IOcclusionBasedApplicationViewPosition *v21; // [rsp+98h] [rbp+38h] BYREF

  v14[1] = -2LL;
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
  if ( !WindowForView || IsWindowVisible(WindowForView) )
  {
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v16);
    v17 = -1LL;
    v18 = -1LL;
    v5 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), __int64 *))(*a2)[17])(
           a2,
           &v16);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x88D,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v5);
LABEL_13:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v16);
      return v6;
    }
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
    FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v7, (struct IApplicationView *)a2, &v20);
    v6 = FullPositionSnapshot;
    if ( FullPositionSnapshot < 0 )
    {
      v9 = 2195LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)FullPositionSnapshot);
      Microsoft::WRL::WeakRef::~WeakRef((__int64 *)&v20);
      goto LABEL_13;
    }
    v14[0] = (__int64)a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v14);
    std::map<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>::_Try_emplace<Microsoft::WRL::ComPtr<IApplicationView>,>(
      (__int64 *)this + 46,
      (__int64)&v15,
      (unsigned __int64 *)v14);
    v10 = v15;
    v11 = v20;
    if ( *(struct IOcclusionBasedApplicationViewPosition **)(v15 + 40) != v20 )
    {
      v21 = v20;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
      v21 = *(struct IOcclusionBasedApplicationViewPosition **)(v10 + 40);
      *(_QWORD *)(v10 + 40) = v11;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
    if ( ApplicationViewHelpers::CanMaximizeView((ApplicationViewHelpers *)a2, v12) )
    {
      FullPositionSnapshot = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IOcclusionBasedApplicationViewPosition *))(**((_QWORD **)this + 31) + 32LL))(
                               *((_QWORD *)this + 31),
                               v16,
                               v11);
      v6 = FullPositionSnapshot;
      if ( FullPositionSnapshot < 0 )
      {
        v9 = 2209LL;
        goto LABEL_12;
      }
    }
    Microsoft::WRL::WeakRef::~WeakRef((__int64 *)&v20);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v16);
  }
  return 0LL;
}
