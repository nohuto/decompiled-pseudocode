/*
 * XREFs of ZwDuplicateObject @ 0x1401B8910
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x1400DD694 (SepReferenceCachedTokenHandles.c)
 *     ObpCreateHandle @ 0x1405E12B0 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1406BCD70 (SeAuditHandleCreation.c)
 *     _SysCtxOpenMachine @ 0x14073BA68 (_SysCtxOpenMachine.c)
 *     SmKmFileInfoDuplicate @ 0x1408AC9E8 (SmKmFileInfoDuplicate.c)
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
  return KiServiceInternal(SourceProcessHandle, SourceHandle, TargetProcessHandle);
}
