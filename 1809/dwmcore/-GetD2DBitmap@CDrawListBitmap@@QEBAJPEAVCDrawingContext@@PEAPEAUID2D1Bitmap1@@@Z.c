/*
 * XREFs of ?GetD2DBitmap@CDrawListBitmap@@QEBAJPEAVCDrawingContext@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180067E74
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800AA850 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListBitmap::GetD2DBitmap(
        CDrawListBitmap *this,
        struct CDrawingContext *a2,
        struct ID2D1Bitmap1 **a3)
{
  __int64 v3; // rbx
  int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // r9
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)this;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v14);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 80LL))(v3, &v14);
  v10 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x68u);
  }
  else
  {
    LOBYTE(v9) = *((_BYTE *)this + 16);
    v11 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, __int64, struct ID2D1Bitmap1 **))(*(_QWORD *)v14 + 136LL))(
            v14,
            (char *)a2 + 392,
            0LL,
            v9,
            a3);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x6Du);
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v14);
  return v10;
}
