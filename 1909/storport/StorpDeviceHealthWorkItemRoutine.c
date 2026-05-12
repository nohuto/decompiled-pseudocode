/*
 * XREFs of StorpDeviceHealthWorkItemRoutine @ 0x1C00023B0
 * Callers:
 *     <none>
 * Callees:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0002468 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C00025F0 (StorpTelemetrySendUnitSmartAttributes.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00079F0 (RaUnitReleaseRemoveLock.c)
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1C0023EA0 (StorpTelemetrySendUnitScsiDiagnostics.c)
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C0050A84 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 */

void __fastcall StorpDeviceHealthWorkItemRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  _QWORD *DeviceExtension; // rbx
  __int64 v4; // rax
  unsigned int v5; // ecx
  int v6; // eax

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( *((_DWORD *)DeviceExtension + 123) == 1 )
  {
    v4 = DeviceExtension[218];
    if ( !v4 || !*(_DWORD *)(v4 + 16) )
    {
      v5 = *(_DWORD *)(DeviceExtension[3] + 4356LL);
      if ( v5 == 17 )
      {
        StorpTelemetrySendUnitNvmeHealthInfo(DeviceExtension);
      }
      else if ( (((v5 - 2) & 0xFFFFFFF6) != 0 || v5 == 10) && (*((_BYTE *)DeviceExtension + 450) & 0x10) == 0 )
      {
        if ( v5 <= 0x13 )
        {
          v6 = 525570;
          if ( _bittest(&v6, v5) )
            StorpTelemetrySendUnitScsiDiagnostics((int)DeviceExtension);
        }
      }
      else
      {
        StorpTelemetrySendUnitSmartAttributes(DeviceExtension);
        StorpTelemetrySendUnitDeviceStatistics(DeviceExtension);
      }
      *((_DWORD *)DeviceExtension + 498) |= 1u;
    }
  }
  RaUnitReleaseRemoveLock(DeviceExtension);
  IoFreeWorkItem(Context);
}
