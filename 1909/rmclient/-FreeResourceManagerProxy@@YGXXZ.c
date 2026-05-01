/*
 * XREFs of ?FreeResourceManagerProxy@@YGXXZ @ 0x10007421
 * Callers:
 *     _DllMain@12 @ 0x1000D02C (_DllMain@12.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

void __stdcall FreeResourceManagerProxy()
{
  if ( dword_10018418 )
    (**(void (__thiscall ***)(int, int))dword_10018418)(dword_10018418, 1);
  dword_10018418 = 0;
  RtlDeleteCriticalSection(&s_csProxy);
}
