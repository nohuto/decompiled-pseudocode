/*
 * XREFs of ??0CGITRegistrationList@@QEAA@XZ @ 0x180433194
 * Callers:
 *     ??0FullScreenPositioner@@QEAA@XZ @ 0x18018A90C (--0FullScreenPositioner@@QEAA@XZ.c)
 *     ??0CFullScreenManager@@QEAA@XZ @ 0x18018F348 (--0CFullScreenManager@@QEAA@XZ.c)
 *     ??0ViewPresentationMediator@@QEAA@XZ @ 0x1802C8E54 (--0ViewPresentationMediator@@QEAA@XZ.c)
 *     ??0MultitaskingViewVisibilityService@@QEAA@XZ @ 0x180363738 (--0MultitaskingViewVisibilityService@@QEAA@XZ.c)
 *     ??0ObservableObjectArray@@QEAA@XZ @ 0x180372314 (--0ObservableObjectArray@@QEAA@XZ.c)
 *     ??0CPerMonitorDesktopVisibilityService@@QEAA@XZ @ 0x1803AE2A8 (--0CPerMonitorDesktopVisibilityService@@QEAA@XZ.c)
 *     ??0TabletModePositionerManager@@QEAA@XZ @ 0x1803C76B8 (--0TabletModePositionerManager@@QEAA@XZ.c)
 * Callees:
 *     InitializeSRWLock_0 @ 0x18008ADA3 (InitializeSRWLock_0.c)
 */

CGITRegistrationList *__fastcall CGITRegistrationList::CGITRegistrationList(CGITRegistrationList *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  InitializeSRWLock_0((PSRWLOCK)this + 1);
  return this;
}
