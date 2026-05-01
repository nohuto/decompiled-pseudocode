/*
 * XREFs of ?HampUserFindInSession@@YAPEAU_HAM_USER@@PEAU_HAM_SESSION@@PEAT_RM_SID@@@Z @ 0x180014B78
 * Callers:
 *     ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x1800149B0 (-HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z.c)
 *     ?HampUserFindInManager@@YAPEAU_HAM_USER@@PEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@@Z @ 0x18006CE9C (-HampUserFindInManager@@YAPEAU_HAM_USER@@PEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@@Z.c)
 * Callees:
 *     CemRcTableFind @ 0x180014BBC (CemRcTableFind.c)
 */

struct _HAM_USER *__fastcall HampUserFindInSession(struct _HAM_SESSION *a1, union _RM_SID *a2)
{
  return (struct _HAM_USER *)CemRcTableFind((char *)a1 + 40, a2, HampUserCompareByIdentity);
}
