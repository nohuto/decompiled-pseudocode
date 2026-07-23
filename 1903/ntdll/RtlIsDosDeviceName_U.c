/*
 * XREFs of RtlIsDosDeviceName_U @ 0x1800292C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800285E0 @ 0x1800285E0 (sub_1800285E0.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 */

ULONG __cdecl RtlIsDosDeviceName_U(PCWSTR DosFileName)
{
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, DosFileName) < 0 )
    return 0;
  else
    return sub_1800285E0((__int64)&DestinationString);
}
