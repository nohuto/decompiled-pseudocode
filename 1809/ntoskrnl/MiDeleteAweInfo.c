/*
 * XREFs of MiDeleteAweInfo @ 0x140850F50
 * Callers:
 *     MiDeleteSectionAwe @ 0x1402B06C4 (MiDeleteSectionAwe.c)
 *     MmDeleteProcessAddressSpace @ 0x140609AD0 (MmDeleteProcessAddressSpace.c)
 *     MiAllocateAweInfo @ 0x14085073C (MiAllocateAweInfo.c)
 *     MiCreateProcessDefaultAweInfo @ 0x140850C6C (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x1400917A0 (ExCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiDeleteAweBitMap @ 0x140850EF8 (MiDeleteAweBitMap.c)
 */

void __fastcall MiDeleteAweInfo(struct _KPROCESS *a1, _QWORD *a2)
{
  if ( (*(_DWORD *)a2 & 2) != 0 )
    ExCleanupAutoExpandPushLock((__int64)(a2 + 7));
  MiDeleteAweBitMap(a1, a2 + 2);
  ExFreePoolWithTag(a2, 0);
}
