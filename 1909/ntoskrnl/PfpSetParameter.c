/*
 * XREFs of PfpSetParameter @ 0x14077AE40
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406A75E8 (PfSetSuperfetchInformation.c)
 *     PfpSetBaseTime @ 0x14077ADAC (PfpSetBaseTime.c)
 *     PfpParametersInitialize @ 0x140A19358 (PfpParametersInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall PfpSetParameter(HANDLE KeyHandle, const WCHAR *a2, __int64 a3, void *a4, ULONG DataSize)
{
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  if ( KeyHandle )
    return ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, a4, DataSize);
  else
    return -1073741811;
}
