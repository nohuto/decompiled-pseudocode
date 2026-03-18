/*
 * XREFs of PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140670048
 * Callers:
 *     NtReplacePartitionUnit @ 0x14034D8A0 (NtReplacePartitionUnit.c)
 *     PiPnpRtlCmActionCallback @ 0x1405BDF50 (PiPnpRtlCmActionCallback.c)
 *     PiGetRelatedDevice @ 0x14066FCAC (PiGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x14066FE60 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetPropertyData @ 0x140671A60 (PiControlGetPropertyData.c)
 *     PiGetDeviceDepth @ 0x1406EADA0 (PiGetDeviceDepth.c)
 *     PipProcessDevNodeTree @ 0x14070443C (PipProcessDevNodeTree.c)
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 *     PiSwIrpStartCreateWorker @ 0x140720DAC (PiSwIrpStartCreateWorker.c)
 *     IopInitializeDeviceInstanceKey @ 0x140723480 (IopInitializeDeviceInstanceKey.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140724EEC (PnpIsDeviceInstanceEnabled.c)
 *     IopProcessSetInterfaceState @ 0x140733D08 (IopProcessSetInterfaceState.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140737D60 (IopDeviceObjectFromSymbolicName.c)
 *     PiSwIrpCleanup @ 0x14074DE7C (PiSwIrpCleanup.c)
 *     PiSwCloseDevice @ 0x14074DF5C (PiSwCloseDevice.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     PiSwProcessRemove @ 0x140782BA4 (PiSwProcessRemove.c)
 *     PnpDriverLoadingFailed @ 0x14078B434 (PnpDriverLoadingFailed.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408638A0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x140870890 (PiCMCreateDevice.c)
 *     PiControlQueryConflictList @ 0x1408765C0 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x1408769E0 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x140876DE8 (PiQueryDeviceRelations.c)
 *     PiQueueDeviceRequest @ 0x14087708C (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1408771F4 (PnpQueueQueryAndRemoveEvent.c)
 *     PipAddDevicesToBootDriverWorker @ 0x140A1AE90 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1400028D0 (RtlLookupElementGenericTableAvl.c)
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
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
