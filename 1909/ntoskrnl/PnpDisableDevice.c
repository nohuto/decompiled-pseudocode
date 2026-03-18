/*
 * XREFs of PnpDisableDevice @ 0x140861764
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140724EEC (PnpIsDeviceInstanceEnabled.c)
 * Callees:
 *     PipClearDevNodeProblem @ 0x1406FADBC (PipClearDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x140732A70 (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x140732B24 (IopRemoveDevice.c)
 *     PipSetDevNodeProblem @ 0x1407339B4 (PipSetDevNodeProblem.c)
 *     PiIrpQueryRemoveDevice @ 0x1408756D4 (PiIrpQueryRemoveDevice.c)
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
