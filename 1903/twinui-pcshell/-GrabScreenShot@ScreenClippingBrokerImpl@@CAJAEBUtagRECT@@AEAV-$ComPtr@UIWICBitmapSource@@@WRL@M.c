/*
 * XREFs of ?GrabScreenShot@ScreenClippingBrokerImpl@@CAJAEBUtagRECT@@AEAV?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@_N@Z @ 0x1803E1E2C
 * Callers:
 *     ?TakeScreenShot@ScreenClippingBrokerImpl@@EEAAJPEAU_GUID@@E@Z @ 0x1803E2ED0 (-TakeScreenShot@ScreenClippingBrokerImpl@@EEAAJPEAU_GUID@@E@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??0?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803E100C (--0-$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??1ScreenCapture@ScreenClippingCommonTelemetry@@QEAA@XZ @ 0x1803E12D8 (--1ScreenCapture@ScreenClippingCommonTelemetry@@QEAA@XZ.c)
 *     ?CopyToClipboard@ScreenClippingBrokerImpl@@CAJPEAUHBITMAP__@@@Z @ 0x1803E143C (-CopyToClipboard@ScreenClippingBrokerImpl@@CAJPEAUHBITMAP__@@@Z.c)
 *     ?CreateWICBitMapFromHBITMAP@ScreenClippingBrokerImpl@@CAJQEAUHBITMAP__@@AEAV?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@@Z @ 0x1803E17A8 (-CreateWICBitMapFromHBITMAP@ScreenClippingBrokerImpl@@CAJQEAUHBITMAP__@@AEAV-$ComPtr@UIWICBitmap.c)
 *     ?SelectObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@Z$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@1@PEAUHDC__@@PEAX@Z @ 0x1803E25CC (-SelectObject@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXUselect_resu.c)
 *     ?StartActivity@ScreenCapture@ScreenClippingCommonTelemetry@@QEAAXXZ @ 0x1803E2708 (-StartActivity@ScreenCapture@ScreenClippingCommonTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803E2800 (-Stop@-$ActivityBase@VShellScreenClippingLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ScreenClippingBrokerImpl::GrabScreenShot(int *a1, __int64 *a2, char a3)
{
  HDC DC; // rax
  HDC hdcSrc; // r14
  unsigned int LastError; // ebx
  HDC CompatibleDC; // rsi
  int v9; // r15d
  int cy; // r12d
  HBITMAP CompatibleBitmap; // rax
  HBITMAP v12; // rdi
  const char *v13; // r9
  int v14; // eax
  int v15; // eax
  __int64 v18; // [rsp+60h] [rbp-A8h] BYREF
  void *v19; // [rsp+68h] [rbp-A0h]
  __int64 v20; // [rsp+70h] [rbp-98h]
  HGDIOBJ h[4]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v22; // [rsp+98h] [rbp-70h]
  _QWORD v23[40]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  h[2] = (HGDIOBJ)-2LL;
  wil::ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v23,
    (__int64)"ScreenCapture");
  v23[0] = &ScreenClippingCommonTelemetry::ScreenCapture::`vftable';
  ScreenClippingCommonTelemetry::ScreenCapture::StartActivity((ScreenClippingCommonTelemetry::ScreenCapture *)v23);
  DC = GetDC(0LL);
  hdcSrc = DC;
  v19 = DC;
  v20 = 0LL;
  v22 = (unsigned __int64)DC;
  if ( DC )
  {
    CompatibleDC = CreateCompatibleDC(DC);
    h[3] = CompatibleDC;
    if ( CompatibleDC )
    {
      v9 = a1[2] - *a1;
      cy = a1[3] - a1[1];
      CompatibleBitmap = CreateCompatibleBitmap(hdcSrc, v9, cy);
      v12 = CompatibleBitmap;
      v19 = CompatibleBitmap;
      if ( CompatibleBitmap )
      {
        wil::SelectObject(h, CompatibleDC, CompatibleBitmap);
        if ( BitBlt(CompatibleDC, 0, 0, v9, cy, hdcSrc, *a1, a1[1], 0xCC0020u) )
        {
          if ( a3 )
          {
            v14 = ScreenClippingBrokerImpl::CopyToClipboard(v12);
            if ( v14 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xDF,
                (__int64)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
                (const char *)(unsigned int)v14);
          }
          v18 = 0LL;
          v15 = ScreenClippingBrokerImpl::CreateWICBitMapFromHBITMAP((__int64)v12, &v18);
          LastError = v15;
          if ( v15 >= 0 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
            *a2 = v18;
            wil::ActivityBase<ShellScreenClippingLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v23);
            LastError = 0;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xE3,
              (__int64)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
              (const char *)(unsigned int)v15);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        }
        else
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0xDB,
                        (__int64)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
                        v13);
        }
        if ( h[0] )
          SelectObject((HDC)h[1], h[0]);
      }
      else
      {
        LastError = -2147467259;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD7,
          (__int64)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
          (const char *)0x80004005LL);
      }
      if ( v12 )
        DeleteObject(v12);
    }
    else
    {
      LastError = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD1,
        (__int64)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
        (const char *)0x8000FFFFLL);
    }
    if ( CompatibleDC )
      DeleteDC(CompatibleDC);
  }
  else
  {
    LastError = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE,
      (__int64)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
      (const char *)0x8000FFFFLL);
  }
  if ( hdcSrc )
    ReleaseDC(0LL, hdcSrc);
  ScreenClippingCommonTelemetry::ScreenCapture::~ScreenCapture((ScreenClippingCommonTelemetry::ScreenCapture *)v23);
  return LastError;
}
