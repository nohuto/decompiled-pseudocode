/*
 * XREFs of ?FlushStashedWindowingEnvironmentSettings@WindowWrapperBase@@UEAAJPEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18007F3E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::FlushStashedWindowingEnvironmentSettings(
        WindowWrapperBase *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings **a2,
        __int64 a3,
        const char *a4)
{
  char *v4; // rbx
  struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    v4 = (char *)this - 16;
    v5 = (struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *)*((_QWORD *)this + 17);
    if ( v5 )
    {
      *a2 = v5;
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    else
    {
      *a2 = 0LL;
    }
    v6 = *((_QWORD *)v4 + 19);
    *((_QWORD *)v4 + 19) = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7D8,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           a4);
  }
  return result;
}
