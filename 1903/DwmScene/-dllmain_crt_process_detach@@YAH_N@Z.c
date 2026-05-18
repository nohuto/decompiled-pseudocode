/*
 * XREFs of ?dllmain_crt_process_detach@@YAH_N@Z @ 0x18012633C
 * Callers:
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x1801261D0 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x180125BA0 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x180125CC8 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x180125CF8 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x180125ECC (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x180125EF0 (__scrt_uninitialize_crt.c)
 *     sub_180126AB0 @ 0x180126AB0 (sub_180126AB0.c)
 *     __scrt_fastfail @ 0x180126CE0 (__scrt_fastfail.c)
 *     sub_18012718C @ 0x18012718C (sub_18012718C.c)
 */

__int64 __fastcall dllmain_crt_process_detach(char a1)
{
  unsigned int v2; // ebx
  char v4; // di
  __int64 v5; // rcx

  v2 = 0;
  if ( dword_18026B414 <= 0 )
    return 0LL;
  --dword_18026B414;
  v4 = _scrt_acquire_startup_lock();
  if ( dword_18026B3D0 != 2 )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x1801263CALL);
  }
  _scrt_dllmain_uninitialize_c();
  sub_180126AB0();
  sub_18012718C();
  dword_18026B3D0 = 0;
  _scrt_dllmain_uninitialize_critical();
  _scrt_release_startup_lock(v4);
  LOBYTE(v5) = a1;
  LOBYTE(v2) = _scrt_uninitialize_crt(v5, 0) != 0;
  return v2;
}
