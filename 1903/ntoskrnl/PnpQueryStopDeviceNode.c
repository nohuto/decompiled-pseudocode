/*
 * XREFs of PnpQueryStopDeviceNode @ 0x14087B260
 * Callers:
 *     PnpQueryRebalanceWorker @ 0x14087B0C8 (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14014568C (PipSetDevNodeState.c)
 *     PoFxActivateDevice @ 0x140145938 (PoFxActivateDevice.c)
 *     PnpLockMountableDevice @ 0x140170A2C (PnpLockMountableDevice.c)
 *     PnpFindMountableDevice @ 0x140172E2C (PnpFindMountableDevice.c)
 *     PiRebalanceOptOut @ 0x1402A1734 (PiRebalanceOptOut.c)
 *     PipSetDevNodeFlags @ 0x14070618C (PipSetDevNodeFlags.c)
 *     IopQueryReconfiguration @ 0x140875F20 (IopQueryReconfiguration.c)
 */

__int64 __fastcall PnpQueryStopDeviceNode(__int64 a1, char a2)
{
  unsigned int Reconfiguration; // edi
  struct _DEVICE_OBJECT *v4; // rdx

  Reconfiguration = -1073741823;
  if ( *(_DWORD *)(a1 + 300) == 776 && (!a2 || !PiRebalanceOptOut(a1)) )
  {
    if ( PnpFindMountableDevice(*(_QWORD *)(a1 + 32)) )
    {
      PnpLockMountableDevice(*(_QWORD **)(a1 + 32));
      PipSetDevNodeFlags(a1, 0x1000000);
    }
    PoFxActivateDevice(*(_QWORD *)(a1 + 32));
    v4 = *(struct _DEVICE_OBJECT **)(a1 + 32);
    *(_DWORD *)(a1 + 704) |= 0x20u;
    Reconfiguration = IopQueryReconfiguration(5, v4);
    PipSetDevNodeState(a1, 777);
  }
  return Reconfiguration;
}
