/*
 * XREFs of PerfDiagpSaveActiveDCLLogFileName @ 0x1408ED9E0
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14071F830 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     NtTraceControl @ 0x14064C530 (NtTraceControl.c)
 *     RtlWriteRegistryValue @ 0x1406E41C0 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x14073CC20 (RtlDeleteRegistryValue.c)
 */

void PerfDiagpSaveActiveDCLLogFileName()
{
  _WORD *PoolWithTag; // rbx
  unsigned __int16 v1; // cx
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20AuLL, 0x64465250u);
  if ( PoolWithTag )
  {
    memset(&OutputBuffer, 0, 0xB0uLL);
    wcscpy(&xmmword_140432E6C, L"WdiContextLog");
    dword_140432EBC = 0x20000;
    RtlInitUnicodeString(&DestinationString, &xmmword_140432E6C);
    qword_140432F18 = (__int64)PoolWithTag;
    word_140432F12 = 520;
    OutputBuffer = 176;
    if ( NtTraceControl(EtwQueryLoggerCode, &OutputBuffer, 0xB0u, &OutputBuffer, 0xB0u, &ReturnLength) < 0
      || (unsigned __int16)word_140432F10 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_140432F10 >> 1;
      PoolWithTag[v1] = 0;
      RtlWriteRegistryValue(
        2u,
        L"Diagnostics\\Performance",
        L"ActiveShutdownDCL",
        1u,
        PoolWithTag,
        2 * (unsigned __int16)(v1 + 1));
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
  }
}
