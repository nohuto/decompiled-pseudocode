/*
 * XREFs of ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18004E2CC
 * Callers:
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18004E094 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x18004EC34 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18004EE80 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800EAF20 (-NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180180ED0 (-NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x1802298C8 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetBitmap::ReleaseRenderTargetBitmap(CRenderTargetBitmap *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 19);
  if ( v2 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 21);
  if ( v3 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( *((_QWORD *)this + 20) )
  {
    v4 = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v4);
    (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 20))(
      *((_QWORD *)this + 20),
      &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
      &v4);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 32LL))(v4, (char *)this + 24);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 20);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v4);
  }
  if ( !*((_BYTE *)this + 176) )
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 2) + 24LL))((char *)this + 16, 0LL);
}
