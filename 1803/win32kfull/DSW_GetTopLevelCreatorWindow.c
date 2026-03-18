/*
 * XREFs of DSW_GetTopLevelCreatorWindow @ 0x1C010F8B0
 * Callers:
 *     xxxSetForegroundWindow @ 0x1C006E2C4 (xxxSetForegroundWindow.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01BBAF4 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DSW_GetTopLevelCreatorWindow(__int64 a1)
{
  __int64 i; // rax

  if ( a1 )
  {
    for ( i = *(_QWORD *)(a1 + 96); i; i = *(_QWORD *)(i + 96) )
      a1 = i;
  }
  return a1;
}
