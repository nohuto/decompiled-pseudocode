/*
 * XREFs of PnpQueryStopDeviceNode @ 0x14083F824
 * Callers:
 *     PnpQueryRebalanceWorker @ 0x14083F688 (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PipSetDevNodeState @ 0x140159DB8 (PipSetDevNodeState.c)
 *     PoFxActivateDevice @ 0x14015A06C (PoFxActivateDevice.c)
 *     PnpFindMountableDevice @ 0x14015A8F4 (PnpFindMountableDevice.c)
 *     PnpLockMountableDevice @ 0x1401699C8 (PnpLockMountableDevice.c)
 *     PiRebalanceOptOut @ 0x14028B5B0 (PiRebalanceOptOut.c)
 *     PipSetDevNodeFlags @ 0x1406E50FC (PipSetDevNodeFlags.c)
 *     PnpTraceQueryStopFailure @ 0x140839C0C (PnpTraceQueryStopFailure.c)
 *     IopQueryReconfiguration @ 0x14083B17C (IopQueryReconfiguration.c)
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
