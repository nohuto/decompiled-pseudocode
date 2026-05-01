/*
 * XREFs of ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803A62B4
 * Callers:
 *     ?ControlLost@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1803A1640 (-ControlLost@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown.c)
 *     ?OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x1803A2A10 (-OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800222E0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$_Try_emplace@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@?$map@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x1803A01FC (--$_Try_emplace@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@-$map@V-$ComPtr@UIApplicationVi.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x1803A5C38 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 *     ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18040EDD4 (-CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::_PersistPosition(
        __int64 **this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  HWND WindowForView; // rax
  __int64 (__fastcall *v5)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  int v6; // ebx
  CDesktopPositioner *v7; // rcx
  int FullPositionSnapshot; // eax
  struct IOcclusionBasedApplicationViewPosition *v9; // rsi
  __int64 v10; // rbx
  struct IApplicationView *v11; // rdx
  __int64 (__fastcall *v12)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v16[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+48h] [rbp-28h]
  __int64 v19; // [rsp+50h] [rbp-20h]
  __int64 v20; // [rsp+58h] [rbp-18h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h]
  __int64 v22; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct IOcclusionBasedApplicationViewPosition *v24; // [rsp+B0h] [rbp+40h] BYREF
  struct IOcclusionBasedApplicationViewPosition *v25; // [rsp+B8h] [rbp+48h] BYREF

  v16[1] = -2LL;
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
  if ( !WindowForView || IsWindowVisible(WindowForView) )
  {
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v5 = (*a2)[17];
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
    v21 = -1LL;
    v22 = -1LL;
    v6 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), __int64 *))v5)(
           a2,
           &v20);
    if ( v6 < 0 )
    {
LABEL_15:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
      return (unsigned int)v6;
    }
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
    FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v7, (struct IApplicationView *)a2, &v24);
    v6 = FullPositionSnapshot;
    if ( FullPositionSnapshot < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x886,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)FullPositionSnapshot);
LABEL_14:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
      goto LABEL_15;
    }
    v9 = v24;
    v16[0] = (__int64)a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v16);
    std::map<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>::_Try_emplace<Microsoft::WRL::ComPtr<IApplicationView>,>(
      this + 46,
      (unsigned __int64)&v17,
      (unsigned __int64 *)v16);
    v10 = v17;
    if ( *(struct IOcclusionBasedApplicationViewPosition **)(v17 + 40) != v9 )
    {
      v25 = v9;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
      v25 = *(struct IOcclusionBasedApplicationViewPosition **)(v10 + 40);
      *(_QWORD *)(v10 + 40) = v9;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
    if ( ApplicationViewHelpers::CanMaximizeView((ApplicationViewHelpers *)a2, v11) )
    {
      v17 = 0LL;
      v18 = 0LL;
      v19 = 0LL;
      v12 = (*a2)[61];
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v17);
      v18 = -1LL;
      v19 = -1LL;
      v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), __int64 *))v12)(
              a2,
              &v17);
      v6 = v13;
      if ( v13 < 0 )
      {
        v14 = 2197LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v13);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v17);
        goto LABEL_14;
      }
      v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, struct IOcclusionBasedApplicationViewPosition *))(*this[31] + 32))(
              this[31],
              v20,
              v17,
              v24);
      v6 = v13;
      if ( v13 < 0 )
      {
        v14 = 2198LL;
        goto LABEL_13;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v17);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
  }
  return 0LL;
}
