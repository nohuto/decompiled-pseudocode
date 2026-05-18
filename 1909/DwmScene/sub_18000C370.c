/*
 * XREFs of sub_18000C370 @ 0x18000C370
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

char sub_18000C370()
{
  __int64 (*RtlDllShutdownInProgress)(void); // rax
  char v1; // bl
  HMODULE ModuleHandleW; // rax

  RtlDllShutdownInProgress = (__int64 (*)(void))qword_180269C38;
  v1 = 0;
  if ( qword_180269C38 )
    return RtlDllShutdownInProgress();
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  RtlDllShutdownInProgress = GetProcAddress(ModuleHandleW, "RtlDllShutdownInProgress");
  qword_180269C38 = (__int64)RtlDllShutdownInProgress;
  if ( RtlDllShutdownInProgress )
    return RtlDllShutdownInProgress();
  return v1;
}
