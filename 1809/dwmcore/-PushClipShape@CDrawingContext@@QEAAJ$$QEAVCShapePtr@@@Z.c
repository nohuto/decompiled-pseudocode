/*
 * XREFs of ?PushClipShape@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x180166050
 * Callers:
 *     ?GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@Z @ 0x1801AD134 (-GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@Z.c)
 * Callees:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180039420 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0NodeEffects@CDrawingContext@@QEAA@XZ @ 0x18016181C (--0NodeEffects@CDrawingContext@@QEAA@XZ.c)
 */

__int64 __fastcall CDrawingContext::PushClipShape(CDrawingContext *this, const struct CShape **a2)
{
  const struct CMILMatrix *TopByReference; // rax
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9[11]; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v10; // [rsp+8Ch] [rbp-5Ch]
  __int128 v11; // [rsp+9Ch] [rbp-4Ch]
  __int128 v12; // [rsp+ACh] [rbp-3Ch]
  __int128 v13; // [rsp+BCh] [rbp-2Ch]
  int v14; // [rsp+CCh] [rbp-1Ch]
  char v15; // [rsp+D4h] [rbp-14h]
  __int64 v16; // [rsp+F0h] [rbp+8h] BYREF

  CDrawingContext::NodeEffects::NodeEffects((CDrawingContext::NodeEffects *)v9);
  v15 = 1;
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
  LOBYTE(v16) = 0;
  v10 = *(_OWORD *)TopByReference;
  v11 = *((_OWORD *)TopByReference + 1);
  v12 = *((_OWORD *)TopByReference + 2);
  v13 = *((_OWORD *)TopByReference + 3);
  v14 = *((_DWORD *)TopByReference + 16);
  v5 = CDrawingContext::PushLocalSpaceClipAndAlphaInternal(
         this,
         a2,
         (__int64)&CMILMatrix::Identity,
         0LL,
         (__int64)v9,
         &v16);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x121Eu);
  return v7;
}
