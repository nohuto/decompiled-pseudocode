/*
 * XREFs of ?GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x180199F6C
 * Callers:
 *     ?GetD2DGradientBrush@CLinearGradientBrush@@QEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x1801A4C58 (-GetD2DGradientBrush@CLinearGradientBrush@@QEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D.c)
 * Callees:
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x180004A7C (-Generate@CGradientBrush@@AEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 *     ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z @ 0x1800058C0 (-FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientBrush::GetCurrentD2DLinearGradientBrush(
        CGradientBrush *this,
        struct CDrawingContext *a2,
        struct ID2D1LinearGradientBrush **a3)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  struct CD3DDeviceLevel1 *v7; // rsi
  int v8; // eax
  __int64 v9; // rcx
  struct ID2D1LinearGradientBrush *v10; // rcx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  struct ID2D1LinearGradientBrush *v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a2 + 48);
  v5 = 0;
  v13 = 0LL;
  v12[0] = 0LL;
  v12[1] = &v13;
  v7 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 160LL))(v4);
  if ( CGradientSource::FindExistingGradient(
         (CGradientBrush *)((char *)this + 72),
         v7,
         *((_BYTE *)this + 168) == 0,
         (const struct CGradientSource::RetrievalParams *)v12)
    || (v8 = CGradientBrush::Generate(this, v7, (const struct CGradientSource::RetrievalParams *)v12), v5 = v8, v8 >= 0) )
  {
    v10 = 0LL;
    *a3 = v13;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x18Du);
    v10 = v13;
  }
  if ( v10 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(struct ID2D1LinearGradientBrush *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v5;
}
