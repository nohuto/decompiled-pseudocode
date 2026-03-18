/*
 * XREFs of KiInterruptThunk @ 0x1401CED70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KiInterruptThunk()
{
  return FsRtlTruncateSmallMcb();
}
