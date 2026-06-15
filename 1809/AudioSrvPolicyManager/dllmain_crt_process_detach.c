/*
 * XREFs of dllmain_crt_process_detach @ 0x1800367B4
 * Callers:
 *     dllmain_crt_dispatch @ 0x180036640 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x180036C8C (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x180036DD8 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x180036E10 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x180036FFC (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x180037028 (__scrt_uninitialize_crt.c)
 *     ?__scrt_uninitialize_type_info@@YAXXZ @ 0x18003727C (-__scrt_uninitialize_type_info@@YAXXZ.c)
 *     __scrt_fastfail @ 0x1800372D4 (__scrt_fastfail.c)
 *     _RTC_Terminate @ 0x18003746C (_RTC_Terminate.c)
 */

_BOOL8 __fastcall dllmain_crt_process_detach(char a1)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( dword_18004F3D0 <= 0 )
    return 0LL;
  --dword_18004F3D0;
  v2 = _scrt_acquire_startup_lock();
  if ( _scrt_current_native_startup_state != 2 )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x180036837LL);
  }
  _scrt_dllmain_uninitialize_c();
  __scrt_uninitialize_type_info();
  RTC_Terminate();
  _scrt_current_native_startup_state = 0;
  _scrt_dllmain_uninitialize_critical();
  LOBYTE(v3) = v2;
  _scrt_release_startup_lock(v3);
  LOBYTE(v4) = a1;
  return (unsigned __int8)_scrt_uninitialize_crt(v4, 0LL) != 0;
}
