/*
 * XREFs of IopGetFileObjectExtension @ 0x1400B7970
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x140018830 (IoSetOplockPrivateFoExt.c)
 *     IopSetLockOperationProcess @ 0x14008C654 (IopSetLockOperationProcess.c)
 *     IopGetSetSpecificExtension @ 0x14008D07C (IopGetSetSpecificExtension.c)
 *     CcInitializeCacheMapEx @ 0x1400AC050 (CcInitializeCacheMapEx.c)
 *     NtSetInformationFile @ 0x140100E90 (NtSetInformationFile.c)
 *     IoChangeFileObjectFilterContext @ 0x140114284 (IoChangeFileObjectFilterContext.c)
 *     IoGetInitiatorProcess @ 0x14013B3B0 (IoGetInitiatorProcess.c)
 *     IoSetOplockKeyContext @ 0x140166C04 (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x1402830D0 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x1402831E0 (IoGetOplockKeyContext.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140284848 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopCloseFile @ 0x140639B10 (IopCloseFile.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140639F90 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSynchronousServiceTail @ 0x14063B620 (IopSynchronousServiceTail.c)
 *     IopOpenLinkOrRenameTarget @ 0x14068BA28 (IopOpenLinkOrRenameTarget.c)
 *     IopSymlinkCreateECP @ 0x1406ABF58 (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x1406AC26C (IopGraftName.c)
 *     IopSetFileObjectIosbRange @ 0x14081B01C (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x14081C160 (IoCopyDeviceObjectHint.c)
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
