/*
 * XREFs of ?OnViewPropertiesChanging@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180099840
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PositionFlyoutCore@CBaseTrayFlyoutExperienceManager@@IEAAJXZ @ 0x180099B90 (-PositionFlyoutCore@CBaseTrayFlyoutExperienceManager@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnViewPropertiesChanging(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 94) = (int)*((float *)a2 + 11);
  *((_DWORD *)this + 95) = (int)*((float *)a2 + 12);
  v4 = CBaseTrayFlyoutExperienceManager::PositionFlyoutCore((CBaseTrayFlyoutExperienceManager *)((char *)this - 48));
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = *((_QWORD *)this + 40);
    if ( v7 )
      (*(void (__fastcall **)(__int64, struct CSingleViewShellExperience *))(*(_QWORD *)v7 + 16LL))(v7, a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x130,
      (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
