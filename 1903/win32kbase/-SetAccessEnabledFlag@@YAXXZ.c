/*
 * XREFs of ?SetAccessEnabledFlag@@YAXXZ @ 0x1C0075EE0
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0074A20 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C015E8E0 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void SetAccessEnabledFlag(void)
{
  int v0; // eax

  if ( (dword_1C021461C & 1) != 0
    || (dword_1C021461C & 4) != 0
    || (dword_1C0214614 & 1) != 0
    || (dword_1C0214614 & 4) != 0
    || (dword_1C02145CC & 4) != 0
    || (dword_1C02145F4 & 1) != 0
    || (dword_1C02145F4 & 4) != 0
    || (dword_1C02145DC & 1) != 0
    || (dword_1C02145DC & 4) != 0
    || (dword_1C0217624 & 1) != 0
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
