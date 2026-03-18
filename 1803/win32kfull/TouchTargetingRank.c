/*
 * XREFs of TouchTargetingRank @ 0x1C022D65C
 * Callers:
 *     ?_TTUpdateRankWithSegment@@YAXJJJJPEAUtagPOINT@@PEAGUtagRECT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C022CD2C (-_TTUpdateRankWithSegment@@YAXJJJJPEAUtagPOINT@@PEAGUtagRECT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     TouchTargetingRankForRectDeep @ 0x1C022DCA8 (TouchTargetingRankForRectDeep.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchTargetingRank(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v5; // r8d
  int v6; // eax
  int v7; // eax
  unsigned __int16 v8; // dx
  int v9; // ecx
  __int64 result; // rax

  v5 = abs32(a2 - a1) + abs32(HIDWORD(a2) - HIDWORD(a1));
  if ( (int)a1 <= *a3 || (int)a1 >= a3[2] )
    v6 = a4 - a2;
  else
    v6 = HIDWORD(a2) - HIDWORD(a4);
  v7 = abs32(v6);
  if ( v7 > 20 )
    LOWORD(v7) = 20;
  v8 = v5 + v7;
  v9 = v5 + (unsigned __int16)v7;
  result = 4093LL;
  if ( v9 < 4093 )
    return v8;
  return result;
}
