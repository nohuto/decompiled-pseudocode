/*
 * XREFs of IsVisible @ 0x1C0079A24
 * Callers:
 *     xxxSetScrollBar @ 0x1C00784FC (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C0078BA4 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxDrawWindowFrame @ 0x1C0078D80 (xxxDrawWindowFrame.c)
 *     xxxScrollWindowEx @ 0x1C0079188 (xxxScrollWindowEx.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C007AC3C (-UT_InvertCaret@@YAXXZ.c)
 *     xxxDrawCaptionBar @ 0x1C00A7DE8 (xxxDrawCaptionBar.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00AD848 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C01F27B4 (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     RestoreSpb @ 0x1C01F2E30 (RestoreSpb.c)
 *     SpbCheckRect @ 0x1C01F3180 (SpbCheckRect.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0228C4C (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z @ 0x1C0244000 (-EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsVisible(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  char v3; // al

  v1 = a1;
  if ( !a1 )
    return 1LL;
  while ( 1 )
  {
    v2 = *(_QWORD *)(v1 + 40);
    v3 = *(_BYTE *)(v2 + 31);
    if ( (v3 & 0x10) == 0 || (v3 & 0x20) != 0 && v1 != a1 )
      break;
    if ( (*(_WORD *)(v2 + 42) & 0x2FFF) != 0x29D )
    {
      v1 = *(_QWORD *)(v1 + 80);
      if ( v1 )
        continue;
    }
    return 1LL;
  }
  return 0LL;
}
