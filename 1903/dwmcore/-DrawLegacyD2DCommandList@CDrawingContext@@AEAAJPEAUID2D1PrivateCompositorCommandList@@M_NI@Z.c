/*
 * XREFs of ?DrawLegacyD2DCommandList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorCommandList@@M_NI@Z @ 0x18016D9E0
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18016DEE8 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x1800B5780 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawLegacyD2DCommandList(
        CDrawingContext *this,
        struct ID2D1PrivateCompositorCommandList *a2,
        float a3)
{
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, char *, struct ID2D1PrivateCompositorCommandList *); // rdi
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx

  v5 = *((_QWORD *)this + 48);
  v6 = *(__int64 (__fastcall **)(__int64, char *, struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v5 + 136LL);
  CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 8));
  v7 = v6(v5, (char *)this + 8, a2);
  v9 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x6C6u, 0LL);
  return v9;
}
