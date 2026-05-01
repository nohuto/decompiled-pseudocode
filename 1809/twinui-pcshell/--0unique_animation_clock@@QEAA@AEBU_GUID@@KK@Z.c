/*
 * XREFs of ??0unique_animation_clock@@QEAA@AEBU_GUID@@KK@Z @ 0x1801F60B0
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAK@Z @ 0x180055B10 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAK@Z.c)
 *     ??$make_unique@Vunique_animation_clock@@AEBU_GUID@@AEBHH$0A@@std@@YA?AV?$unique_ptr@Vunique_animation_clock@@U?$default_delete@Vunique_animation_clock@@@std@@@0@AEBU_GUID@@AEBH$$QEAH@Z @ 0x1801F5BDC (--$make_unique@Vunique_animation_clock@@AEBU_GUID@@AEBHH$0A@@std@@YA-AV-$unique_ptr@Vunique_anim.c)
 *     _lambda_f4a572d4522d0cfba348286ca4c2df10_::operator() @ 0x18033C1B8 (_lambda_f4a572d4522d0cfba348286ca4c2df10_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@unique_animation_clock@@AEAAJKK@Z @ 0x1801F7CE4 (-Initialize@unique_animation_clock@@AEAAJKK@Z.c)
 */

unique_animation_clock *__fastcall unique_animation_clock::unique_animation_clock(
        unique_animation_clock *this,
        const struct _GUID *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int128 v4; // xmm0
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (__int128)*a2;
  *((_BYTE *)this + 16) = 0;
  *(_OWORD *)this = v4;
  v6 = unique_animation_clock::Initialize(this, a3, a4);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      14LL,
      (__int64)"internal\\onecorewindows\\inc\\AnimationClockHelpers.h",
      (const char *)(unsigned int)v6);
  return this;
}
