/*
 * XREFs of PcisuppReleasePciInterfaces @ 0x1C00B5C78
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C004D150 (ACPIBusIrpRemoveDevice.c)
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C0001854 (ACPIInternalClearFlags.c)
 *     WPP_RECORDER_SF_qss @ 0x1C001AA84 (WPP_RECORDER_SF_qss.c)
 *     ACPIWakeReleasePmeRouting @ 0x1C0061EF0 (ACPIWakeReleasePmeRouting.c)
 *     PcisuppReleasePciRouting @ 0x1C00B5D88 (PcisuppReleasePciRouting.c)
 */

void __fastcall PcisuppReleasePciInterfaces(_QWORD *a1)
{
  __int64 v2; // rcx
  const char *v3; // rax
  const char *v4; // rdx

  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(&PciRouteInterfaceLock, 1u);
  if ( (a1[119] & 2) != 0 )
  {
    ACPIInternalClearFlags(a1 + 119, 2LL);
    if ( _InterlockedExchangeAdd(&PciRoutingInterfaceCount, 0xFFFFFFFF) == 1 )
    {
      PcisuppReleasePciRouting();
      ACPIWakeReleasePmeRouting();
      v2 = a1[1];
      v3 = byte_1C006FE7D;
      v4 = byte_1C006FE7D;
      if ( (v2 & 0x200000000000LL) != 0 )
      {
        v3 = (const char *)a1[70];
        if ( (v2 & 0x400000000000LL) != 0 )
          v4 = (const char *)a1[71];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          5u,
          0xAu,
          (__int64)&WPP_285c744e3dfe3f46251b322a19f49ba8_Traceguids,
          (char)a1,
          v3,
          v4);
    }
  }
  ExReleaseResourceLite(&PciRouteInterfaceLock);
  KeLeaveCriticalRegion();
}
