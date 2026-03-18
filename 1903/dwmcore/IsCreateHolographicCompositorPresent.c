/*
 * XREFs of IsCreateHolographicCompositorPresent @ 0x1800E9318
 * Callers:
 *     ?EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ @ 0x180248D40 (-EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800E9640 (ApiSetQueryApiSetPresence_0.c)
 */

char IsCreateHolographicCompositorPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18033C580 == 1 )
    return 1;
  if ( dword_18033C580 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"RT", &v1) < 0 )
    return 0;
  result = v1;
  dword_18033C580 = 2 - (v1 != 0);
  return result;
}
