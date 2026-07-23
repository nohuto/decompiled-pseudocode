/*
 * XREFs of ZwDuplicateObject @ 0x1401C0850
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x140087D40 (SepReferenceCachedTokenHandles.c)
 *     ObpCreateHandle @ 0x1405F3220 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1406DE588 (SeAuditHandleCreation.c)
 *     _SysCtxOpenMachine @ 0x1407553C8 (_SysCtxOpenMachine.c)
 *     SmKmFileInfoDuplicate @ 0x1408E9908 (SmKmFileInfoDuplicate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        PHANDLE TargetHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SourceProcessHandle);
}
