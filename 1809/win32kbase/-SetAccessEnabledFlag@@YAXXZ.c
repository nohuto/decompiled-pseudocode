/*
 * XREFs of ?SetAccessEnabledFlag@@YAXXZ @ 0x1C0048BA0
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0045A80 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0131DD0 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void SetAccessEnabledFlag(void)
{
  int v0; // eax

  if ( (dword_1C01CC99C & 1) != 0
    || (dword_1C01CC99C & 4) != 0
    || (dword_1C01CC994 & 1) != 0
    || (dword_1C01CC994 & 4) != 0
    || (dword_1C01CC94C & 4) != 0
    || (dword_1C01CC974 & 1) != 0
    || (dword_1C01CC974 & 4) != 0
    || (dword_1C01CC95C & 1) != 0
    || (dword_1C01CC95C & 4) != 0
    || (dword_1C01CFF44 & 1) != 0
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
