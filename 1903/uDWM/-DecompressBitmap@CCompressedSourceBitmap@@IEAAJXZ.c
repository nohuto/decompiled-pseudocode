/*
 * XREFs of ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x1800474F4
 * Callers:
 *     ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x1800474C4 (-EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x180047668 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x18004856C (-EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompressedSourceBitmap::DecompressBitmap(CCompressedSourceBitmap *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  GUID *v4; // r8
  int v5; // eax
  struct IBitmapSource *v6; // rcx
  int v8; // r9d
  unsigned int v9; // [rsp+20h] [rbp-20h]
  void *v10; // [rsp+28h] [rbp-18h]
  struct IWICBitmapSource *v11; // [rsp+68h] [rbp+28h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  struct IBitmapSource *v13; // [rsp+78h] [rbp+38h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v2 = CCompressedSourceBitmap::EnsureWICBitmapFrame(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v9 = 321;
LABEL_20:
    v8 = v2;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v9, v10);
    goto LABEL_13;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 36) + 80LL))(*((_QWORD *)this + 36), &v12);
  v3 = v2;
  if ( v2 < 0 )
  {
    v9 = 324;
    goto LABEL_20;
  }
  v4 = &GUID_WICPixelFormat8bppGray;
  if ( *((_DWORD *)this + 50) != 61 )
    v4 = &GUID_WICPixelFormat32bppPBGRA;
  v10 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD, _QWORD))(*(_QWORD *)v12 + 64LL))(
         v12,
         *((_QWORD *)this + 32),
         v4,
         0LL,
         0LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    v9 = 335;
    goto LABEL_20;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct IWICBitmapSource **))(**((_QWORD **)this + 36) + 144LL))(
         *((_QWORD *)this + 36),
         v12,
         2LL,
         &v11);
  v3 = v2;
  if ( v2 < 0 )
  {
    v9 = 339;
    goto LABEL_20;
  }
  if ( !v11 )
  {
    v3 = -2147024890;
    v9 = 340;
    v8 = -2147024890;
    goto LABEL_22;
  }
  v2 = ((__int64 (*)(void))v11->lpVtbl[1].Release)();
  v3 = v2;
  if ( v2 < 0 )
  {
    v9 = 342;
    goto LABEL_20;
  }
  v5 = HrCreateBitmapFromWICBitmapSource(v11, &v13);
  v3 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x15Bu, 0LL);
    v6 = v13;
  }
  else
  {
    v6 = 0LL;
    *((_QWORD *)this + 33) = v13;
  }
  if ( v6 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v6 + 16LL))(v6);
LABEL_13:
  if ( v11 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v11->lpVtbl->Release)(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return v3;
}
