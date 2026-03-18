/*
 * XREFs of IsImmDisableIMEPresent @ 0x14000417C
 * Callers:
 *     WinMain @ 0x140001890 (WinMain.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x140004270 (ApiSetQueryApiSetPresence_0.c)
 */

char IsImmDisableIMEPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_14000B7F0 == 1 )
    return 1;
  if ( dword_14000B7F0 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"*,", &v1) < 0 )
    return 0;
  result = v1;
  dword_14000B7F0 = 2 - (v1 != 0);
  return result;
}
