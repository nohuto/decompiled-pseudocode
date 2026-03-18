/*
 * XREFs of IopSymlinkRemoveECP @ 0x140047214
 * Callers:
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140604A70 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkUpdateECP @ 0x1406CD628 (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x1406CDC58 (IopGraftName.c)
 * Callees:
 *     FsRtlRemoveExtraCreateParameter @ 0x140604820 (FsRtlRemoveExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkRemoveECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
