/*
 * XREFs of PnpDeviceCompletionProcessCompletedRequest @ 0x140702480
 * Callers:
 *     PipEnumerateDevice @ 0x140702370 (PipEnumerateDevice.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x140702BFC (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PnpStartDeviceNode @ 0x14071802C (PnpStartDeviceNode.c)
 * Callees:
 *     PipUpdatePostStartCharacteristics @ 0x1401452E0 (PipUpdatePostStartCharacteristics.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x140145580 (PnpDeviceCompletionRequestDestroy.c)
 *     PipSetDevNodeState @ 0x14014568C (PipSetDevNodeState.c)
 *     PoFxIdleDevice @ 0x1401457DC (PoFxIdleDevice.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     PiSwProcessParentStartIrp @ 0x1406FE940 (PiSwProcessParentStartIrp.c)
 *     _PnpSetObjectProperty @ 0x1407065F4 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PnpDeviceCompletionProcessCompletedRequest(__int64 a1)
{
  ULONG_PTR v2; // rbx
  int v3; // eax

  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 528) = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(v2 + 392) = *(_DWORD *)(a1 + 40);
  PipSetDevNodeState(v2, *(_DWORD *)(a1 + 32));
  if ( *(int *)(a1 + 40) >= 0 )
  {
    v3 = *(_DWORD *)(a1 + 32);
    if ( v3 == 774 || v3 == 779 )
    {
      PipUpdatePostStartCharacteristics(*(_QWORD *)(v2 + 32));
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(v2 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_DriverProblemDesc,
        0,
        0LL,
        0,
        0);
      PiSwProcessParentStartIrp(*(PDEVICE_OBJECT *)(v2 + 32));
    }
  }
  if ( *(_DWORD *)(a1 + 32) == 781 )
  {
    if ( (*(_DWORD *)(v2 + 704) & 0x80u) == 0 )
      KeBugCheckEx(0xCAu, 0xDuLL, v2, 0x80uLL, 0LL);
    PoFxIdleDevice(*(_QWORD *)(v2 + 32));
    *(_DWORD *)(v2 + 704) &= ~0x80u;
  }
  PnpDeviceCompletionRequestDestroy(a1);
  return *(unsigned int *)(v2 + 392);
}
