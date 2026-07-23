/*
 * XREFs of ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140145554
 * Callers:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14011E134 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1401451F8 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140145E0C (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x14014938C (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x14002A000 (MiFreePagesFromMdl.c)
 *     SmEtwEnabled @ 0x1400E3EA8 (SmEtwEnabled.c)
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x1401279C4 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x140145690 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14014EE10 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x140305D80 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     SmEtwLogRegionOp @ 0x140307058 (SmEtwLogRegionOp.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

char __fastcall ST_STORE<SM_TRAITS>::StReleaseRegion(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  int v5; // eax
  ULONGLONG *v6; // rax
  unsigned int v7; // ecx
  int v8; // eax
  __int64 v9; // rdi
  void *v10; // rbx
  int v12; // [rsp+78h] [rbp+10h] BYREF

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
      ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v2, 1LL);
    v6 = SmEtwEnabled(0);
    if ( v6 )
      SmEtwLogRegionOp((_DWORD)v6, 5, a1, v2, 0, *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v2), 0);
    if ( (unsigned int)v2 < *(_DWORD *)(a1 + 1092) )
      *(_DWORD *)(a1 + 1092) = v2;
  }
  if ( *(_BYTE *)(a1 + 776) )
    v7 = 0;
  else
    v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v2) >> 13;
  --*(_DWORD *)(a1 + 8LL * v7 + 1824);
  if ( !*(_BYTE *)(a1 + 776) )
    *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v2) &= 0x1FFFu;
  v8 = *(_DWORD *)(a1 + 832);
  if ( (v8 & 4) != 0 )
  {
    LOBYTE(v8) = ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1, &v12, 0LL);
    if ( (unsigned int)(*(_DWORD *)(a1 + 856) - v12) >= 8 )
    {
      v8 = *(_DWORD *)(a1 + 2232);
      if ( (v8 & 1) == 0 )
      {
        *(_DWORD *)(a1 + 2216) = 0;
        *(_DWORD *)(a1 + 2232) |= 1u;
        LOBYTE(v8) = SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(*(_QWORD *)(a1 + 800), a1 + 2200, 6LL);
      }
    }
  }
  return v8;
}
