/*
 * XREFs of ?Hide@CControlCenterExperienceManager@@AEAAJXZ @ 0x180179E3C
 * Callers:
 *     ?HotKeyInvoked@CControlCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x180179E90 (-HotKeyInvoked@CControlCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Wind.c)
 *     ?OnDismiss@CControlCenterExperienceManager@@UEAAJXZ @ 0x180179EF0 (-OnDismiss@CControlCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnIdleStateFlagsChanged@CControlCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x18017A4C0 (-OnIdleStateFlagsChanged@CControlCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z.c)
 *     ?OnTargetedMessage@CControlCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18017A600 (-OnTargetedMessage@CControlCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18004527C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CControlCenterExperienceManager::Hide(CControlCenterExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 36) != 2 )
    return 0LL;
  v1 = CSingleViewShellExperience::Hide((__int64)this + 104, 0LL);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1CD,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
