/*
 * XREFs of ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x1800398B8
 * Callers:
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x18000FD70 (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001DFD0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x18003B6B4 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 * Callees:
 *     ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x18003997C (-HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CAnimationScheduler::_ShouldTrack(CAnimationScheduler *this, HWND *a2, struct CStoryboard *a3, char a4)
{
  char v4; // bl
  HWND *v9; // rdi

  v4 = 0;
  if ( *((_DWORD *)a3 + 6) )
  {
    if ( *((_DWORD *)a3 + 6) == 4 || !CStoryboard::HasAnimationComponent(a3, a2[5], 0) )
      return v4;
    return 1;
  }
  v9 = a2;
  if ( a2 )
  {
    while ( (*(unsigned int (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a3 + 112LL))(
              a3,
              *((unsigned int *)v9 + 153)) == -1 )
    {
      v9 = (HWND *)v9[69];
      if ( !v9 )
        return v4;
    }
    if ( a4
      || ((*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a3 + 120LL))(
            a3,
            *((unsigned int *)v9 + 153)) & 2) == 0 )
    {
      if ( v9 != a2 )
        return (*((_DWORD *)v9 + 153) & 0x10000000) != 0;
      return 1;
    }
  }
  return v4;
}
