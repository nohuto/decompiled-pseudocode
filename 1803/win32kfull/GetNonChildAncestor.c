/*
 * XREFs of GetNonChildAncestor @ 0x1C0070A34
 * Callers:
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C00077F0 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 *     xxxSetForegroundWindow @ 0x1C006E2C4 (xxxSetForegroundWindow.c)
 *     zzzImeSetOwnerWindow @ 0x1C006EBFC (zzzImeSetOwnerWindow.c)
 *     _SelectPalette @ 0x1C00E5978 (_SelectPalette.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0110730 (xxxDrawMenuBarUnderlines.c)
 *     xxxHandleNCMouseGuys @ 0x1C01359C0 (xxxHandleNCMouseGuys.c)
 *     xxxNextWindow @ 0x1C01BC6C8 (xxxNextWindow.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01FD714 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNonChildAncestor(__int64 a1)
{
  __int64 v1; // r8

  v1 = a1;
  if ( a1 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) == 0x40 )
  {
    do
      v1 = *(_QWORD *)(v1 + 80);
    while ( (*(_BYTE *)(*(_QWORD *)(v1 + 40) + 31LL) & 0xC0) == 0x40 );
  }
  return v1;
}
