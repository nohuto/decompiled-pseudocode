/*
 * XREFs of ?GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180347864
 * Callers:
 *     ?GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z @ 0x180346AB8 (-GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z.c)
 *     ?StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x18034B874 (-StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@HAEBUtagRECT@@K@Z @ 0x18034BE74 (-StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@H.c)
 *     ?StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__@@I@Z @ 0x18034C0A8 (-StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__.c)
 *     ?StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18034C288 (-StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONE.c)
 *     ?StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18034C490 (-StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_.c)
 *     ?ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x18034F6B8 (-ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView.c)
 *     ?ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x18034F8CC (-ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationVi.c)
 *     ?ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x18034FB54 (-ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplication.c)
 * Callees:
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18002D2FC (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x18004D080 (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x180108EC4 (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z.c)
 */

__int64 __fastcall ApplicationViewTraceLoggingHelpers::GetViewName(
        ApplicationViewTraceLoggingHelpers *this,
        struct IApplicationView *a2,
        unsigned __int16 **a3)
{
  unsigned int v3; // edi
  __int64 v6; // rbx
  unsigned int v7; // ebx
  _WORD *v8; // rax
  _WORD *v9; // rcx
  char *v10; // rax
  __int64 v11; // rdx
  __int16 v12; // r8
  _WORD *v13; // rax
  int (__fastcall **v14)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *); // rax
  int v15; // eax
  __int64 v16; // rdx
  _WORD *v17; // rax
  _WORD *v18; // rcx
  char *v19; // rax
  __int64 v20; // rdx
  __int16 v21; // r8
  _WORD *v22; // rax
  int v23; // eax
  unsigned __int64 v24; // r9
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v29[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+28h] [rbp-D8h]
  __int64 v31; // [rsp+30h] [rbp-D0h]
  __int64 v32; // [rsp+38h] [rbp-C8h] BYREF
  HWND hWnd; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  WCHAR ClassName[264]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR pString[264]; // [rsp+270h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4A8h] [rbp+3A8h]

  v3 = 0;
  *(_QWORD *)v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
  v6 = 8LL;
  if ( (**(int (__fastcall ***)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *))this)(
         this,
         &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2,
         &v32) >= 0 )
  {
    if ( !is_mul_ok(8uLL, 2uLL) )
    {
      v7 = -2147024362;
LABEL_16:
      v16 = 14LL;
LABEL_38:
      v24 = v7;
      goto LABEL_39;
    }
    v8 = CoTaskMemAlloc(0x10uLL);
    v9 = v8;
    if ( !v8 )
    {
      v7 = -2147024882;
      goto LABEL_16;
    }
    *(_QWORD *)v29 = v8;
    *v8 = 0;
    v10 = (char *)((char *)L"WinRT: " - (char *)v8);
    v31 = 8LL;
    do
    {
      v11 = v6 - 1;
      if ( v6 == 1 )
        break;
      v12 = *(_WORD *)&v10[(_QWORD)v9];
      if ( !v12 )
        break;
      *v9 = v12;
      --v6;
      ++v9;
    }
    while ( v11 );
    v13 = v9 - 1;
    v30 = 7LL;
    if ( v6 )
      v13 = v9;
    *v13 = 0;
    v34 = 0LL;
    v35 = 0LL;
    v36 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v34);
    v14 = *(int (__fastcall ***)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *))this;
    v35 = -1LL;
    v36 = -1LL;
    if ( ((int (__fastcall *)(ApplicationViewTraceLoggingHelpers *, __int64 *))v14[17])(this, &v34) >= 0 )
    {
      v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
              (__int64)v29,
              &v34);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          19LL,
          (__int64)"internal\\shell\\private\\inc\\ApplicationViewTraceLoggingHelpers.h",
          (const char *)(unsigned int)v15);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v34);
    goto LABEL_34;
  }
  if ( !is_mul_ok(8uLL, 2uLL) )
  {
    v7 = -2147024362;
LABEL_37:
    v16 = 25LL;
    goto LABEL_38;
  }
  v17 = CoTaskMemAlloc(0x10uLL);
  v18 = v17;
  if ( !v17 )
  {
    v7 = -2147024882;
    goto LABEL_37;
  }
  *(_QWORD *)v29 = v17;
  *v17 = 0;
  v19 = (char *)((char *)L"Win32: " - (char *)v17);
  v31 = 8LL;
  do
  {
    v20 = v6 - 1;
    if ( v6 == 1 )
      break;
    v21 = *(_WORD *)&v19[(_QWORD)v18];
    if ( !v21 )
      break;
    *v18 = v21;
    --v6;
    ++v18;
  }
  while ( v20 );
  v22 = v18 - 1;
  v30 = 7LL;
  if ( v6 )
    v22 = v18;
  *v22 = 0;
  v23 = (*(__int64 (__fastcall **)(ApplicationViewTraceLoggingHelpers *, HWND *))(*(_QWORD *)this + 72LL))(this, &hWnd);
  v7 = v23;
  if ( v23 < 0 )
  {
    v24 = (unsigned int)v23;
    v16 = 28LL;
LABEL_39:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"internal\\shell\\private\\inc\\ApplicationViewTraceLoggingHelpers.h",
      (const char *)v24);
    v3 = v7;
    goto LABEL_40;
  }
  if ( GetClassNameW(hWnd, ClassName, 260) )
  {
    v25 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
            v29,
            (__int64)L"Class[%s] ",
            ClassName);
    if ( v25 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        32LL,
        (__int64)"internal\\shell\\private\\inc\\ApplicationViewTraceLoggingHelpers.h",
        (const char *)(unsigned int)v25);
  }
  if ( InternalGetWindowText(hWnd, pString, 260) )
  {
    v26 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
            v29,
            (__int64)L"Title[%s]",
            pString);
    if ( v26 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        38LL,
        (__int64)"internal\\shell\\private\\inc\\ApplicationViewTraceLoggingHelpers.h",
        (const char *)(unsigned int)v26);
  }
LABEL_34:
  v27 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo((__int64 *)v29, a2);
  v7 = v27;
  if ( v27 < 0 )
  {
    v24 = (unsigned int)v27;
    v16 = 42LL;
    goto LABEL_39;
  }
LABEL_40:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v29);
  return v3;
}
