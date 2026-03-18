/*
 * XREFs of ACPIThermalGetOverrideHandle @ 0x1C0095A5C
 * Callers:
 *     ACPIThermalWorker @ 0x1C0097860 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C0010510 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     OSOpenHandle @ 0x1C008D2B4 (OSOpenHandle.c)
 *     OSOpenUnicodeHandle @ 0x1C008D33C (OSOpenUnicodeHandle.c)
 */

void *__fastcall ACPIThermalGetOverrideHandle(__int64 a1)
{
  wchar_t *Buffer; // rcx
  struct _UNICODE_STRING v4; // [rsp+20h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+18h] BYREF
  void *v6; // [rsp+50h] [rbp+20h] BYREF

  Handle = 0LL;
  v6 = 0LL;
  Buffer = 0LL;
  *(_QWORD *)&v4.Length = 0LL;
  v4.Buffer = 0LL;
  if ( (AcpiOverrideAttributes & 0x10000) != 0 )
  {
    if ( (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 712), (__int64)&v4) >= 0
      && (int)OSOpenHandle(
                "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters\\ThermalOverride",
                0LL,
                (__int64)&Handle) >= 0 )
    {
      OSOpenUnicodeHandle(&v4, Handle, &v6);
    }
    if ( Handle )
      ZwClose(Handle);
    Buffer = v4.Buffer;
  }
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  return v6;
}
