/*
 * XREFs of dllmain_crt_process_detach @ 0x1800424A8
 * Callers:
 *     dllmain_crt_dispatch @ 0x180042330 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x18004299C (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x180042AE8 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x180042B20 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x180042D0C (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x180042D38 (__scrt_uninitialize_crt.c)
 *     ?__scrt_uninitialize_type_info@@YAXXZ @ 0x180043324 (-__scrt_uninitialize_type_info@@YAXXZ.c)
 *     __scrt_fastfail @ 0x18004337C (__scrt_fastfail.c)
 *     _RTC_Terminate @ 0x180043514 (_RTC_Terminate.c)
 */

__int64 __fastcall dllmain_crt_process_detach(char a1)
{
  unsigned int v2; // ebx
  char v4; // di
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = 0;
  if ( dword_18005C440 <= 0 )
    return 0LL;
  --dword_18005C440;
  v4 = _scrt_acquire_startup_lock();
  if ( _scrt_current_native_startup_state != 2 )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x180042536LL);
  }
  _scrt_dllmain_uninitialize_c();
  __scrt_uninitialize_type_info();
  RTC_Terminate();
  _scrt_current_native_startup_state = 0;
  _scrt_dllmain_uninitialize_critical();
  LOBYTE(v5) = v4;
  _scrt_release_startup_lock(v5);
  LOBYTE(v6) = a1;
  LOBYTE(v2) = (unsigned __int8)_scrt_uninitialize_crt(v6, 0LL) != 0;
  return v2;
}
