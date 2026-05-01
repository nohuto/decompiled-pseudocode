/*
 * XREFs of ?RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x18007A1D0
 * Callers:
 *     ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1800171C4 (-ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z.c)
 *     ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x1801884A4 (-ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::RemoveRectFromRegion(
        CortanaDesktopExperienceView *this,
        HRGN a2,
        int a3,
        int a4,
        int x2,
        int y2)
{
  HRGN RectRgn; // rax
  HRGN v8; // rbx
  unsigned int v9; // edi
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  RectRgn = CreateRectRgn(a3, a4, x2, y2);
  v8 = RectRgn;
  if ( RectRgn )
  {
    if ( CombineRgn(a2, a2, RectRgn, 4) )
    {
      v9 = 0;
      goto LABEL_4;
    }
    v11 = 2589LL;
  }
  else
  {
    v11 = 2588LL;
  }
  v9 = -2147467259;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)0x80004005LL);
LABEL_4:
  if ( v8 )
    DeleteObject(v8);
  return v9;
}
