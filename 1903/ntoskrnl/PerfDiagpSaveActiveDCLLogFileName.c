/*
 * XREFs of PerfDiagpSaveActiveDCLLogFileName @ 0x1408EE0D0
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14071D9A0 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     NtTraceControl @ 0x1406865C0 (NtTraceControl.c)
 *     RtlWriteRegistryValue @ 0x1406E2D20 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x14073ACC0 (RtlDeleteRegistryValue.c)
 */

void PerfDiagpSaveActiveDCLLogFileName()
{
  _WORD *ValueData; // rbx
  unsigned __int16 v1; // cx
  char v2; // [rsp+40h] [rbp+8h] BYREF

  ValueData = ExAllocatePoolWithTag(PagedPool, 0x20AuLL, 0x64465250u);
  if ( ValueData )
  {
    memset(dword_140432EF0, 0, 0xB0uLL);
    wcscpy(&xmmword_140432ECC, L"WdiContextLog");
    dword_140432F1C = 0x20000;
    RtlInitUnicodeString(&DestinationString, &xmmword_140432ECC);
    qword_140432F78 = (__int64)ValueData;
    word_140432F72 = 520;
    dword_140432EF0[0] = 176;
    if ( (int)NtTraceControl(3u, (char *)dword_140432EF0, 0xB0u, dword_140432EF0, 0xB0u, (unsigned __int64)&v2) < 0
      || (unsigned __int16)word_140432F70 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_140432F70 >> 1;
      ValueData[v1] = 0;
      RtlWriteRegistryValue(
        2u,
        L"Diagnostics\\Performance",
        L"ActiveShutdownDCL",
        1u,
        ValueData,
        2 * (unsigned __int16)(v1 + 1));
    }
    ExFreePoolWithTag(ValueData, 0);
  }
  else
  {
    RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
  }
}
