/*
 * XREFs of ?DrawLegacyD2DCommandList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorCommandList@@M_NI@Z @ 0x1801630D4
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x180163D4C (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 * Callees:
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x18008DBB0 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawLegacyD2DCommandList(
        CDrawingContext *this,
        struct ID2D1PrivateCompositorCommandList *a2,
        float a3)
{
  __int64 *v5; // rsi
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx

  v5 = (__int64 *)*((_QWORD *)this + 48);
  v6 = *v5;
  CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 8));
  v7 = (*(__int64 (__fastcall **)(__int64 *, char *, struct ID2D1PrivateCompositorCommandList *))(v6 + 136))(
         v5,
         (char *)this + 8,
         a2);
  v9 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x6C9u);
  return v9;
}
