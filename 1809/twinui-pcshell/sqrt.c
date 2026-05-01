/*
 * XREFs of sqrt @ 0x1800850C0
 * Callers:
 *     ?TryGetScreenSizeAndDpi@PositionAndSizeOptionsHelper@KeyboardHosting@@CA_NPEAUHMONITOR__@@PEAUScreenSizeAndDpi@2@@Z @ 0x1800607E0 (-TryGetScreenSizeAndDpi@PositionAndSizeOptionsHelper@KeyboardHosting@@CA_NPEAUHMONITOR__@@PEAUSc.c)
 *     ?_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@AEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEA_KPEAH@Z @ 0x1803196B0 (-_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl sqrt(double X)
{
  return _o_sqrt(X);
}
