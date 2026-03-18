/*
 * XREFs of PcwAddInstance @ 0x1406914E0
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x1405CD7B0 (ExProcessorCounterSetCallback.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x1408155AC (FsRtlAddDiskIOCounterInstance.c)
 *     FsRtlDiskIOCounterSetCallback @ 0x140815680 (FsRtlDiskIOCounterSetCallback.c)
 *     KiSynchCounterSetCallback @ 0x1408434F0 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140843600 (KiSynchNumaCounterSetCallback.c)
 *     PoThermalCounterSetCallback @ 0x14086C2A0 (PoThermalCounterSetCallback.c)
 *     EtwpEventTracingCounterSetCallback @ 0x1409085F0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14010DBCC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14010DBE4 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     ExpPcwDisabledStatus @ 0x1408D7178 (ExpPcwDisabledStatus.c)
 */

NTSTATUS __stdcall PcwAddInstance(PPCW_BUFFER Buffer, PCUNICODE_STRING Name, ULONG Id, ULONG Count, PPCW_DATA Data)
{
  unsigned __int64 ExtensionTable; // rax
  NTSTATUS v10; // ebx

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  if ( !ExtensionTable )
    return ExpPcwDisabledStatus();
  v10 = (*(__int64 (__fastcall **)(PPCW_BUFFER, PCUNICODE_STRING, _QWORD, _QWORD, PPCW_DATA))(ExtensionTable + 32))(
          Buffer,
          Name,
          Id,
          Count,
          Data);
  ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  return v10;
}
