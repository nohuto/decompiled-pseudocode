/*
 * XREFs of ?SnapChannelToNearest@NearestColor@@CANNN@Z @ 0x1800B638C
 * Callers:
 *     ?GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x1800B5F4C (-GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampA.c)
 *     ?GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x1800B60C0 (-GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AE.c)
 * Callees:
 *     <none>
 */

double __fastcall NearestColor::SnapChannelToNearest(double a1, double a2)
{
  double v2; // xmm0_8

  if ( a2 <= 0.0 )
    v2 = 0.0;
  else
    v2 = a1 / a2;
  return (double)(int)(v2 + 0.5) * a2;
}
