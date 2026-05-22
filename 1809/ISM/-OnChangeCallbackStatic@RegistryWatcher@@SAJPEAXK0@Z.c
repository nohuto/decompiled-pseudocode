/*
 * XREFs of ?OnChangeCallbackStatic@RegistryWatcher@@SAJPEAXK0@Z @ 0x18009D9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnKeyChange@RegistryWatcher@@AEAAJXZ @ 0x18009DA0C (-OnKeyChange@RegistryWatcher@@AEAAJXZ.c)
 */

__int64 __fastcall RegistryWatcher::OnChangeCallbackStatic(RegistryWatcher *a1, int a2, void *a3)
{
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v3 = -2147418113;
    v4 = 165LL;
  }
  else
  {
    v3 = RegistryWatcher::OnKeyChange(a1);
    if ( v3 >= 0 )
      return 0LL;
    v4 = 161LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
