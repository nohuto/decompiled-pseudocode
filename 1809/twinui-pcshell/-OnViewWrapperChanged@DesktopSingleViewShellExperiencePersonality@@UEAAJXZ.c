/*
 * XREFs of ?OnViewWrapperChanged@DesktopSingleViewShellExperiencePersonality@@UEAAJXZ @ 0x180080710
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DesktopSingleViewShellExperiencePersonality::OnViewWrapperChanged(
        DesktopSingleViewShellExperiencePersonality *this)
{
  char *v1; // rbx
  __int64 (__fastcall ***v2)(_QWORD, GUID *, char *); // rdi
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (char *)this + 16;
  v2 = *(__int64 (__fastcall ****)(_QWORD, GUID *, char *))(*((_QWORD *)this + 1) + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
  if ( !v2 )
    return 0LL;
  v3 = (**v2)(v2, &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f, v1);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x69,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
