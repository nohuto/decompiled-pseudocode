/*
 * XREFs of __scrt_release_startup_lock @ 0x180036FFC
 * Callers:
 *     dllmain_crt_process_attach @ 0x180036698 (dllmain_crt_process_attach.c)
 *     dllmain_crt_process_detach @ 0x1800367B4 (dllmain_crt_process_detach.c)
 * Callees:
 *     __scrt_is_ucrt_dll_in_use @ 0x180037670 (__scrt_is_ucrt_dll_in_use.c)
 */

__int64 __fastcall _scrt_release_startup_lock(char a1)
{
  __int64 result; // rax

  result = _scrt_is_ucrt_dll_in_use();
  if ( (_DWORD)result )
  {
    if ( !a1 )
      _InterlockedExchange64(&_scrt_native_startup_lock, 0LL);
  }
  return result;
}
