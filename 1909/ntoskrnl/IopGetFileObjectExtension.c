/*
 * XREFs of IopGetFileObjectExtension @ 0x14000A970
 * Callers:
 *     IopSetLockOperationProcess @ 0x14000672C (IopSetLockOperationProcess.c)
 *     IoGetSilo @ 0x140009AE0 (IoGetSilo.c)
 *     IoGetOplockKeyContextEx @ 0x14000A2E0 (IoGetOplockKeyContextEx.c)
 *     CcInitializeCacheMapEx @ 0x14000D930 (CcInitializeCacheMapEx.c)
 *     IoSetOplockPrivateFoExt @ 0x140010CA0 (IoSetOplockPrivateFoExt.c)
 *     IopGetSetSpecificExtension @ 0x14009A238 (IopGetSetSpecificExtension.c)
 *     NtSetInformationFile @ 0x14009B240 (NtSetInformationFile.c)
 *     IoChangeFileObjectFilterContext @ 0x140116564 (IoChangeFileObjectFilterContext.c)
 *     IoGetInitiatorProcess @ 0x14013D070 (IoGetInitiatorProcess.c)
 *     IoSetOplockKeyContext @ 0x14016D4D4 (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x140298240 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x140298350 (IoGetOplockKeyContext.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1402998F0 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopCloseFile @ 0x1405D8DF0 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x1405F3250 (IopSynchronousServiceTail.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140604A70 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkCreateECP @ 0x1406CD944 (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x1406CDC58 (IopGraftName.c)
 *     IopOpenLinkOrRenameTarget @ 0x1406DF314 (IopOpenLinkOrRenameTarget.c)
 *     IopSetFileObjectIosbRange @ 0x1408546E4 (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x1408558D0 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopGetFileObjectExtension(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD **)(a1 + 208);
  if ( !v3 )
  {
    if ( a3 )
      *a3 = 0LL;
    return 0LL;
  }
  if ( v3 == IopRevocationExtension )
    return 0LL;
  result = v3[a2 + 1];
  if ( a3 )
    *a3 = v3;
  return result;
}
