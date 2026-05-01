/*
 * XREFs of ?HampDepGroupIsCurrentThreadWorker@@YAKPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800304E8
 * Callers:
 *     ?HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003045C (-HampDepGroupWaitEnterStateChange@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampDepGroupIsCurrentThreadWorker(struct _HAM_DEPENDENCY_GROUP *a1)
{
  return *((_DWORD *)a1 + 32) == GetCurrentThreadId();
}
