/*
 * XREFs of DpiAcpiUnregisterAcpiCallbacks @ 0x1C0270558
 * Callers:
 *     DpiAddDevice @ 0x1C0149BF0 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C0265190 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F6E4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

LONG __fastcall DpiAcpiUnregisterAcpiCallbacks(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 64);
  AcquireMiniportListMutex();
  if ( dword_1C008E8D0 )
  {
    (*(void (__fastcall **)(_QWORD, void (__fastcall *)(PVOID, unsigned int, const GUID *)))(v1 + 936))(
      *(_QWORD *)(v1 + 864),
      DpiAcpiEventCallback);
    if ( !--dword_1C008E8D0 )
    {
      IoUnregisterPlugPlayNotification(NotificationEntry);
      NotificationEntry = 0LL;
      ExUnregisterCallback(CallbackRegistration);
      CallbackRegistration = 0LL;
    }
  }
  _InterlockedExchange64(&qword_1C008E788, 0LL);
  return KeReleaseMutex(Mutex, 0);
}
