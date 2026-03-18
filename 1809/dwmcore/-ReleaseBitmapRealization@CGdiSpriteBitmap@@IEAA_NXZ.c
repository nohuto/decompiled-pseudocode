/*
 * XREFs of ?ReleaseBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ @ 0x18009317C
 * Callers:
 *     ?SetColorKey@CGdiSpriteBitmap@@UEAAX_NAEBVCColorKey@@@Z @ 0x1800759D0 (-SetColorKey@CGdiSpriteBitmap@@UEAAX_NAEBVCColorKey@@@Z.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ @ 0x180093130 (-ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ?NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801988E0 (-NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseSectionBitmapSubRects@CGdiSpriteBitmap@@IEAAXXZ @ 0x180093234 (-ReleaseSectionBitmapSubRects@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CGdiSpriteBitmap::ReleaseBitmapRealization(CGdiSpriteBitmap *this)
{
  char v1; // di
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 57) )
  {
    v5 = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v5);
    (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 57))(
      *((_QWORD *)this + 57),
      &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
      &v5);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 32LL))(v5, (char *)this + 64);
    v4 = *((_QWORD *)this + 57);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *((_QWORD *)this + 57) = 0LL;
    }
    v1 = 1;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v5);
  }
  *((_QWORD *)this + 58) = 0LL;
  CGdiSpriteBitmap::ReleaseSectionBitmapSubRects(this);
  return v1;
}
