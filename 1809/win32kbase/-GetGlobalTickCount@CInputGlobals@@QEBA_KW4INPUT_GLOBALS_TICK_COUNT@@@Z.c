/*
 * XREFs of ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0072030
 * Callers:
 *     PowerIsDisplayIdleExpired @ 0x1C0071FD0 (PowerIsDisplayIdleExpired.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0096BF4 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerIsDisplayRequired @ 0x1C00E27F0 (PowerIsDisplayRequired.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputGlobals::GetGlobalTickCount(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbx

  v2 = a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1, 0LL);
  v4 = *(_QWORD *)(a1 + 8 * v2 + 24);
  ExReleasePushLockSharedEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
