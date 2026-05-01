/*
 * XREFs of ?TakeScreenShot@ScreenClippingBrokerImpl@@EEAAJPEAU_GUID@@E@Z @ 0x18037CF10
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSystemDimensions@ScreenClippingBrokerImpl@@CA?AUtagRECT@@XZ @ 0x18037BE9C (-GetSystemDimensions@ScreenClippingBrokerImpl@@CA-AUtagRECT@@XZ.c)
 *     ?GrabScreenShot@ScreenClippingBrokerImpl@@CAJAEBUtagRECT@@AEAV?$ComPtr@UIWICBitmapSource@@@WRL@Microsoft@@_N@Z @ 0x18037BFC4 (-GrabScreenShot@ScreenClippingBrokerImpl@@CAJAEBUtagRECT@@AEAV-$ComPtr@UIWICBitmapSource@@@WRL@M.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ScreenClippingBrokerImpl::TakeScreenShot(ScreenClippingBrokerImpl *this, struct _GUID *a2, char a3)
{
  HRESULT Guid; // eax
  int v6; // ebx
  int v7; // eax
  __int128 v9; // [rsp+28h] [rbp-30h] BYREF
  struct tagRECT v10; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  Guid = CoCreateGuid(a2);
  v6 = Guid;
  if ( Guid >= 0 )
  {
    v12 = 0LL;
    v9 = (__int128)*ScreenClippingBrokerImpl::GetSystemDimensions(&v10);
    v7 = ScreenClippingBrokerImpl::GrabScreenShot((int *)&v9, &v12, a3 != 0);
    v6 = v7;
    if ( v7 >= 0 )
      v6 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB2,
        (__int64)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
        (const char *)(unsigned int)v7);
    if ( v6 >= 0 )
    {
      AcquireSRWLockExclusive((PSRWLOCK)this + 4);
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 3, &v12);
      v6 = 0;
      if ( this != (ScreenClippingBrokerImpl *)-32LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA9,
        (__int64)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
        (const char *)(unsigned int)v6);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA7,
      (__int64)"pcshell\\twinui\\screenclipping\\broker\\lib\\screenclippingbroker.cpp",
      (const char *)(unsigned int)Guid);
  }
  return (unsigned int)v6;
}
