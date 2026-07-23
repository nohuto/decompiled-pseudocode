/*
 * XREFs of ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14014687C
 * Callers:
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1401450C4 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140146BC0 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140147E6C (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401489BC (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140303A60 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StDmComputeSpaceUsageForPriority@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAK11@Z @ 0x1401469EC (-StDmComputeSpaceUsageForPriority@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAK11@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCheckForCompaction(__int64 a1, char a2)
{
  int v2; // ebp
  unsigned int v5; // edi
  int v6; // ecx
  unsigned int v7; // ebx
  _BYTE *v8; // r15
  unsigned int v9; // r12d
  unsigned int v10; // r14d
  __int64 v11; // rax
  BOOL v12; // eax
  unsigned int v13; // r8d
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v19; // [rsp+80h] [rbp+18h] BYREF

  v2 = *(_BYTE *)(a1 + 1904) & 3;
  v5 = 2;
  if ( (a2 & 3) != 0 || v2 != 2 )
  {
    v6 = (unsigned __int8)*(_DWORD *)(a1 + 776);
    if ( v6 )
    {
      v15 = *(_DWORD *)(a1 + 856);
      v7 = v15 >> 2;
      if ( v2 == 3 )
      {
        if ( v7 >= v15 - 256 )
          v7 = v15 - 256;
      }
      else
      {
        v16 = 3 * v7;
        v7 = v15 - 128;
        if ( v16 < v15 - 128 )
          v7 = v16;
      }
      v8 = &`ST_STORE<SM_TRAITS>::StDmCheckForCompaction'::`2'::ThresholdShiftTableFile;
      if ( v7 < 2 )
        v7 = 2;
    }
    else
    {
      v7 = 3;
      v8 = &`ST_STORE<SM_TRAITS>::StDmCheckForCompaction'::`2'::ThresholdShiftTableInMem;
    }
    v19 = 0;
    v17 = 0;
    v9 = 0;
    v18 = 0;
    v10 = v6 != 0 ? 1 : 8;
    do
      ST_STORE<SM_TRAITS>::StDmComputeSpaceUsageForPriority(
        a1,
        v9++,
        (unsigned int)&v18,
        (unsigned int)&v19,
        (__int64)&v17);
    while ( v9 < v10 );
    v11 = *(_QWORD *)(a1 + 800);
    if ( (a2 & 2) != 0 )
    {
      if ( !*(_BYTE *)(v11 + 6022) && v18 * ((unsigned __int64)*(unsigned int *)(a1 + 784) >> 12) > *(_QWORD *)(a1 + 8) )
        return v5;
    }
    else if ( !*(_QWORD *)(v11 + 6552) && v18 >= v7 )
    {
      v12 = (a2 & 1) == 0
         && (v2 == 1
          || (*(_DWORD *)(*(_QWORD *)(a1 + 800) + 6100LL) >> 8)
           + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6576LL)
           + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6096LL));
      v13 = v19 >> v8[2 * v12];
      if ( v2 == 3 )
        v13 -= v19 >> v8[2 * v12 + 1];
      if ( v17 <= v13 )
        return v2 != 1 && v12 && v17 > v19 >> *v8;
      return v5;
    }
  }
  return 0LL;
}
