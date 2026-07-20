/*
 * XREFs of memcpy_0 @ 0x1400101D7
 * Callers:
 *     SmpParseToken @ 0x140001CC0 (SmpParseToken.c)
 *     SmpConfigureSharedSessionData @ 0x140007620 (SmpConfigureSharedSessionData.c)
 *     SmpCopyListToSharedSection @ 0x140007B04 (SmpCopyListToSharedSection.c)
 *     SmpSaveRegistryValue_U @ 0x140009410 (SmpSaveRegistryValue_U.c)
 *     SmpConfigureEnvironment @ 0x14000CD10 (SmpConfigureEnvironment.c)
 *     SmpCheckFolderForRedirections @ 0x14000D9F4 (SmpCheckFolderForRedirections.c)
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x14000E130 (BasepGetVolumeDosLetterNameFromNTName.c)
 *     FindFirstFileExW @ 0x14000FB4C (FindFirstFileExW.c)
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x140012A20 (SmpComputeDesiredPfSizeBasedOnHistory.c)
 *     SmpConfigureS0InitCmd @ 0x1400151A0 (SmpConfigureS0InitCmd.c)
 *     SmpRenameTargetFile @ 0x140015B24 (SmpRenameTargetFile.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t MaxCount)
{
  return memcpy(a1, Src, MaxCount);
}
