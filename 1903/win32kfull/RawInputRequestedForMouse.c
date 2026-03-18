/*
 * XREFs of RawInputRequestedForMouse @ 0x1C00422BC
 * Callers:
 *     EditionPostRawMouseInputMessage @ 0x1C0041C80 (EditionPostRawMouseInputMessage.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MouseCursorPerf@@@Z @ 0x1C00422E4 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 * Callees:
 *     <none>
 */

__int64 RawInputRequestedForMouse()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( gHidCounters[1] || LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    return 1;
  return v0;
}
