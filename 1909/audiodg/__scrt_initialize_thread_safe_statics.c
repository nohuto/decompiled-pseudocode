/*
 * XREFs of __scrt_initialize_thread_safe_statics @ 0x1400175B0
 * Callers:
 *     <none>
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x140016320 (__scrt_initialize_onexit_tables.c)
 *     atexit @ 0x140016558 (atexit.c)
 *     __scrt_fastfail @ 0x140016750 (__scrt_fastfail.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 _scrt_initialize_thread_safe_statics()
{
  HMODULE ModuleHandleW; // rbx
  FARPROC ProcAddress; // rsi
  FARPROC v2; // rdi
  FARPROC v3; // rax
  FARPROC v4; // rbx

  InitializeCriticalSectionAndSpinCount(&stru_140085D48, 0xFA0u);
  ModuleHandleW = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ( !ModuleHandleW )
  {
    ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
    if ( !ModuleHandleW )
    {
LABEL_13:
      _scrt_fastfail(7u);
      JUMPOUT(0x14001770DLL);
    }
  }
  ProcAddress = GetProcAddress(ModuleHandleW, "InitializeConditionVariable");
  v2 = GetProcAddress(ModuleHandleW, "SleepConditionVariableCS");
  v3 = GetProcAddress(ModuleHandleW, "WakeAllConditionVariable");
  v4 = v3;
  if ( ProcAddress && v2 && v3 )
  {
    hEvent = 0LL;
    ((void (__fastcall *)(void *))ProcAddress)(&unk_140085D70);
    qword_140085D80 = __ROR8__(v2, 64 - ((unsigned __int8)_security_cookie & 0x3Fu)) ^ _security_cookie;
    qword_140085D88 = __ROR8__(v4, 64 - ((unsigned __int8)_security_cookie & 0x3Fu)) ^ _security_cookie;
  }
  else
  {
    hEvent = CreateEventW(0LL, 1, 0, 0LL);
    if ( !hEvent )
    {
LABEL_12:
      _scrt_fastfail(7u);
      goto LABEL_13;
    }
  }
  if ( !_scrt_initialize_onexit_tables(0) )
  {
    _scrt_fastfail(7u);
    goto LABEL_12;
  }
  atexit(_scrt_uninitialize_thread_safe_statics);
  return 0LL;
}
