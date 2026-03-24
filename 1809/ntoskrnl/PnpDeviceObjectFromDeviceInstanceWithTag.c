/*
 * XREFs of PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14059AC4C
 * Callers:
 *     NtReplacePartitionUnit @ 0x14032C5A0 (NtReplacePartitionUnit.c)
 *     PiControlGetPropertyData @ 0x1405874A0 (PiControlGetPropertyData.c)
 *     PiControlGetSetDeviceStatus @ 0x14059BD40 (PiControlGetSetDeviceStatus.c)
 *     PiGetDeviceDepth @ 0x1406C89A8 (PiGetDeviceDepth.c)
 *     PiSwIrpStartCreateWorker @ 0x1406D6E58 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpCleanup @ 0x1406D8A48 (PiSwIrpCleanup.c)
 *     PiSwProcessRemove @ 0x1406D8B4C (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x1406D9110 (PiSwCloseDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406DA64C (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x1406E3F14 (PiProcessNewDeviceNode.c)
 *     PipProcessDevNodeTree @ 0x1406E655C (PipProcessDevNodeTree.c)
 *     PiGetRelatedDevice @ 0x1406F882C (PiGetRelatedDevice.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1406FE4F4 (PnpIsDeviceInstanceEnabled.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14070A73C (IopDeviceObjectFromSymbolicName.c)
 *     IopProcessSetInterfaceState @ 0x14070F8F8 (IopProcessSetInterfaceState.c)
 *     IoReportDetectedDevice @ 0x14072D220 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407630B0 (PnpDriverLoadingFailed.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140829A40 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMCreateDevice @ 0x1408367B4 (PiCMCreateDevice.c)
 *     PiControlQueryConflictList @ 0x14083BD60 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x14083C164 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x14083C58C (PiQueryDeviceRelations.c)
 *     PiQueueDeviceRequest @ 0x14083C7E8 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14083C944 (PnpQueueQueryAndRemoveEvent.c)
 *     PipAddDevicesToBootDriverWorker @ 0x1409D83F4 (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140006BF0 (RtlLookupElementGenericTableAvl.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACDF0 (ObfReferenceObjectWithTag.c)
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
