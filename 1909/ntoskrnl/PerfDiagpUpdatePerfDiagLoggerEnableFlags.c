/*
 * XREFs of PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1407897EC
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14071F830 (PerfDiagpProxyWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlpQueryRegistryValues @ 0x1405C1D18 (RtlpQueryRegistryValues.c)
 *     NtTraceControl @ 0x14064C530 (NtTraceControl.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x14071FA78 (PerfDiagpInitializeLoggerInfo.c)
 */

NTSTATUS __fastcall PerfDiagpUpdatePerfDiagLoggerEnableFlags(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  unsigned int v4; // ebx
  ULONG ReturnLength[4]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v6[14]; // [rsp+40h] [rbp-59h] BYREF
  size_t Size[6]; // [rsp+B0h] [rbp+17h] BYREF

  memset(Size, 0, sizeof(Size));
  memset(v6, 0, sizeof(v6));
  LODWORD(v6[1]) = 32;
  v6[2] = a2;
  v6[3] = Size;
  LODWORD(v6[4]) = 3;
  LODWORD(Size[0]) = 48;
  result = RtlpQueryRegistryValues(2u, L"Diagnostics\\Performance\\BootCKCLSettings", (__int64)v6, 0LL);
  if ( result >= 0 )
  {
    if ( HIDWORD(Size[0]) == 3 )
    {
      v4 = Size[0];
      if ( LODWORD(Size[0]) > 0x28 )
      {
        return -1073741789;
      }
      else
      {
        memmove(&unk_140432F48, &Size[1], LODWORD(Size[0]));
        PerfDiagpInitializeLoggerInfo(1, v4 >> 2);
        return NtTraceControl(
                 EtwUpdateLoggerCode,
                 &OutputBuffer,
                 OutputBuffer,
                 &OutputBuffer,
                 OutputBuffer,
                 ReturnLength);
      }
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
