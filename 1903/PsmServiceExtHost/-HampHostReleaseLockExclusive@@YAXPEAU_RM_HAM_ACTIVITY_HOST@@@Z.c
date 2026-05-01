/*
 * XREFs of ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003E7E4
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800493C0 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall HampHostReleaseLockExclusive(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  HampHostReleaseLockExclusiveEx(a1);
}
