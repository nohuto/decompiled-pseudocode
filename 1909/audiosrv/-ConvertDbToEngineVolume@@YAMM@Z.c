/*
 * XREFs of ?ConvertDbToEngineVolume@@YAMM@Z @ 0x180104CC8
 * Callers:
 *     s_apmSetVolumeGroupGainForId @ 0x180105590 (s_apmSetVolumeGroupGainForId.c)
 * Callees:
 *     pow @ 0x180065D0C (pow.c)
 */

float __fastcall ConvertDbToEngineVolume(float a1)
{
  if ( a1 == -INFINITY )
    return 0.0;
  else
    return pow(10.0, a1 / 20.0);
}
