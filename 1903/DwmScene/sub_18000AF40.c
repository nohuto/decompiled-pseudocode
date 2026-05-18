/*
 * XREFs of sub_18000AF40 @ 0x18000AF40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 (*sub_18000AF40())(void)
{
  HMODULE ModuleHandleW; // rax
  __int64 (*result)(void); // rax

  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  result = GetProcAddress(ModuleHandleW, "LdrFastFailInLoaderCallout");
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
