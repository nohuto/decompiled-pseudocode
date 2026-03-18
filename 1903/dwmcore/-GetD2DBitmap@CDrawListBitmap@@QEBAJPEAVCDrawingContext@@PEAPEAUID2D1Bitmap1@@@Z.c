/*
 * XREFs of ?GetD2DBitmap@CDrawListBitmap@@QEBAJPEAVCDrawingContext@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18003ACD4
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18003B01C (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListBitmap::GetD2DBitmap(
        CDrawListBitmap *this,
        struct CDrawingContext *a2,
        struct ID2D1Bitmap1 **a3)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // r9
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)this;
  v15 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 80LL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v15);
  v8 = v7(v3, &v15);
  v11 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x68u, 0LL);
  }
  else
  {
    LOBYTE(v10) = *((_BYTE *)this + 16);
    v12 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, __int64, struct ID2D1Bitmap1 **))(*(_QWORD *)v15 + 136LL))(
            v15,
            (char *)a2 + 392,
            0LL,
            v10,
            a3);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x6Du, 0LL);
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v15);
  return v11;
}
