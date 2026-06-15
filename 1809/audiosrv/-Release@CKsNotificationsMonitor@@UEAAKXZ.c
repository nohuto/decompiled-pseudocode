/*
 * XREFs of ?Release@CKsNotificationsMonitor@@UEAAKXZ @ 0x18005EFA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CKsNotificationsMonitor::Release(CKsNotificationsMonitor *this)
{
  signed __int32 v1; // ebx
  unsigned __int32 v2; // ebx

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF);
  --CKsNotificationsMonitor::m_cRefAll;
  v2 = v1 - 1;
  if ( !v2 && this )
    (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)this + 32LL))(this);
  return v2;
}
