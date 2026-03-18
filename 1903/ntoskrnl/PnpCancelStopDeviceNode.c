/*
 * XREFs of PnpCancelStopDeviceNode @ 0x14087AE38
 * Callers:
 *     PnpCancelStopDeviceSubtree @ 0x14087AEC8 (PnpCancelStopDeviceSubtree.c)
 *     PnpQueryRebalanceWorker @ 0x14087B0C8 (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PoFxIdleDevice @ 0x1401457DC (PoFxIdleDevice.c)
 *     PnpUnlockMountableDevice @ 0x140170A88 (PnpUnlockMountableDevice.c)
 *     PipRestoreDevNodeState @ 0x140173CB4 (PipRestoreDevNodeState.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     PipClearDevNodeFlags @ 0x140707494 (PipClearDevNodeFlags.c)
 *     IopQueryReconfiguration @ 0x140875F20 (IopQueryReconfiguration.c)
 */

__int64 __fastcall PnpCancelStopDeviceNode(ULONG_PTR BugCheckParameter2)
{
  struct _DEVICE_OBJECT *v2; // rdx
  __int64 result; // rax

  if ( *(_DWORD *)(BugCheckParameter2 + 300) == 777 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 704) & 0x20) == 0 )
      KeBugCheckEx(0xCAu, 0xDuLL, BugCheckParameter2, 0x20uLL, 0LL);
    PoFxIdleDevice(*(_QWORD *)(BugCheckParameter2 + 32));
    v2 = *(struct _DEVICE_OBJECT **)(BugCheckParameter2 + 32);
    *(_DWORD *)(BugCheckParameter2 + 704) &= ~0x20u;
    IopQueryReconfiguration(6, v2);
    result = PipRestoreDevNodeState(BugCheckParameter2);
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x1000000) != 0 )
    {
      PnpUnlockMountableDevice(*(_QWORD *)(BugCheckParameter2 + 32));
      return PipClearDevNodeFlags(BugCheckParameter2, 0x1000000);
    }
  }
  return result;
}
