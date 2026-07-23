/*
 * XREFs of IopSymlinkRemoveECP @ 0x1400B7AE8
 * Callers:
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x14063AFB0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkUpdateECP @ 0x1406ACF50 (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x1406AD50C (IopGraftName.c)
 * Callees:
 *     FsRtlRemoveExtraCreateParameter @ 0x14063A8E0 (FsRtlRemoveExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkRemoveECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
