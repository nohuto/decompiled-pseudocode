/*
 * XREFs of ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x18016F770
 * Callers:
 *     ?FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x18016F87C (-FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180253C38 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800583E0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x18016CC7C (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBrush(
        CDrawingContext *this,
        const struct CShape *a2,
        struct ID2D1Brush *a3)
{
  __int64 v3; // rax
  __int64 (__fastcall *v7)(const struct CShape *, _QWORD, __int64 *); // rbx
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  signed int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 (__fastcall *v14)(__int64, char *, __int64, struct ID2D1Brush *, bool, int); // r10
  __int64 v15; // r11
  signed int v16; // eax
  __int64 v17; // rcx
  __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a2;
  v19 = 0LL;
  v7 = *(__int64 (__fastcall **)(const struct CShape *, _QWORD, __int64 *))(v3 + 24);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v19);
  v8 = v7(a2, 0LL, &v19);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xD12u, 0LL);
  }
  else
  {
    v11 = CDrawingContext::ApplyRenderStateInternal(this, 0);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xD14u, 0LL);
    }
    else
    {
      v13 = D2DPrimitiveBlendFromMilCompositingMode(*((_DWORD *)this + 69));
      v16 = v14(v15, (char *)this + 8, v19, a3, *((_DWORD *)this + 63) != 0, v13);
      v10 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xD1Du, 0LL);
    }
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v19);
  return v10;
}
