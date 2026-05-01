/*
 * XREFs of ?HampHostCheckEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BB30
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800493C0 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180012CCC (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180013024 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BC50 (-HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostCheckEndQuiesceTurn(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // r9
  __int64 v2; // rbx

  if ( HampHostIsQuiesceSerialized(a1) )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(v1 + 776) + 88LL);
    HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v2);
    *(_DWORD *)(v2 + 340) &= ~8u;
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v2);
    RtlWakeConditionVariable(v2 + 320);
  }
}
