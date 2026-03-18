/*
 * XREFs of ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x180165304
 * Callers:
 *     ?FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801653F0 (-FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180223A28 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180038F00 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x18016240C (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBrush(
        CDrawingContext *this,
        const struct CShape *a2,
        struct ID2D1Brush *a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r10
  __int64 v13; // r11
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v17);
  v6 = (*(__int64 (__fastcall **)(const struct CShape *, _QWORD, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, 0LL, &v17);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xCD4u);
  }
  else
  {
    v9 = CDrawingContext::ApplyRenderStateInternal(this, 0);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xCD6u);
    }
    else
    {
      v11 = D2DPrimitiveBlendFromMilCompositingMode(*((_DWORD *)this + 69));
      v14 = (*(__int64 (__fastcall **)(__int64, char *, __int64, struct ID2D1Brush *, bool, int))(v12 + 104))(
              v13,
              (char *)this + 8,
              v17,
              a3,
              *((_DWORD *)this + 63) != 0,
              v11);
      v8 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xCDFu);
    }
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v17);
  return v8;
}
