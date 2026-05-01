/*
 * XREFs of ?_SendViewToDesktop@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CAJPEAUIWin32ApplicationView@@_N@Z @ 0x180215ECC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6937d4ae17bb244dbfbdfe30bf95aa3c___::Run @ 0x180099720 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6937d4ae17bb244dbfbdfe30bf95aa3c___--Run.c)
 *     _lambda_b1e75d3e314d3909b197b601af483277_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x18020900C (_lambda_b1e75d3e314d3909b197b601af483277_--operator()_Windows--Internal--Shell--Holographic--Win.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801085CC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18020BC4C (--0-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$_ea_18020BC4C.c)
 *     ??1SendViewToDesktop@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x18020D2CC (--1SendViewToDesktop@Win32BackedViewHostItemTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@SendViewToDesktop@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationView@@@Z @ 0x18021350C (-StartActivity@SendViewToDesktop@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationVie.c)
 *     ?Stop@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180213A50 (-Stop@-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_SendViewToDesktop(
        struct IWin32ApplicationView *a1,
        char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  HRESULT v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  LPVOID v9; // rbx
  __int64 (__fastcall *v10)(LPVOID, GUID *, GUID *, __int64 *); // rsi
  LPVOID v11; // rbx
  __int64 (__fastcall *v12)(LPVOID, GUID *, GUID *, __int64 *); // rsi
  int v13; // eax
  int v14; // eax
  int v16; // eax
  __int64 v17; // rdx
  HWND LastActivePopup; // rbx
  __int64 v19; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A8h] BYREF
  HWND hWnd; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-98h] BYREF
  __int64 v27[2]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v28[40]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v27[1] = -2LL;
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v28,
    (__int64)"SendViewToDesktop");
  v28[0] = &Win32BackedViewHostItemTelemetry::SendViewToDesktop::`vftable';
  Win32BackedViewHostItemTelemetry::SendViewToDesktop::StartActivity(
    (Win32BackedViewHostItemTelemetry::SendViewToDesktop *)v28,
    a1);
  hWnd = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IWin32ApplicationView *, HWND *))(*(_QWORD *)a1 + 24LL))(a1, &hWnd);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x121,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v4);
LABEL_22:
    Win32BackedViewHostItemTelemetry::SendViewToDesktop::~SendViewToDesktop((Win32BackedViewHostItemTelemetry::SendViewToDesktop *)v28);
    return v5;
  }
  ppv = 0LL;
  v6 = CoCreateInstance(
         &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
         0LL,
         0x404u,
         &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
         &ppv);
  v5 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x124,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v6);
LABEL_21:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&ppv);
    goto LABEL_22;
  }
  v23 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v7 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)ppv + 24LL))(
         ppv,
         &CLSID_HolographicForegroundAssistant,
         &GUID_0249c870_f630_4a75_8d01_b316c814157a,
         &v23);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 298LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v7);
LABEL_20:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v21);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v22);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v23);
    goto LABEL_21;
  }
  v9 = ppv;
  v10 = *(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)ppv + 24LL);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v7 = v10(v9, &CLSID_HolographicViewHostItemLedger, &GUID_321d1a85_14d5_4a15_bfec_edf12b00f03f, &v22);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 299LL;
    goto LABEL_7;
  }
  v11 = ppv;
  v12 = *(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)ppv + 24LL);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v7 = v12(v11, &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267, &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267, &v21);
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 300LL;
    goto LABEL_7;
  }
  v13 = (**(__int64 (__fastcall ***)(struct IWin32ApplicationView *, GUID *, __int64 *))a1)(
          a1,
          &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
          v27);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      5407LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v13);
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v21 + 32LL))(v21, v27[0], 4LL);
  v5 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x130,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v14);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v27);
    goto LABEL_20;
  }
  if ( a2 && IsWindow(hWnd) )
  {
    v26 = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 48LL))(v22, &v26);
    if ( v16 < 0 )
    {
      v17 = 314LL;
LABEL_27:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)(unsigned int)v16);
      goto LABEL_35;
    }
    if ( v26 )
    {
      LODWORD(v24) = 0;
      LOBYTE(v19) = 0;
      v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 120LL))(v26, &v24);
      if ( v16 < 0 )
      {
        v17 = 319LL;
        goto LABEL_27;
      }
      if ( (_DWORD)v24 == 1 )
      {
        v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 80LL))(v26, &v19);
        if ( v16 < 0 )
        {
          v17 = 321LL;
          goto LABEL_27;
        }
        if ( (_BYTE)v19 )
        {
LABEL_40:
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v26);
          goto LABEL_41;
        }
      }
    }
LABEL_35:
    if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v23 + 48LL))(v23) >= 0 )
    {
      LastActivePopup = GetLastActivePopup(hWnd);
      if ( !IsWindowVisible(LastActivePopup) )
        LastActivePopup = hWnd;
      if ( !SetForegroundWindow(LastActivePopup) )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x14F,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
          (const char *)0x80070005LL);
    }
    goto LABEL_40;
  }
LABEL_41:
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v28);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v27);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v21);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v22);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v23);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&ppv);
  Win32BackedViewHostItemTelemetry::SendViewToDesktop::~SendViewToDesktop((Win32BackedViewHostItemTelemetry::SendViewToDesktop *)v28);
  return 0LL;
}
