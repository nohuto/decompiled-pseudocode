/*
 * XREFs of ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1401450C4
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401489BC (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x140144DDC (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1401451F8 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14014687C (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionWorker(__int64 a1)
{
  char v1; // al
  int v3; // eax
  char v4; // al
  int v5; // edi

  v1 = *(_BYTE *)(a1 + 1904);
  if ( (v1 & 4) != 0 )
  {
    v4 = v1 & 0xFB;
    *(_BYTE *)(a1 + 1904) = v4;
  }
  else
  {
    *(_BYTE *)(a1 + 1904) = v1 & 0xFC;
    v3 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL);
    if ( v3 != 2 )
    {
LABEL_12:
      v5 = 0;
      goto LABEL_8;
    }
    v4 = *(_BYTE *)(a1 + 1904);
  }
  *(_BYTE *)(a1 + 1904) = v4 | 3;
  while ( 1 )
  {
    v5 = ST_STORE<SM_TRAITS>::StCompactionPerformInMem(a1, 1LL);
    v3 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL);
    if ( v5 < 0 )
      break;
    if ( v3 != 2 )
      goto LABEL_12;
  }
  if ( v3 == 2 )
    v3 = 1;
LABEL_8:
  *(_BYTE *)(a1 + 1904) &= 0xFCu;
  if ( v3 )
    ST_STORE<SM_TRAITS>::StQueueCompaction(a1, v3);
  return (unsigned int)v5;
}
