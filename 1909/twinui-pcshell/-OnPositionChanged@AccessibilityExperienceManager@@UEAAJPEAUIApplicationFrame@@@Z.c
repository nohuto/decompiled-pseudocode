/*
 * XREFs of ?OnPositionChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803528F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetFrameRect@AccessibilityViewInfo@@QEBAJPEAUtagRECT@@@Z @ 0x18035221C (-GetFrameRect@AccessibilityViewInfo@@QEBAJPEAUtagRECT@@@Z.c)
 *     ?SetNoActivate@AccessibilityExperienceManager@@UEAAX_N@Z @ 0x180352FE0 (-SetNoActivate@AccessibilityExperienceManager@@UEAAX_N@Z.c)
 */

__int64 __fastcall AccessibilityExperienceManager::OnPositionChanged(
        AccessibilityExperienceManager *this,
        struct IApplicationFrame *a2)
{
  __int64 v3; // rcx
  int FrameRect; // edi
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_QWORD *)this + 33);
  if ( !v3 || !(*(unsigned int (__fastcall **)(__int64, struct IApplicationFrame *))(*(_QWORD *)v3 + 24LL))(v3, a2) )
    return 2147942487LL;
  FrameRect = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 96LL))(*((_QWORD *)this + 33));
  if ( FrameRect < 0 )
  {
    v5 = 234LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)FrameRect);
    return (unsigned int)FrameRect;
  }
  FrameRect = AccessibilityViewInfo::GetFrameRect(
                (AccessibilityExperienceManager *)((char *)this + 256),
                (struct tagRECT *)this + 20);
  if ( FrameRect < 0 )
  {
    v5 = 236LL;
    goto LABEL_5;
  }
  AccessibilityExperienceManager::SetNoActivate(
    (AccessibilityExperienceManager *)((char *)this + 32),
    *((_DWORD *)this + 89) == 0x8000000);
  return 0LL;
}
