/*
 * XREFs of RtlGetSuiteMask @ 0x18002DCA0
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180009B00 (RtlQueryResourcePolicy.c)
 *     RtlGetVersion @ 0x18002D230 (RtlGetVersion.c)
 *     sub_18004B4D4 @ 0x18004B4D4 (sub_18004B4D4.c)
 *     sub_180062B70 @ 0x180062B70 (sub_180062B70.c)
 *     sub_180072D8C @ 0x180072D8C (sub_180072D8C.c)
 *     sub_180084FB8 @ 0x180084FB8 (sub_180084FB8.c)
 *     sub_1800EEE84 @ 0x1800EEE84 (sub_1800EEE84.c)
 *     sub_1800F0AF4 @ 0x1800F0AF4 (sub_1800F0AF4.c)
 *     sub_18010A6F0 @ 0x18010A6F0 (sub_18010A6F0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return NtCurrentPeb()->SharedData->SuiteMask;
  else
    return MEMORY[0x7FFE02D0];
}
