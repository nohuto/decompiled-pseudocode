/*
 * XREFs of PfpSetParameter @ 0x140777860
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406A7D58 (PfSetSuperfetchInformation.c)
 *     PfpSetBaseTime @ 0x1407777CC (PfpSetBaseTime.c)
 *     PfpParametersInitialize @ 0x140A18E98 (PfpParametersInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
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
