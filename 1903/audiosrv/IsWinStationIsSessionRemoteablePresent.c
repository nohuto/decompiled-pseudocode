/*
 * XREFs of IsWinStationIsSessionRemoteablePresent @ 0x180065F08
 * Callers:
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x1800294B8 (-GetTsAudioProtocol@@YAIK@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180066960 (ApiSetQueryApiSetPresence_0.c)
 */

char IsWinStationIsSessionRemoteablePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1801B80D8 == 1 )
    return 1;
  if ( dword_1801B80D8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_1801B80D8 = 2 - (v1 != 0);
  return result;
}
