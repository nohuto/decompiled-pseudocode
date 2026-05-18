/*
 * XREFs of __scrt_release_startup_lock @ 0x180125ECC
 * Callers:
 *     ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180126220 (-dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z.c)
 *     ?dllmain_crt_process_detach@@YAH_N@Z @ 0x18012633C (-dllmain_crt_process_detach@@YAH_N@Z.c)
 * Callees:
 *     ?__uncaught_exception@@YA_NXZ @ 0x180126CCC (-__uncaught_exception@@YA_NXZ.c)
 */

char __fastcall _scrt_release_startup_lock(char a1)
{
  int v2; // eax

  LOBYTE(v2) = __uncaught_exception();
  if ( v2 && !a1 )
    _InterlockedExchange64(&qword_18026B3D8, 0LL);
  return v2;
}
