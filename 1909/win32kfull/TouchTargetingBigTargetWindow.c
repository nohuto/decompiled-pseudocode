/*
 * XREFs of TouchTargetingBigTargetWindow @ 0x1C025B54C
 * Callers:
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C020441C (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TouchTargetingBigTargetWindow(_DWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int64 v5; // rdx
  _BOOL8 result; // rax

  v3 = (__int64)((unsigned __int128)(*(int *)(a2 + 184) * (__int64)(a1[2] - *a1) * (__int128)0x20C49BA5E353F7CFLL) >> 64) >> 7;
  v4 = (v3 >> 63) + v3;
  result = 0;
  if ( v4 + 0x80000000 > 0xFFFFFFFF || (int)v4 >= 1400 )
  {
    v5 = *(int *)(a2 + 188) * (__int64)(a1[3] - a1[1]) / 1000;
    if ( (unsigned __int64)(v5 + 0x80000000LL) > 0xFFFFFFFF || (int)v5 >= 1400 )
      return 1;
  }
  return result;
}
