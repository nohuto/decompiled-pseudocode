/*
 * XREFs of ?RmHamHostGetPsmKey@@YAPEBGPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180062D14
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180049B20 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall RmHamHostGetPsmKey(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  return (const unsigned __int16 *)((char *)a1 + 24);
}
