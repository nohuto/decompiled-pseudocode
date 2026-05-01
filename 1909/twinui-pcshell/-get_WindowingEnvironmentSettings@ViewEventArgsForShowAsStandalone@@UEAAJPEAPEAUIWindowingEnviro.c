/*
 * XREFs of ?get_WindowingEnvironmentSettings@ViewEventArgsForShowAsStandalone@@UEAAJPEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800817D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventArgsForShowAsStandalone::get_WindowingEnvironmentSettings(
        ViewEventArgsForShowAsStandalone *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings **a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *v2; // rcx
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v2 = (struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    try
    {
      *a2 = v2;
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *))(*(_QWORD *)v2 + 8LL))(v2);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0xAA,
                             (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventargs.h",
                             v4);
    }
  }
  return 0LL;
}
