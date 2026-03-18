/*
 * XREFs of PcisuppReleasePciInterfaces @ 0x1C00B22C0
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C004B990 (ACPIBusIrpRemoveDevice.c)
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C000238C (ACPIInternalClearFlags.c)
 *     WPP_RECORDER_SF_qss @ 0x1C001D35C (WPP_RECORDER_SF_qss.c)
 *     ACPIWakeReleasePmeRouting @ 0x1C005FF70 (ACPIWakeReleasePmeRouting.c)
 *     PcisuppReleasePciRouting @ 0x1C00B23BC (PcisuppReleasePciRouting.c)
 */

void __fastcall PcisuppReleasePciInterfaces(_QWORD *a1)
{
  __int64 v2; // rdx
  const char *v3; // rax
  const char *v4; // rcx

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
      v3 = byte_1C006E28A;
      v4 = byte_1C006E28A;
      if ( (v2 & 0x200000000000LL) != 0 )
      {
        v3 = (const char *)a1[70];
        if ( (v2 & 0x400000000000LL) != 0 )
          v4 = (const char *)a1[71];
      }
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
