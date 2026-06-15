/*
 * XREFs of dllmain_crt_process_detach @ 0x180034098
 * Callers:
 *     dllmain_crt_dispatch @ 0x180033F20 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x18003457C (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x1800346C8 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x180034700 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x1800348EC (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x180034918 (__scrt_uninitialize_crt.c)
 *     ?__scrt_uninitialize_type_info@@YAXXZ @ 0x180034B6C (-__scrt_uninitialize_type_info@@YAXXZ.c)
 *     __scrt_fastfail @ 0x180034BC4 (__scrt_fastfail.c)
 *     _RTC_Terminate @ 0x180034D5C (_RTC_Terminate.c)
 */

__int64 __fastcall dllmain_crt_process_detach(char a1)
{
  unsigned int v2; // ebx
  char v4; // di
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = 0;
  if ( dword_18004D350 <= 0 )
    return 0LL;
  --dword_18004D350;
  v4 = _scrt_acquire_startup_lock();
  if ( _scrt_current_native_startup_state != 2 )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x180034126LL);
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
