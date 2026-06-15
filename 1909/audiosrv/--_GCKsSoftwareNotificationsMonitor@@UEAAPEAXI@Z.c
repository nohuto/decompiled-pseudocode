/*
 * XREFs of ??_GCKsSoftwareNotificationsMonitor@@UEAAPEAXI@Z @ 0x1800EB5B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CKsNotificationsMonitor@@MEAA@XZ @ 0x18011E434 (--1CKsNotificationsMonitor@@MEAA@XZ.c)
 */

CKsSoftwareNotificationsMonitor *__fastcall CKsSoftwareNotificationsMonitor::`scalar deleting destructor'(
        CKsSoftwareNotificationsMonitor *this,
        char a2)
{
  CKsNotificationsMonitor::~CKsNotificationsMonitor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
