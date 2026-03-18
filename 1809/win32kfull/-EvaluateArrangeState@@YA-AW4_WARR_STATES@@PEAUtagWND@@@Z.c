/*
 * XREFs of ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C01E4950
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00CD2D8 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01E7130 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01E79E4 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 */

__int64 __fastcall EvaluateArrangeState(__int64 a1)
{
  __int64 DesktopWindow; // rax
  __int64 v2; // rdx
  __int64 v4; // rcx
  char v5; // al
  char v6; // dl

  DesktopWindow = GetDesktopWindow(a1);
  if ( *(_QWORD *)(v2 + 80) != DesktopWindow )
    return 6LL;
  v4 = *(_QWORD *)(v2 + 40);
  v5 = *(_BYTE *)(v4 + 31);
  if ( (v5 & 0x20) != 0 )
    return 5LL;
  if ( (v5 & 1) != 0 )
    return 0LL;
  v6 = *(_BYTE *)(v4 + 233);
  if ( (v6 & 3) == 3 )
    return 1LL;
  if ( (v6 & 1) != 0 )
    return 2LL;
  return 4 - (unsigned int)((v6 & 2) != 0);
}
