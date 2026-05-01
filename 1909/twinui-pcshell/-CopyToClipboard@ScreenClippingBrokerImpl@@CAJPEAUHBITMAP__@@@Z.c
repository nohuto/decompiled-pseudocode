/*
 * XREFs of ?CopyToClipboard@ScreenClippingBrokerImpl@@CAJPEAUHBITMAP__@@@Z @ 0x180400A4C
 * Callers:
 *     ?GrabScreenShot@ScreenClippingBrokerImpl@@CAJAEBUtagRECT@@AEAV?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@_N@Z @ 0x180401444 (-GrabScreenShot@ScreenClippingBrokerImpl@@CAJAEBUtagRECT@@AEAV-$ComPtr@UIWICBitmapSource@@@WRL@M.c)
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?get@?$static_lazy@VShellScreenClippingLogging@@@details@wil@@QEAAPEAVShellScreenClippingLogging@@P6AXXZ@Z @ 0x1801D2ECC (-get@-$static_lazy@VShellScreenClippingLogging@@@details@wil@@QEAAPEAVShellScreenClippingLogging.c)
 *     ??0?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18040061C (--0-$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??1CopiedToClipboard@ScreenClippingCommonTelemetry@@QEAA@XZ @ 0x1804008BC (--1CopiedToClipboard@ScreenClippingCommonTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CopiedToClipboard@ScreenClippingCommonTelemetry@@QEAAXXZ @ 0x180401C30 (-StartActivity@CopiedToClipboard@ScreenClippingCommonTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180401E20 (-Stop@-$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ScreenClippingBrokerImpl::CopyToClipboard(HBITMAP h)
{
  const struct _TlgProvider_t *v2; // rcx
  unsigned int LastError; // edi
  HWND DesktopWindow; // rax
  const char *v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  HANDLE v8; // rbx
  __int64 v9; // rdx
  const struct _TlgProvider_t *v10; // rcx
  __int64 v11; // rcx
  const struct _TlgProvider_t *v12; // rcx
  __int64 v13; // rcx
  const struct _TlgProvider_t *v14; // rcx
  int pv[10]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v17[40]; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v2 = (const struct _TlgProvider_t *)wil::details::static_lazy<ShellScreenClippingLogging>::get(
                                        (__int64)h,
                                        (void (__cdecl *)())lambda_d71f6d60408a6de3c75f9a9c93a2d5fc_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v2 > 5u )
    TlgWrite(v2, &unk_180507983, 0LL, 0LL, 2u, &pData);
  wil::ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v17,
    (__int64)"CopiedToClipboard");
  v17[0] = &ScreenClippingCommonTelemetry::CopiedToClipboard::`vftable';
  ScreenClippingCommonTelemetry::CopiedToClipboard::StartActivity((ScreenClippingCommonTelemetry::CopiedToClipboard *)v17);
  if ( GetObjectW(h, 32, pv) != 32 )
  {
    LastError = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF2,
      (__int64)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
      (const char *)0x80004005LL);
    goto LABEL_26;
  }
  DesktopWindow = GetDesktopWindow();
  if ( !OpenClipboard(DesktopWindow) )
  {
    v6 = 244LL;
LABEL_9:
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v6,
                  (__int64)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
                  v5);
    goto LABEL_26;
  }
  if ( !EmptyClipboard() )
  {
    v6 = 245LL;
    goto LABEL_9;
  }
  v8 = CopyImage(h, 0, pv[1], pv[2], 0);
  if ( v8 )
  {
    v10 = (const struct _TlgProvider_t *)wil::details::static_lazy<ShellScreenClippingLogging>::get(
                                           v7,
                                           (void (__cdecl *)())lambda_d71f6d60408a6de3c75f9a9c93a2d5fc_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v10 > 5u )
      TlgWrite(v10, &unk_180507931, 0LL, 0LL, 2u, &pData);
    if ( SetClipboardData(2u, v8) == v8 )
    {
      v12 = (const struct _TlgProvider_t *)wil::details::static_lazy<ShellScreenClippingLogging>::get(
                                             v11,
                                             (void (__cdecl *)())lambda_d71f6d60408a6de3c75f9a9c93a2d5fc_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v12 > 5u )
        TlgWrite(v12, &unk_1805078E3, 0LL, 0LL, 2u, &pData);
      if ( CloseClipboard() )
      {
        v8 = 0LL;
      }
      else
      {
        v14 = (const struct _TlgProvider_t *)wil::details::static_lazy<ShellScreenClippingLogging>::get(
                                               v13,
                                               (void (__cdecl *)())lambda_d71f6d60408a6de3c75f9a9c93a2d5fc_::_lambda_invoker_cdecl_)[1];
        if ( *(_DWORD *)v14 > 5u )
          TlgWrite(v14, &unk_1805079C4, 0LL, 0LL, 2u, &pData);
      }
      wil::ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v17);
      LastError = 0;
      goto LABEL_24;
    }
    v9 = 255LL;
  }
  else
  {
    v9 = 248LL;
  }
  LastError = -2147467259;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
    (const char *)0x80004005LL);
LABEL_24:
  if ( v8 )
    DeleteObject(v8);
LABEL_26:
  ScreenClippingCommonTelemetry::CopiedToClipboard::~CopiedToClipboard((ScreenClippingCommonTelemetry::CopiedToClipboard *)v17);
  return LastError;
}
