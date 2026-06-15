/*
 * XREFs of ??_ECKsNotificationsMonitor@@MEAAPEAXI@Z @ 0x18011E920
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     ??1CKsNotificationsMonitor@@MEAA@XZ @ 0x18011E8D4 (--1CKsNotificationsMonitor@@MEAA@XZ.c)
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
