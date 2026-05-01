/*
 * XREFs of ?OnStartExitTransitionToCortanaCompleted@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18031C410
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$OnStartExitTransitionToCortanaCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180318A5C (--$OnStartExitTransitionToCortanaCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartW.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnStartExitTransitionToCortanaCompleted(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  int *v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+28h] [rbp-20h] BYREF
  XamlLauncherState *v8; // [rsp+30h] [rbp-18h]
  char v9; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (int *)((char *)this + 64);
  v7 = *((_DWORD *)this + 16);
  v8 = this;
  v9 = 1;
  if ( v7 == 12
    && (*v3 = 13,
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 11) + 56LL))(
               *((_QWORD *)this + 11),
               *((_QWORD *)this + 125),
               2LL),
        v5 = v4,
        v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x866,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v4);
  }
  else
  {
    v5 = 0;
  }
  v9 = 0;
  StartWindowTelemetry::OnStartExitTransitionToCortanaCompleted<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v7,
    v3);
  return v5;
}
