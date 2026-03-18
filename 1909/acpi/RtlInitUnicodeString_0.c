/*
 * XREFs of RtlInitUnicodeString_0 @ 0x1C003173D
 * Callers:
 *     ArbpGetRegistryValue @ 0x1C009E584 (ArbpGetRegistryValue.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlInitUnicodeString_0(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  RtlInitUnicodeString(DestinationString, SourceString);
}
