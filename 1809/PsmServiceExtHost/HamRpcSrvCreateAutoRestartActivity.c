/*
 * XREFs of HamRpcSrvCreateAutoRestartActivity @ 0x18006FAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ArSrvCreateActivity@@YAJPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006FF10 (-ArSrvCreateActivity@@YAJPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@.c)
 */

int __fastcall HamRpcSrvCreateAutoRestartActivity(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7,
        struct _HAM_ACTIVITY_PROPERTIES *a8,
        union _HAM_RESTART_PROPERTIES *a9)
{
  struct _ACTIVITY_RESTARTER *v12; // rbx
  int result; // eax

  RtlAcquireSRWLockShared(&ArGlobalLock);
  v12 = (struct _ACTIVITY_RESTARTER *)ArGlobals;
  RtlReleaseSRWLockShared(&ArGlobalLock);
  if ( !v12 )
    return -1073741637;
  result = ArSrvCreateActivity(a2, a3, a4, a5, a6, a7, a8, a9, v12);
  if ( result >= 0 )
    return 0;
  return result;
}
