/*
 * XREFs of _PnpCtxRegDeleteValue @ 0x140933B6C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140197780 (PipUpdateDeviceProducts.c)
 *     PiCMCreateDevice @ 0x140871190 (PiCMCreateDevice.c)
 *     DrvDbDeleteObjectSubKey @ 0x14093F25C (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x1401C1B10 (ZwDeleteValueKey.c)
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
