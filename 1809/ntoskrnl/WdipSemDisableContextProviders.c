/*
 * XREFs of WdipSemDisableContextProviders @ 0x140718CFC
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x1406C06F0 (WdipTimeoutCheckRoutine.c)
 *     WdipSemDisableScenario @ 0x140718764 (WdipSemDisableScenario.c)
 * Callees:
 *     WdipSemDisableContextProvider @ 0x140718D6C (WdipSemDisableContextProvider.c)
 */

void __fastcall WdipSemDisableContextProviders(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  char i; // r14

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    v3 = 0LL;
    for ( i = a2; (unsigned int)v3 < *(_DWORD *)(v2 + 48); v3 = (unsigned int)(v3 + 1) )
    {
      if ( *(int *)(a1 + 4 * v3 + 48) >= 0 )
      {
        LOBYTE(a2) = i;
        *(_DWORD *)(a1 + 4 * v3 + 48) = WdipSemDisableContextProvider(*(_QWORD *)(v2 + 8 * v3 + 56), a2);
      }
    }
  }
}
