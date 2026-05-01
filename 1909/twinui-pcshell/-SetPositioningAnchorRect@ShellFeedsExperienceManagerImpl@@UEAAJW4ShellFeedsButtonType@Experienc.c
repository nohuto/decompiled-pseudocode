/*
 * XREFs of ?SetPositioningAnchorRect@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1800949A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ShellFeedsExperienceManagerImpl_SetPositioningAnchorRect@AEAW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAMAEAMAEAMAEAM@ShellFeedsTelemetry@@SAXAEAW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAM111@Z @ 0x180092454 (--$ShellFeedsExperienceManagerImpl_SetPositioningAnchorRect@AEAW4ShellFeedsButtonType@Experience.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::SetPositioningAnchorRect(__int64 a1, int a2, __int128 *a3)
{
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int128 v12; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v11 = -2LL;
  v10 = a2;
  ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_SetPositioningAnchorRect<enum Windows::Internal::Shell::Experience::ShellFeedsButtonType &,float &,float &,float &,float &>(
    &v10,
    (__int64)a3,
    (__int64)a3 + 4,
    (__int64)a3 + 8,
    (__int64)a3 + 12);
  v5 = *(__int64 **)(a1 + 88);
  v6 = *v5;
  v12 = *a3;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v6 + 24))(v5, &v12);
  v8 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  return v8;
}
