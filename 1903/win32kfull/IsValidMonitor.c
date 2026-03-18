/*
 * XREFs of IsValidMonitor @ 0x1C0116FC4
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0116898 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C0116B7C (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
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
