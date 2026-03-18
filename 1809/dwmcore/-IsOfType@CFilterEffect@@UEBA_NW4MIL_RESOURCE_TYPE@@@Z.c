/*
 * XREFs of ?IsOfType@CFilterEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801755E0
 * Callers:
 *     ?IsOfType@CAffineTransform2DEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180175410 (-IsOfType@CAffineTransform2DEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CArithmeticCompositeEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180175440 (-IsOfType@CArithmeticCompositeEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CBlendEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180175480 (-IsOfType@CBlendEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CBrightnessEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801754B0 (-IsOfType@CBrightnessEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CColorMatrixEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801754F0 (-IsOfType@CColorMatrixEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositeEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180175550 (-IsOfType@CCompositeEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CFloodEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180175610 (-IsOfType@CFloodEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CGaussianBlurEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180175640 (-IsOfType@CGaussianBlurEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CHueRotationEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801756E0 (-IsOfType@CHueRotationEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSaturationEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801758E0 (-IsOfType@CSaturationEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CShadowEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180175960 (-IsOfType@CShadowEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTableTransferEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801B4A80 (-IsOfType@CTableTransferEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CLinearTransferEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C3410 (-IsOfType@CLinearTransferEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CTurbulenceEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801CD520 (-IsOfType@CTurbulenceEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?IsOfType@CEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180060488 (-IsOfType@CEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CFilterEffect::IsOfType(__int64 a1, int a2)
{
  char v2; // al
  char v3; // cl

  if ( a2 == 54 )
    return 1;
  v2 = CEffect::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
