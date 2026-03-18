/*
 * XREFs of PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406A2B68
 * Callers:
 *     NtReplacePartitionUnit @ 0x14034DE40 (NtReplacePartitionUnit.c)
 *     PiPnpRtlCmActionCallback @ 0x1405BDA80 (PiPnpRtlCmActionCallback.c)
 *     PiControlGetPropertyData @ 0x1406A02E0 (PiControlGetPropertyData.c)
 *     PiGetRelatedDevice @ 0x1406A27CC (PiGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1406A2980 (PiControlGetSetDeviceStatus.c)
 *     PiGetDeviceDepth @ 0x1406A3310 (PiGetDeviceDepth.c)
 *     PipProcessDevNodeTree @ 0x14070265C (PipProcessDevNodeTree.c)
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 *     PiSwIrpStartCreateWorker @ 0x14071EF0C (PiSwIrpStartCreateWorker.c)
 *     IopInitializeDeviceInstanceKey @ 0x1407215E0 (IopInitializeDeviceInstanceKey.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14072304C (PnpIsDeviceInstanceEnabled.c)
 *     IopProcessSetInterfaceState @ 0x140731AA8 (IopProcessSetInterfaceState.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140735B00 (IopDeviceObjectFromSymbolicName.c)
 *     PiSwIrpCleanup @ 0x14074D3EC (PiSwIrpCleanup.c)
 *     PiSwCloseDevice @ 0x14074D4CC (PiSwCloseDevice.c)
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 *     PiSwProcessRemove @ 0x14078083C (PiSwProcessRemove.c)
 *     PnpDriverLoadingFailed @ 0x140788FD4 (PnpDriverLoadingFailed.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408641A0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x140871190 (PiCMCreateDevice.c)
 *     PiControlQueryConflictList @ 0x140876EC0 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x1408772E0 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x1408776E8 (PiQueryDeviceRelations.c)
 *     PiQueueDeviceRequest @ 0x14087798C (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x140877AF4 (PnpQueueQueryAndRemoveEvent.c)
 *     PipAddDevicesToBootDriverWorker @ 0x140A1AC18 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1400028D0 (RtlLookupElementGenericTableAvl.c)
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 */

_QWORD *__fastcall PnpDeviceObjectFromDeviceInstanceWithTag(__int64 a1, ULONG a2)
{
  _QWORD *v2; // rbx
  _QWORD **v4; // rax
  __int64 v5; // rcx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = a1;
  v2 = 0LL;
  Buffer[0] = 0LL;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  v4 = (_QWORD **)RtlLookupElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  if ( v4 )
  {
    v2 = *v4;
    if ( *v4 )
    {
      if ( *(_WORD *)v2 == 3 )
      {
        v5 = *(_QWORD *)(v2[39] + 40LL);
        if ( !v5 || *(_QWORD **)(v5 + 32) != v2 )
          v2 = 0LL;
        if ( v2 )
          ObfReferenceObjectWithTag(v2, a2);
      }
      else
      {
        v2 = 0LL;
      }
    }
  }
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  return v2;
}
