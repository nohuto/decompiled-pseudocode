/*
 * XREFs of IopGetFileObjectExtension @ 0x1400B78B0
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x140018830 (IoSetOplockPrivateFoExt.c)
 *     IopSetLockOperationProcess @ 0x14008C644 (IopSetLockOperationProcess.c)
 *     IopGetSetSpecificExtension @ 0x14008CFBC (IopGetSetSpecificExtension.c)
 *     CcInitializeCacheMapEx @ 0x1400ABF90 (CcInitializeCacheMapEx.c)
 *     NtSetInformationFile @ 0x140100F10 (NtSetInformationFile.c)
 *     IoChangeFileObjectFilterContext @ 0x1401142F4 (IoChangeFileObjectFilterContext.c)
 *     IoGetInitiatorProcess @ 0x14013B4B0 (IoGetInitiatorProcess.c)
 *     IoSetOplockKeyContext @ 0x140166D04 (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x1402832C0 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x1402833D0 (IoGetOplockKeyContext.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140284A38 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopCloseFile @ 0x14063AB30 (IopCloseFile.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x14063AFB0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 *     IopOpenLinkOrRenameTarget @ 0x14068CBE8 (IopOpenLinkOrRenameTarget.c)
 *     IopSymlinkCreateECP @ 0x1406AD1F8 (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x1406AD50C (IopGraftName.c)
 *     IopSetFileObjectIosbRange @ 0x14081C21C (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x14081D360 (IoCopyDeviceObjectHint.c)
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
