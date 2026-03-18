/*
 * XREFs of xxxBroadcastModernAppRedraw @ 0x1C020D290
 * Callers:
 *     <none>
 * Callees:
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C0011920 (HandleDisplayChangeForInactiveDesktops.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C0115C40 (xxxBroadcastDisplaySettingsChange.c)
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
