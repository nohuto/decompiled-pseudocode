/*
 * XREFs of MiLockImageExtentsExclusive @ 0x14088CBD8
 * Callers:
 *     MiAllocateEntireImageFileExtents @ 0x14088BC4C (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteImageExtentList @ 0x14088C964 (MiDeleteImageExtentList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void MiLockImageExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1404648A8, 0LL);
}
