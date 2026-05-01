/*
 * XREFs of ?HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E6D8
 * Callers:
 *     ?HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000CF70 (-HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampHostCheckCancelCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E6A0 (-HampHostCheckCancelCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampHostIsCached(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  return (*((_QWORD *)a1 + 81) & 0x2000000000000LL) != 0
      && *((struct _RM_HAM_ACTIVITY_HOST **)a1 + 75) == (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 600);
}
