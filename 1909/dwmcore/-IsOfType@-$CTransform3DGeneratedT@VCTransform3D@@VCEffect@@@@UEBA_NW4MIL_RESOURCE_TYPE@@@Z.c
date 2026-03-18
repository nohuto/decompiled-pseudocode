/*
 * XREFs of ?IsOfType@?$CTransform3DGeneratedT@VCTransform3D@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0400
 * Callers:
 *     ?IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0260 (-IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CTransformGeneratedT@VCTransform@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0370 (-IsOfType@-$CTransformGeneratedT@VCTransform@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CComponentTransform2D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C03A0 (-IsOfType@CComponentTransform2D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CComponentTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C03D0 (-IsOfType@CComponentTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019EE50 (-IsOfType@-$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@UEBA_NW4MIL_RESOU.c)
 *     ?IsOfType@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019EEB0 (-IsOfType@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@UEBA_NW4MIL_RESOURC.c)
 *     ?IsOfType@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019EFB0 (-IsOfType@-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@UEBA_NW4MIL_RESOURC.c)
 *     ?IsOfType@?$CTranslateTransform3DGeneratedT@VCTranslateTransform3D@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019EFE0 (-IsOfType@-$CTranslateTransform3DGeneratedT@VCTranslateTransform3D@@VCTransform3D@@@@UEBA_NW4MIL.c)
 * Callees:
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0428 (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 */

char __fastcall CTransform3DGeneratedT<CTransform3D,CEffect>::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  char v4; // al

  if ( a2 == 180 )
    return 1;
  v4 = CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType();
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
