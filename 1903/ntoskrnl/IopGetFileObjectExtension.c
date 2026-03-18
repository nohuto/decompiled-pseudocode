/*
 * XREFs of IopGetFileObjectExtension @ 0x14000A8E0
 * Callers:
 *     IopSetLockOperationProcess @ 0x14000669C (IopSetLockOperationProcess.c)
 *     IoGetSilo @ 0x140009A50 (IoGetSilo.c)
 *     IoGetOplockKeyContextEx @ 0x14000A250 (IoGetOplockKeyContextEx.c)
 *     CcInitializeCacheMapEx @ 0x14000D700 (CcInitializeCacheMapEx.c)
 *     IoSetOplockPrivateFoExt @ 0x140010A70 (IoSetOplockPrivateFoExt.c)
 *     IopGetSetSpecificExtension @ 0x1400BA3C8 (IopGetSetSpecificExtension.c)
 *     NtSetInformationFile @ 0x1400BB3D0 (NtSetInformationFile.c)
 *     IoChangeFileObjectFilterContext @ 0x140114EF4 (IoChangeFileObjectFilterContext.c)
 *     IoGetInitiatorProcess @ 0x14013CA90 (IoGetInitiatorProcess.c)
 *     IoSetOplockKeyContext @ 0x14016CDE4 (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x1402984E0 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x1402985F0 (IoGetOplockKeyContext.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140299B90 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopCloseFile @ 0x1405D8630 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x1405F28F0 (IopSynchronousServiceTail.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140602F60 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkCreateECP @ 0x1406CEBA4 (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x1406CEEB8 (IopGraftName.c)
 *     IopOpenLinkOrRenameTarget @ 0x1406DDF24 (IopOpenLinkOrRenameTarget.c)
 *     IopSetFileObjectIosbRange @ 0x140854FE4 (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x1408561D0 (IoCopyDeviceObjectHint.c)
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
