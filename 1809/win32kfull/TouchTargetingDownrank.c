/*
 * XREFs of TouchTargetingDownrank @ 0x1C0243390
 * Callers:
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C01EE0B0 (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchTargetingDownrank(__int64 a1, int a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rax

  v2 = *(_DWORD *)(a1 + 184);
  v3 = 0x7FFFFFFF;
  v4 = *(_DWORD *)(a1 + 188);
  if ( a2 == 1 )
  {
    if ( v2 >= v4 )
      v2 = *(_DWORD *)(a1 + 188);
    v5 = 600000LL / v2;
    if ( (unsigned __int64)(v5 + 0x80000000LL) > 0xFFFFFFFF )
      return (unsigned int)v3;
    v3 = v5;
    result = 40LL;
    if ( v3 > 40 )
      return (unsigned int)v3;
  }
  else
  {
    if ( v2 >= v4 )
      v2 = *(_DWORD *)(a1 + 188);
    v7 = 200000LL / v2;
    if ( (unsigned __int64)(v7 + 0x80000000LL) <= 0xFFFFFFFF )
      v3 = v7;
    LODWORD(result) = abs32(v3);
    if ( (int)result > 20 )
      LOWORD(result) = 20;
    return (unsigned __int16)result;
  }
  return result;
}
