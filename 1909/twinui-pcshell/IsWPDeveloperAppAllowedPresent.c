/*
 * XREFs of IsWPDeveloperAppAllowedPresent @ 0x18008E61C
 * Callers:
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x180427274 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18008E030 (ApiSetQueryApiSetPresence_0.c)
 */

char IsWPDeveloperAppAllowedPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1805C1570 == 1 )
    return 1;
  if ( dword_1805C1570 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"JL", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_1805C1570 = 2 - (v1 != 0);
  return result;
}
