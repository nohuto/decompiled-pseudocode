/*
 * XREFs of ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C0066910
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00657FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerInputEvent @ 0x1C0066890 (PowerInputEvent.c)
 *     EtwTraceIdleStatus @ 0x1C008B5D0 (EtwTraceIdleStatus.c)
 *     EtwTraceIdleActionExpiration @ 0x1C00A7690 (EtwTraceIdleActionExpiration.c)
 *     xxxProcessKeyEvent @ 0x1C01843C0 (xxxProcessKeyEvent.c)
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
