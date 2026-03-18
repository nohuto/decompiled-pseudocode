/*
 * XREFs of CmpAllocateUnitOfWork @ 0x1406DA1BC
 * Callers:
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x14063B4FC (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1406409F0 (CmpSetKeySecurity.c)
 *     CmpUndoDeleteKeyForTrans @ 0x14071AFF4 (CmpUndoDeleteKeyForTrans.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14082937C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1408297E0 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

_QWORD *CmpAllocateUnitOfWork()
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x77554D43u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x78uLL);
    v1[1] = v1;
    *v1 = v1;
    v1[5] = v1 + 4;
    v1[4] = v1 + 4;
    v1[2] = 0LL;
    v1[3] = 0LL;
    v1[6] = 0LL;
    v1[7] = 0LL;
    *((_DWORD *)v1 + 16) = 0;
    *((_DWORD *)v1 + 17) = 14;
  }
  return v1;
}
