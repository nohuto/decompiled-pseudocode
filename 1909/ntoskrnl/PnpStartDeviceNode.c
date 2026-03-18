/*
 * XREFs of PnpStartDeviceNode @ 0x140719E1C
 * Callers:
 *     PipProcessStartPhase1 @ 0x140719D68 (PipProcessStartPhase1.c)
 *     PnpReallocateResources @ 0x140875B80 (PnpReallocateResources.c)
 *     PipProcessRestartPhase1 @ 0x14087C87C (PipProcessRestartPhase1.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     PnpDiagnosticTraceObject @ 0x14013E0AC (PnpDiagnosticTraceObject.c)
 *     PipUpdatePostStartCharacteristics @ 0x140145980 (PipUpdatePostStartCharacteristics.c)
 *     PipSetDevNodeState @ 0x140145D2C (PipSetDevNodeState.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x140145F4C (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PnpDeviceCompletionQueueAddDispatchedRequest @ 0x14014618C (PnpDeviceCompletionQueueAddDispatchedRequest.c)
 *     PnpTraceStartDevice @ 0x1401542FC (PnpTraceStartDevice.c)
 *     PnpStartDevice @ 0x140158FA4 (PnpStartDevice.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x140159274 (PpMarkDeviceStackExtensionFlag.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PiSwProcessParentStartIrp @ 0x140700720 (PiSwProcessParentStartIrp.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140704260 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1407043BC (PnpDeviceCompletionRequestCreate.c)
 *     _PnpSetObjectProperty @ 0x1407083D4 (_PnpSetObjectProperty.c)
 *     IopGetSessionIdFromPDO @ 0x14071A010 (IopGetSessionIdFromPDO.c)
 */

__int64 __fastcall PnpStartDeviceNode(__int64 a1, int a2, int a3)
{
  int v6; // ebp
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  int started; // ebx
  __int64 v12; // r8
  _QWORD v13[6]; // [rsp+50h] [rbp-38h] BYREF

  memset(v13, 0, 0x28uLL);
  v6 = a2 != 0 ? 5 : 0;
  if ( !a2 && (unsigned int)IopGetSessionIdFromPDO(*(_QWORD *)(a1 + 32)) != -1 )
    PpMarkDeviceStackExtensionFlag(*(_QWORD *)(a1 + 32), 1024, 1);
  if ( a3
    || (PnpAsyncOptions & 1) == 0
    || (*(_DWORD *)(a1 + 396) & 0x400000) != 0
    || (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x4000) != 0
    || InitSafeBootMode
    || (v7 = PnpDeviceCompletionRequestCreate(a1, v6 + 774)) == 0LL )
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceStart_Start, (unsigned __int16 *)(a1 + 40));
    v13[0] = 0LL;
    LODWORD(v13[4]) = -1073741823;
    KeInitializeEvent((PRKEVENT)&v13[1], SynchronizationEvent, 0);
    started = PnpStartDevice(*(_QWORD *)(a1 + 32), (__int64)PnpDiagnosticCompletionRoutine, (__int64)v13);
    if ( started == 259 )
    {
      KeWaitForSingleObject(&v13[1], Executive, 0, 0, 0LL);
      started = v13[4];
    }
    if ( started >= 0 )
    {
      PipUpdatePostStartCharacteristics(*(_QWORD *)(a1 + 32));
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1u,
        0LL,
        0LL,
        (__int64)&DEVPKEY_Device_DriverProblemDesc,
        0,
        0LL,
        0,
        0);
      PiSwProcessParentStartIrp(*(PDEVICE_OBJECT *)(a1 + 32));
    }
    v12 = v13[0];
    *(_DWORD *)(a1 + 392) = started;
    PnpTraceStartDevice(a1, (unsigned int)started, v12);
    PipSetDevNodeState(a1, v6 + 774);
  }
  else
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceStart_Start, (unsigned __int16 *)(a1 + 40));
    PipSetDevNodeState(a1, 773);
    *(_DWORD *)(a1 + 392) = 259;
    PnpDeviceCompletionQueueAddDispatchedRequest(v8, v7);
    started = PnpStartDevice(*(_QWORD *)(a1 + 32), (__int64)PnpDeviceCompletionRoutine, (__int64)v7);
    if ( started == 259 )
    {
      PnpDiagnosticTraceObject(&KMPnPEvt_DeviceStart_Pend, (unsigned __int16 *)(a1 + 40));
    }
    else
    {
      PnpDeviceCompletionQueueRemoveCompletedRequest(v9, v7);
      return (unsigned int)PnpDeviceCompletionProcessCompletedRequest((__int64)v7);
    }
  }
  return (unsigned int)started;
}
