/*
 * XREFs of ZwDuplicateObject @ 0x1401B88F0
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x1400DD674 (SepReferenceCachedTokenHandles.c)
 *     ObpCreateHandle @ 0x1405E12B0 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1406BCD90 (SeAuditHandleCreation.c)
 *     _SysCtxOpenMachine @ 0x14073BA88 (_SysCtxOpenMachine.c)
 *     SmKmFileInfoDuplicate @ 0x1408ACA08 (SmKmFileInfoDuplicate.c)
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
