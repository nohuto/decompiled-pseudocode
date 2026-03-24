/*
 * XREFs of IopSymlinkRemoveECP @ 0x1400B7BA8
 * Callers:
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140639F90 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkUpdateECP @ 0x1406ABCB0 (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x1406AC26C (IopGraftName.c)
 * Callees:
 *     FsRtlRemoveExtraCreateParameter @ 0x1406398C0 (FsRtlRemoveExtraCreateParameter.c)
 */

NTSTATUS __fastcall IopSymlinkRemoveECP(struct _ECP_LIST *a1, PVOID *a2)
{
  return FsRtlRemoveExtraCreateParameter(a1, &IopSymlinkECPGuid, a2, 0LL);
}
