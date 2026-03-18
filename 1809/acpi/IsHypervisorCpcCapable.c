/*
 * XREFs of IsHypervisorCpcCapable @ 0x1C00B1300
 * Callers:
 *     ACPIRootInitialize @ 0x1C0095120 (ACPIRootInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     OSOpenUnicodeHandle @ 0x1C008D33C (OSOpenUnicodeHandle.c)
 *     OSGetRegistryValue @ 0x1C009271C (OSGetRegistryValue.c)
 */

bool IsHypervisorCpcCapable()
{
  int v0; // ebx
  int v2; // [rsp+20h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-40h] BYREF
  PVOID P; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF
  _BYTE SystemInformation[8]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  v0 = 1;
  if ( ZwQuerySystemInformation(SystemHypervisorInformation, SystemInformation, 0x10u, 0LL) >= 0
    && (v7 & 0x400) != 0
    && (int)HvlQueryActiveHypervisorProcessorCount(&v2) >= 0
    && KeQueryActiveProcessorCountEx(0xFFFFu) == v2 )
  {
    v0 = 0;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor");
    if ( (int)OSOpenUnicodeHandle(&DestinationString, 0LL, &Handle) >= 0 )
    {
      if ( OSGetRegistryValue(Handle, L"LegacyHvAlgorithm", &P) >= 0 )
      {
        if ( *((_DWORD *)P + 1) && *(_DWORD *)P == 4 )
          v0 = *((_DWORD *)P + 2);
        ExFreePoolWithTag(P, 0);
      }
      ZwClose(Handle);
    }
  }
  return v0 == 0;
}
