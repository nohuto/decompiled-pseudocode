/*
 * XREFs of IsCreateHolographicCompositorPresent @ 0x1800EDAD4
 * Callers:
 *     ?EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ @ 0x180212328 (-EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800EDD90 (ApiSetQueryApiSetPresence_0.c)
 */

char IsCreateHolographicCompositorPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180307E18 == 1 )
    return 1;
  if ( dword_180307E18 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"RT", &v1) < 0 )
    return 0;
  result = v1;
  dword_180307E18 = 2 - (v1 != 0);
  return result;
}
