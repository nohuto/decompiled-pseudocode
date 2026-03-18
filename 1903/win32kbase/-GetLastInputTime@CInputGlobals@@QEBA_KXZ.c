/*
 * XREFs of ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C005B240
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005A12C (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerInputEvent @ 0x1C005B1C0 (PowerInputEvent.c)
 *     EtwTraceIdleStatus @ 0x1C008FBC0 (EtwTraceIdleStatus.c)
 *     EtwTraceIdleActionExpiration @ 0x1C00A8450 (EtwTraceIdleActionExpiration.c)
 *     xxxProcessKeyEvent @ 0x1C01865B0 (xxxProcessKeyEvent.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CInputGlobals::GetLastInputTime(CInputGlobals *this)
{
  __int64 v2; // rbx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  v2 = *((_QWORD *)this + 2);
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
