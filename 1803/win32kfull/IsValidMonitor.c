/*
 * XREFs of IsValidMonitor @ 0x1C0059790
 * Callers:
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00591B0 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C005B1BC (xxxDeferWindowPosAndCheckPoint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidMonitor(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(_QWORD *)(gpDispInfo + 104LL); result; result = *(_QWORD *)(result + 56) )
  {
    if ( result == a1 )
      return 1LL;
  }
  return result;
}
