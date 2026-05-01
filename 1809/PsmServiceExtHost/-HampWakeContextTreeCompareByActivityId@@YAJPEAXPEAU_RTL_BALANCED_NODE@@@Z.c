/*
 * XREFs of ?HampWakeContextTreeCompareByActivityId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18003CDE0
 * Callers:
 *     ?HampWakeManagerFindContextByActivityHandle@@YAPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_WAKE_REFERENCE_MANAGER@@_K@Z @ 0x18000702C (-HampWakeManagerFindContextByActivityHandle@@YAPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_WAKE_REFEREN.c)
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800233D0 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampWakeContextTreeCompareByActivityId(_QWORD *a1, struct _RTL_BALANCED_NODE *a2)
{
  struct _RTL_BALANCED_NODE *v2; // r8

  v2 = a2[1].Children[0];
  if ( *a1 < (unsigned __int64)v2 )
    return 0xFFFFFFFFLL;
  else
    return *a1 > (unsigned __int64)v2;
}
