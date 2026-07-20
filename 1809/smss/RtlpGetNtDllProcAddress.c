/*
 * XREFs of RtlpGetNtDllProcAddress @ 0x14000D8FC
 * Callers:
 *     GetSystemTimeAndBias @ 0x14000D738 (GetSystemTimeAndBias.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpGetNtDllProcAddress(void *a1)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING Name; // [rsp+30h] [rbp-18h] BYREF
  PVOID ProcedureAddress; // [rsp+50h] [rbp+8h] BYREF

  ProcedureAddress = a1;
  if ( (BaseAddress
     || (RtlInitUnicodeString(&DestinationString, L"ntdll.dll"),
         LdrGetDllHandle(0LL, 0LL, &DestinationString, &BaseAddress) >= 0))
    && (RtlInitAnsiString(&Name, "RtlGetSystemTimeAndBias"),
        LdrGetProcedureAddress(BaseAddress, &Name, 0, &ProcedureAddress) >= 0) )
  {
    return ProcedureAddress;
  }
  else
  {
    return 0LL;
  }
}
