/*
 * XREFs of HvpGenerateLogEntryMetadata @ 0x14008D17C
 * Callers:
 *     HvpGenerateLogEntry @ 0x1406410A4 (HvpGenerateLogEntry.c)
 * Callees:
 *     HvpCopyDataToOffsetArray @ 0x14008B83C (HvpCopyDataToOffsetArray.c)
 *     HvpGenerateLogMetadata @ 0x140641324 (HvpGenerateLogMetadata.c)
 */

_UNKNOWN **__fastcall HvpGenerateLogEntryMetadata(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int *a5,
        __int64 a6,
        int a7)
{
  __int64 v9; // r9

  HvpGenerateLogMetadata((PRTL_BITMAP)(a1 + 88));
  return HvpCopyDataToOffsetArray(a6, 8 * a7, a2, v9, a4, a5);
}
