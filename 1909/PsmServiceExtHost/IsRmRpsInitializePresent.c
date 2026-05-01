/*
 * XREFs of IsRmRpsInitializePresent @ 0x1800485C8
 * Callers:
 *     ?RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z @ 0x1800432A0 (-RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800486C0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsRmRpsInitializePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800ABCD4 == 1 )
    return 1;
  if ( dword_1800ABCD4 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"VX", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800ABCD4 = 2 - (v1 != 0);
  return result;
}
