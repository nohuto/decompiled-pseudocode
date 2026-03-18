/*
 * XREFs of CmpCopySyncTree @ 0x14083561C
 * Callers:
 *     CmpReorganizeHive @ 0x14068EB68 (CmpReorganizeHive.c)
 *     CmpSaveBootControlSet @ 0x140822C90 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x140834008 (CmpCloneHwProfile.c)
 *     CmpPreserveSystemHiveData @ 0x140836764 (CmpPreserveSystemHiveData.c)
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14083AE6C (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14083B3D0 (CmpLoadHiveVolatile.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpCopySyncTree2 @ 0x1408356C0 (CmpCopySyncTree2.c)
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
