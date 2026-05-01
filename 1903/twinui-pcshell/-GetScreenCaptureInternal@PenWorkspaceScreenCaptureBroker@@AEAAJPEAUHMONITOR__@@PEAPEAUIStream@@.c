/*
 * XREFs of ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1801DD82C
 * Callers:
 *     ?GetScreenCapture@PenWorkspaceScreenCaptureBroker@@UEAAJPEAPEAUIStream@@PEAUHMONITOR__@@@Z @ 0x1801DD7E0 (-GetScreenCapture@PenWorkspaceScreenCaptureBroker@@UEAAJPEAPEAUIStream@@PEAUHMONITOR__@@@Z.c)
 *     ?GetScreenCaptureWithWICBitmap@PenWorkspaceScreenCaptureBroker@@UEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1801DDA90 (-GetScreenCaptureWithWICBitmap@PenWorkspaceScreenCaptureBroker@@UEAAJPEAUHMONITOR__@@PEAPEAUIStr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$reset@VDDAScreenCapture@@@?$shared_ptr@VDDAScreenCapture@@@std@@QEAAXPEAVDDAScreenCapture@@@Z @ 0x1801DD220 (--$reset@VDDAScreenCapture@@@-$shared_ptr@VDDAScreenCapture@@@std@@QEAAXPEAVDDAScreenCapture@@@Z.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIWICBitmapSource@@XZ @ 0x1801DD2E4 (--B-$ComPtrRef@V-$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUI.c)
 *     ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x1801DDAB4 (-GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GU.c)
 *     ?CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z @ 0x1801E41A0 (-CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z.c)
 *     ?GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBitmapSource@@@Z @ 0x1801E4270 (-GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBit.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PenWorkspaceScreenCaptureBroker::GetScreenCaptureInternal(
        PenWorkspaceScreenCaptureBroker *this,
        HMONITOR a2,
        struct IStream **a3,
        struct IWICBitmapSource **a4)
{
  DDAScreenCapture **v6; // rdi
  int v7; // eax
  int ScreenCaptureAsWicBitmapSource; // ebx
  HRESULT Instance; // eax
  DDAScreenCapture *v10; // rdi
  struct IWICImagingFactory *v11; // rbx
  __int64 *v12; // r8
  int StreamOfWICBitmapSourceWithOptions; // eax
  struct IWICImagingFactory *v14; // rbx
  HRESULT (__stdcall *CreateFormatConverter)(IWICImagingFactory *, IWICFormatConverter **); // rdi
  int v16; // eax
  __int64 v17; // rdx
  struct DDAScreenCapture *v18; // rax
  __int64 v20[2]; // [rsp+40h] [rbp-20h] BYREF
  GUID v21; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct DDAScreenCapture *v23; // [rsp+80h] [rbp+20h] BYREF
  struct IWICImagingFactory *ppv; // [rsp+98h] [rbp+38h] BYREF

  v20[1] = -2LL;
  if ( a4 )
    *a4 = 0LL;
  v6 = (DDAScreenCapture **)((char *)this + 48);
  if ( *((_QWORD *)this + 6) )
  {
LABEL_7:
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    Instance = CoCreateInstance(
                 &CLSID_WICImagingFactory2,
                 0LL,
                 1u,
                 &GUID_7b816b45_1996_4476_b132_de9e247c8af0,
                 (LPVOID *)&ppv);
    ScreenCaptureAsWicBitmapSource = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
        (const char *)(unsigned int)Instance);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
      return (unsigned int)ScreenCaptureAsWicBitmapSource;
    }
    v20[0] = 0LL;
    v10 = *v6;
    v23 = (struct DDAScreenCapture *)v20;
    v11 = ppv;
    v12 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IWICBitmapSource>>::operator IWICBitmapSource * *((__int64 **)&v23);
    ScreenCaptureAsWicBitmapSource = DDAScreenCapture::GetScreenCaptureAsWicBitmapSource(
                                       v10,
                                       v11,
                                       (struct IWICBitmapSource **)v12);
    if ( ScreenCaptureAsWicBitmapSource < 0 )
    {
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
      goto LABEL_21;
    }
    v21 = GUID_WICPixelFormat32bppBGRA;
    StreamOfWICBitmapSourceWithOptions = GetStreamOfWICBitmapSourceWithOptions(
                                           ppv,
                                           v20[0],
                                           &GUID_ContainerFormatBmp,
                                           &v21,
                                           1,
                                           a3);
    ScreenCaptureAsWicBitmapSource = StreamOfWICBitmapSourceWithOptions;
    if ( StreamOfWICBitmapSourceWithOptions < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x63,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
        (const char *)(unsigned int)StreamOfWICBitmapSourceWithOptions);
      goto LABEL_20;
    }
    if ( a4 )
    {
      v23 = 0LL;
      v14 = ppv;
      CreateFormatConverter = ppv->lpVtbl->CreateFormatConverter;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
      v16 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct DDAScreenCapture **))CreateFormatConverter)(
              v14,
              &v23);
      ScreenCaptureAsWicBitmapSource = v16;
      if ( v16 < 0 )
      {
        v17 = 105LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
          (const char *)(unsigned int)v16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
        goto LABEL_20;
      }
      v16 = (*(__int64 (__fastcall **)(struct DDAScreenCapture *, __int64, GUID *, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v23 + 64LL))(
              v23,
              v20[0],
              &GUID_WICPixelFormat32bppPBGRA,
              0LL,
              0LL,
              0LL,
              1);
      ScreenCaptureAsWicBitmapSource = v16;
      if ( v16 < 0 )
      {
        v17 = 112LL;
        goto LABEL_17;
      }
      v18 = v23;
      v23 = 0LL;
      *a4 = (struct IWICBitmapSource *)v18;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    }
    ScreenCaptureAsWicBitmapSource = 0;
    goto LABEL_20;
  }
  v7 = DDAScreenCapture::CreateInstance(&v23, a2);
  ScreenCaptureAsWicBitmapSource = v7;
  if ( v7 >= 0 )
  {
    std::shared_ptr<DDAScreenCapture>::reset<DDAScreenCapture>(v6, v23);
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x50,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)ScreenCaptureAsWicBitmapSource;
}
