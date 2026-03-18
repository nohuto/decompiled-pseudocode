/*
 * XREFs of ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18001C500
 * Callers:
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x1800B32C4 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@P.c)
 * Callees:
 *     ?Create@CSecondarySysmemBitmap@@SAJIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x18001C59C (-Create@CSecondarySysmemBitmap@@SAJIIAEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::EnsureSysmemBitmap(CD2DBitmapCache *this)
{
  unsigned int v1; // ebx
  const struct PixelFormatInfo *v3; // rax
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v7; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+34h] [rbp-24h] BYREF
  _BYTE v9[16]; // [rsp+38h] [rbp-20h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 6) )
  {
    (*(void (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(**((_QWORD **)this + 4) + 32LL))(
      *((_QWORD *)this + 4),
      &v8,
      &v7);
    v3 = (const struct PixelFormatInfo *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 4) + 24LL))(
                                           *((_QWORD *)this + 4),
                                           v9);
    v4 = CSecondarySysmemBitmap::Create(v8, v7, v3, (struct CSecondarySysmemBitmap **)this + 6);
    v1 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x19Fu, 0LL);
  }
  return v1;
}
