/*
 * XREFs of ?ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ @ 0x1800946F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800216A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x18009451C (-UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ.c)
 */

__int64 __fastcall CAnimatedGlassSheet::ValidateVisual(CAnimatedGlassSheet *this, __int64 a2, int a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*((_DWORD *)this + 20) & 0x4000) != 0 )
  {
    CAnimatedGlassSheet::UpdateTransition(this, a2, a3);
    *((_DWORD *)this + 20) &= ~0x4000u;
  }
  v4 = CVisual::ValidateVisual(this);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x265,
    (__int64)"windows\\dwm\\udwm\\animatedglasssheet.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
