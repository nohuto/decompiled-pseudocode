/*
 * XREFs of ?ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x18004911C
 * Callers:
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x1800490D0 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?SetColorKey@CGdiSpriteBitmap@@UEAAX_NAEBVCColorKey@@@Z @ 0x1800D4210 (-SetColorKey@CGdiSpriteBitmap@@UEAAX_NAEBVCColorKey@@@Z.c)
 *     ?NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802131A0 (-NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CGdiSpriteBitmap::ReleaseBitmapRealization(CGdiSpriteBitmap *this)
{
  void (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // r14
  bool v2; // si
  CGdiSpriteBitmap **v4; // rbp
  CGdiSpriteBitmap **v5; // rbx
  bool result; // al
  void (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v8; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 57);
  v2 = 0;
  if ( v1 )
  {
    v9 = 0LL;
    v7 = **v1;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v9);
    v7(v1, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, &v9);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 32LL))(v9, (char *)this + 64);
    v8 = *((_QWORD *)this + 57);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      *((_QWORD *)this + 57) = 0LL;
    }
    v2 = 1;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v9);
  }
  v4 = (CGdiSpriteBitmap **)*((_QWORD *)this + 59);
  v5 = (CGdiSpriteBitmap **)*((_QWORD *)this + 58);
  if ( v5 != v4 )
  {
    do
    {
      if ( *v5 )
        CGdiSpriteBitmap::Release(*v5);
      ++v5;
    }
    while ( v5 != v4 );
    v5 = (CGdiSpriteBitmap **)*((_QWORD *)this + 58);
  }
  result = v2;
  *((_QWORD *)this + 59) = v5;
  return result;
}
