/*
 * XREFs of ?ConvertDbToEngineVolume@@YAMM@Z @ 0x1800F8998
 * Callers:
 *     s_apmSetVolumeGroupGainForId @ 0x1800F9260 (s_apmSetVolumeGroupGainForId.c)
 * Callees:
 *     pow @ 0x1800616C4 (pow.c)
 */

float __fastcall ConvertDbToEngineVolume(float a1)
{
  if ( a1 == -INFINITY )
    return 0.0;
  else
    return pow(10.0, a1 / 20.0);
}
