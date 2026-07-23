/*
 * XREFs of SmPageRead @ 0x14014F88C
 * Callers:
 *     MiIssueHardFaultIo @ 0x14001B5C8 (MiIssueHardFaultIo.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4558 (MiMakeOutswappedPageResident.c)
 *     MiPfExecuteReadList @ 0x14066395C (MiPfExecuteReadList.c)
 * Callees:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14014B374 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z @ 0x14014F098 (-SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z.c)
 */

__int64 __fastcall SmPageRead(union _MM_STORE_KEY *a1, unsigned __int64 a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // r10
  __int64 v5; // r11
  _DWORD v7[6]; // [rsp+30h] [rbp-18h] BYREF

  SmKeyConvert(a1, (union _SM_PAGE_KEY *)v7);
  return SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(v3, v7, a2, v5, v4);
}
