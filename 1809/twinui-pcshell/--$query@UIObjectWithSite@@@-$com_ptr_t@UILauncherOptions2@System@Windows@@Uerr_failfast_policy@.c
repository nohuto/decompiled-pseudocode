/*
 * XREFs of ??$query@UIObjectWithSite@@@?$com_ptr_t@UILauncherOptions2@System@Windows@@Uerr_failfast_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIObjectWithSite@@Uerr_failfast_policy@wil@@@1@XZ @ 0x18008FD90
 * Callers:
 *     ?GetLaunchOptionSite@@YA?AV?$com_ptr_t@UIObjectWithSite@@Uerr_exception_policy@wil@@@wil@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801DC98C (-GetLaunchOptionSite@@YA-AV-$com_ptr_t@UIObjectWithSite@@Uerr_exception_policy@wil@@@wil@@AEBUSh.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800E62AC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::System::ILauncherOptions2,wil::err_failfast_policy>::query<IObjectWithSite>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352, a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x169A,
      (unsigned int)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v3,
      v5);
    __debugbreak();
  }
  return a2;
}
