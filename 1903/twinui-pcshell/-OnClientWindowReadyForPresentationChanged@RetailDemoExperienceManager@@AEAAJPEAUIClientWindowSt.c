/*
 * XREFs of ?OnClientWindowReadyForPresentationChanged@RetailDemoExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1801B56E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RetailDemoExperienceManager::OnClientWindowReadyForPresentationChanged(
        RetailDemoExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 464);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 464));
  try
  {
    v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *))(*(_QWORD *)a3 + 48LL))(a3);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        618LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x276,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v6);
  }
  return result;
}
