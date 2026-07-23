/*
 * XREFs of KiInterruptThunk @ 0x1401C7D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KiInterruptThunk()
{
  return FsRtlTruncateSmallMcb();
}
