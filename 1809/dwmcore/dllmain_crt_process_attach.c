/*
 * XREFs of dllmain_crt_process_attach @ 0x1800ED398
 * Callers:
 *     dllmain_crt_dispatch @ 0x1800ED340 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x1800EBA50 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x1800EBA90 (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_before_initialize_c @ 0x1800EBACC (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_crt @ 0x1800EBBF0 (__scrt_initialize_crt.c)
 *     __scrt_is_nonwritable_in_current_image @ 0x1800EBD20 (__scrt_is_nonwritable_in_current_image.c)
 *     __scrt_release_startup_lock @ 0x1800EBDC0 (__scrt_release_startup_lock.c)
 *     __scrt_fastfail @ 0x1800EC1EC (__scrt_fastfail.c)
 *     ?__scrt_initialize_type_info@@YAXXZ @ 0x1800ED774 (-__scrt_initialize_type_info@@YAXXZ.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800ED79C (__scrt_initialize_default_local_stdio_options.c)
 *     __scrt_get_dyn_tls_init_callback @ 0x1800ED7C0 (__scrt_get_dyn_tls_init_callback.c)
 *     _RTC_Initialize @ 0x1800ED7D0 (_RTC_Initialize.c)
 *     _initterm_0 @ 0x1800ED856 (_initterm_0.c)
 *     _initterm_e_0 @ 0x1800ED862 (_initterm_e_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 dllmain_crt_process_attach()
{
  char v0; // bl
  char v1; // di
  _QWORD *dyn_tls_init_callback; // rax

  if ( !_scrt_initialize_crt(0) )
    return 0LL;
  v0 = _scrt_acquire_startup_lock();
  v1 = 1;
  if ( _scrt_current_native_startup_state )
  {
    _scrt_fastfail(7u);
    __debugbreak();
    JUMPOUT(0x1800ED4AELL);
  }
  _scrt_current_native_startup_state = 1;
  if ( _scrt_dllmain_before_initialize_c() )
  {
    RTC_Initialize();
    __scrt_initialize_type_info();
    _scrt_initialize_default_local_stdio_options();
    if ( !initterm_e_0((_PIFV *)&_xi_a, (_PIFV *)&_xi_z) )
    {
      if ( _scrt_dllmain_after_initialize_c() )
      {
        initterm_0((_PVFV *)&_xc_a, (_PVFV *)&_xc_z);
        _scrt_current_native_startup_state = 2;
        v1 = 0;
      }
    }
  }
  _scrt_release_startup_lock(v0);
  if ( v1 )
    return 0LL;
  dyn_tls_init_callback = (_QWORD *)_scrt_get_dyn_tls_init_callback();
  if ( *dyn_tls_init_callback )
  {
    if ( _scrt_is_nonwritable_in_current_image((__int64)dyn_tls_init_callback) )
      _guard_dispatch_icall_fptr();
  }
  ++dword_180307DE0;
  return 1LL;
}
