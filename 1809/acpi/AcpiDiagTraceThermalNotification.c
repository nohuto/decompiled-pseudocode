/*
 * XREFs of AcpiDiagTraceThermalNotification @ 0x1C001198C
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C0012518 (ACPIThermalLoopEx.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C0010510 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceThermalNotification(_DWORD *a1, __int64 a2, __int16 a3)
{
  char *v6; // r9
  __int64 v7; // r11
  unsigned int v8; // kr00_4
  unsigned int v9; // kr04_4
  __int64 v10; // r10
  unsigned int *v11; // r8
  unsigned int v12; // kr08_4
  unsigned int v13; // kr0C_4
  const EVENT_DESCRIPTOR *v14; // rdx
  __int16 v15; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v17; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v19; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *Buffer; // [rsp+70h] [rbp-90h]
  int v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+7Ch] [rbp-84h]
  unsigned int *v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+88h] [rbp-78h]
  int v27; // [rsp+8Ch] [rbp-74h]
  unsigned int *v28; // [rsp+90h] [rbp-70h]
  int v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+9Ch] [rbp-64h]
  char v31; // [rsp+ACh] [rbp-54h] BYREF
  unsigned int *v32; // [rsp+140h] [rbp+40h]
  int v33; // [rsp+148h] [rbp+48h]
  int v34; // [rsp+14Ch] [rbp+4Ch]
  unsigned int *v35; // [rsp+150h] [rbp+50h]
  int v36; // [rsp+158h] [rbp+58h]
  int v37; // [rsp+15Ch] [rbp+5Ch]
  _DWORD v38[10]; // [rsp+160h] [rbp+60h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( AcpiDiagHandle
    && (a3 != 128 || EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_TEMPERATURE_NOTIFICATION))
    && (a3 != 129 || EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_TRIP_POINT_NOTIFICATION))
    && (unsigned __int16)(a3 - 128) <= 1u
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a2 + 712), (__int64)&DestinationString) >= 0 )
  {
    UserData.Reserved = 0;
    v6 = &v31;
    v24 = 0;
    v7 = 10LL;
    v27 = 0;
    v30 = 0;
    UserData.Ptr = (unsigned __int64)&v15;
    Buffer = DestinationString.Buffer;
    v8 = a1[4];
    v15 = DestinationString.Length >> 1;
    v25 = &v16;
    v16 = v8 / 0xA;
    v9 = a1[5];
    UserData.Size = 2;
    v17 = v9 / 0xA;
    v10 = 0LL;
    v23 = 2 * (DestinationString.Length >> 1);
    v26 = 4;
    v28 = &v17;
    v29 = 4;
    do
    {
      *(_DWORD *)v6 = 0;
      v11 = &v38[v10];
      *((_DWORD *)v6 - 1) = 4;
      *(_QWORD *)(v6 - 12) = v11;
      v12 = a1[v10 + 9];
      v10 = (unsigned int)(v10 + 1);
      v6 += 16;
      *v11 = v12 / 0xA;
      --v7;
    }
    while ( v7 );
    v34 = 0;
    v37 = 0;
    v32 = &v18;
    v18 = a1[7] / 0xAu;
    v13 = a1[19];
    v33 = 4;
    v35 = &v19;
    v19 = v13 / 0xA;
    v14 = &ACPI_ETW_EVENT_TEMPERATURE_NOTIFICATION;
    v36 = 4;
    if ( a3 != 128 )
      v14 = &ACPI_ETW_EVENT_TRIP_POINT_NOTIFICATION;
    EtwWrite(AcpiDiagHandle, v14, 0LL, 0x10u, &UserData);
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}
