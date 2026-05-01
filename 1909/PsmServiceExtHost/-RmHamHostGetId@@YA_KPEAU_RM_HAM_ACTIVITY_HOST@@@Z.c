/*
 * XREFs of ?RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006FB50
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800493C0 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RmHamHostGetId(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  return *((_QWORD *)a1 - 4);
}
