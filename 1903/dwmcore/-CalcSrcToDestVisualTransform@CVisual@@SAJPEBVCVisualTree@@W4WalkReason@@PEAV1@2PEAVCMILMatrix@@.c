/*
 * XREFs of ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x180007724
 * Callers:
 *     ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x180007910 (-GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x180007C10 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x180007F30 (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180008230 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@5@@Z @ 0x180007780 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V-$span@PEAVCVisual@@$0.c)
 */

__int64 __fastcall CVisual::CalcSrcToDestVisualTransform(int a1, __int64 a2, __int64 a3, int a4, char a5)
{
  __int128 v5; // xmm0
  __int128 v7; // [rsp+30h] [rbp-20h] BYREF
  __int128 v8; // [rsp+40h] [rbp-10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+20h] BYREF

  v9 = a3;
  *((_QWORD *)&v7 + 1) = &a5;
  *(_QWORD *)&v7 = 1LL;
  v5 = v7;
  *((_QWORD *)&v7 + 1) = &v9;
  v8 = v5;
  return CVisual::CalcSrcToDestVisualTransform(a1, 1, (unsigned int)&v7, a4, (__int64)&v8);
}
