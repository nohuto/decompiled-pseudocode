/*
 * XREFs of ?OnWindowSizeChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagSIZE@@PEA_N@Z @ 0x1800128A4
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180012950 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x180039030 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ?OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z @ 0x1800A9F50 (-OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z.c)
 */

__int64 __fastcall CAnimationScheduler::OnWindowSizeChange(
        CAnimationScheduler *this,
        const struct CWindowData *a2,
        struct tagSIZE a3,
        bool *a4)
{
  CAnimationScheduler *v8; // rcx
  unsigned int v9; // ebp
  __int64 v10; // rdi
  const struct CStoryboard *v12; // r12

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0;
  v10 = 0LL;
  for ( *a4 = 0; (unsigned int)v10 < *((_DWORD *)this + 10); v10 = (unsigned int)(v10 + 1) )
  {
    v12 = *(const struct CStoryboard **)(*((_QWORD *)this + 2) + 8 * v10);
    if ( CAnimationScheduler::_ShouldTrack(v8, a2, v12, 0) )
    {
      v9 = CWindowPropertyTracker::OnWindowSizeChange((CAnimationScheduler *)((char *)this + 48), v12, a2, a3);
      *a4 |= (v9 & 0x80000000) == 0;
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v9;
}
