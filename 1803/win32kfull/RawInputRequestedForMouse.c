/*
 * XREFs of RawInputRequestedForMouse @ 0x1C006AD80
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C0069DB0 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     EditionPostRawMouseInputMessage @ 0x1C006AA30 (EditionPostRawMouseInputMessage.c)
 * Callees:
 *     <none>
 */

__int64 RawInputRequestedForMouse()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( gHidCounters[1] || gForegroundQRawMouseRequested )
    return 1;
  return v0;
}
