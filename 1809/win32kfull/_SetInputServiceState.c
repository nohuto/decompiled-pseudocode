/*
 * XREFs of _SetInputServiceState @ 0x1C0120870
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@HH@Z @ 0x1C00030D8 (-HandleDeferredInput@@YAXPEAUtagTHREADINFO@@HH@Z.c)
 */

__int64 __fastcall SetInputServiceState(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // r8d
  int v4; // edx
  int v6; // ecx

  if ( !a1 )
  {
    *(_DWORD *)(gptiCurrent + 1208LL) &= ~0x8000000u;
    return 1LL;
  }
  v1 = a1 - 1;
  if ( !v1 )
  {
    *(_DWORD *)(gptiCurrent + 1208LL) |= 0x8000000u;
    return 1LL;
  }
  v2 = v1 - 1;
  if ( v2 )
  {
    v6 = v2 - 1;
    if ( !v6 )
    {
      if ( (*(_DWORD *)(gptiCurrent + 1208LL) & 0x8000000) == 0 )
        return 1LL;
      v3 = 0;
      v4 = 0;
      goto LABEL_6;
    }
    if ( v6 == 1 && (*(_DWORD *)(gptiCurrent + 1208LL) & 0x8000000) != 0 )
    {
      v4 = 0;
      v3 = 1;
      goto LABEL_6;
    }
  }
  else if ( (*(_DWORD *)(gptiCurrent + 1208LL) & 0x8000000) != 0 )
  {
    v3 = 0;
    v4 = 1;
LABEL_6:
    HandleDeferredInput(gptiCurrent, v4, v3);
  }
  return 1LL;
}
