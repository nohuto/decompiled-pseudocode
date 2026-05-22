/*
 * XREFs of IsPreloadKeyboardLayoutsPresent @ 0x18012D720
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180087644 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18012C950 (ApiSetQueryApiSetPresence_0.c)
 */

char IsPreloadKeyboardLayoutsPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1801932E4 == 1 )
    return 1;
  if ( dword_1801932E4 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"LN", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_1801932E4 = 2 - (v1 != 0);
  return result;
}
