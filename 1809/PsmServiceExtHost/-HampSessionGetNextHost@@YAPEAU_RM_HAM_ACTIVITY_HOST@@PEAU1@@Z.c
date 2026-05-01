/*
 * XREFs of ?HampSessionGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18003EC84
 * Callers:
 *     ?HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18003EBDC (-HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 *     ?HampManagerOnDplKeyStateChanged@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_EDP_DPL_WNF_KEYS_STATE_DATA@@@Z @ 0x180068EF0 (-HampManagerOnDplKeyStateChanged@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_EDP_DPL_WNF_KEYS_STATE_DAT.c)
 * Callees:
 *     <none>
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampSessionGetNextHost(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  return HampHostEnumerateHostsInNode(
           *(struct _HAM_RC_TREE_NODE **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 94) + 88LL) + 88LL) + 160LL),
           1,
           (__int64)a1);
}
