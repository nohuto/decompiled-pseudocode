/*
 * XREFs of ?GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGradientBrush@@@Z @ 0x1801F529C
 * Callers:
 *     ?GetD2DBrush@CRadialGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z @ 0x1801F5BB0 (-GetD2DBrush@CRadialGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@.c)
 * Callees:
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x180019EA8 (-Generate@CGradientBrush@@AEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 *     ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z @ 0x18001ACD8 (-FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientBrush::GetCurrentD2DRadialGradientBrush(
        CGradientBrush *this,
        struct CDrawingContext *a2,
        struct ID2D1RadialGradientBrush **a3)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  struct CD3DDeviceLevel1 *v7; // rsi
  signed int v8; // eax
  __int64 v9; // rcx
  struct ID2D1RadialGradientBrush *v10; // rcx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  struct ID2D1RadialGradientBrush *v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a2 + 48);
  v5 = 0;
  v13 = 0LL;
  v12[0] = 0LL;
  v12[1] = &v13;
  v7 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 160LL))(v4);
  if ( CGradientSource::FindExistingGradient(
         (CGradientBrush *)((char *)this + 80),
         v7,
         *((_BYTE *)this + 176) == 0,
         (const struct CGradientSource::RetrievalParams *)v12)
    || (v8 = CGradientBrush::Generate(this, v7, (const struct CGradientSource::RetrievalParams *)v12), v5 = v8, v8 >= 0) )
  {
    v10 = 0LL;
    *a3 = v13;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1F8u, 0LL);
    v10 = v13;
  }
  if ( v10 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(struct ID2D1RadialGradientBrush *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v5;
}
