/*
 * XREFs of ?__scrt_initialize_thread_safe_statics@@YAHXZ @ 0x180039E90
 * Callers:
 *     <none>
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x180039B6C (__scrt_initialize_onexit_tables.c)
 *     atexit @ 0x180039D78 (atexit.c)
 *     __scrt_fastfail @ 0x18003A2F0 (__scrt_fastfail.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __scrt_initialize_thread_safe_statics(void)
{
  HMODULE ModuleHandleW; // rbx
  void (__stdcall *InitializeConditionVariable)(PCONDITION_VARIABLE); // rsi
  BOOL (__stdcall *SleepConditionVariableCS)(PCONDITION_VARIABLE, PCRITICAL_SECTION, DWORD); // rdi
  void (__stdcall *WakeAllConditionVariable)(PCONDITION_VARIABLE); // rax
  void (__stdcall *v4)(PCONDITION_VARIABLE); // rbx

  InitializeCriticalSectionAndSpinCount(&stru_18004FC18, 0xFA0u);
  ModuleHandleW = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ( !ModuleHandleW )
  {
    ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
    if ( !ModuleHandleW )
      goto LABEL_12;
  }
  InitializeConditionVariable = (void (__stdcall *)(PCONDITION_VARIABLE))GetProcAddress(
                                                                           ModuleHandleW,
                                                                           "InitializeConditionVariable");
  SleepConditionVariableCS = (BOOL (__stdcall *)(PCONDITION_VARIABLE, PCRITICAL_SECTION, DWORD))GetProcAddress(
                                                                                                  ModuleHandleW,
                                                                                                  "SleepConditionVariableCS");
  WakeAllConditionVariable = (void (__stdcall *)(PCONDITION_VARIABLE))GetProcAddress(
                                                                        ModuleHandleW,
                                                                        "WakeAllConditionVariable");
  v4 = WakeAllConditionVariable;
  if ( InitializeConditionVariable && SleepConditionVariableCS && WakeAllConditionVariable )
  {
    hHandle = 0LL;
    ((void (__fastcall *)(void *))InitializeConditionVariable)(&unk_18004FC40);
    qword_18004FC50 = __ROR8__(SleepConditionVariableCS, 64 - ((unsigned __int8)_security_cookie & 0x3Fu)) ^ _security_cookie;
    qword_18004FC58 = __ROR8__(v4, 64 - ((unsigned __int8)_security_cookie & 0x3Fu)) ^ _security_cookie;
    goto LABEL_7;
  }
  hHandle = CreateEventW(0LL, 1, 0, 0LL);
  if ( !hHandle )
  {
LABEL_12:
    _scrt_fastfail(7LL);
    JUMPOUT(0x180039FE2LL);
  }
LABEL_7:
  if ( !_scrt_initialize_onexit_tables(0) )
  {
    _scrt_fastfail(7LL);
    goto LABEL_12;
  }
  atexit(__scrt_uninitialize_thread_safe_statics);
  return 0LL;
}
