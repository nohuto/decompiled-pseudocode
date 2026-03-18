/*
 * XREFs of PerfDiagpSaveActiveDCLLogFileName @ 0x1408B0C50
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140742AE0 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     NtTraceControl @ 0x1405C2F40 (NtTraceControl.c)
 *     RtlWriteRegistryValue @ 0x1406C2280 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x1406CF790 (RtlDeleteRegistryValue.c)
 */

void PerfDiagpSaveActiveDCLLogFileName()
{
  _WORD *ValueData; // rbx
  unsigned __int16 v1; // cx
  int v2; // [rsp+40h] [rbp+8h] BYREF

  ValueData = ExAllocatePoolWithTag(PagedPool, 0x20AuLL, 0x64465250u);
  if ( ValueData )
  {
    memset(dword_14040A7D0, 0, 0xB0uLL);
    wcscpy(&xmmword_14040A78C, L"WdiContextLog");
    dword_14040A7FC = 0x20000;
    RtlInitUnicodeString(&DestinationString, &xmmword_14040A78C);
    qword_14040A858 = (__int64)ValueData;
    word_14040A852 = 520;
    dword_14040A7D0[0] = 176;
    if ( (int)NtTraceControl(3u, dword_14040A7D0, 0xB0u, dword_14040A7D0, 0xB0u, &v2) < 0
      || (unsigned __int16)word_14040A850 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_14040A850 >> 1;
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
