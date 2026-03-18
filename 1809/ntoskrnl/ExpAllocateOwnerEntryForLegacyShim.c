/*
 * XREFs of ExpAllocateOwnerEntryForLegacyShim @ 0x140166344
 * Callers:
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     SepMandatoryIntegrityCheck @ 0x140052270 (SepMandatoryIntegrityCheck.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1400A6E00 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x1400A7030 (SeSecurityAttributePresent.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A9450 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1400BA030 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x14010B150 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x140164AB4 (ExpFastResourceLegacyAcquireExclusive.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14031B788 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
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
