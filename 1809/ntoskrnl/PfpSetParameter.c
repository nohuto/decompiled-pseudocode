/*
 * XREFs of PfpSetParameter @ 0x140752110
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140665898 (PfSetSuperfetchInformation.c)
 *     PfpSetBaseTime @ 0x14075207C (PfpSetBaseTime.c)
 *     PfpParametersInitialize @ 0x1409D472C (PfpParametersInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1401B8D70 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall PfpSetParameter(HANDLE KeyHandle, const WCHAR *a2, __int64 a3, void *a4, ULONG DataSize)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, a2);
  if ( KeyHandle )
    return ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, a4, DataSize);
  else
    return -1073741811;
}
