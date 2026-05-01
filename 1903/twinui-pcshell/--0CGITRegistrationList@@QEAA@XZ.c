/*
 * XREFs of ??0CGITRegistrationList@@QEAA@XZ @ 0x180413B14
 * Callers:
 *     ??0FullScreenPositioner@@QEAA@XZ @ 0x18016B56C (--0FullScreenPositioner@@QEAA@XZ.c)
 *     ??0CFullScreenManager@@QEAA@XZ @ 0x18016FF68 (--0CFullScreenManager@@QEAA@XZ.c)
 *     ??0ViewPresentationMediator@@QEAA@XZ @ 0x1802A9924 (--0ViewPresentationMediator@@QEAA@XZ.c)
 *     ??0MultitaskingViewVisibilityService@@QEAA@XZ @ 0x180343FF8 (--0MultitaskingViewVisibilityService@@QEAA@XZ.c)
 *     ??0ObservableObjectArray@@QEAA@XZ @ 0x180352B34 (--0ObservableObjectArray@@QEAA@XZ.c)
 *     ??0CPerMonitorDesktopVisibilityService@@QEAA@XZ @ 0x18038E958 (--0CPerMonitorDesktopVisibilityService@@QEAA@XZ.c)
 *     ??0TabletModePositionerManager@@QEAA@XZ @ 0x1803A81A8 (--0TabletModePositionerManager@@QEAA@XZ.c)
 * Callees:
 *     InitializeSRWLock_0 @ 0x180088233 (InitializeSRWLock_0.c)
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
