/*
 * XREFs of MiLockImageExtentsExclusive @ 0x14088C3F8
 * Callers:
 *     MiAllocateEntireImageFileExtents @ 0x14088B46C (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteImageExtentList @ 0x14088C184 (MiDeleteImageExtentList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void MiLockImageExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1404645A8, 0LL);
}
