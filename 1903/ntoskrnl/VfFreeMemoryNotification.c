/*
 * XREFs of VfFreeMemoryNotification @ 0x14096414C
 * Callers:
 *     MmFreeContiguousMemory @ 0x140116D70 (MmFreeContiguousMemory.c)
 * Callees:
 *     VfRemLockDeleteMemoryRange @ 0x140973D18 (VfRemLockDeleteMemoryRange.c)
 *     VfDeadlockDeleteMemoryRange @ 0x14097B188 (VfDeadlockDeleteMemoryRange.c)
 */

__int64 __fastcall VfFreeMemoryNotification(__int64 a1, __int64 a2)
{
  VfDeadlockDeleteMemoryRange(a1, a2);
  return VfRemLockDeleteMemoryRange(a1, a2);
}
