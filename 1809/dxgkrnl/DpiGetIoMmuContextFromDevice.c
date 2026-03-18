/*
 * XREFs of DpiGetIoMmuContextFromDevice @ 0x1C0049348
 * Callers:
 *     DpiAddMemoryTracker @ 0x1C0049288 (DpiAddMemoryTracker.c)
 *     DpiMapMemoryTrackersToIoMmu @ 0x1C00495BC (DpiMapMemoryTrackersToIoMmu.c)
 *     DpiRemoveMemoryTracker @ 0x1C004966C (DpiRemoveMemoryTracker.c)
 *     ?MapHardwareReservedRangesToIoMmu@DXGADAPTER@@QEAAJXZ @ 0x1C01BE2B4 (-MapHardwareReservedRangesToIoMmu@DXGADAPTER@@QEAAJXZ.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C01C646C (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 *     DpiMapIommuContiguous @ 0x1C02630D0 (DpiMapIommuContiguous.c)
 *     DpiMapIommuIdentityRange @ 0x1C0263110 (DpiMapIommuIdentityRange.c)
 *     DpiUnmapIommuContiguous @ 0x1C0263460 (DpiUnmapIommuContiguous.c)
 *     DpiUnmapIommuIdentityRange @ 0x1C02634A0 (DpiUnmapIommuIdentityRange.c)
 *     DpiCreateIoMmuDomain @ 0x1C026CB98 (DpiCreateIoMmuDomain.c)
 *     DpiDeleteIoMmuDomain @ 0x1C026CC20 (DpiDeleteIoMmuDomain.c)
 *     DpiDetachIoMmuDomain @ 0x1C026CC90 (DpiDetachIoMmuDomain.c)
 * Callees:
 *     DpiGetFdoFromDevice @ 0x1C001DF58 (DpiGetFdoFromDevice.c)
 */

__int64 __fastcall DpiGetIoMmuContextFromDevice(__int64 a1)
{
  __int64 v1; // rcx
  __int64 FdoFromDevice; // rbx
  __int64 v3; // rax

  FdoFromDevice = DpiGetFdoFromDevice(a1);
  if ( !FdoFromDevice )
  {
    v3 = WdLogNewEntry5_WdAssertion(v1);
    *(_QWORD *)(v3 + 24) = 69LL;
    WdLogEvent5_WdAssertion(v3);
  }
  return FdoFromDevice + 5440;
}
