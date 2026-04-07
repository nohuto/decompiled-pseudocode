/*
 * XREFs of ?Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ @ 0x180040440
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x1800255C0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180040488 (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::Initialize(CAccentAcrylicBlurBehind *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // edi
  int v5; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CVisual::Initialize(this);
  v3 = 0;
  v4 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x717,
      (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v2,
      v7);
    return v4;
  }
  else
  {
    v5 = CAccentAcrylicBlurBehind::InitializeDComp(this);
    if ( v5 < 0 )
      return (unsigned int)v5;
    return v3;
  }
}
