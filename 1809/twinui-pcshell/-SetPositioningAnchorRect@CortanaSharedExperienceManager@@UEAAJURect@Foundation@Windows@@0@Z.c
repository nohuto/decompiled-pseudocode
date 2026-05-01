/*
 * XREFs of ?SetPositioningAnchorRect@CortanaSharedExperienceManager@@UEAAJURect@Foundation@Windows@@0@Z @ 0x1801540D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::SetPositioningAnchorRect(__int64 a1, __int128 *a2, __int128 *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int128 v7; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = *a3;
  v7 = *a2;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int128 *))(**(_QWORD **)(a1 + 464) + 40LL))(
         *(_QWORD *)(a1 + 464),
         &v7,
         &v6);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x164,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
