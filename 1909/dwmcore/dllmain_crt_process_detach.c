/*
 * XREFs of dllmain_crt_process_detach @ 0x1800E8608
 * Callers:
 *     dllmain_crt_dispatch @ 0x1800E8490 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x1800E8040 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x1800E818C (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x1800E81C4 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x1800E83B0 (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x1800E83DC (__scrt_uninitialize_crt.c)
 *     __scrt_fastfail @ 0x1800E882C (__scrt_fastfail.c)
 *     ?__scrt_uninitialize_type_info@@YAXXZ @ 0x1800E8C1C (-__scrt_uninitialize_type_info@@YAXXZ.c)
 *     _RTC_Terminate @ 0x1800E8CA8 (_RTC_Terminate.c)
 */

__int64 __fastcall dllmain_crt_process_detach(char a1)
{
  unsigned int v2; // ebx
  char v4; // di
  CMagnifierRenderTarget *v5; // rcx

  v2 = 0;
  if ( dword_180339564 <= 0 )
    return 0LL;
  --dword_180339564;
  v4 = _scrt_acquire_startup_lock();
  if ( _scrt_current_native_startup_state != 2 )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x1800E8696LL);
  }
  _scrt_dllmain_uninitialize_c();
  __scrt_uninitialize_type_info();
  RTC_Terminate();
  _scrt_current_native_startup_state = 0;
  _scrt_dllmain_uninitialize_critical();
  _scrt_release_startup_lock(v4);
  LOBYTE(v5) = a1;
  LOBYTE(v2) = _scrt_uninitialize_crt(v5, 0) != 0;
  return v2;
}
