/*
 * XREFs of IopSymlinkRemoveECP @ 0x140047174
 * Callers:
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140602F60 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkUpdateECP @ 0x1406CE888 (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x1406CEEB8 (IopGraftName.c)
 * Callees:
 *     FsRtlRemoveExtraCreateParameter @ 0x140602D10 (FsRtlRemoveExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkRemoveECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
