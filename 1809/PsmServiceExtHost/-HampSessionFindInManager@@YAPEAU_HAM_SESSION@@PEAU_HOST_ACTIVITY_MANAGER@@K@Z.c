/*
 * XREFs of ?HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180014B98
 * Callers:
 *     ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180014A90 (-HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 *     ?HamSrvLogoffSession@@YAJPEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18003E8FC (-HamSrvLogoffSession@@YAJPEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 *     ?HampManagerOnDplKeyStateChanged@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_EDP_DPL_WNF_KEYS_STATE_DATA@@@Z @ 0x180068EF0 (-HampManagerOnDplKeyStateChanged@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_EDP_DPL_WNF_KEYS_STATE_DAT.c)
 *     ?HampUserFindInManager@@YAPEAU_HAM_USER@@PEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@@Z @ 0x18006CE9C (-HampUserFindInManager@@YAPEAU_HAM_USER@@PEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@@Z.c)
 * Callees:
 *     CemRcTableFind @ 0x180014BBC (CemRcTableFind.c)
 */

struct _HAM_SESSION *__fastcall HampSessionFindInManager(struct _HOST_ACTIVITY_MANAGER *a1, unsigned int a2)
{
  return (struct _HAM_SESSION *)CemRcTableFind((char *)a1 + 168, a2, HampSessionCompareById);
}
