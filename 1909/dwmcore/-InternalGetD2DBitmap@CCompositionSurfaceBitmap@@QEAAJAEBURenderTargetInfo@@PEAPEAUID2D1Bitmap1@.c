/*
 * XREFs of ?InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJAEBURenderTargetInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1801C6D48
 * Callers:
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1801C6BB8 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x1800AB8E0 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::InternalGetD2DBitmap(
        CCompositionSurfaceBitmap *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3)
{
  __int64 v6; // rcx
  __int64 v7; // r9
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  *a3 = 0LL;
  if ( CCompositionSurfaceBitmap::EnsureBitmapRealization(this, 0) )
  {
    LOBYTE(v7) = *((_BYTE *)this + 158);
    v8 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, _QWORD, __int64, struct ID2D1Bitmap1 **))(*(_QWORD *)(*((_QWORD *)this + 12) + 144LL) + 136LL))(
           *((_QWORD *)this + 12) + 144LL,
           a2,
           0LL,
           v7,
           a3);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x4Fu, 0LL);
  }
  else
  {
    v10 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, 0x88982F04, 0x53u, 0LL);
  }
  return v10;
}
