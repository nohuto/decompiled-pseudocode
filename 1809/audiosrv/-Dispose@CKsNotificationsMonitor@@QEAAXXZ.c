/*
 * XREFs of ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x1801124C8
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800B3100 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 *     ??1CKsNotificationsMonitor@@MEAA@XZ @ 0x180112444 (--1CKsNotificationsMonitor@@MEAA@XZ.c)
 *     ?KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z @ 0x180112658 (-KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CKsNotificationsMonitor::Dispose(CKsNotificationsMonitor *this)
{
  void *v2; // rcx

  if ( *((_DWORD *)this + 3) )
  {
    (*(void (__fastcall **)(_QWORD, CKsNotificationsMonitor *))(**((_QWORD **)this + 4) + 120LL))(
      *((_QWORD *)this + 4),
      this);
    *((_DWORD *)this + 3) = 0;
  }
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
}
