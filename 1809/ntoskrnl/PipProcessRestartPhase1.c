/*
 * XREFs of PipProcessRestartPhase1 @ 0x140841780
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406E657C (PipProcessDevNodeTree.c)
 * Callees:
 *     PnpUnlockMountableDevice @ 0x140169AC8 (PnpUnlockMountableDevice.c)
 *     McTemplateK0dz @ 0x14028ABE4 (McTemplateK0dz.c)
 *     PipClearDevNodeFlags @ 0x1406E6500 (PipClearDevNodeFlags.c)
 *     PnpStartDeviceNode @ 0x1406EBA7C (PnpStartDeviceNode.c)
 */

__int64 __fastcall PipProcessRestartPhase1(__int64 a1, int a2, __int64 a3)
{
  int v3; // edi
  unsigned int started; // edi

  v3 = a3;
  if ( (byte_140405847 & 0x10) != 0 )
    McTemplateK0dz(a1, &KMPnPEvt_ProcessDeviceRestart_Start, a3, 1, *(const wchar_t **)(a1 + 48));
  if ( v3 && (*(_DWORD *)(a1 + 396) & 0x400000) != 0 )
  {
    started = -1073741267;
  }
  else
  {
    started = PnpStartDeviceNode(a1, 1, a2);
    if ( (*(_DWORD *)(a1 + 396) & 0x1000000) != 0 )
    {
      PnpUnlockMountableDevice(*(_QWORD *)(a1 + 32));
      PipClearDevNodeFlags(a1, 0x1000000);
    }
  }
  if ( (byte_140405847 & 0x10) != 0 )
    McTemplateK0dz(a1, &KMPnPEvt_ProcessDeviceRestart_Stop, a3, 1, *(const wchar_t **)(a1 + 48));
  return started;
}
