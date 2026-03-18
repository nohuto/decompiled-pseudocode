/*
 * XREFs of HideMouseTrails @ 0x1C01D7500
 * Callers:
 *     <none>
 * Callees:
 *     GreMovePointer @ 0x1C00467C0 (GreMovePointer.c)
 */

void HideMouseTrails()
{
  if ( gMouseTrailsToHide > 0
    && _InterlockedDecrement(&gMouseTrailsToHide) < SLODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
  {
    GreMovePointer(*(HDEV *)(gpDispInfo + 40LL), *(_DWORD *)(gpsi + 4960LL), *(_DWORD *)(gpsi + 4964LL), 1);
  }
}
