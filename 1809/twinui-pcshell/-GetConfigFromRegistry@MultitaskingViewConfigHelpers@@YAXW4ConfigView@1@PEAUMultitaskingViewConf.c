/*
 * XREFs of ?GetConfigFromRegistry@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@Z @ 0x1802F8A28
 * Callers:
 *     ?RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x1802EDAF4 (-RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManage.c)
 *     ?Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1802EFE90 (-Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     ?RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@@Z @ 0x1802F0FAC (-RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMana.c)
 * Callees:
 *     ??1?$CAutoHandle@PEAUHKEY__@@@@QEAA@XZ @ 0x18002A0C4 (--1-$CAutoHandle@PEAUHKEY__@@@@QEAA@XZ.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18002A0F0 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18003B6C0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?GetDefaultConfig@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@Z @ 0x1802F8C24 (-GetDefaultConfig@MultitaskingViewConfigHelpers@@YAXW4ConfigView@1@PEAUMultitaskingViewConfig@@@.c)
 *     ?_ReadFrameMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUFrameMetrics@@@Z @ 0x1802F92CC (-_ReadFrameMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUFrameMetrics@@@Z.c)
 *     ?_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z @ 0x1802F94C0 (-_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z.c)
 *     ?_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetrics@@@Z @ 0x1802F999C (-_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetr.c)
 */

void __fastcall MultitaskingViewConfigHelpers::GetConfigFromRegistry(__int64 a1, _OWORD *a2)
{
  int v3; // r10d
  int v4; // r10d
  int v5; // r10d
  int v6; // r10d
  const wchar_t *v7; // r8
  int v8; // eax
  struct GridMetrics *v9; // r8
  struct VirtualDesktopMetrics *v10; // r8
  struct FrameMetrics *v11; // r8
  __int64 v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  HKEY phkResult; // [rsp+30h] [rbp-D0h] BYREF
  LPCWSTR lpSubKey[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v24[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct HKEY__ v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-38h]
  __int64 v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+130h] [rbp+30h]
  __int64 v29; // [rsp+1D8h] [rbp+D8h]
  struct HKEY__ v30; // [rsp+258h] [rbp+158h] BYREF
  __int64 v31; // [rsp+278h] [rbp+178h]
  __int64 v32; // [rsp+2F0h] [rbp+1F0h]
  struct HKEY__ v33; // [rsp+300h] [rbp+200h] BYREF
  __int64 v34; // [rsp+3B8h] [rbp+2B8h]
  __int64 v35; // [rsp+470h] [rbp+370h]
  wil::details::in1diag3 *retaddr; // [rsp+508h] [rbp+408h]

  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  MultitaskingViewConfigHelpers::GetDefaultConfig(a1, v24);
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( !v4 )
    {
      v7 = L"AltTabViewHost";
      goto LABEL_11;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      v7 = L"SnapAssistView";
      goto LABEL_11;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      v7 = L"PPIAllUpView";
      goto LABEL_11;
    }
    if ( v6 == 1 )
    {
      v7 = L"TestHost";
      goto LABEL_11;
    }
  }
  v7 = L"AllUpView";
LABEL_11:
  memset(lpSubKey, 0, sizeof(lpSubKey));
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         (unsigned __int16 **)lpSubKey,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\MultitaskingView\\%s",
         v7);
  if ( v8 >= 0 )
  {
    Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&phkResult);
    if ( !RegOpenKeyExW(HKEY_CURRENT_USER, lpSubKey[0], 0, 0x20019u, &phkResult) )
    {
      MultitaskingViewConfigHelpers::_ReadGridMetrics((MultitaskingViewConfigHelpers *)phkResult, &v25, v9);
      MultitaskingViewConfigHelpers::_ReadVirtualDesktopMetrics((MultitaskingViewConfigHelpers *)phkResult, &v33, v10);
      MultitaskingViewConfigHelpers::_ReadFrameMetrics((MultitaskingViewConfigHelpers *)phkResult, &v30, v11);
    }
    CAutoHandle<HKEY__ *>::~CAutoHandle<HKEY__ *>(&phkResult);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      97LL,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\config.cpp",
      (const char *)(unsigned int)v8);
  }
  v12 = 9LL;
  v13 = v24;
  do
  {
    v14 = v13[1];
    *a2 = *v13;
    v15 = v13[2];
    a2[1] = v14;
    v16 = v13[3];
    a2[2] = v15;
    v17 = v13[4];
    a2[3] = v16;
    v18 = v13[5];
    a2[4] = v17;
    v19 = v13[6];
    a2[5] = v18;
    v20 = v13[7];
    v13 += 8;
    a2[6] = v19;
    a2 += 8;
    *(a2 - 1) = v20;
    --v12;
  }
  while ( v12 );
  v21 = v13[1];
  *a2 = *v13;
  a2[1] = v21;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpSubKey);
}
