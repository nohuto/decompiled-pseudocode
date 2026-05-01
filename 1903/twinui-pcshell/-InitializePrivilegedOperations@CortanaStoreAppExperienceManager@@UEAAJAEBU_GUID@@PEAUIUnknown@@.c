/*
 * XREFs of ?InitializePrivilegedOperations@CortanaStoreAppExperienceManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1801BD500
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@$$V@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microsoft@@@Z @ 0x18010B524 (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedForegroundOperations@@@WRL@Microso.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::InitializePrivilegedOperations(
        CortanaStoreAppExperienceManager *this,
        struct _GUID *a2,
        struct IUnknown *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedForegroundOperations>,>(
         a2,
         a3,
         (__int64 *)this + 25);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFC,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
