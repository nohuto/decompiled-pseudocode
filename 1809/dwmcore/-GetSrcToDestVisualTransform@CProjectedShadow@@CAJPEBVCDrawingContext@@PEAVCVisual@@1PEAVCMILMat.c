/*
 * XREFs of ?GetSrcToDestVisualTransform@CProjectedShadow@@CAJPEBVCDrawingContext@@PEAVCVisual@@1PEAVCMILMatrix@@@Z @ 0x1801CB24C
 * Callers:
 *     ?GetLightPosition@CProjectedShadow@@CAJPEBVCDrawingContext@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x1801CA864 (-GetLightPosition@CProjectedShadow@@CAJPEBVCDrawingContext@@PEBVCCompositionLight@@PEAVCVisual@@.c)
 *     ?UpdateTransforms@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801CC728 (-UpdateTransforms@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetSrcToDestVisualTransform@CProjectedShadow@@CAJPEBVCDrawingContext@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAVCVisual@@V?$span@PEAVCMILMatrix@@$0?0@4@@Z @ 0x1801CB2A8 (-GetSrcToDestVisualTransform@CProjectedShadow@@CAJPEBVCDrawingContext@@V-$span@PEAVCVisual@@$0-0.c)
 */

__int64 __fastcall CProjectedShadow::GetSrcToDestVisualTransform(
        const struct CDrawingContext *a1,
        struct CVisual *a2,
        struct CVisual *a3,
        struct CMILMatrix *a4)
{
  __int128 v4; // xmm0
  __int128 v6; // [rsp+20h] [rbp-20h] BYREF
  __int128 v7; // [rsp+30h] [rbp-10h] BYREF
  struct CVisual *v8; // [rsp+58h] [rbp+18h] BYREF
  struct CMILMatrix *v9; // [rsp+68h] [rbp+28h] BYREF

  v9 = a4;
  v8 = a2;
  *(_QWORD *)&v6 = 1LL;
  *((_QWORD *)&v6 + 1) = &v9;
  v4 = v6;
  *((_QWORD *)&v6 + 1) = &v8;
  v7 = v4;
  return ((__int64 (__fastcall *)(const struct CDrawingContext *, __int128 *, struct CVisual *, __int128 *))CProjectedShadow::GetSrcToDestVisualTransform)(
           a1,
           &v6,
           a3,
           &v7);
}
