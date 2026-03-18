/*
 * XREFs of PiProfileUpdateDeviceTreeCallback @ 0x14086C5C0
 * Callers:
 *     <none>
 * Callees:
 *     IoInvalidateDeviceRelations @ 0x14015D770 (IoInvalidateDeviceRelations.c)
 *     PipClearDevNodeProblem @ 0x1406FADBC (PipClearDevNodeProblem.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140724EEC (PnpIsDeviceInstanceEnabled.c)
 *     PnpRequestDeviceRemoval @ 0x140733830 (PnpRequestDeviceRemoval.c)
 *     PipSetDevNodeProblem @ 0x1407339B4 (PipSetDevNodeProblem.c)
 *     PnpRestartDeviceNode @ 0x140861AE8 (PnpRestartDeviceNode.c)
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
