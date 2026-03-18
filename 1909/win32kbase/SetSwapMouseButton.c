/*
 * XREFs of SetSwapMouseButton @ 0x1C010F930
 * Callers:
 *     ?ivHandleSettingsPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018AFA0 (-ivHandleSettingsPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ivBroadcastSettingsUpdateToAllContainers @ 0x1C0185A10 (ivBroadcastSettingsUpdateToAllContainers.c)
 */

char __fastcall SetSwapMouseButton(unsigned __int8 a1)
{
  char v1; // bl

  v1 = *((_DWORD *)gpsi + 497) != 0;
  if ( v1 != a1 )
  {
    gbSwapMouseButtonsDirty = gbSwapMouseButtonsDirty == 0;
    *((_DWORD *)gpsi + 497) = a1;
    ivBroadcastSettingsUpdateToAllContainers();
  }
  return v1;
}
