/*
 * XREFs of ?GetScreenShotForGUID@ScreenClippingBrokerImpl@@EEAAJU_GUID@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x180401130
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180148704 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetStreamFromWICBitmap@ScreenClippingBrokerImpl@@CAJAEBV?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@PEAPEAUIStream@@@Z @ 0x180401238 (-GetStreamFromWICBitmap@ScreenClippingBrokerImpl@@CAJAEBV-$ComPtr@UIWICBitmapSource@@@WRL@Micros.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ScreenClippingBrokerImpl::GetScreenShotForGUID(
        ScreenClippingBrokerImpl *this,
        struct _GUID *a2,
        struct IStream **a3,
        struct IWICBitmapSource **a4)
{
  RTL_SRWLOCK *v7; // rdi
  unsigned int v8; // ebx
  int StreamFromWICBitmap; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IWICBitmapSource *v12; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  *a4 = 0LL;
  v12 = 0LL;
  v7 = (RTL_SRWLOCK *)((char *)this + 40);
  AcquireSRWLockShared((PSRWLOCK)this + 5);
  if ( *((_QWORD *)this + 4) )
  {
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v12, (__int64 *)this + 4);
    if ( v7 )
      ReleaseSRWLockShared(v7);
    StreamFromWICBitmap = ScreenClippingBrokerImpl::GetStreamFromWICBitmap((char *)this + 32, a3);
    v8 = StreamFromWICBitmap;
    if ( StreamFromWICBitmap >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
      *a4 = v12;
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6A,
        (__int64)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
        (const char *)(unsigned int)StreamFromWICBitmap);
    }
  }
  else
  {
    v8 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67,
      (__int64)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
      (const char *)0x80004005LL);
    if ( v7 )
      ReleaseSRWLockShared(v7);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v8;
}
