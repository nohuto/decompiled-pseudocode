/*
 * XREFs of RtlIsDosDeviceName_U @ 0x1800292C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsDosDeviceName_Ustr @ 0x1800285E0 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 */

ULONG __cdecl RtlIsDosDeviceName_U(PCWSTR DosFileName)
{
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, DosFileName) < 0 )
    return 0;
  else
    return RtlpIsDosDeviceName_Ustr((__int64)&DestinationString);
}
