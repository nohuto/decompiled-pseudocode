/*
 * XREFs of ??1?$CLockExclusive@VDLT_QUEUE@@@@QEAA@XZ @ 0x1C0196AA0
 * Callers:
 *     _ScheduleDispatchNotification @ 0x1C003BFF0 (_ScheduleDispatchNotification.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockExclusive<DLT_QUEUE>::~CLockExclusive<DLT_QUEUE>(tagObjLock **a1)
{
  tagObjLock::UnLock(a1[1]);
  tagObjLock::UnLock(*a1);
}
