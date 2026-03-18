/*
 * XREFs of ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAXU_LUID@@II@Z @ 0x18009DDC4
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180092F84 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ @ 0x180093130 (-ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ?CreateFromGDISharedSurfaceHandle@CDxHandleBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x18009DCE8 (-CreateFromGDISharedSurfaceHandle@CDxHandleBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVCBitmapReali.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateDeviceBitmap(
        CGdiSpriteBitmap *this,
        void *a2,
        struct _LUID a3,
        int a4,
        unsigned int a5)
{
  int v5; // edi
  struct CBitmapRealization *v6; // rsi
  unsigned int v11; // r15d
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  char *v18; // rax
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  struct CBitmapRealization *v21; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v22; // [rsp+88h] [rbp+48h] BYREF

  v5 = 0;
  v6 = 0LL;
  v22 = 0;
  v21 = 0LL;
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  v11 = a5;
  if ( !a4 || !a5 )
    goto LABEL_7;
  v12 = CDxHandleBitmapRealization::CreateFromGDISharedSurfaceHandle(a2, a3, &v21);
  v22 = v12;
  v5 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x26Au);
    v6 = v21;
  }
  else
  {
    v20 = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v20);
    v6 = v21;
    v14 = (**(__int64 (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))v21)(
            v21,
            &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
            &v20);
    v22 = v14;
    v5 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x276u);
    }
    else
    {
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 24LL))(
              v20,
              ((unsigned __int64)this + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
      v22 = v16;
      v5 = v16;
      if ( v16 >= 0 )
      {
        v18 = (char *)v6 + 144;
        v6 = 0LL;
        *((_QWORD *)this + 57) = v18;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v20);
LABEL_7:
        *((_QWORD *)this + 53) = a2;
        *((struct _LUID *)this + 54) = a3;
        *((_DWORD *)this + 110) = a4;
        *((_DWORD *)this + 111) = v11;
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x277u);
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v20);
  }
LABEL_8:
  if ( v6 )
    (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v6 + 16LL))(v6);
  TranslateDXGIorD3DErrorInContext(v5, 9, &v22);
  return v22;
}
