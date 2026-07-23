/*
 * XREFs of RtlIsDosDeviceName_U @ 0x18007C5C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x18000E580 (RtlpIsDosDeviceName_Ustr.c)
 */

ULONG __cdecl RtlIsDosDeviceName_U(PCWSTR DosFileName)
{
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, DosFileName) < 0 )
    return 0;
  else
    return RtlpIsDosDeviceName_Ustr((__int64)&DestinationString);
}
