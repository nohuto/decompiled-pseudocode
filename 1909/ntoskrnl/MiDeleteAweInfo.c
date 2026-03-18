/*
 * XREFs of MiDeleteAweInfo @ 0x140895E88
 * Callers:
 *     MiDeleteSectionAwe @ 0x1402D5958 (MiDeleteSectionAwe.c)
 *     MmDeleteProcessAddressSpace @ 0x140644438 (MmDeleteProcessAddressSpace.c)
 *     MiAllocateAweInfo @ 0x140895678 (MiAllocateAweInfo.c)
 *     MiCreateProcessDefaultAweInfo @ 0x140895BAC (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x14008E890 (ExCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiDeleteAweBitMap @ 0x140895E30 (MiDeleteAweBitMap.c)
 */

void __fastcall MiDeleteAweInfo(struct _KPROCESS *a1, _QWORD *a2)
{
  if ( (*(_DWORD *)a2 & 2) != 0 )
    ExCleanupAutoExpandPushLock((__int64)(a2 + 7));
  MiDeleteAweBitMap(a1, a2 + 2);
  ExFreePoolWithTag(a2, 0);
}
