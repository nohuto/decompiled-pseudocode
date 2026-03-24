/*
 * XREFs of CmpCopySyncTree @ 0x1407FCB60
 * Callers:
 *     CmpReorganizeHive @ 0x1405A6F70 (CmpReorganizeHive.c)
 *     CmpSaveBootControlSet @ 0x1407E88D0 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x1407FB5DC (CmpCloneHwProfile.c)
 *     CmpPreserveSystemHiveData @ 0x1407FDCC4 (CmpPreserveSystemHiveData.c)
 *     CmRestoreKey @ 0x1408013AC (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x1408022FC (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x1408028F8 (CmpLoadHiveVolatile.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     CmpCopySyncTree2 @ 0x1407FCC04 (CmpCopySyncTree2.c)
 */

char __fastcall CmpCopySyncTree(int a1, int a2, ULONG_PTR a3, int a4, int a5, int a6)
{
  _DWORD *PoolWithTag; // rax
  int v11; // edx
  int v12; // r8d
  void *v13; // rdi
  char v14; // bl

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x2800uLL, 0x20204D43u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[2] = 0;
    PoolWithTag[3] &= 0xFFFFFFF8;
    *((_BYTE *)PoolWithTag + 16) &= 0xFCu;
    *PoolWithTag = a2;
    PoolWithTag[1] = a4;
    v14 = CmpCopySyncTree2((int)PoolWithTag, v11, v12, a1, a3, a5, a6);
    ExFreePoolWithTag(v13, 0);
    LOBYTE(PoolWithTag) = v14;
  }
  return (char)PoolWithTag;
}
