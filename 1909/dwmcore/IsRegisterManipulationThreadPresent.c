/*
 * XREFs of IsRegisterManipulationThreadPresent @ 0x1800E9EE8
 * Callers:
 *     ?ManipulationThreadMain@CGlobalManipulationManager@@AEAAJXZ @ 0x1800E0038 (-ManipulationThreadMain@CGlobalManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800EA460 (ApiSetQueryApiSetPresence_0.c)
 */

char IsRegisterManipulationThreadPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180339664 == 1 )
    return 1;
  if ( dword_180339664 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"HJ", &v1) < 0 )
    return 0;
  result = v1;
  dword_180339664 = 2 - (v1 != 0);
  return result;
}
