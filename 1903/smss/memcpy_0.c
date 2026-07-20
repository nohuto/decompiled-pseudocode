/*
 * XREFs of memcpy_0 @ 0x14000D637
 * Callers:
 *     SmpParseToken @ 0x140001CF0 (SmpParseToken.c)
 *     SmpConfigureSharedSessionData @ 0x140007608 (SmpConfigureSharedSessionData.c)
 *     SmpCopyListToSharedSection @ 0x140007AEC (SmpCopyListToSharedSection.c)
 *     SmpSaveRegistryValue_U @ 0x140009DF0 (SmpSaveRegistryValue_U.c)
 *     SmpConfigureEnvironment @ 0x14000C800 (SmpConfigureEnvironment.c)
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x14000FF34 (SmpComputeDesiredPfSizeBasedOnHistory.c)
 *     SmpConfigureS0InitCmd @ 0x1400126E0 (SmpConfigureS0InitCmd.c)
 *     SmpRenameTargetFile @ 0x14001300C (SmpRenameTargetFile.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t MaxCount)
{
  return memcpy(a1, Src, MaxCount);
}
