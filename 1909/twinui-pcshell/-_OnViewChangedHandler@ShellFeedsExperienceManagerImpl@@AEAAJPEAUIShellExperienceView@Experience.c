/*
 * XREFs of ?_OnViewChangedHandler@ShellFeedsExperienceManagerImpl@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x180095730
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ShellFeedsExperienceManagerImpl_OnApplicationActivatedForLaunch@AEAJ@ShellFeedsTelemetry@@SAXAEAJ@Z @ 0x180092188 (--$ShellFeedsExperienceManagerImpl_OnApplicationActivatedForLaunch@AEAJ@ShellFeedsTelemetry@@SAX.c)
 *     ?_OnViewCreated@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800957FC (-_OnViewCreated@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_OnViewDestroyed@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x1800958E4 (-_OnViewDestroyed@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_OnViewChangedHandler(
        ShellFeedsExperienceManagerImpl *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // rax
  _DWORD v9[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+50h] [rbp+18h] BYREF
  int v12; // [rsp+58h] [rbp+20h] BYREF

  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v12);
  if ( v5 < 0 )
  {
    v6 = 645LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( v12 )
  {
    if ( v12 > 2 )
    {
      if ( v12 == 5 )
        return ShellFeedsExperienceManagerImpl::_OnViewCreated(this);
      if ( v12 == 6 )
        return ShellFeedsExperienceManagerImpl::_OnViewDestroyed(this);
    }
  }
  else
  {
    v8 = *(_QWORD *)a3;
    v11 = 0;
    v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(v8 + 56))(
           a3,
           &v11);
    if ( v5 < 0 )
    {
      v6 = 651LL;
      goto LABEL_3;
    }
    v9[0] = v11;
    ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_OnApplicationActivatedForLaunch<long &>((__int64)v9);
  }
  return 0LL;
}
