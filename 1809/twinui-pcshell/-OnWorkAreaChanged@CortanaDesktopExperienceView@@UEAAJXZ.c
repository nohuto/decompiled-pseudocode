/*
 * XREFs of ?OnWorkAreaChanged@CortanaDesktopExperienceView@@UEAAJXZ @ 0x18018A070
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180011374 (-PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180014D04 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x18001DF04 (-IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnWorkAreaChanged(CortanaDesktopExperienceView *this)
{
  CortanaDesktopExperienceView *v1; // rdi
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (CortanaDesktopExperienceView *)((char *)this - 16);
  if ( CortanaDesktopExperienceView::IsViewVisible((CortanaDesktopExperienceView *)((char *)this - 16))
    && *((_BYTE *)this + 207) )
  {
    v3 = CortanaDesktopExperienceView::PositionAlongsideStart(v1);
    if ( v3 < 0 )
    {
      v4 = 582LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
    v3 = CortanaDesktopExperienceView::PositionCortanaWindow(v1, 1, 0);
    if ( v3 < 0 )
    {
      v4 = 583LL;
      goto LABEL_5;
    }
  }
  return 0LL;
}
