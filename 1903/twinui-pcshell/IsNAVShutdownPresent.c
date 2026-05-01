/*
 * XREFs of IsNAVShutdownPresent @ 0x180089550
 * Callers:
 *     ?Shutdown@ViewManagerBridge@@UEAAXXZ @ 0x18028A6F0 (-Shutdown@ViewManagerBridge@@UEAAXXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18008B450 (ApiSetQueryApiSetPresence_0.c)
 */

char IsNAVShutdownPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180599008 == 1 )
    return 1;
  if ( dword_180599008 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"HJ", &v1) < 0 )
    return 0;
  result = v1;
  dword_180599008 = 2 - (v1 != 0);
  return result;
}
