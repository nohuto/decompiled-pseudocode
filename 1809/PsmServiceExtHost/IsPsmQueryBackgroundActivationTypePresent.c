/*
 * XREFs of IsPsmQueryBackgroundActivationTypePresent @ 0x180048C48
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180041050 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180048AD0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsPsmQueryBackgroundActivationTypePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18009BA68 == 1 )
    return 1;
  if ( dword_18009BA68 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"BD", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_18009BA68 = 2 - (v1 != 0);
  return result;
}
