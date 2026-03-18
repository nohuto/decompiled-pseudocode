/*
 * XREFs of ACPIBuildCompleteMustSucceed @ 0x1C00159F0
 * Callers:
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0014CC0 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C0014EA0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C0015080 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C0015120 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C0015230 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C00152A0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C0015480 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0015580 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C0015960 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C002B3F0 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C002B600 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002F1B0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C002F730 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C002FF10 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C002FFF0 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C004A3C0 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C004A6C0 (ACPIBuildProcessThermalZoneUid.c)
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C001A29C (ACPIBuildCompleteCommon.c)
 */

void __fastcall ACPIBuildCompleteMustSucceed(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, __int64 a4)
{
  signed __int32 v4; // r8d
  unsigned int v5; // eax
  KIRQL v6; // bl
  int v7; // edx

  v4 = *(_DWORD *)(a4 + 32);
  if ( a2 == -1073741738 )
  {
    *(_DWORD *)(a4 + 48) = -1073741738;
    ACPIBuildCompleteCommon(a4 + 24, 2LL);
  }
  else
  {
    v5 = 0;
    if ( a2 < 0 )
    {
      *(_DWORD *)(a4 + 48) = a2;
      if ( BugCheckParameter2 )
        v5 = *(_DWORD *)(*(_QWORD *)BugCheckParameter2 + 40LL);
      KeBugCheckEx(0xA5u, 3uLL, BugCheckParameter2, a2, v5);
    }
    *(_DWORD *)(a4 + 32) = 2;
    _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 24), v4, 1);
    v6 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v7 = AcpiBuildDpcFlags | 2;
    AcpiBuildDpcFlags = v7;
    if ( (v7 & 1) == 0 )
    {
      AcpiBuildDpcFlags = v7 | 1;
      KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
    }
    KeReleaseSpinLock(&AcpiBuildQueueLock, v6);
  }
}
