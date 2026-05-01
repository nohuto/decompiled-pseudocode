/*
 * XREFs of ?OnCortanaDismissRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802A4190
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$OnCortanaDismissRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1802A0BF4 (--$OnCortanaDismissRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaDismissRequested(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  int *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+28h] [rbp-20h] BYREF
  XamlLauncherState *v9; // [rsp+30h] [rbp-18h]
  char v10; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (int *)((char *)this + 64);
  v8 = *((_DWORD *)this + 16);
  v9 = this;
  v10 = 1;
  if ( v8 == 5 )
  {
    (*(void (__fastcall **)(_QWORD, struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *, struct IInspectable *))(**((_QWORD **)this + 11) + 96LL))(
      *((_QWORD *)this + 11),
      a2,
      a3);
LABEL_6:
    v6 = 0;
    goto LABEL_7;
  }
  if ( v8 != 7 )
    goto LABEL_6;
  (*(void (__fastcall **)(_QWORD, __int64, struct IInspectable *))(**((_QWORD **)this + 12) + 24LL))(
    *((_QWORD *)this + 12),
    3LL,
    a3);
  *v4 = 8;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 88LL))(*((_QWORD *)this + 11));
  v6 = v5;
  if ( v5 >= 0 )
    goto LABEL_6;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x74C,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  v10 = 0;
  StartWindowTelemetry::OnCortanaDismissRequested<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v8,
    v4);
  return v6;
}
