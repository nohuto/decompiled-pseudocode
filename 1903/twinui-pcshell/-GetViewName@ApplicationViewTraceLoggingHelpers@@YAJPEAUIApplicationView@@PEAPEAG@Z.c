/*
 * XREFs of ?GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1803AD354
 * Callers:
 *     ?GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z @ 0x1803AC588 (-GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z.c)
 *     ?StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x1803B1174 (-StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@HAEBUtagRECT@@K@Z @ 0x1803B17A4 (-StartActivity@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@H.c)
 *     ?StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__@@I@Z @ 0x1803B19EC (-StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__.c)
 *     ?StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1803B1BE4 (-StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONE.c)
 *     ?StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1803B1E08 (-StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_.c)
 *     ?ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1803B5568 (-ViewForceEvicted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView.c)
 *     ?ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1803B577C (-ViewForceMaximized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationVi.c)
 *     ?ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@1@Z @ 0x1803B5A04 (-ViewPositionAdjusted@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXPEAUIApplication.c)
 * Callees:
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x18000F0E0 (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18002B780 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x18012F204 (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z.c)
 */

__int64 __fastcall ApplicationViewTraceLoggingHelpers::GetViewName(
        ApplicationViewTraceLoggingHelpers *this,
        struct IApplicationView *a2,
        unsigned __int16 **a3)
{
  unsigned int v3; // ebx
  char *v5; // r14
  __int64 v7; // rsi
  int v8; // edi
  _WORD *v9; // rax
  _WORD *v10; // rcx
  __int64 v11; // rdx
  __int16 v12; // r8
  _WORD *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  _WORD *v16; // rax
  _WORD *v17; // rcx
  __int64 v18; // rdx
  __int16 v19; // r8
  _WORD *v20; // rax
  int v21; // eax
  unsigned __int64 v22; // r9
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v27[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+28h] [rbp-D8h]
  __int64 v29; // [rsp+30h] [rbp-D0h]
  __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  HWND hWnd; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h]
  __int64 v34; // [rsp+58h] [rbp-A8h]
  WCHAR ClassName[264]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR pString[264]; // [rsp+270h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4B8h] [rbp+3B8h]

  v3 = 0;
  *(_QWORD *)v27 = 0LL;
  v5 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  v7 = 8LL;
  if ( (**(int (__fastcall ***)(ApplicationViewTraceLoggingHelpers *, GUID *, __int64 *))this)(
         this,
         &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2,
         &v30) >= 0 )
  {
    if ( is_mul_ok(8uLL, 2uLL) )
    {
      v8 = 0;
      v9 = CoTaskMemAlloc(0x10uLL);
      v10 = v9;
      if ( v9 )
      {
        v29 = 8LL;
        v5 = (char *)v9;
        *(_QWORD *)v27 = v9;
        *v9 = 0;
      }
      else
      {
        v8 = -2147024882;
        v10 = 0LL;
      }
      if ( v8 >= 0 )
      {
        do
        {
          v11 = v7 - 1;
          if ( v7 == 1 )
            break;
          v12 = *(_WORD *)((char *)v10 + (char *)L"WinRT: " - v5);
          if ( !v12 )
            break;
          *v10 = v12;
          --v7;
          ++v10;
        }
        while ( v11 );
        v13 = v10 - 1;
        v28 = 7LL;
        if ( v7 )
          v13 = v10;
        *v13 = 0;
        v32 = 0LL;
        v33 = 0LL;
        v34 = 0LL;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v32);
        v33 = -1LL;
        v34 = -1LL;
        if ( (*(int (__fastcall **)(ApplicationViewTraceLoggingHelpers *, __int64 *))(*(_QWORD *)this + 136LL))(
               this,
               &v32) >= 0 )
        {
          v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
                  (__int64)v27,
                  &v32);
          if ( v14 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x13,
              (__int64)"internal\\shell\\private\\inc\\ApplicationViewTraceLoggingHelpers.h",
              (const char *)(unsigned int)v14);
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v32);
        goto LABEL_36;
      }
    }
    else
    {
      v8 = -2147024362;
    }
    v15 = 14LL;
LABEL_40:
    v22 = (unsigned int)v8;
    goto LABEL_41;
  }
  if ( !is_mul_ok(8uLL, 2uLL) )
  {
    v8 = -2147024362;
LABEL_39:
    v15 = 25LL;
    goto LABEL_40;
  }
  v8 = 0;
  v16 = CoTaskMemAlloc(0x10uLL);
  v17 = v16;
  if ( v16 )
  {
    v29 = 8LL;
    v5 = (char *)v16;
    *(_QWORD *)v27 = v16;
    *v16 = 0;
  }
  else
  {
    v8 = -2147024882;
    v17 = 0LL;
  }
  if ( v8 < 0 )
    goto LABEL_39;
  do
  {
    v18 = v7 - 1;
    if ( v7 == 1 )
      break;
    v19 = *(_WORD *)((char *)v17 + (char *)L"Win32: " - v5);
    if ( !v19 )
      break;
    *v17 = v19;
    --v7;
    ++v17;
  }
  while ( v18 );
  v20 = v17 - 1;
  v28 = 7LL;
  if ( v7 )
    v20 = v17;
  *v20 = 0;
  v21 = (*(__int64 (__fastcall **)(ApplicationViewTraceLoggingHelpers *, HWND *))(*(_QWORD *)this + 72LL))(this, &hWnd);
  v8 = v21;
  if ( v21 < 0 )
  {
    v22 = (unsigned int)v21;
    v15 = 28LL;
LABEL_41:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"internal\\shell\\private\\inc\\ApplicationViewTraceLoggingHelpers.h",
      (const char *)v22);
    v3 = v8;
    goto LABEL_42;
  }
  if ( GetClassNameW(hWnd, ClassName, 260) )
  {
    v23 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
            v27,
            L"Class[%s] ",
            ClassName);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x20,
        (__int64)"internal\\shell\\private\\inc\\ApplicationViewTraceLoggingHelpers.h",
        (const char *)(unsigned int)v23);
  }
  if ( InternalGetWindowText(hWnd, pString, 260) )
  {
    v24 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
            v27,
            L"Title[%s]",
            pString);
    if ( v24 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x26,
        (__int64)"internal\\shell\\private\\inc\\ApplicationViewTraceLoggingHelpers.h",
        (const char *)(unsigned int)v24);
  }
LABEL_36:
  v25 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo((__int64 *)v27, a2);
  v8 = v25;
  if ( v25 < 0 )
  {
    v22 = (unsigned int)v25;
    v15 = 42LL;
    goto LABEL_41;
  }
LABEL_42:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v27);
  return v3;
}
