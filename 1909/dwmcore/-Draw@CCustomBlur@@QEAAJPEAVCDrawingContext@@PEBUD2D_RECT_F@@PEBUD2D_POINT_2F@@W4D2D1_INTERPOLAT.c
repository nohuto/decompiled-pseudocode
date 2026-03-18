/*
 * XREFs of ?Draw@CCustomBlur@@QEAAJPEAVCDrawingContext@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180051070
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18005042C (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCustomBlur::Draw(
        CCustomBlur *this,
        struct CDrawingContext *a2,
        const struct D2D_RECT_F *a3,
        const struct D2D_POINT_2F *a4)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx

  v4 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, const struct D2D_RECT_F *, _QWORD, int, int))(**((_QWORD **)a2 + 48) + 96LL))(
         *((_QWORD *)a2 + 48),
         (char *)a2 + 8,
         *((_QWORD *)this + 7),
         a3,
         0LL,
         1,
         10);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xD8u, 0LL);
  return v6;
}
