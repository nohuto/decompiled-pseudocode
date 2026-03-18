/*
 * XREFs of IsCreateHolographicCompositorPresent @ 0x1800EA13C
 * Callers:
 *     ?EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ @ 0x180247630 (-EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800EA460 (ApiSetQueryApiSetPresence_0.c)
 */

char IsCreateHolographicCompositorPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180339678 == 1 )
    return 1;
  if ( dword_180339678 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"RT", &v1) < 0 )
    return 0;
  result = v1;
  dword_180339678 = 2 - (v1 != 0);
  return result;
}
