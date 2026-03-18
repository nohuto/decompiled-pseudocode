/*
 * XREFs of ?ReleaseSectionBitmapSubRects@CGdiSpriteBitmap@@IEAAXXZ @ 0x180093234
 * Callers:
 *     ?ReleaseBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ @ 0x18009317C (-ReleaseBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ.c)
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@IEAAJII@Z @ 0x180198574 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@IEAAJII@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGdiSpriteBitmap::ReleaseSectionBitmapSubRects(CGdiSpriteBitmap *this)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  void (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rbx
  void (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rbx
  CGdiSpriteBitmap **v6; // rsi
  CGdiSpriteBitmap **v7; // rbx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 59);
  v3 = *((_QWORD *)this + 60);
  if ( v1 != v3 )
  {
    if ( this )
    {
      do
      {
        v4 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)v1 + 40LL);
        v8 = 0LL;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v8);
        (**v4)(v4, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, &v8);
        (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 32LL))(v8, (char *)this + 64);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v8);
        v1 += 8LL;
      }
      while ( v1 != v3 );
    }
    else
    {
      while ( v1 != v3 )
      {
        v5 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)v1 + 40LL);
        v8 = 0LL;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v8);
        (**v5)(v5, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, &v8);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, 0LL);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v8);
        v1 += 8LL;
      }
    }
    v6 = (CGdiSpriteBitmap **)*((_QWORD *)this + 60);
    v7 = (CGdiSpriteBitmap **)*((_QWORD *)this + 59);
    if ( v7 != v6 )
    {
      do
      {
        if ( *v7 )
          CGdiSpriteBitmap::Release(*v7);
        ++v7;
      }
      while ( v7 != v6 );
      v7 = (CGdiSpriteBitmap **)*((_QWORD *)this + 59);
    }
    *((_QWORD *)this + 60) = v7;
  }
}
