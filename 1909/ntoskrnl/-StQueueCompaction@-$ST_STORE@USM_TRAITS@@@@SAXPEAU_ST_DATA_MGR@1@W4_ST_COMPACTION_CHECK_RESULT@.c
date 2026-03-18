/*
 * XREFs of ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x140168C90
 * Callers:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14014EC94 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14015000C (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1401615E8 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140151958 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StQueueCompaction(__int64 a1, int a2)
{
  char v3; // r8
  unsigned int v4; // r11d
  unsigned int v5; // r9d
  unsigned int v6; // ecx
  char v7; // r8

  v3 = *(_BYTE *)(a1 + 1904);
  v4 = (*(_DWORD *)(a1 + 832) >> 1) & 1;
  if ( a2 == 1 )
  {
    v7 = v3 & 0xFC | 1;
    v5 = -2;
    v6 = (unsigned __int8)*(_DWORD *)(a1 + 776) != 0 ? 400 : 30;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    v7 = v3 & 0xFC | 2;
  }
  *(_BYTE *)(a1 + 1904) = v7;
  return ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 1912), v4, v6, v5);
}
