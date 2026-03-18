/*
 * XREFs of _PnpCtxRegDeleteValue @ 0x1409335E0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140197DE0 (PipUpdateDeviceProducts.c)
 *     PiCMCreateDevice @ 0x140870890 (PiCMCreateDevice.c)
 *     DrvDbDeleteObjectSubKey @ 0x14093ECCC (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x1401C2690 (ZwDeleteValueKey.c)
 */

int __fastcall PnpCtxRegDeleteValue(__int64 a1, void *a2, const WCHAR *a3)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, a3);
  if ( result >= 0 )
    return ZwDeleteValueKey(a2, &DestinationString);
  return result;
}
