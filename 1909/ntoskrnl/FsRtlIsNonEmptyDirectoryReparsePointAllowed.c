/*
 * XREFs of FsRtlIsNonEmptyDirectoryReparsePointAllowed @ 0x140133C40
 * Callers:
 *     <none>
 * Callees:
 *     RtlIsNonEmptyDirectoryReparsePointAllowed @ 0x140133C60 (RtlIsNonEmptyDirectoryReparsePointAllowed.c)
 */

BOOLEAN __fastcall FsRtlIsNonEmptyDirectoryReparsePointAllowed(ULONG a1)
{
  return RtlIsNonEmptyDirectoryReparsePointAllowed(a1);
}
