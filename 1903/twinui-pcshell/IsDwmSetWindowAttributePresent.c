/*
 * XREFs of IsDwmSetWindowAttributePresent @ 0x18008A9BC
 * Callers:
 *     ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x1800645D0 (-SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilege.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18008B450 (ApiSetQueryApiSetPresence_0.c)
 */

char IsDwmSetWindowAttributePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180599118 == 1 )
    return 1;
  if ( dword_180599118 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"8:", &v1) < 0 )
    return 0;
  result = v1;
  dword_180599118 = 2 - (v1 != 0);
  return result;
}
