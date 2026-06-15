/*
 * XREFs of IsWTSQuerySessionInformationWPresent @ 0x180037B54
 * Callers:
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18002DB98 (-GetTsAudioProtocol@@YAIK@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180037ED0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsWTSQuerySessionInformationWPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18004F9E8 == 1 )
    return 1;
  if ( dword_18004F9E8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"DF", &v1) < 0 )
    return 0;
  result = v1;
  dword_18004F9E8 = 2 - (v1 != 0);
  return result;
}
