/*
 * XREFs of ZwDuplicateObject @ 0x1401C13D0
 * Callers:
 *     SepReferenceCachedTokenHandles @ 0x140088160 (SepReferenceCachedTokenHandles.c)
 *     ObpCreateHandle @ 0x1405F3B50 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1406DF928 (SeAuditHandleCreation.c)
 *     _SysCtxOpenMachine @ 0x140755E58 (_SysCtxOpenMachine.c)
 *     SmKmFileInfoDuplicate @ 0x1408E9210 (SmKmFileInfoDuplicate.c)
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
