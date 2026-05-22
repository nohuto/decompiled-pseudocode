/*
 * XREFs of IsPreloadKeyboardLayoutsPresent @ 0x18002DEA8
 * Callers:
 *     ?Create@InputServiceProcessor@@SAJPEAPEAV1@@Z @ 0x18002A5C8 (-Create@InputServiceProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18002CEC0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsPreloadKeyboardLayoutsPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1801E0B44 == 1 )
    return 1;
  if ( dword_1801E0B44 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"LN", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_1801E0B44 = 2 - (v1 != 0);
  return result;
}
