/*
 * XREFs of ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180126330
 * Callers:
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x1801262E0 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x180125CB0 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x180125CEC (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_before_initialize_c @ 0x180125D20 (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_crt @ 0x180125E1C (__scrt_initialize_crt.c)
 *     __scrt_is_nonwritable_in_current_image @ 0x180125F40 (__scrt_is_nonwritable_in_current_image.c)
 *     __scrt_release_startup_lock @ 0x180125FDC (__scrt_release_startup_lock.c)
 *     sub_180126BB0 @ 0x180126BB0 (sub_180126BB0.c)
 *     __scrt_fastfail @ 0x180126DF0 (__scrt_fastfail.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18012723C (__scrt_initialize_default_local_stdio_options.c)
 *     sub_180127258 @ 0x180127258 (sub_180127258.c)
 *     sub_180127260 @ 0x180127260 (sub_180127260.c)
 *     _initterm @ 0x180127320 (_initterm.c)
 *     _initterm_e @ 0x180127326 (_initterm_e.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall dllmain_crt_process_attach(HINSTANCE a1, void *const a2)
{
  char v3; // bl
  char v4; // di
  _QWORD *v5; // rax

  if ( !_scrt_initialize_crt(0) )
    return 0LL;
  v3 = _scrt_acquire_startup_lock();
  v4 = 1;
  if ( dword_18026C3D0 )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x180126449LL);
  }
  dword_18026C3D0 = 1;
  if ( _scrt_dllmain_before_initialize_c() )
  {
    sub_180127260();
    sub_180126BB0();
    _scrt_initialize_default_local_stdio_options();
    if ( !initterm_e((_PIFV *)&First, (_PIFV *)&Last) )
    {
      if ( _scrt_dllmain_after_initialize_c() )
      {
        initterm((_PVFV *)&qword_18013E8D8, (_PVFV *)&qword_180140500);
        dword_18026C3D0 = 2;
        v4 = 0;
      }
    }
  }
  _scrt_release_startup_lock(v3);
  if ( v4 )
    return 0LL;
  v5 = (_QWORD *)sub_180127258();
  if ( *v5 )
  {
    if ( _scrt_is_nonwritable_in_current_image((__int64)v5) )
      _guard_dispatch_icall_fptr();
  }
  ++dword_18026C414;
  return 1LL;
}
