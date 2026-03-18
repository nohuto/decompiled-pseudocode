/*
 * XREFs of xxxBroadcastModernAppRedraw @ 0x1C020CFE0
 * Callers:
 *     <none>
 * Callees:
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00111D0 (xxxBroadcastDisplaySettingsChange.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C0116DE0 (HandleDisplayChangeForInactiveDesktops.c)
 */

__int64 xxxBroadcastModernAppRedraw()
{
  __int64 result; // rax

  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    xxxBroadcastDisplaySettingsChange(grpdeskRitInput, 0, 0);
    return HandleDisplayChangeForInactiveDesktops(grpdeskRitInput, 0);
  }
  return result;
}
