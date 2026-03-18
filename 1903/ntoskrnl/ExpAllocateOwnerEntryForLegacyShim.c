/*
 * XREFs of ExpAllocateOwnerEntryForLegacyShim @ 0x14016BAC8
 * Callers:
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x14003B7A0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     SepCanTokenMatchAllPackageSid @ 0x140092380 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x140092510 (SeSecurityAttributePresent.c)
 *     SepMandatoryIntegrityCheck @ 0x1400C9360 (SepMandatoryIntegrityCheck.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1401027C0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14016AB48 (ExpFastResourceLegacyAcquireExclusive.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14033A514 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

_BYTE *ExpAllocateOwnerEntryForLegacyShim()
{
  _BYTE *PoolWithTag; // rax
  _BYTE *v1; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  _BYTE *result; // rax

  do
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x454F5246u);
    v1 = PoolWithTag;
  }
  while ( !PoolWithTag );
  memset(PoolWithTag, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  result = v1;
  v1[17] |= 2u;
  *((_QWORD *)v1 + 4) = CurrentThread;
  return result;
}
