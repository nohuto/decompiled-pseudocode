/*
 * XREFs of IopVerifierExAllocatePool_1 @ 0x14009F4E8
 * Callers:
 *     IopSetLockOperationProcess @ 0x14000672C (IopSetLockOperationProcess.c)
 *     IopGetSetSpecificExtension @ 0x14009A238 (IopGetSetSpecificExtension.c)
 *     IopAllocateFileObjectExtension @ 0x14009D080 (IopAllocateFileObjectExtension.c)
 *     NtUnlockFile @ 0x1406C02D0 (NtUnlockFile.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140037BB0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopVerifierExAllocatePool_1(__int64 a1, SIZE_T a2)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(
             NonPagedPoolNx,
             a2,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(NonPagedPoolNx, a2, 0x20206F49u);
}
