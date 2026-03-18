/*
 * XREFs of xxxBroadcastModernAppRedraw @ 0x1C01D2600
 * Callers:
 *     <none>
 * Callees:
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00636E0 (xxxBroadcastDisplaySettingsChange.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C010E850 (HandleDisplayChangeForInactiveDesktops.c)
 */

void xxxBroadcastModernAppRedraw()
{
  if ( grpdeskRitInput )
  {
    xxxBroadcastDisplaySettingsChange(grpdeskRitInput, 0, 0);
    HandleDisplayChangeForInactiveDesktops(grpdeskRitInput, 0);
  }
}
