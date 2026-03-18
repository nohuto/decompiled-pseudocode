/*
 * XREFs of MiDeleteAweInfo @ 0x140896668
 * Callers:
 *     MiDeleteSectionAwe @ 0x1402D5BF8 (MiDeleteSectionAwe.c)
 *     MmDeleteProcessAddressSpace @ 0x1406709CC (MmDeleteProcessAddressSpace.c)
 *     MiAllocateAweInfo @ 0x140895E58 (MiAllocateAweInfo.c)
 *     MiCreateProcessDefaultAweInfo @ 0x14089638C (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x1400AD870 (ExCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiDeleteAweBitMap @ 0x140896610 (MiDeleteAweBitMap.c)
 */

void __fastcall MiDeleteAweInfo(struct _KPROCESS *a1, _QWORD *a2)
{
  if ( (*(_DWORD *)a2 & 2) != 0 )
    ExCleanupAutoExpandPushLock((__int64)(a2 + 7));
  MiDeleteAweBitMap(a1, a2 + 2);
  ExFreePoolWithTag(a2, 0);
}
