/*
 * XREFs of __scrt_acquire_startup_lock @ 0x18003997C
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180039388 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x1800394A4 (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     ?__uncaught_exception@@YA_NXZ @ 0x18003A66C (-__uncaught_exception@@YA_NXZ.c)
 */

char _scrt_acquire_startup_lock()
{
  int v0; // eax
  PVOID StackBase; // rcx
  signed __int64 v2; // rax

  LOBYTE(v0) = __uncaught_exception();
  if ( v0 )
  {
    StackBase = NtCurrentTeb()->NtTib.StackBase;
    while ( 1 )
    {
      v2 = _InterlockedCompareExchange64(&qword_18004FBD8, (signed __int64)StackBase, 0LL);
      if ( !v2 )
        break;
      if ( StackBase == (PVOID)v2 )
        return 1;
    }
  }
  return 0;
}
