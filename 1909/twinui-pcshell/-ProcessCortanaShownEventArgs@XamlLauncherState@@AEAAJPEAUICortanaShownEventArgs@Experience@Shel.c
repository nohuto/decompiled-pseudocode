/*
 * XREFs of ?ProcessCortanaShownEventArgs@XamlLauncherState@@AEAAJPEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18005FFD8
 * Callers:
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x18005EBA0 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherState::ProcessCortanaShownEventArgs(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-38h] BYREF
  float v7; // [rsp+24h] [rbp-34h]
  float v8; // [rsp+28h] [rbp-30h]
  float v9; // [rsp+2Ch] [rbp-2Ch]
  RECT rc; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *, int *))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v6);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D0,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v3,
      v6);
    return v4;
  }
  else
  {
    rc.left = (int)*(float *)&v6;
    rc.top = (int)v7;
    rc.right = (int)(float)(v8 + *(float *)&v6);
    rc.bottom = (int)(float)(v9 + v7);
    *((_QWORD *)this + 123) = MonitorFromRect(&rc, 0);
    return 0LL;
  }
}
