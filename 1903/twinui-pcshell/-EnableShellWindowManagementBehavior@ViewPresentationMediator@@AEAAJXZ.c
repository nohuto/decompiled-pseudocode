/*
 * XREFs of ?EnableShellWindowManagementBehavior@ViewPresentationMediator@@AEAAJXZ @ 0x1802A9F70
 * Callers:
 *     ?OnChannelSever@ViewPresentationMediator@@UEAAXXZ @ 0x1802AA220 (-OnChannelSever@ViewPresentationMediator@@UEAAXXZ.c)
 *     ?SetShellWindowManagementScenario@ViewPresentationMediator@@UEAAJW4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@0@Z @ 0x1802AA9F0 (-SetShellWindowManagementScenario@ViewPresentationMediator@@UEAAJW4WINDOW_MANAGEMENT_BEHAVIOR_SC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?ComputeMaskAndFeaturesForScenarios@ViewPresentationMediator@@CA?AUBehaviorMaskAndFeatures@1@W4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@@Z @ 0x1802A9E5C (-ComputeMaskAndFeaturesForScenarios@ViewPresentationMediator@@CA-AUBehaviorMaskAndFeatures@1@W4W.c)
 */

__int64 __fastcall ViewPresentationMediator::EnableShellWindowManagementBehavior(
        ViewPresentationMediator *this,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v4; // rbx
  int v5; // edi
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = ViewPresentationMediator::ComputeMaskAndFeaturesForScenarios(*((unsigned int *)this + 76), a2, a3);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(**((_QWORD **)this + 24) + 24LL))(
         *((_QWORD *)this + 24),
         (unsigned int)v4,
         HIDWORD(v4));
  if ( v5 == -2147019873 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 128LL))(*((_QWORD *)this + 25));
    v5 = v6;
    if ( v6 >= 0 )
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 24) + 24LL))(
             *((_QWORD *)this + 24),
             (unsigned int)v4,
             HIDWORD(v4));
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x11F,
        (__int64)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
        (const char *)(unsigned int)v6);
  }
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x124,
      (__int64)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
      (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
