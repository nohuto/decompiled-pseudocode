/*
 * XREFs of ?GetCustomBlurEffectNoRef@CDrawingContext@@QEAAJPEAPEAVCCustomBlur@@@Z @ 0x18003BCB8
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18003B01C (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x1800D7394 (-Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::GetCustomBlurEffectNoRef(CDrawingContext *this, struct CCustomBlur **a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  struct CCustomBlur **v5; // rdi
  int v7; // eax
  unsigned int v8; // ecx

  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 160LL))(*((_QWORD *)this + 48));
  v4 = 0;
  v5 = (struct CCustomBlur **)(v3 + 344);
  if ( *(_QWORD *)(v3 + 344)
    || (v7 = CCustomBlur::Create(*(struct ID2D1DeviceContext **)(v3 + 232), (struct CCustomBlur **)(v3 + 344)),
        v4 = v7,
        v7 >= 0) )
  {
    *a2 = *v5;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x762u, 0LL);
  }
  return v4;
}
