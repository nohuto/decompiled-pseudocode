/*
 * XREFs of SmKmStoreReference @ 0x14009A60C
 * Callers:
 *     SmKmStoreReferenceEx @ 0x14009A74C (SmKmStoreReferenceEx.c)
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140144130 (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 *     SmpKeyedStoreReference @ 0x14014CBFC (SmpKeyedStoreReference.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14014F96C (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x1403267F0 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmIssueIo @ 0x140326A94 (SmIssueIo.c)
 *     SmStoreActionNotify @ 0x140326FCC (SmStoreActionNotify.c)
 *     SmProcessListRequestExtended @ 0x1408E8348 (SmProcessListRequestExtended.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14009A788 (SmKmStoreRefFromStoreIndex.c)
 */

unsigned __int64 __fastcall SmKmStoreReference(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  struct _EX_RUNDOWN_REF *v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx

  v5 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, a2 & 0x3FF, a3, a4);
  v6 = v5;
  if ( v5 && ExAcquireRundownProtection_0(v5 + 1) )
  {
    if ( (v6[4].Count & 0x3F) == a2 >> 10 )
      return v6->Count;
    ExReleaseRundownProtection_0(v6 + 1);
  }
  return 0LL;
}
