/*
 * XREFs of AcpiDiagTraceTemperatureTelemetry @ 0x1C00080F0
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C0008C54 (ACPIThermalLoopEx.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C000ABA0 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     _TlgWrite @ 0x1C001D690 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C001D730 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceTemperatureTelemetry(__int64 a1)
{
  __int64 v2; // rdi
  ULONGLONG v3; // rdx
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v6; // eax
  int v7; // [rsp+30h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  int *v10; // [rsp+70h] [rbp-9h]
  int v11; // [rsp+78h] [rbp-1h]
  int v12; // [rsp+7Ch] [rbp+3h]
  _DWORD *v13; // [rsp+80h] [rbp+7h]
  int v14; // [rsp+88h] [rbp+Fh]
  int v15; // [rsp+8Ch] [rbp+13h]
  wchar_t *Buffer; // [rsp+90h] [rbp+17h]
  _DWORD v17[2]; // [rsp+98h] [rbp+1Fh] BYREF
  _DWORD *v18; // [rsp+A0h] [rbp+27h]
  int v19; // [rsp+A8h] [rbp+2Fh]
  int v20; // [rsp+ACh] [rbp+33h]
  __int64 v21; // [rsp+B0h] [rbp+37h]
  _DWORD v22[2]; // [rsp+B8h] [rbp+3Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( AcpiDiagThermalTelemetryEnabled )
  {
    v2 = *(_QWORD *)(a1 + 200);
    if ( (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 712), &DestinationString, 1LL) >= 0
      && hProvider > 5u
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v3) )
    {
      v6 = *(_DWORD *)(v2 + 328);
      v12 = 0;
      v15 = 0;
      v17[1] = 0;
      v20 = 0;
      v22[1] = 0;
      v7 = v6;
      v10 = &v7;
      v13 = v17;
      Buffer = DestinationString.Buffer;
      v17[0] = DestinationString.Length;
      v18 = v22;
      v21 = *(_QWORD *)(v2 + 312);
      v22[0] = *(unsigned __int16 *)(v2 + 304);
      v11 = 4;
      v14 = 2;
      v19 = 2;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00722D1, v4, v5, 7u, &pData);
    }
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}
