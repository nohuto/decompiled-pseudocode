/*
 * XREFs of ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401618D0
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14011BF94 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140148350 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x140150A00 (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14016167C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     SmEtwEnabled @ 0x1400D7B48 (SmEtwEnabled.c)
 *     MiFreePagesFromMdl @ 0x1400DDE94 (MiFreePagesFromMdl.c)
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x140126A70 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14014CFBC (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x1401619B4 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x140323030 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     SmEtwLogRegionOp @ 0x14032433C (SmEtwLogRegionOp.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StReleaseRegion(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // r9
  ULONGLONG *v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rdi
  void *v10; // rbx
  int v11; // [rsp+78h] [rbp+10h] BYREF

  v2 = a2;
  if ( *(_BYTE *)(a1 + 776) )
  {
    *(_BYTE *)(a2 + *(_QWORD *)(a1 + 1048)) = 0;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v4 + 6021) & 4) != 0 )
    {
      v5 = SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(*(_QWORD *)(a1 + 800), a2, 0LL);
    }
    else
    {
      v9 = *(_QWORD *)(v4 + 6216);
      v10 = (void *)(*(_QWORD *)(v9 + 8LL * a2) & 0xFFFFFFFFFFFFFFF8uLL);
      MiFreePagesFromMdl((ULONG_PTR)v10, 0);
      ExFreePoolWithTag(v10, 0);
      v5 = 0;
      *(_QWORD *)(v9 + 8 * v2) = 0LL;
    }
    if ( v5 == -1073741650 )
      ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v2, 1LL, v6);
    v7 = SmEtwEnabled(0);
    if ( v7 )
      SmEtwLogRegionOp((_DWORD)v7, 5, a1, v2, 0, *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v2), 0);
    if ( (unsigned int)v2 < *(_DWORD *)(a1 + 1092) )
      *(_DWORD *)(a1 + 1092) = v2;
  }
  if ( *(_BYTE *)(a1 + 776) )
    v8 = 0;
  else
    v8 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v2) >> 13;
  --*(_DWORD *)(a1 + 8LL * v8 + 1824);
  if ( !*(_BYTE *)(a1 + 776) )
    *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v2) &= 0x1FFFu;
  if ( (*(_DWORD *)(a1 + 832) & 4) != 0 )
  {
    ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1, &v11, 0LL);
    if ( (unsigned int)(*(_DWORD *)(a1 + 856) - v11) >= 8 && (*(_DWORD *)(a1 + 2232) & 1) == 0 )
    {
      *(_DWORD *)(a1 + 2216) = 0;
      *(_DWORD *)(a1 + 2232) |= 1u;
      SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(*(_QWORD *)(a1 + 800), a1 + 2200, 6);
    }
  }
}
