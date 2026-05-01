/*
 * XREFs of ?HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002D4EC
 * Callers:
 *     ?HampActCanBeStartedInHostState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002D240 (-HampActCanBeStartedInHostState@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampHostIsTerminateQueued(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  return (*((_DWORD *)a1 + 158) & 0x30000) != 0LL;
}
