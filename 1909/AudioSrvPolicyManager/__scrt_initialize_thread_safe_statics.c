/*
 * XREFs of __scrt_initialize_thread_safe_statics @ 0x1800354B0
 * Callers:
 *     <none>
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x18003476C (__scrt_initialize_onexit_tables.c)
 *     atexit @ 0x1800349A4 (atexit.c)
 *     __scrt_fastfail @ 0x180034BC4 (__scrt_fastfail.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 _scrt_initialize_thread_safe_statics()
{
  HMODULE ModuleHandleW; // rbx
  FARPROC ProcAddress; // rsi
  FARPROC v2; // rdi
  FARPROC v3; // rax
  FARPROC v4; // rbx

  InitializeCriticalSectionAndSpinCount(&stru_18004D970, 0xFA0u);
  ModuleHandleW = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ( !ModuleHandleW )
  {
    ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
    if ( !ModuleHandleW )
    {
LABEL_13:
      _scrt_fastfail(7u);
      JUMPOUT(0x18003560DLL);
    }
  }
  ProcAddress = GetProcAddress(ModuleHandleW, "InitializeConditionVariable");
  v2 = GetProcAddress(ModuleHandleW, "SleepConditionVariableCS");
  v3 = GetProcAddress(ModuleHandleW, "WakeAllConditionVariable");
  v4 = v3;
  if ( ProcAddress && v2 && v3 )
  {
    hHandle = 0LL;
    ((void (__fastcall *)(void *))ProcAddress)(&unk_18004D998);
    qword_18004D9A8 = __ROR8__(v2, 64 - ((unsigned __int8)_security_cookie & 0x3Fu)) ^ _security_cookie;
    qword_18004D9B0 = __ROR8__(v4, 64 - ((unsigned __int8)_security_cookie & 0x3Fu)) ^ _security_cookie;
  }
  else
  {
    hHandle = CreateEventW(0LL, 1, 0, 0LL);
    if ( !hHandle )
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
