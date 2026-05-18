/*
 * XREFs of dllmain_crt_process_detach @ 0x180006194
 * Callers:
 *     dllmain_crt_dispatch @ 0x180006020 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x1800050E8 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x180005234 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x18000526C (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x180005458 (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x180005484 (__scrt_uninitialize_crt.c)
 *     __scrt_fastfail @ 0x1800058E0 (__scrt_fastfail.c)
 *     ?__scrt_uninitialize_type_info@@YAXXZ @ 0x180006474 (-__scrt_uninitialize_type_info@@YAXXZ.c)
 *     _RTC_Terminate @ 0x180006500 (_RTC_Terminate.c)
 */

_BOOL8 __fastcall dllmain_crt_process_detach(char a1)
{
  char v2; // bl
  __int64 v3; // rcx

  if ( dword_18000B6C4 <= 0 )
    return 0LL;
  --dword_18000B6C4;
  v2 = _scrt_acquire_startup_lock();
  if ( _scrt_current_native_startup_state != 2 )
  {
    _scrt_fastfail(7u);
    __debugbreak();
    JUMPOUT(0x180006217LL);
  }
  _scrt_dllmain_uninitialize_c();
  __scrt_uninitialize_type_info();
  RTC_Terminate();
  _scrt_current_native_startup_state = 0;
  _scrt_dllmain_uninitialize_critical();
  _scrt_release_startup_lock(v2);
  LOBYTE(v3) = a1;
  return _scrt_uninitialize_crt(v3, 0) != 0;
}
