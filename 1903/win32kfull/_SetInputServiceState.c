/*
 * XREFs of _SetInputServiceState @ 0x1C0129940
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@W4tagINPUTSERVICE_STATE@@@Z @ 0x1C00051EC (-HandleDeferredInput@@YAXPEAUtagTHREADINFO@@W4tagINPUTSERVICE_STATE@@@Z.c)
 */

__int64 __fastcall SetInputServiceState(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      *(_DWORD *)(gptiCurrent + 1224LL) |= 0x8000000u;
    }
    else if ( (unsigned int)(a1 - 2) <= 3 && (*(_DWORD *)(gptiCurrent + 1224LL) & 0x8000000) != 0 )
    {
      HandleDeferredInput(gptiCurrent, a1);
    }
  }
  else
  {
    *(_DWORD *)(gptiCurrent + 1224LL) &= ~0x8000000u;
  }
  return 1LL;
}
