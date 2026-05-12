/*
 * XREFs of StorpDeviceHealthWorkItemRoutine @ 0x1C00108E0
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0009540 (RaUnitReleaseRemoveLock.c)
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0010994 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C0010E10 (StorpTelemetrySendUnitSmartAttributes.c)
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1C002AE30 (StorpTelemetrySendUnitScsiDiagnostics.c)
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C005159C (StorpTelemetrySendUnitNvmeHealthInfo.c)
 */

void __fastcall StorpDeviceHealthWorkItemRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  void *DeviceExtension; // rbx
  __int64 v4; // rax
  unsigned int v5; // ecx
  int v6; // eax

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( *((_DWORD *)DeviceExtension + 123) == 1 )
  {
    v4 = *((_QWORD *)DeviceExtension + 218);
    if ( !v4 || !*(_DWORD *)(v4 + 16) )
    {
      v5 = *((_DWORD *)DeviceExtension + 818);
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
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
  IoFreeWorkItem(Context);
}
