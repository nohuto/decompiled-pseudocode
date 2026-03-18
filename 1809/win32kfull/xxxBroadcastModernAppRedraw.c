/*
 * XREFs of xxxBroadcastModernAppRedraw @ 0x1C01F6F80
 * Callers:
 *     <none>
 * Callees:
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00BA890 (xxxBroadcastDisplaySettingsChange.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C00DE1D0 (HandleDisplayChangeForInactiveDesktops.c)
 */

void xxxBroadcastModernAppRedraw()
{
  if ( grpdeskRitInput )
  {
    xxxBroadcastDisplaySettingsChange(grpdeskRitInput, 0);
    HandleDisplayChangeForInactiveDesktops(grpdeskRitInput, 0);
  }
}
