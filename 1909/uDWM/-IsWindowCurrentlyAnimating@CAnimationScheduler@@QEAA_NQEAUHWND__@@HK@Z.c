/*
 * XREFs of ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x180009EE8
 * Callers:
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180009D34 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x180009E84 (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x180009F74 (--1CAnimationComponent@@UEAA@XZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18002A5AC (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     _lambda_aa6b274e5719162e24170e1c78bdbbc5_::operator() @ 0x18004B1F8 (_lambda_aa6b274e5719162e24170e1c78bdbbc5_--operator().c)
 *     ?HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z @ 0x1800A832C (-HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x18003997C (-HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z.c)
 */

bool __fastcall CAnimationScheduler::IsWindowCurrentlyAnimating(
        CAnimationScheduler *this,
        HWND a2,
        int a3,
        unsigned int a4)
{
  unsigned int v4; // esi
  bool v5; // r10
  __int64 v6; // rbx
  __int64 v10; // r14
  CStoryboard *v11; // rcx

  v4 = *((_DWORD *)this + 10);
  v5 = 0;
  v6 = 0LL;
  if ( v4 )
  {
    v10 = *((_QWORD *)this + 2);
    do
    {
      v11 = *(CStoryboard **)(v10 + 8 * v6);
      if ( *((_DWORD *)v11 + 6) != 4 && (a3 == -1 || a3 == *((_DWORD *)v11 + 18)) )
      {
        v5 = !a2 || CStoryboard::HasAnimationComponent(v11, a2, a4);
        if ( v5 )
          break;
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < v4 );
  }
  return v5;
}
