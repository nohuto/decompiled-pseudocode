/*
 * XREFs of ?PaintFocusIndicator@JointDivider@@AEAAXPEAUHDC__@@AEBUCRect@Geometry@@@Z @ 0x1803642F4
 * Callers:
 *     ?HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z @ 0x1803640F4 (-HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180302050 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z @ 0x180363FE0 (-FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z.c)
 */

void __fastcall JointDivider::PaintFocusIndicator(JointDivider *this, HDC a2, const struct Geometry::CRect *a3)
{
  int v3; // ebx
  int v5; // r9d
  int v6; // r10d
  unsigned int v7; // r9d
  unsigned int v8; // r9d
  LONG v9; // eax
  int Color; // eax
  const struct tagRECT *v11; // r8
  RECT rcSrc; // [rsp+30h] [rbp-38h] BYREF

  v3 = *((_DWORD *)this + 14);
  if ( v3 )
  {
    v5 = *((_DWORD *)this + 20);
    v6 = v5 * *((_DWORD *)this + 24) / 100;
    v7 = (int)((unsigned __int64)(4123168605LL * v5) >> 32) >> 5;
    v8 = (v7 >> 31) + v7;
    rcSrc.top = (*((_DWORD *)a3 + 3) - *((_DWORD *)a3 + 1)) / 2 - v6 / 2 + *((_DWORD *)a3 + 1);
    rcSrc.bottom = v6 + rcSrc.top;
    if ( v3 == 1 )
      v9 = *(_DWORD *)a3 + 1;
    else
      v9 = *((_DWORD *)a3 + 2) - v8 - 1;
    rcSrc.left = v9;
    rcSrc.right = v8 + v9;
    Color = CImmersiveColor::GetColor(3u);
    GDIHelpers::FillRectARGB(a2, &rcSrc, v11, Color);
  }
}
