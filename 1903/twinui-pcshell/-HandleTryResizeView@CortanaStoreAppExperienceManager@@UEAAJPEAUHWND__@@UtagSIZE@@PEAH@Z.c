/*
 * XREFs of ?HandleTryResizeView@CortanaStoreAppExperienceManager@@UEAAJPEAUHWND__@@UtagSIZE@@PEAH@Z @ 0x1801BD1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002D758 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ @ 0x1801BC1A0 (-CheckThread@CortanaStoreAppExperienceManager@@AEAAXXZ.c)
 *     ?PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BE850 (-PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::HandleTryResizeView(
        CortanaStoreAppExperienceManager *this,
        HWND a2,
        struct tagSIZE a3,
        int *a4)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v8; // rdx
  ExperienceManagerUtils *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LONG cy; // [rsp+54h] [rbp+1Ch]

  cy = a3.cy;
  CortanaStoreAppExperienceManager::CheckThread((CortanaStoreAppExperienceManager *)((char *)this - 120));
  *a4 = 0;
  v9 = (ExperienceManagerUtils *)*((_QWORD *)this + 16);
  if ( !v9 )
    return 0LL;
  if ( a2 != (HWND)ExperienceManagerUtils::WindowFromViewWrapper(v9, v8) )
    return 0LL;
  *a4 = 1;
  if ( a3.cx <= 0 )
    return 0LL;
  if ( cy <= 0 )
    return 0LL;
  *((struct tagSIZE *)this + 15) = a3;
  v10 = CortanaStoreAppExperienceManager::PositionCortanaWindow((CortanaStoreAppExperienceManager *)((char *)this - 120));
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x28D,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
