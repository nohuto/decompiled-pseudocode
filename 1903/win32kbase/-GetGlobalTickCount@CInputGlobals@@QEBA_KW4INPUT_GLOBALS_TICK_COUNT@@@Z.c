/*
 * XREFs of ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0082D30
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005A12C (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerIsDisplayIdleExpired @ 0x1C0082CD0 (PowerIsDisplayIdleExpired.c)
 *     PowerIsDisplayRequired @ 0x1C0108C30 (PowerIsDisplayRequired.c)
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
