/*
 * XREFs of PipProcessRestartPhase1 @ 0x14087D17C
 * Callers:
 *     PipProcessDevNodeTree @ 0x14070265C (PipProcessDevNodeTree.c)
 * Callees:
 *     PnpUnlockMountableDevice @ 0x140170A88 (PnpUnlockMountableDevice.c)
 *     McTemplateK0dz @ 0x1402A1074 (McTemplateK0dz.c)
 *     PipClearDevNodeFlags @ 0x140707494 (PipClearDevNodeFlags.c)
 *     PnpStartDeviceNode @ 0x14071802C (PnpStartDeviceNode.c)
 */

__int64 __fastcall PipProcessRestartPhase1(__int64 a1, int a2, __int64 a3)
{
  int v3; // edi
  unsigned int started; // edi

  v3 = a3;
  if ( (byte_14042BDBB & 0x10) != 0 )
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
  if ( (byte_14042BDBB & 0x10) != 0 )
    McTemplateK0dz(a1, &KMPnPEvt_ProcessDeviceRestart_Stop, a3, 1, *(const wchar_t **)(a1 + 48));
  return started;
}
