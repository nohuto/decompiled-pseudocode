/*
 * XREFs of IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent @ 0x180067168
 * Callers:
 *     ?OnDeviceFormatChanged@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@@Z @ 0x1800038E0 (-OnDeviceFormatChanged@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180067950 (ApiSetQueryApiSetPresence_0.c)
 */

char IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1801B7108 == 1 )
    return 1;
  if ( dword_1801B7108 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"RT", &v1) < 0 )
    return 0;
  result = v1;
  dword_1801B7108 = 2 - (v1 != 0);
  return result;
}
