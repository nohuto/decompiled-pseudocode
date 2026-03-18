/*
 * XREFs of RtlIsNonEmptyDirectoryReparsePointAllowed @ 0x1401341F0
 * Callers:
 *     FsRtlIsNonEmptyDirectoryReparsePointAllowed @ 0x1401341D0 (FsRtlIsNonEmptyDirectoryReparsePointAllowed.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlIsNonEmptyDirectoryReparsePointAllowed(int a1)
{
  return (a1 & 0x10000000) != 0 || a1 == -2147483624;
}
