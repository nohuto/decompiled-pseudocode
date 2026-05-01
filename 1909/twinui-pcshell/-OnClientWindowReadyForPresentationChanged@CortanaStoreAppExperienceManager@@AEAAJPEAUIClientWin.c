/*
 * XREFs of ?OnClientWindowReadyForPresentationChanged@CortanaStoreAppExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1801DCA30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ @ 0x1801DB160 (-CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ.c)
 *     ?SetAltTabWindowVisibility@CortanaStoreAppExperienceManager@@AEAAX_N@Z @ 0x1801DDE14 (-SetAltTabWindowVisibility@CortanaStoreAppExperienceManager@@AEAAX_N@Z.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::OnClientWindowReadyForPresentationChanged(
        CortanaStoreAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v11; // [rsp+40h] [rbp+18h] BYREF

  CortanaStoreAppExperienceManager::CheckThread(this);
  v5 = *(_QWORD *)a3;
  v11 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *, char *))(v5 + 48))(
         a3,
         &v11);
  if ( v6 < 0 )
  {
    v7 = 913LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( v11 )
  {
    v9 = *((_QWORD *)this + 32);
    if ( v9 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 112LL))(v9);
      if ( v6 < 0 )
      {
        v7 = 917LL;
        goto LABEL_3;
      }
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 32) + 40LL))(*((_QWORD *)this + 32), 0LL);
      if ( v6 < 0 )
      {
        v7 = 919LL;
        goto LABEL_3;
      }
      CortanaStoreAppExperienceManager::SetAltTabWindowVisibility(this, 1);
    }
  }
  return 0LL;
}
