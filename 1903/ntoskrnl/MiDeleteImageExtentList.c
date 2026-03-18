/*
 * XREFs of MiDeleteImageExtentList @ 0x14088C964
 * Callers:
 *     MiDeleteFileExtents @ 0x140688710 (MiDeleteFileExtents.c)
 *     MiCreateImageFileMap @ 0x14068AE6C (MiCreateImageFileMap.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029870 (RtlAvlRemoveNode.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiLockImageExtentsExclusive @ 0x14088CBD8 (MiLockImageExtentsExclusive.c)
 *     MiUnlockImageExtentsExclusive @ 0x14088CC08 (MiUnlockImageExtentsExclusive.c)
 */

void __fastcall MiDeleteImageExtentList(unsigned __int64 *P)
{
  __int64 i; // rbx

  MiLockImageExtentsExclusive();
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)P; i = (unsigned int)(i + 1) )
    RtlAvlRemoveNode(&qword_1404648A0, &P[6 * i + 1]);
  MiUnlockImageExtentsExclusive();
  ExFreePoolWithTag(P, 0);
}
