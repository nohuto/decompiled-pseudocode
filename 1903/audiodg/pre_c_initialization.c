/*
 * XREFs of pre_c_initialization @ 0x1400157E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRegistry@CSystemAudioDeviceOffloadGraph@@SAJH@Z @ 0x140014A90 (-UpdateRegistry@CSystemAudioDeviceOffloadGraph@@SAJH@Z.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x140014AB0 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     __scrt_stub_for_acrt_uninitialize @ 0x140014CA0 (__scrt_stub_for_acrt_uninitialize.c)
 *     ?AddRef@CRegObject@ATL@@UEAAKXZ @ 0x140014CB0 (-AddRef@CRegObject@ATL@@UEAAKXZ.c)
 *     __scrt_initialize_onexit_tables @ 0x140015F10 (__scrt_initialize_onexit_tables.c)
 *     atexit @ 0x140016148 (atexit.c)
 *     _get_startup_file_mode @ 0x1400162CC (_get_startup_file_mode.c)
 *     ?__scrt_initialize_type_info@@YAXXZ @ 0x1400162D8 (-__scrt_initialize_type_info@@YAXXZ.c)
 *     __scrt_fastfail @ 0x140016340 (__scrt_fastfail.c)
 *     __scrt_initialize_mta @ 0x1400164D4 (__scrt_initialize_mta.c)
 *     _RTC_Initialize @ 0x140016590 (_RTC_Initialize.c)
 *     __p__commode @ 0x1400168E6 (__p__commode.c)
 *     _configthreadlocale @ 0x140016946 (_configthreadlocale.c)
 *     _o__configure_wide_argv_0 @ 0x140016952 (_o__configure_wide_argv_0.c)
 *     _o__initialize_wide_environment_0 @ 0x14001698E (_o__initialize_wide_environment_0.c)
 *     _set_app_type @ 0x1400169D4 (_set_app_type.c)
 *     _o__set_fmode_0 @ 0x1400169E0 (_o__set_fmode_0.c)
 */

__int64 pre_c_initialization()
{
  unsigned int startup_file_mode; // eax
  int *v1; // rbx
  ATL::CRegObject *v2; // rcx
  unsigned int v3; // eax
  Windows::Media::Devices::SendCommandAsyncOperation *v4; // rcx
  Windows::Media::Devices::SendCommandAsyncOperation *v5; // rcx
  int updated; // eax
  __int64 result; // rax

  set_app_type(_crt_gui_app);
  startup_file_mode = get_startup_file_mode();
  o__set_fmode_0(startup_file_mode);
  v1 = _p__commode();
  *v1 = CSystemAudioDeviceOffloadGraph::UpdateRegistry();
  if ( !(unsigned __int8)_scrt_initialize_onexit_tables(1LL) )
    goto LABEL_6;
  RTC_Initialize();
  atexit(RTC_Terminate);
  v3 = ATL::CRegObject::AddRef(v2);
  if ( (unsigned int)o__configure_wide_argv_0(v3) )
    goto LABEL_6;
  __scrt_initialize_type_info();
  Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(v4);
  Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(v5);
  updated = CSystemAudioDeviceOffloadGraph::UpdateRegistry();
  configthreadlocale(updated);
  if ( _scrt_stub_for_acrt_uninitialize() )
    o__initialize_wide_environment_0();
  CSystemAudioDeviceOffloadGraph::UpdateRegistry();
  result = _scrt_initialize_mta();
  if ( (_DWORD)result )
  {
LABEL_6:
    _scrt_fastfail(7LL);
    JUMPOUT(0x140015881LL);
  }
  return result;
}
