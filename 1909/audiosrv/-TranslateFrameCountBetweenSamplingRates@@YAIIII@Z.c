/*
 * XREFs of ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1800E67B8
 * Callers:
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J9@Z @ 0x180039300 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800E7360 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800E8170 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TranslateFrameCountBetweenSamplingRates(int a1, int a2, int a3)
{
  __int64 result; // rax

  result = (unsigned int)(int)((double)(int)((double)a1 * 10000000.0 / (double)a2 + 0.5) * (double)a3 / 10000000.0 + 0.5);
  if ( a1 )
  {
    if ( !(_DWORD)result )
      return 1LL;
  }
  return result;
}
