/*
 * XREFs of ?SetAccessEnabledFlag@@YAXXZ @ 0x1C00619B0
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C00604F0 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C015C6E0 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void SetAccessEnabledFlag(void)
{
  int v0; // eax

  if ( (dword_1C021161C & 1) != 0
    || (dword_1C021161C & 4) != 0
    || (dword_1C0211614 & 1) != 0
    || (dword_1C0211614 & 4) != 0
    || (dword_1C02115CC & 4) != 0
    || (dword_1C02115F4 & 1) != 0
    || (dword_1C02115F4 & 4) != 0
    || (dword_1C02115DC & 1) != 0
    || (dword_1C02115DC & 4) != 0
    || (dword_1C0214624 & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    v0 = gdwPUDFlags | 0x100;
  }
  else
  {
    v0 = gdwPUDFlags & 0xFFFFFEFF;
  }
  gdwPUDFlags = v0;
}
