/*
 * XREFs of ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x1800CDF58
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x18003A174 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x18003A050 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18005A24C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateFromGDISharedSurfaceHandle@CDxHandleBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x1800CE0A4 (-CreateFromGDISharedSurfaceHandle@CDxHandleBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVCBitmapReali.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
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
  signed int v12; // eax
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(struct CBitmapRealization *, GUID *, __int64 *); // rdi
  signed int v15; // eax
  __int64 v16; // rcx
  signed int v17; // eax
  __int64 v18; // rcx
  char *v19; // rax
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  struct CBitmapRealization *v22; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+48h] BYREF

  v5 = 0;
  v6 = 0LL;
  v23 = 0;
  v22 = 0LL;
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  v11 = a5;
  if ( !a4 || !a5 )
    goto LABEL_7;
  v12 = CDxHandleBitmapRealization::CreateFromGDISharedSurfaceHandle(a2, a3, &v22);
  v23 = v12;
  v5 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x25Eu, 0LL);
    v6 = v22;
  }
  else
  {
    v21 = 0LL;
    v6 = v22;
    v14 = **(__int64 (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))v22;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v21);
    v15 = v14(v6, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, &v21);
    v23 = v15;
    v5 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x26Au, 0LL);
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v21 + 24LL))(
              v21,
              ((unsigned __int64)this + 64) & -(__int64)(this != 0LL));
      v23 = v17;
      v5 = v17;
      if ( v17 >= 0 )
      {
        v19 = (char *)v6 + 144;
        v6 = 0LL;
        *((_QWORD *)this + 57) = v19;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v21);
LABEL_7:
        *((_QWORD *)this + 53) = a2;
        *((struct _LUID *)this + 54) = a3;
        *((_DWORD *)this + 110) = a4;
        *((_DWORD *)this + 111) = v11;
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x26Bu, 0LL);
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v21);
  }
LABEL_8:
  if ( v6 )
    (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v6 + 16LL))(v6);
  TranslateDXGIorD3DErrorInContext(v5, 9, &v23);
  return v23;
}
