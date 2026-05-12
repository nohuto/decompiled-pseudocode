/*
 * XREFs of StorpDeviceHealthWorkItemRoutine @ 0x1C0002400
 * Callers:
 *     <none>
 * Callees:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0002484 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C000260C (StorpTelemetrySendUnitSmartAttributes.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00079A0 (RaUnitReleaseRemoveLock.c)
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C004F914 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 */

void __fastcall StorpDeviceHealthWorkItemRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  _QWORD *DeviceExtension; // rbx
  __int64 v4; // rax
  void *v5; // rcx

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( *((_DWORD *)DeviceExtension + 51) == 1 )
  {
    v4 = DeviceExtension[186];
    if ( !v4 || !*(_DWORD *)(v4 + 16) )
    {
      v5 = DeviceObject->DeviceExtension;
      if ( *(_DWORD *)(DeviceExtension[3] + 4356LL) == 17 )
      {
        StorpTelemetrySendUnitNvmeHealthInfo(v5);
      }
      else
      {
        StorpTelemetrySendUnitSmartAttributes(v5);
        StorpTelemetrySendUnitDeviceStatistics(DeviceExtension);
      }
      *((_DWORD *)DeviceExtension + 434) |= 1u;
    }
  }
  RaUnitReleaseRemoveLock(DeviceExtension);
  IoFreeWorkItem(Context);
}
