/*
 * XREFs of PerfDiagpSaveActiveDCLLogFileName @ 0x1408B1E90
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140743CB0 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     NtTraceControl @ 0x1405C3F40 (NtTraceControl.c)
 *     RtlWriteRegistryValue @ 0x1406C3500 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x1406D0A10 (RtlDeleteRegistryValue.c)
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
    wcscpy(&xmmword_14040B80C, L"WdiContextLog");
    dword_14040B87C = 0x20000;
    RtlInitUnicodeString(&DestinationString, &xmmword_14040B80C);
    qword_14040B8D8 = (__int64)PoolWithTag;
    word_14040B8D2 = 520;
    OutputBuffer = 176;
    if ( NtTraceControl(EtwQueryLoggerCode, &OutputBuffer, 0xB0u, &OutputBuffer, 0xB0u, &ReturnLength) < 0
      || (unsigned __int16)word_14040B8D0 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_14040B8D0 >> 1;
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
