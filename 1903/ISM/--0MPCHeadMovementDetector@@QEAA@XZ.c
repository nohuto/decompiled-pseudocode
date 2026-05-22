/*
 * XREFs of ??0MPCHeadMovementDetector@@QEAA@XZ @ 0x1800965D4
 * Callers:
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x180094800 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180022274 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18002AE60 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetActivationFactory@UIPerceptionTimestampHelperStaticsInternal@Internal@Perception@Windows@@@wil@@YA?AV?$com_ptr_t@UIPerceptionTimestampHelperStaticsInternal@Internal@Perception@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18008EB78 (--$GetActivationFactory@UIPerceptionTimestampHelperStaticsInternal@Internal@Perception@Windows@@.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180097168 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=6
MPCHeadMovementDetector *__fastcall MPCHeadMovementDetector::MPCHeadMovementDetector(char *pv)
{
  struct _TP_TIMER **v2; // rsi
  struct _FILETIME *v3; // rdi
  struct _FILETIME *v4; // r15
  __int64 v5; // rcx
  int v6; // eax
  const WCHAR *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v11; // r9
  DWORD v12; // eax
  _QWORD Recipient[8]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF

  *(_QWORD *)pv = 0LL;
  v2 = (struct _TP_TIMER **)(pv + 8);
  *((_QWORD *)pv + 1) = 0LL;
  *((_DWORD *)pv + 4) = 17;
  *((_DWORD *)pv + 5) = 3;
  v3 = (struct _FILETIME *)(pv + 24);
  *((_QWORD *)pv + 3) = -170000LL;
  v4 = (struct _FILETIME *)(pv + 32);
  *((_QWORD *)pv + 4) = -600000000LL;
  *((_QWORD *)pv + 5) = 0LL;
  *((_QWORD *)pv + 6) = 0LL;
  *((_QWORD *)pv + 7) = 0LL;
  pv[64] = 1;
  *((_QWORD *)pv + 9) = 0LL;
  *((_QWORD *)pv + 10) = 0LL;
  *((_QWORD *)pv + 11) = 0LL;
  *((_QWORD *)pv + 12) = 0LL;
  *((_QWORD *)pv + 13) = 0LL;
  *((_QWORD *)pv + 14) = 0LL;
  *((_QWORD *)pv + 15) = 0LL;
  *((_QWORD *)pv + 16) = 0LL;
  *((_DWORD *)pv + 34) = 1023410176;
  *((_DWORD *)pv + 35) = 10000;
  *((_QWORD *)pv + 18) = 0LL;
  *((_QWORD *)pv + 19) = 0LL;
  *((_DWORD *)pv + 40) = 0;
  v5 = *(_QWORD *)pv;
  *(_QWORD *)pv = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = CoreUICreate(pv);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      45LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = wil::GetActivationFactory<Windows::Perception::Internal::IPerceptionTimestampHelperStaticsInternal>((const WCHAR *)&v16);
  v8 = *(_QWORD *)v7;
  *(_QWORD *)v7 = 0LL;
  v9 = *((_QWORD *)pv + 12);
  *((_QWORD *)pv + 12) = v8;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v16);
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)lambda_aa0eaa0d8a3377c6799a200e781869ec_::_lambda_invoker_cdecl_,
                      pv,
                      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    v2,
    ThreadpoolTimer);
  if ( !*v2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      56LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
      v11);
    __debugbreak();
  }
  Recipient[0] = MPCHeadMovementDetector::DisplayStateNotification;
  Recipient[1] = pv;
  v12 = PowerSettingRegisterNotification(&GUID_CONSOLE_DISPLAY_STATE, 2u, Recipient, (PHPOWERNOTIFY)pv + 7);
  if ( v12 )
  {
    wil::details::in1diag3::_FailFast_Win32(
      retaddr,
      (void *)0x3F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
      (const char *)v12,
      0xFFFFFFFE);
    __debugbreak();
  }
  if ( !pv[64] )
    v3 = v4;
  SetThreadpoolTimer(*v2, v3, 0, *((_DWORD *)pv + 5));
  return (MPCHeadMovementDetector *)pv;
}
