/*
 * XREFs of ?_EvaluateTakingControlOfWin32Slate@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@_N@Z @ 0x180222FC4
 * Callers:
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800535C0 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 *     ?_OnUnmanagedWin32ViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x180053748 (-_OnUnmanagedWin32ViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32Applicat.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@PEAUIUnknown@@PEAUIWin32ApplicationView@@_N@Z @ 0x180053CAC (-TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA-AV-$com_ptr_t@UIProperty.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     _LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(&)[20]_ @ 0x18021CA58 (_LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(-)[20]_.c)
 *     _LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(&)[21]_ @ 0x18021CB20 (_LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_(-)[21]_.c)
 *     ?_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x180223C28 (-_IsInputContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_EvaluateTakingControlOfWin32Slate(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct IWin32ApplicationView *a3,
        char a4)
{
  __int64 result; // rax
  HWND ForegroundWindow; // rax
  HWND v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  LONG WindowLongW; // ebx
  LONG v14; // eax
  __int64 v15; // rbx
  const WCHAR *v16; // rdx
  int v17; // eax
  unsigned int v18; // edi
  __int64 v19; // rcx
  int v20; // eax
  const WCHAR *v21; // rdx
  int v22; // eax
  __int64 v23; // [rsp+20h] [rbp-30h] BYREF
  HWND hWnd; // [rsp+28h] [rbp-28h] BYREF
  IUnknown *v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v28; // [rsp+80h] [rbp+30h] BYREF

  v26[1] = -2LL;
  v28 = 0;
  hWnd = 0LL;
  result = (*(__int64 (__fastcall **)(struct IWin32ApplicationView *, HWND *))(*(_QWORD *)a3 + 24LL))(a3, &hWnd);
  if ( (int)result < 0 )
    return result;
  if ( !hWnd )
    return 2147943568LL;
  if ( GetWindow(hWnd, 4u) )
    return 0LL;
  if ( HolographicPositioner::_IsInputContextHolographic(this) )
    goto LABEL_11;
  ForegroundWindow = GetForegroundWindow();
  v10 = hWnd;
  if ( hWnd != ForegroundWindow )
  {
    v11 = *((_QWORD *)this + 31);
    if ( !v11 )
      return 0LL;
    v28 = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, struct IWin32ApplicationView *, int *))(*(_QWORD *)v11 + 32LL))(
            v11,
            a3,
            &v28);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8D7,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v12);
      return 0LL;
    }
    if ( !v28 )
      return 0LL;
LABEL_11:
    v10 = hWnd;
  }
  WindowLongW = GetWindowLongW(v10, -16);
  v14 = GetWindowLongW(hWnd, -20);
  if ( (WindowLongW & 0x40000000) != 0
    || WindowLongW < 0 && (v14 & 0x40000) == 0 && (WindowLongW & 0x80880000) != 0x80880000 )
  {
    return 0LL;
  }
  v25 = 0LL;
  v28 = 2;
  (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 1) + 32LL))(
    (char *)this + 8,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v25);
  Win32ApplicationViewHelpers::TryGetViewPropertySetFromHintsForWin32(v26, v25, a3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
  v15 = v26[0];
  if ( !v26[0] )
  {
    if ( a4 )
    {
      v19 = *((_QWORD *)this + 31);
      if ( v19 )
      {
        if ( *((_BYTE *)this + 296) )
        {
          v28 = 0;
          v20 = (*(__int64 (__fastcall **)(__int64, struct IWin32ApplicationView *, int *))(*(_QWORD *)v19 + 32LL))(
                  v19,
                  a3,
                  &v28);
          if ( v20 >= 0 )
          {
            if ( v28 )
            {
              LODWORD(v23) = (_DWORD)hWnd;
              LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_____21__(
                (__int64)a2,
                v21,
                (__int64)&v23);
              v22 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 33)
                                                                                          + 24LL))(
                      *((_QWORD *)this + 33),
                      a2,
                      4LL);
              v18 = v22;
              if ( v22 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x90A,
                  (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                  (const char *)(unsigned int)v22);
                goto LABEL_33;
              }
            }
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x907,
              (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
              (const char *)(unsigned int)v20);
          }
        }
      }
    }
LABEL_21:
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    return 0LL;
  }
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 33))(
    *((_QWORD *)this + 33),
    &GUID_ff964f56_8baf_4947_9c46_f227ec68ff34,
    &v23);
  if ( !v23
    || (v28 = (int)hWnd,
        LogEventWithApplicationViewData_unsigned_int_unsigned_short_const_____20__((__int64)a2, v16, (__int64)&v28),
        v17 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, __int64))(*(_QWORD *)v23 + 40LL))(
                v23,
                a2,
                v15),
        v18 = v17,
        v17 >= 0) )
  {
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v23);
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x901,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v17);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v23);
LABEL_33:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v18;
}
