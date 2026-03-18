/*
 * XREFs of HideMouseTrails @ 0x1C01C4050
 * Callers:
 *     <none>
 * Callees:
 *     GreMovePointer @ 0x1C00A1790 (GreMovePointer.c)
 */

void HideMouseTrails()
{
  if ( gMouseTrailsToHide > 0 && _InterlockedDecrement(&gMouseTrailsToHide) < gMouseTrails )
    GreMovePointer(*(HDEV *)(gpDispInfo + 40LL), *(unsigned int *)(gpsi + 4960LL), *(_DWORD *)(gpsi + 4964LL), 1);
}
