/*
 * XREFs of ?PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x1802118D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     wil::run_when_complete_nothrow_Microsoft::WRL::FtmBase__lambda_779d0cbcb7c833c1780224279e0894ce__&_ @ 0x18020B6E0 (wil--run_when_complete_nothrow_Microsoft--WRL--FtmBase__lambda_779d0cbcb7c833c1780224279e0894ce_.c)
 *     holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_b1e75d3e314d3909b197b601af483277___ @ 0x18020B840 (holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem__lambda_b1e75d3.c)
 *     ??0?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18020BB98 (--0-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$_ea_18020BB98.c)
 *     ??0?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18020BC4C (--0-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$_ea_18020BC4C.c)
 *     ??1PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x18020D2A0 (--1PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationView@@@Z @ 0x18021332C (-StartActivity@PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationVie.c)
 *     ?_HandleHolographicPortingAsync@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_NPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180215A1C (-_HandleHolographicPortingAsync@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA.c)
 *     ?get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z @ 0x180217300 (-get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::PortToHolographic(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        unsigned __int8 *a2)
{
  struct IWin32ApplicationView *v4; // rbx
  Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *v5; // rdi
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v10[2]; // [rsp+28h] [rbp-E0h] BYREF
  struct Windows::Foundation::IAsyncAction *v11; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-D0h] BYREF
  std::_Ref_count_base *v13; // [rsp+40h] [rbp-C8h]
  __int64 v14; // [rsp+48h] [rbp-C0h]
  _QWORD v15[40]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v16[40]; // [rsp+198h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+300h] [rbp+1F8h]

  v14 = -2LL;
  *a2 = 0;
  v4 = (struct IWin32ApplicationView *)*((_QWORD *)this + 50);
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"PortToHolographic");
  v15[0] = &Win32BackedViewHostItemTelemetry::PortToHolographic::`vftable';
  Win32BackedViewHostItemTelemetry::PortToHolographic::StartActivity(
    (Win32BackedViewHostItemTelemetry::PortToHolographic *)v15,
    v4);
  v10[0] = 0;
  v5 = (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)((char *)this - 24);
  if ( (int)Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_FrameworkViewType(v5, v10) >= 0
    && v10[0] )
  {
    v6 = 0;
  }
  else
  {
    v11 = 0LL;
    v7 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_HandleHolographicPortingAsync(v5, 1, &v11);
    v6 = v7;
    if ( v7 >= 0 )
    {
      wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v16,
        (__int64)v15);
      v16[0] = &Win32BackedViewHostItemTelemetry::PortToHolographic::`vftable';
      holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_b1e75d3e314d3909b197b601af483277___(
        &v12,
        (__int64)v5,
        (__int64)v16);
      Win32BackedViewHostItemTelemetry::PortToHolographic::~PortToHolographic((Win32BackedViewHostItemTelemetry::PortToHolographic *)v16);
      v8 = wil::run_when_complete_nothrow_Microsoft::WRL::FtmBase__lambda_779d0cbcb7c833c1780224279e0894ce____(
             (__int64)v11,
             &v12);
      v6 = v8;
      if ( v8 >= 0 )
      {
        *a2 = 1;
        v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x329,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
          (const char *)(unsigned int)v8);
      }
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x316,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)(unsigned int)v7);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v11);
  }
  Win32BackedViewHostItemTelemetry::PortToHolographic::~PortToHolographic((Win32BackedViewHostItemTelemetry::PortToHolographic *)v15);
  return v6;
}
