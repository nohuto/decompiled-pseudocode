/*
 * XREFs of SmStoreActionNotify @ 0x140326FCC
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14014F96C (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreReference @ 0x14009A60C (SmKmStoreReference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14009A788 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x1403267F0 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 */

__int64 __fastcall SmStoreActionNotify(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  struct _EX_RUNDOWN_REF *v5; // rax

  if ( a2 == 1 )
    return SmKmStoreReference((__int64)&SmGlobals, *(_DWORD *)(a1 + 6016), a3, a4) == 0 ? 0xC0000189 : 0;
  if ( a2 == 2 )
  {
    v5 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_DWORD *)(a1 + 6016) & 0x3FF);
    ExReleaseRundownProtection_0(v5 + 1);
    return 0LL;
  }
  else if ( (unsigned int)(a2 - 3) > 1 )
  {
    return 3221225485LL;
  }
  else
  {
    return SMKM_STORE_MGR<SM_TRAITS>::SmStoreTerminate((__int64)&SmGlobals, a1, a2 != 3, a3);
  }
}
