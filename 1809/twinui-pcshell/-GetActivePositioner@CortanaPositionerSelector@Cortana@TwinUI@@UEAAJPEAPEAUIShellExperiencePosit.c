/*
 * XREFs of ?GetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x180079090
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::GetActivePositioner(
        TwinUI::Cortana::CortanaPositionerSelector *this,
        struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  if ( !*((_DWORD *)this + 6) )
    return 2147943568LL;
  v2 = (*(__int64 (__fastcall **)(TwinUI::Cortana::CortanaPositionerSelector *, _QWORD, struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **))(*(_QWORD *)this + 16LL))(
         this,
         *((unsigned int *)this + 6),
         a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
