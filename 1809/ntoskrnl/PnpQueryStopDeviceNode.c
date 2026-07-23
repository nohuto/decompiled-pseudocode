/*
 * XREFs of PnpQueryStopDeviceNode @ 0x140840A64
 * Callers:
 *     PnpQueryRebalanceWorker @ 0x1408408C8 (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PipSetDevNodeState @ 0x140159ED8 (PipSetDevNodeState.c)
 *     PoFxActivateDevice @ 0x14015A18C (PoFxActivateDevice.c)
 *     PnpFindMountableDevice @ 0x14015AA14 (PnpFindMountableDevice.c)
 *     PnpLockMountableDevice @ 0x140169AE8 (PnpLockMountableDevice.c)
 *     PiRebalanceOptOut @ 0x14028B8A0 (PiRebalanceOptOut.c)
 *     PipSetDevNodeFlags @ 0x1406E637C (PipSetDevNodeFlags.c)
 *     PnpTraceQueryStopFailure @ 0x14083AE4C (PnpTraceQueryStopFailure.c)
 *     IopQueryReconfiguration @ 0x14083C3BC (IopQueryReconfiguration.c)
 */

__int64 __fastcall PnpQueryStopDeviceNode(__int64 a1, char a2)
{
  int Reconfiguration; // edi
  struct _DEVICE_OBJECT *v4; // rdx

  Reconfiguration = -1073741823;
  if ( *(_DWORD *)(a1 + 300) == 776 )
  {
    if ( a2 && PiRebalanceOptOut(a1) )
      goto LABEL_7;
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
    if ( Reconfiguration < 0 )
LABEL_7:
      PnpTraceQueryStopFailure(a1);
  }
  return (unsigned int)Reconfiguration;
}
