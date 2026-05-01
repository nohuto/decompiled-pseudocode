/*
 * XREFs of ?PositionFlyout@CBaseTrayFlyoutExperienceManager@@UEAAJAEBURect@Foundation@Windows@@AEBUSize@34@@Z @ 0x180099B20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionFlyoutCore@CBaseTrayFlyoutExperienceManager@@IEAAJXZ @ 0x180099B90 (-PositionFlyoutCore@CBaseTrayFlyoutExperienceManager@@IEAAJXZ.c)
 *     ?SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z @ 0x18009A3DC (-SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::PositionFlyout(
        CBaseTrayFlyoutExperienceManager *this,
        const struct Windows::Foundation::Rect *a2,
        const struct Windows::Foundation::Size *a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 106) = (int)*(float *)a3;
  *((_DWORD *)this + 107) = (int)*((float *)a3 + 1);
  v4 = CBaseTrayFlyoutExperienceManager::SetTrayItemRect(this, a2);
  if ( v4 < 0 )
  {
    v5 = 591LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = CBaseTrayFlyoutExperienceManager::PositionFlyoutCore(this);
  if ( v4 < 0 )
  {
    v5 = 592LL;
    goto LABEL_5;
  }
  return (unsigned int)v4;
}
