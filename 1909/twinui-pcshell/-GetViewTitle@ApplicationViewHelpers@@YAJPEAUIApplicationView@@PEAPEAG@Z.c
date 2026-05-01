/*
 * XREFs of ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x18042E900
 * Callers:
 *     ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x1803021E4 (-GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE.c)
 *     ?UpdateDisplayName@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1803270A0 (-UpdateDisplayName@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@.c)
 *     ?_LoadTitle@SwitchItem@@AEAAJXZ @ 0x18037FE68 (-_LoadTitle@SwitchItem@@AEAAJXZ.c)
 *     ?UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@0@Z @ 0x1803F16E0 (-UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@0@Z.c)
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x1803F7B30 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z @ 0x1803FF670 (-InitPlaceMode@CDragVisualAcc@@UEAAXPEAUIApplicationView@@PEAUIAppLayout@@@Z.c)
 * Callees:
 *     ?IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAPEAG@Z @ 0x180034DD4 (-IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImm.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005A3D0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewHelpers::GetViewTitle(
        ApplicationViewHelpers *this,
        unsigned __int16 **a2,
        unsigned __int16 **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  unsigned __int16 *v8; // rax
  int v9; // eax
  HWND v10; // rbx
  int NormalDisplayNameWithTitleSafe; // eax
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v12; // rdx
  __int64 v13; // rdx
  HWND hWnd; // [rsp+20h] [rbp-E0h] BYREF
  struct IImmersiveApplication *v16; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h]
  __int64 v20; // [rsp+48h] [rbp-B8h]
  WCHAR pString[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  v17 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  if ( (**(int (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))this)(
         this,
         &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
         &v17) < 0 )
  {
    hWnd = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
    v9 = (**(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, HWND *))this)(
           this,
           &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2,
           &hWnd);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v16 = 0LL;
      v10 = hWnd;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      NormalDisplayNameWithTitleSafe = (*(__int64 (__fastcall **)(HWND, struct IImmersiveApplication **))(*(_QWORD *)v10 + 24LL))(
                                         v10,
                                         &v16);
      v6 = NormalDisplayNameWithTitleSafe;
      if ( NormalDisplayNameWithTitleSafe >= 0 )
      {
        NormalDisplayNameWithTitleSafe = IImmersiveApplication_GetNormalDisplayNameWithTitleSafe(v16, v12, a2);
        v6 = NormalDisplayNameWithTitleSafe;
        if ( NormalDisplayNameWithTitleSafe >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
          goto LABEL_16;
        }
        v13 = 41LL;
      }
      else
      {
        v13 = 39LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers_notest.cpp",
        (const char *)(unsigned int)NormalDisplayNameWithTitleSafe);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24,
        (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers_notest.cpp",
        (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
    goto LABEL_17;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v17 + 24LL))(v17, &hWnd);
  v6 = v5;
  if ( v5 >= 0 )
  {
    InternalGetWindowText(hWnd, pString, 260);
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (LPVOID *)&v18,
           (__int64)pString,
           0xFFFFFFFFFFFFFFFFuLL);
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D,
        (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers_notest.cpp",
        (const char *)(unsigned int)v7);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v18);
      goto LABEL_17;
    }
    v8 = v18;
    v18 = 0LL;
    v20 = 0LL;
    v19 = 0LL;
    *a2 = v8;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v18);
LABEL_16:
    v6 = 0;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17,
    (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers_notest.cpp",
    (const char *)(unsigned int)v5);
LABEL_17:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  return v6;
}
