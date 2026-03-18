/*
 * XREFs of ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003A76C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DCD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z @ 0x1800CDC24 (-Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z.c)
 * Callees:
 *     ?EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003A818 (-EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x18003B374 (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180050F9C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x18005CF68 (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDrawingContext::PushClippingScope(CDrawingContext *a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  char v9; // si
  int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v19; // r8
  int v20; // [rsp+30h] [rbp-28h] BYREF
  __int64 v21; // [rsp+38h] [rbp-20h]

  v9 = 0;
  v10 = CDrawingContext::FlushAllDeferredClipping(a1);
  v13 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v10, 0x108Bu, 0LL);
LABEL_10:
    if ( v9 )
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)a1 + 448, 0LL, v19);
    return v13;
  }
  if ( a2 )
  {
    v20 = 3;
    v21 = a2;
    v14 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)a1 + 448, &v20);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1090u, 0LL);
      return v13;
    }
    v9 = 1;
  }
  LOBYTE(v11) = a3;
  v16 = CScopedClipStack::EnterClippingScope((char *)a1 + 1008, v11, a4, a5);
  v13 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1094u, 0LL);
    goto LABEL_10;
  }
  return v13;
}
