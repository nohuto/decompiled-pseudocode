/*
 * XREFs of ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003D67C
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180049B20 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall HampHostReleaseLockExclusive(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  HampHostReleaseLockExclusiveEx(a1);
}
