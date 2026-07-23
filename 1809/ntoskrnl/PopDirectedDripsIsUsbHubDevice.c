/*
 * XREFs of PopDirectedDripsIsUsbHubDevice @ 0x14087DF00
 * Callers:
 *     PopDirectedDripsNotifyUsbDeviceStarted @ 0x14087DF50 (PopDirectedDripsNotifyUsbDeviceStarted.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 */

BOOLEAN __fastcall PopDirectedDripsIsUsbHubDevice(__int64 a1)
{
  BOOLEAN result; // al
  const UNICODE_STRING *v2; // rdi
  unsigned int i; // ebx

  result = 0;
  if ( a1 )
  {
    v2 = (const UNICODE_STRING *)(a1 + 40);
    for ( i = 0; i < 3; ++i )
    {
      result = RtlPrefixUnicodeString((PCUNICODE_STRING)&PopDirectedDripsUsbHubInstancePrefixes + i, v2, 0);
      if ( result )
        break;
    }
  }
  return result;
}
