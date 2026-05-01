/*
 * XREFs of CempLockTrackerIsSetForThread @ 0x180015B0C
 * Callers:
 *     ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18000A730 (-HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18000DD60 (-HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015834 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     PsmHostStateNotification2 @ 0x180015880 (PsmHostStateNotification2.c)
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180035E50 (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 * Callees:
 *     <none>
 */

_BOOL8 CempLockTrackerIsSetForThread()
{
  return HampLockTrackerId != -1 && TlsGetValue(HampLockTrackerId) != 0LL;
}
