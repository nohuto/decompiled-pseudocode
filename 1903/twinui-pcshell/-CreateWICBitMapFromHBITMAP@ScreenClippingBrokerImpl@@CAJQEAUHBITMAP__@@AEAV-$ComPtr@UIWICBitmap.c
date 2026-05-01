/*
 * XREFs of ?CreateWICBitMapFromHBITMAP@ScreenClippingBrokerImpl@@CAJQEAUHBITMAP__@@AEAV?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@@Z @ 0x1803E17A8
 * Callers:
 *     ?GrabScreenShot@ScreenClippingBrokerImpl@@CAJAEBUtagRECT@@AEAV?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@_N@Z @ 0x1803E1E2C (-GrabScreenShot@ScreenClippingBrokerImpl@@CAJAEBUtagRECT@@AEAV-$ComPtr@UIWICBitmapSource@@@WRL@M.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ScreenClippingBrokerImpl::CreateWICBitMapFromHBITMAP(__int64 a1, __int64 *a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  LPVOID v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+18h] BYREF
  LPVOID ppv; // [rsp+68h] [rbp+20h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v4 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &ppv);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v11 = 0LL;
    v6 = ppv;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    v7 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v6 + 168LL))(
           v6,
           a1,
           0LL,
           1LL,
           &v11);
    v5 = v7;
    if ( v7 >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
      v7 = (**v11)(v11, &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94, a2);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v8 = 297LL;
    }
    else
    {
      v8 = 295LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
      (const char *)(unsigned int)v7);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x123,
    (__int64)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
    (const char *)(unsigned int)v4);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v5;
}
