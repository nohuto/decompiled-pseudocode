/*
 * XREFs of AcpiDiagTraceActiveCoolingDevicePower @ 0x1C001474C
 * Callers:
 *     ACPIThermalUpdateConstraints @ 0x1C0014550 (ACPIThermalUpdateConstraints.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C0010510 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceActiveCoolingDevicePower(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  __int64 v7; // rcx
  unsigned __int16 v8; // [rsp+30h] [rbp-71h] BYREF
  __int16 v9; // [rsp+34h] [rbp-6Dh] BYREF
  __int16 v10; // [rsp+38h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-61h] BYREF
  struct _UNICODE_STRING v12; // [rsp+50h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-41h] BYREF
  wchar_t *Buffer; // [rsp+70h] [rbp-31h]
  int v15; // [rsp+78h] [rbp-29h]
  int v16; // [rsp+7Ch] [rbp-25h]
  int *v17; // [rsp+80h] [rbp-21h]
  int v18; // [rsp+88h] [rbp-19h]
  int v19; // [rsp+8Ch] [rbp-15h]
  int *v20; // [rsp+90h] [rbp-11h]
  int v21; // [rsp+98h] [rbp-9h]
  int v22; // [rsp+9Ch] [rbp-5h]
  __int16 *v23; // [rsp+A0h] [rbp-1h]
  int v24; // [rsp+A8h] [rbp+7h]
  int v25; // [rsp+ACh] [rbp+Bh]
  wchar_t *v26; // [rsp+B0h] [rbp+Fh]
  int v27; // [rsp+B8h] [rbp+17h]
  int v28; // [rsp+BCh] [rbp+1Bh]
  __int16 *v29; // [rsp+C0h] [rbp+1Fh]
  int v30; // [rsp+C8h] [rbp+27h]
  int v31; // [rsp+CCh] [rbp+2Bh]
  int v32; // [rsp+110h] [rbp+6Fh] BYREF
  int v33; // [rsp+118h] [rbp+77h] BYREF

  v33 = a4;
  v32 = a3;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v12, 0LL);
  if ( AcpiDiagHandle )
  {
    if ( EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_ACTIVE_COOLING_DEVICE_POWER) )
    {
      if ( (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 712), (__int64)&DestinationString) >= 0 )
      {
        v7 = *(_QWORD *)(a2 + 712);
        v8 = DestinationString.Length >> 1;
        if ( (int)ACPIAmliBuildObjectPathnameUnicode(v7, (__int64)&v12) >= 0 )
        {
          UserData.Reserved = 0;
          v16 = 0;
          v19 = 0;
          v22 = 0;
          v25 = 0;
          v28 = 0;
          UserData.Ptr = (unsigned __int64)&v8;
          Buffer = DestinationString.Buffer;
          v9 = v12.Length >> 1;
          v15 = 2 * v8;
          UserData.Size = 2;
          v17 = &v32;
          v20 = &v33;
          v23 = &v9;
          v26 = v12.Buffer;
          v18 = 4;
          v21 = 4;
          v31 = 0;
          v10 = a5 != 0;
          v29 = &v10;
          v24 = 2;
          v27 = 2 * (v12.Length >> 1);
          v30 = 2;
          EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_ACTIVE_COOLING_DEVICE_POWER, 0LL, 7u, &UserData);
        }
      }
    }
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v12.Buffer )
    ExFreePoolWithTag(v12.Buffer, 0);
}
