/*
 * XREFs of PiProfileUpdateDeviceTreeCallback @ 0x1408324B0
 * Callers:
 *     <none>
 * Callees:
 *     IoInvalidateDeviceRelations @ 0x14015EF50 (IoInvalidateDeviceRelations.c)
 *     PnpRequestDeviceRemoval @ 0x1406EF20C (PnpRequestDeviceRemoval.c)
 *     PipSetDevNodeProblem @ 0x1406EF560 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1406F6CD8 (PipClearDevNodeProblem.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1406FE4F4 (PnpIsDeviceInstanceEnabled.c)
 *     PnpRestartDeviceNode @ 0x14075FE6C (PnpRestartDeviceNode.c)
 */

__int64 __fastcall PiProfileUpdateDeviceTreeCallback(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  if ( v1 == 776 )
  {
    if ( !(unsigned int)PnpIsDeviceInstanceEnabled(0LL, (unsigned __int16 *)(a1 + 40), 0) )
      PnpRequestDeviceRemoval(a1, 0, 22, 0);
  }
  else if ( ((v1 - 770) & 0xFFFFFFEF) == 0 && (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 22 )
  {
    PipClearDevNodeProblem(a1);
    if ( (unsigned int)PnpIsDeviceInstanceEnabled(0LL, (unsigned __int16 *)(a1 + 40), 0) )
    {
      PnpRestartDeviceNode(a1);
      IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 16) + 32LL), BusRelations);
    }
    else
    {
      PipSetDevNodeProblem(a1, 22, 0);
    }
  }
  return 0LL;
}
