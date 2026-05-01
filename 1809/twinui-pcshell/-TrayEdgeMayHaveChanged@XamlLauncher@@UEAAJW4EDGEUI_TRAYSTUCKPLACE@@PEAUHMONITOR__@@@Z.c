/*
 * XREFs of ?TrayEdgeMayHaveChanged@XamlLauncher@@UEAAJW4EDGEUI_TRAYSTUCKPLACE@@PEAUHMONITOR__@@@Z @ 0x18029E530
 * Callers:
 *     <none>
 * Callees:
 *     ?TrayEdgeMayHaveChanged@ImmersiveMonitorHelper@@QEAAJW4EDGEUI_TRAYSTUCKPLACE@@PEAUHMONITOR__@@@Z @ 0x18029F9E4 (-TrayEdgeMayHaveChanged@ImmersiveMonitorHelper@@QEAAJW4EDGEUI_TRAYSTUCKPLACE@@PEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall XamlLauncher::TrayEdgeMayHaveChanged(__int64 a1)
{
  unsigned int v1; // ebx
  int HaveChanged; // eax

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 216) )
    return 2147943568LL;
  HaveChanged = ImmersiveMonitorHelper::TrayEdgeMayHaveChanged(*(_QWORD *)(a1 + 96));
  if ( HaveChanged < 0 )
    return (unsigned int)HaveChanged;
  return v1;
}
