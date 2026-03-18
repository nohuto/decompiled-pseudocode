/*
 * XREFs of pre_c_initialization @ 0x140002D60
 * Callers:
 *     <none>
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x1400030B8 (__scrt_initialize_onexit_tables.c)
 *     atexit @ 0x1400032F0 (atexit.c)
 *     _get_startup_argv_mode @ 0x1400038D4 (_get_startup_argv_mode.c)
 *     __scrt_initialize_winrt @ 0x1400038E0 (__scrt_initialize_winrt.c)
 *     _get_startup_file_mode @ 0x1400038EC (_get_startup_file_mode.c)
 *     ?__scrt_initialize_type_info@@YAXXZ @ 0x1400038F8 (-__scrt_initialize_type_info@@YAXXZ.c)
 *     __scrt_stub_for_acrt_uninitialize @ 0x14000390C (__scrt_stub_for_acrt_uninitialize.c)
 *     _guard_check_icall_nop @ 0x140003920 (_guard_check_icall_nop.c)
 *     __scrt_fastfail @ 0x140003980 (__scrt_fastfail.c)
 *     __scrt_initialize_mta @ 0x140003B14 (__scrt_initialize_mta.c)
 *     _RTC_Initialize @ 0x140003BD0 (_RTC_Initialize.c)
 *     __p__commode @ 0x1400040F8 (__p__commode.c)
 *     _configthreadlocale @ 0x140004140 (_configthreadlocale.c)
 *     _o__configure_wide_argv_0 @ 0x14000414C (_o__configure_wide_argv_0.c)
 *     _o__initialize_wide_environment_0 @ 0x140004188 (_o__initialize_wide_environment_0.c)
 *     _set_app_type @ 0x1400041AC (_set_app_type.c)
 *     _o__set_fmode_0 @ 0x1400041B8 (_o__set_fmode_0.c)
 */

__int64 pre_c_initialization()
{
  unsigned int startup_file_mode; // eax
  int *v1; // rbx
  _crt_argv_mode startup_argv_mode; // eax
  int v3; // eax
  __int64 result; // rax

  set_app_type(_crt_gui_app);
  startup_file_mode = get_startup_file_mode();
  o__set_fmode_0(startup_file_mode);
  v1 = _p__commode();
  *v1 = _scrt_initialize_winrt();
  if ( !(unsigned __int8)_scrt_initialize_onexit_tables(1LL) )
    goto LABEL_6;
  RTC_Initialize();
  atexit(RTC_Terminate);
  startup_argv_mode = get_startup_argv_mode();
  if ( (unsigned int)o__configure_wide_argv_0((unsigned int)startup_argv_mode) )
    goto LABEL_6;
  __scrt_initialize_type_info();
  v3 = _scrt_initialize_winrt();
  configthreadlocale(v3);
  if ( (unsigned __int8)_scrt_stub_for_acrt_uninitialize() )
    o__initialize_wide_environment_0();
  _scrt_initialize_winrt();
  result = _scrt_initialize_mta();
  if ( (_DWORD)result )
  {
LABEL_6:
    _scrt_fastfail(7LL);
    JUMPOUT(0x140002E01LL);
  }
  return result;
}
