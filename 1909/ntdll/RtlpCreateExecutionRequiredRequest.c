/*
 * XREFs of RtlpCreateExecutionRequiredRequest @ 0x1801043D4
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180075580 (RtlQueryProcessDebugInformation.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F093C (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtQueryInformationProcess @ 0x18009D1B0 (NtQueryInformationProcess.c)
 *     NtPowerInformation @ 0x18009DA60 (NtPowerInformation.c)
 */

NTSTATUS __fastcall RtlpCreateExecutionRequiredRequest(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  int v4; // ebx
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-9h] BYREF
  __int64 ProcessInformation[7]; // [rsp+78h] [rbp+17h] BYREF
  char v7; // [rsp+B0h] [rbp+4Fh]
  HANDLE Handle; // [rsp+D8h] [rbp+77h]

  ProcessInformation[0] = 64LL;
  result = NtQueryInformationProcess(a1, ProcessBasicInformation, ProcessInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    if ( (v7 & 0x40) != 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"QueryDebugInformation request");
      v4 = NtPowerInformation();
      if ( v4 >= 0 )
      {
        v4 = NtPowerInformation();
        if ( v4 >= 0 )
          *a2 = Handle;
        else
          NtClose(Handle);
      }
      return v4;
    }
    else
    {
      *a2 = 0LL;
      return 0;
    }
  }
  return result;
}
