/*
 * XREFs of PnpDeviceCompletionProcessCompletedRequest @ 0x1406E90C4
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1406E7D90 (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PipEnumerateDevice @ 0x1406E91B0 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1406ECCFC (PnpStartDeviceNode.c)
 * Callees:
 *     PnpDeviceCompletionRequestDestroy @ 0x140159D80 (PnpDeviceCompletionRequestDestroy.c)
 *     PipSetDevNodeState @ 0x140159ED8 (PipSetDevNodeState.c)
 *     PoFxIdleDevice @ 0x14015A028 (PoFxIdleDevice.c)
 *     PipUpdatePostStartCharacteristics @ 0x140160498 (PipUpdatePostStartCharacteristics.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _PnpSetObjectProperty @ 0x1406E68C4 (_PnpSetObjectProperty.c)
 *     PiSwProcessParentStartIrp @ 0x1406ECC7C (PiSwProcessParentStartIrp.c)
 */

__int64 __fastcall PnpDeviceCompletionProcessCompletedRequest(PVOID P)
{
  ULONG_PTR v2; // rbx
  int v3; // eax

  v2 = *((_QWORD *)P + 2);
  *(_QWORD *)(v2 + 528) = *((_QWORD *)P + 6);
  *(_DWORD *)(v2 + 392) = *((_DWORD *)P + 10);
  PipSetDevNodeState(v2, *((_DWORD *)P + 8));
  if ( *((int *)P + 10) >= 0 )
  {
    v3 = *((_DWORD *)P + 8);
    if ( v3 == 774 || v3 == 779 )
    {
      PipUpdatePostStartCharacteristics(*(_QWORD *)(v2 + 32));
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(v2 + 48),
        1u,
        0LL,
        0LL,
        (__int64)&DEVPKEY_Device_DriverProblemDesc,
        0,
        0LL,
        0,
        0);
      PiSwProcessParentStartIrp(*(PDEVICE_OBJECT *)(v2 + 32));
    }
  }
  if ( *((_DWORD *)P + 8) == 781 )
  {
    if ( (*(_DWORD *)(v2 + 704) & 0x80u) == 0 )
      KeBugCheckEx(0xCAu, 0xDuLL, v2, 0x80uLL, 0LL);
    PoFxIdleDevice(*(_QWORD *)(v2 + 32));
    *(_DWORD *)(v2 + 704) &= ~0x80u;
  }
  PnpDeviceCompletionRequestDestroy(P);
  return *(unsigned int *)(v2 + 392);
}
