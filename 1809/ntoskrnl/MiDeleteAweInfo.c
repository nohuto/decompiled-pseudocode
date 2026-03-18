/*
 * XREFs of MiDeleteAweInfo @ 0x14084FD10
 * Callers:
 *     MiDeleteSectionAwe @ 0x1402B03D4 (MiDeleteSectionAwe.c)
 *     MmDeleteProcessAddressSpace @ 0x140608AD0 (MmDeleteProcessAddressSpace.c)
 *     MiAllocateAweInfo @ 0x14084F4FC (MiAllocateAweInfo.c)
 *     MiCreateProcessDefaultAweInfo @ 0x14084FA2C (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x140091860 (ExCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     MiDeleteAweBitMap @ 0x14084FCB8 (MiDeleteAweBitMap.c)
 */

void __fastcall MiDeleteAweInfo(struct _KPROCESS *a1, _QWORD *a2)
{
  if ( (*(_DWORD *)a2 & 2) != 0 )
    ExCleanupAutoExpandPushLock((__int64)(a2 + 7));
  MiDeleteAweBitMap(a1, a2 + 2);
  ExFreePoolWithTag(a2, 0);
}
