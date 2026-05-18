/*
 * XREFs of ?dllmain_crt_process_detach@@YAH_N@Z @ 0x18012644C
 * Callers:
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x1801262E0 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x180125CB0 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x180125DD8 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x180125E08 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x180125FDC (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x180126000 (__scrt_uninitialize_crt.c)
 *     sub_180126BC0 @ 0x180126BC0 (sub_180126BC0.c)
 *     __scrt_fastfail @ 0x180126DF0 (__scrt_fastfail.c)
 *     sub_18012729C @ 0x18012729C (sub_18012729C.c)
 */

__int64 __fastcall dllmain_crt_process_detach(char a1)
{
  unsigned int v2; // ebx
  char v4; // di
  __int64 v5; // rcx

  v2 = 0;
  if ( dword_18026C414 <= 0 )
    return 0LL;
  --dword_18026C414;
  v4 = _scrt_acquire_startup_lock();
  if ( dword_18026C3D0 != 2 )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x1801264DALL);
  }
  _scrt_dllmain_uninitialize_c();
  sub_180126BC0();
  sub_18012729C();
  dword_18026C3D0 = 0;
  _scrt_dllmain_uninitialize_critical();
  _scrt_release_startup_lock(v4);
  LOBYTE(v5) = a1;
  LOBYTE(v2) = _scrt_uninitialize_crt(v5, 0) != 0;
  return v2;
}
