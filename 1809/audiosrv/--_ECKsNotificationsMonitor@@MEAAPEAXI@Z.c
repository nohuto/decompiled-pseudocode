/*
 * XREFs of ??_ECKsNotificationsMonitor@@MEAAPEAXI@Z @ 0x180112490
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ??1CKsNotificationsMonitor@@MEAA@XZ @ 0x180112444 (--1CKsNotificationsMonitor@@MEAA@XZ.c)
 */

CKsNotificationsMonitor *__fastcall CKsNotificationsMonitor::`vector deleting destructor'(
        CKsNotificationsMonitor *this,
        char a2)
{
  CKsNotificationsMonitor::~CKsNotificationsMonitor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
