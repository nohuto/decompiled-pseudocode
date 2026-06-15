/*
 * XREFs of ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180039388
 * Callers:
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x180039330 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x18003997C (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x1800399BC (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_before_initialize_c @ 0x1800399F8 (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_crt @ 0x180039B1C (__scrt_initialize_crt.c)
 *     __scrt_is_nonwritable_in_current_image @ 0x180039C24 (__scrt_is_nonwritable_in_current_image.c)
 *     __scrt_release_startup_lock @ 0x180039CC4 (__scrt_release_startup_lock.c)
 *     sub_18003A284 @ 0x18003A284 (sub_18003A284.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18003A2AC (__scrt_initialize_default_local_stdio_options.c)
 *     sub_18003A2D0 @ 0x18003A2D0 (sub_18003A2D0.c)
 *     __scrt_fastfail @ 0x18003A2F0 (__scrt_fastfail.c)
 *     sub_18003A444 @ 0x18003A444 (sub_18003A444.c)
 *     _initterm @ 0x18003A686 (_initterm.c)
 *     _initterm_e @ 0x18003A692 (_initterm_e.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall dllmain_crt_process_attach(HINSTANCE a1, void *const a2)
{
  char v2; // bl
  char v3; // di
  __int64 v4; // rcx
  _QWORD *v5; // rax

  if ( !(unsigned __int8)_scrt_initialize_crt(0LL) )
    return 0LL;
  v2 = _scrt_acquire_startup_lock();
  v3 = 1;
  if ( dword_18004FBD4 )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x18003949ELL);
  }
  dword_18004FBD4 = 1;
  if ( (unsigned __int8)_scrt_dllmain_before_initialize_c() )
  {
    sub_18003A444();
    sub_18003A284();
    _scrt_initialize_default_local_stdio_options();
    if ( !initterm_e((_PIFV *)&First, (_PIFV *)&Last) )
    {
      if ( (unsigned __int8)_scrt_dllmain_after_initialize_c() )
      {
        initterm((_PVFV *)&qword_180041298, (_PVFV *)&qword_180041320);
        dword_18004FBD4 = 2;
        v3 = 0;
      }
    }
  }
  LOBYTE(v4) = v2;
  _scrt_release_startup_lock(v4);
  if ( v3 )
    return 0LL;
  v5 = (_QWORD *)sub_18003A2D0();
  if ( *v5 )
  {
    if ( (unsigned __int8)_scrt_is_nonwritable_in_current_image(v5) )
      _guard_dispatch_icall_fptr();
  }
  ++dword_18004F650;
  return 1LL;
}
