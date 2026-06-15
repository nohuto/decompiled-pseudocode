/*
 * XREFs of ?ConvertDbToEngineVolume@@YAMM@Z @ 0x1801051C8
 * Callers:
 *     s_apmSetVolumeGroupGainForId @ 0x180105A90 (s_apmSetVolumeGroupGainForId.c)
 * Callees:
 *     pow @ 0x180064D1C (pow.c)
 */

float __fastcall ConvertDbToEngineVolume(float a1)
{
  if ( a1 == -INFINITY )
    return 0.0;
  else
    return pow(10.0, a1 / 20.0);
}
