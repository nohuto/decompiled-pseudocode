/*
 * XREFs of ??_GCFrameApplicationPresentation@@UEAAPEAXI@Z @ 0x180127440
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA@XZ @ 0x180126FCC (--1SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

CFrameApplicationPresentation *__fastcall CFrameApplicationPresentation::`scalar deleting destructor'(
        CFrameApplicationPresentation *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 74);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 560);
  CFramePresentationTelemetry::SplashScreenSuppressed::~SplashScreenSuppressed((CFrameApplicationPresentation *)((char *)this + 224));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 10);
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 4);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x258);
  return this;
}
