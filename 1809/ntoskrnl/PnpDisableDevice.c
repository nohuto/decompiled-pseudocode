/*
 * XREFs of PnpDisableDevice @ 0x140827CB8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1406E3F34 (PiProcessNewDeviceNode.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1406FE514 (PnpIsDeviceInstanceEnabled.c)
 * Callees:
 *     IopRemoveDevice @ 0x1406ECE24 (IopRemoveDevice.c)
 *     IopReleaseDeviceResources @ 0x1406ED6A4 (IopReleaseDeviceResources.c)
 *     PipSetDevNodeProblem @ 0x1406EF580 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1406F6CF8 (PipClearDevNodeProblem.c)
 *     PiIrpQueryRemoveDevice @ 0x14083B230 (PiIrpQueryRemoveDevice.c)
 */

void __fastcall PnpDisableDevice(__int64 a1, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 300);
  if ( v2 >= 769 )
  {
    if ( v2 <= 770 )
      goto LABEL_6;
    if ( v2 > 781 )
      goto LABEL_7;
    if ( (int)PiIrpQueryRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32)) >= 0 )
    {
LABEL_6:
      IopRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32), 2);
      IopReleaseDeviceResources(a1, 1);
    }
    else
    {
      IopRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32), 3);
    }
  }
LABEL_7:
  if ( (*(_DWORD *)(a1 + 396) & 0x6000) != 0 )
    PipClearDevNodeProblem(a1);
  PipSetDevNodeProblem(a1, a2, 0);
}
