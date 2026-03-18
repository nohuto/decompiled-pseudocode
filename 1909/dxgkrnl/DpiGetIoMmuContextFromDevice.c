/*
 * XREFs of DpiGetIoMmuContextFromDevice @ 0x1C0050688
 * Callers:
 *     DpiAddMemoryTracker @ 0x1C00505C4 (DpiAddMemoryTracker.c)
 *     DpiMapMemoryTrackersToIoMmu @ 0x1C0050950 (DpiMapMemoryTrackersToIoMmu.c)
 *     DpiRemoveMemoryTracker @ 0x1C0050A08 (DpiRemoveMemoryTracker.c)
 *     DpiResetIoMmuContext @ 0x1C0050A9C (DpiResetIoMmuContext.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C01F57CC (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 *     DpiMapIommuContiguous @ 0x1C029CFD0 (DpiMapIommuContiguous.c)
 *     DpiMapIommuIdentityRange @ 0x1C029D020 (DpiMapIommuIdentityRange.c)
 *     DpiUnmapIommuContiguous @ 0x1C029D5B0 (DpiUnmapIommuContiguous.c)
 *     DpiUnmapIommuIdentityRange @ 0x1C029D600 (DpiUnmapIommuIdentityRange.c)
 *     DpiDetachIoMmuDomain @ 0x1C02A8844 (DpiDetachIoMmuDomain.c)
 * Callees:
 *     DpiGetFdoFromDevice @ 0x1C001D9E4 (DpiGetFdoFromDevice.c)
 */

__int64 __fastcall DpiGetIoMmuContextFromDevice(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 FdoFromDevice; // rbx
  __int64 v4; // rax

  FdoFromDevice = DpiGetFdoFromDevice(a1);
  if ( !FdoFromDevice )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2, v1);
    *(_QWORD *)(v4 + 24) = 743LL;
    WdLogEvent5_WdAssertion(v4);
  }
  return FdoFromDevice + 5568;
}
