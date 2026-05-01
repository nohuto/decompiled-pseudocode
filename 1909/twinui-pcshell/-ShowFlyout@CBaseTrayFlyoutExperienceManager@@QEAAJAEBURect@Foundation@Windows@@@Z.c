/*
 * XREFs of ?ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@@Z @ 0x18009A5A8
 * Callers:
 *     ?ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_N@Z @ 0x18009A668 (-ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_N@Z.c)
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180012C34 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180090BE8 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?CanShow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEBA_NXZ @ 0x180097A04 (-CanShow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEBA_NXZ.c)
 *     ?SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z @ 0x18009A3DC (-SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::ShowFlyout(
        CBaseTrayFlyoutExperienceManager *this,
        const struct Windows::Foundation::Rect *a2)
{
  const struct _TlgProvider_t *v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
    TlgWrite(v4, &unk_1804EAD45, 0LL, 0LL, 2u, &pData);
  if ( CBaseTrayFlyoutExperienceManager::DebounceDetection::CanShow((CBaseTrayFlyoutExperienceManager *)((char *)this + 432)) )
  {
    v5 = CBaseTrayFlyoutExperienceManager::SetTrayItemRect(this, a2);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x238,
        (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    CSingleViewShellExperience::Show(
      (__int64)this + 72,
      (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4);
  }
  return 0LL;
}
