/*
 * XREFs of SmPageRead @ 0x14016629C
 * Callers:
 *     MiIssueHardFaultIo @ 0x140006A94 (MiIssueHardFaultIo.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB748 (MiMakeOutswappedPageResident.c)
 *     MiPfExecuteReadList @ 0x14066E304 (MiPfExecuteReadList.c)
 * Callees:
 *     ?SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z @ 0x14014CBB4 (-SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140164A8C (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 */

__int64 __fastcall SmPageRead(union _MM_STORE_KEY *a1, unsigned __int64 a2)
{
  __int64 v3; // rcx
  __int64 *v4; // r10
  __int64 v5; // r11
  _DWORD v7[6]; // [rsp+30h] [rbp-18h] BYREF

  v7[0] = 0;
  SmKeyConvert(a1, (union _SM_PAGE_KEY *)v7);
  return SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(v3, v7, a2, v5, v4);
}
