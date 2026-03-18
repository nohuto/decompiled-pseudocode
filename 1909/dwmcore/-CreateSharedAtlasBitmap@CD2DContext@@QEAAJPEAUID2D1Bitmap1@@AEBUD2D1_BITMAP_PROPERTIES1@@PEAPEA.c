/*
 * XREFs of ?CreateSharedAtlasBitmap@CD2DContext@@QEAAJPEAUID2D1Bitmap1@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAU2@@Z @ 0x18015ED8C
 * Callers:
 *     ?CreateIgnoreAlphaBitmap@CD2DBitmap@@AEAAJXZ @ 0x1801691AC (-CreateIgnoreAlphaBitmap@CD2DBitmap@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreateSharedAtlasBitmap(
        CD2DContext *this,
        struct ID2D1Bitmap1 *a2,
        const struct D2D1_BITMAP_PROPERTIES1 *a3,
        struct ID2D1Bitmap1 **a4)
{
  int v4; // ebx
  signed int v6; // eax
  __int64 v7; // rcx

  v4 = *((_DWORD *)this + 220);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v4, 0x168u, 0LL);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Bitmap1 *, const struct D2D1_BITMAP_PROPERTIES1 *, struct ID2D1Bitmap1 **))(**((_QWORD **)this + 30) + 96LL))(
           *((_QWORD *)this + 30),
           a2,
           a3,
           a4);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x16Cu, 0LL);
  }
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v4, 0);
}
