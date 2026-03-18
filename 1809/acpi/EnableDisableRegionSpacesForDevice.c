/*
 * XREFs of EnableDisableRegionSpacesForDevice @ 0x1C005A76C
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001010 (ACPIDispatchIrp.c)
 *     OSNotifyCreateOperationRegionWorker @ 0x1C0056BC0 (OSNotifyCreateOperationRegionWorker.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C00A9F20 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C00AA190 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x1C00AA300 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     EnableDisableDeviceRegionSpace @ 0x1C005A6D0 (EnableDisableDeviceRegionSpace.c)
 *     WPP_RECORDER_SF_sdqD @ 0x1C005AB50 (WPP_RECORDER_SF_sdqD.c)
 */

__int64 __fastcall EnableDisableRegionSpacesForDevice(__int64 a1, char a2)
{
  unsigned int v2; // ebp
  __int64 result; // rax
  __int64 i; // rbx
  unsigned int v7; // edi
  unsigned int v8; // eax
  int v9; // r8d
  int v10; // r14d
  const char *v11; // rdx

  v2 = 0;
  result = *(_DWORD *)(a1 + 620) & (unsigned int)AcpiRegisteredOpRegionMask;
  if ( (*(_DWORD *)(a1 + 620) & AcpiRegisteredOpRegionMask) != 0 )
  {
    ExAcquireFastMutex(&AcpiOpRegionLock);
    for ( i = AcpiOpRegionHandlerList; (__int64 *)i != &AcpiOpRegionHandlerList; i = *(_QWORD *)i )
    {
      v7 = *(_DWORD *)(i + 36);
      if ( v7 - 8 <= 1 )
      {
        v8 = v7 < 0x1F ? 1 << v7 : 0x80000000;
        if ( (v8 & *(_DWORD *)(a1 + 620)) != 0 )
        {
          v10 = EnableDisableDeviceRegionSpace(a1, v7, a2);
          if ( v10 < 0 )
          {
            v11 = "enable";
            if ( !a2 )
              v11 = "disable";
            WPP_RECORDER_SF_sdqD(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v11, v9, 13);
            v2 = v10;
          }
        }
      }
    }
    ExReleaseFastMutex(&AcpiOpRegionLock);
    return v2;
  }
  return result;
}
