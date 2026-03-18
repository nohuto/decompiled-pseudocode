/*
 * XREFs of HideMouseTrails @ 0x1C01A26E0
 * Callers:
 *     <none>
 * Callees:
 *     GreMovePointer @ 0x1C00C5F10 (GreMovePointer.c)
 */

void HideMouseTrails()
{
  if ( gMouseTrailsToHide > 0 && _InterlockedDecrement(&gMouseTrailsToHide) < gMouseTrails )
    GreMovePointer(*(_DWORD **)(gpDispInfo + 40LL), *(unsigned int *)(gpsi + 4960LL), *(_DWORD *)(gpsi + 4964LL), 1);
}
