/*
 * XREFs of sub_18005A5EC @ 0x18005A5EC
 * Callers:
 *     sub_18005A3AC @ 0x18005A3AC (sub_18005A3AC.c)
 *     sub_18005AAF0 @ 0x18005AAF0 (sub_18005AAF0.c)
 *     RtlDoesFileExists_U @ 0x18005D8B0 (RtlDoesFileExists_U.c)
 *     sub_180088680 @ 0x180088680 (sub_180088680.c)
 *     RtlDosSearchPath_U @ 0x18008A1B0 (RtlDosSearchPath_U.c)
 * Callees:
 *     sub_180025E00 @ 0x180025E00 (sub_180025E00.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 */

bool __fastcall sub_18005A5EC(PCWSTR SourceString, char a2)
{
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  return RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0 && sub_180025E00((int)&DestinationString, a2);
}
