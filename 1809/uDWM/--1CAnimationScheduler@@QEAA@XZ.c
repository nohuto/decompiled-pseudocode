/*
 * XREFs of ??1CAnimationScheduler@@QEAA@XZ @ 0x1800A28FC
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x18007839C (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x18002D9E0 (-StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18002DC7C (-Release@CStoryboard@@QEAAKXZ.c)
 */

void __fastcall CAnimationScheduler::~CAnimationScheduler(CAnimationScheduler *this)
{
  __int64 v1; // rdi
  _QWORD *v2; // rsi
  CStoryboard *v4; // rcx
  CWindowPropertyTracker *v5; // rbx

  v1 = 0LL;
  v2 = (_QWORD *)((char *)this + 16);
  *(_QWORD *)this = &CAnimationScheduler::`vftable'{for `IAnimationListener'};
  for ( *((_QWORD *)this + 1) = &CAnimationScheduler::`vftable'{for `IAnimationClockEventListener'};
        (unsigned int)v1 < *((_DWORD *)this + 10);
        v1 = (unsigned int)(v1 + 1) )
  {
    v4 = *(CStoryboard **)(*v2 + 8 * v1);
    if ( v4 )
      CStoryboard::Release(v4);
  }
  v5 = (CAnimationScheduler *)((char *)this + 48);
  CWindowPropertyTracker::StopTrackingAllWindows(v5);
  CWindowPropertyTracker::StopTrackingAllWindows(v5);
  DynArrayImpl<0>::~DynArrayImpl<0>(v5);
  DynArrayImpl<0>::~DynArrayImpl<0>(v2);
}
