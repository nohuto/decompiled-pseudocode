/*
 * XREFs of AcpiDiagOverrideAttribute @ 0x1C00490DC
 * Callers:
 *     ACPIInitRecordEmOverrides @ 0x1C00BC1BC (ACPIInitRecordEmOverrides.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 */

NTSTATUS __fastcall AcpiDiagOverrideAttribute(__int16 a1)
{
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-28h] BYREF
  __int16 v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1;
  v2.Ptr = (unsigned __int64)&v3;
  v2.Reserved = 0;
  v2.Size = 2;
  return EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_ACPI_OVERRIDE, 0LL, 1u, &v2);
}
