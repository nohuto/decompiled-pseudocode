/*
 * XREFs of ?SupportsTouch@MPCHandProcessor@@UEAA_NXZ @ 0x180136A00
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ArticulatedHand2DInteraction@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801367C0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ArticulatedHand2DInteraction@@@wil@@.c)
 */

char __fastcall MPCHandProcessor::SupportsTouch(MPCHandProcessor *this, __int64 a2, __int64 a3)
{
  wil::Feature<__WilFeatureTraits_Feature_ArticulatedHand2DInteraction>::ReportUsageToService((__int64)this, a2, a3);
  return 1;
}
