/*
 * XREFs of ?HampHostCheckEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002CB80
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180049B20 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000A0F8 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000A144 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002C3F0 (-HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostCheckEndQuiesceTurn(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx

  if ( (unsigned int)HampHostIsQuiesceSerialized(a1) )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(v1 + 752) + 88LL);
    HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v2);
    *(_DWORD *)(v2 + 340) &= ~8u;
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v2);
    RtlWakeConditionVariable(v2 + 320);
  }
}
