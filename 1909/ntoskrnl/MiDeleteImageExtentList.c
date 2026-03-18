/*
 * XREFs of MiDeleteImageExtentList @ 0x14088C184
 * Callers:
 *     MiCreateImageFileMap @ 0x140645C84 (MiCreateImageFileMap.c)
 *     MiDeleteFileExtents @ 0x14064E8E0 (MiDeleteFileExtents.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029C60 (RtlAvlRemoveNode.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiLockImageExtentsExclusive @ 0x14088C3F8 (MiLockImageExtentsExclusive.c)
 *     MiUnlockImageExtentsExclusive @ 0x14088C428 (MiUnlockImageExtentsExclusive.c)
 */

void __fastcall MiDeleteImageExtentList(unsigned __int64 *P)
{
  __int64 i; // rbx

  MiLockImageExtentsExclusive();
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)P; i = (unsigned int)(i + 1) )
    RtlAvlRemoveNode(&qword_1404645A0, &P[6 * i + 1]);
  MiUnlockImageExtentsExclusive();
  ExFreePoolWithTag(P, 0);
}
