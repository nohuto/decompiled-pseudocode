/*
 * XREFs of ??0MPCHeadMovementDetector@@QEAA@XZ @ 0x180059F98
 * Callers:
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x180057A80 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B58C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180030C74 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005AA30 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
MPCHeadMovementDetector *__fastcall MPCHeadMovementDetector::MPCHeadMovementDetector(char *pv)
{
  struct _TP_TIMER **v2; // rsi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdi
  int ActivationFactory; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v12; // r9
  __int64 v14; // [rsp+20h] [rbp-50h] BYREF
  int v15; // [rsp+28h] [rbp-48h]
  _QWORD v16[3]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v17[32]; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v16[1] = -2LL;
  v16[2] = pv;
  v15 = 0;
  *(_QWORD *)pv = 0LL;
  v2 = (struct _TP_TIMER **)(pv + 8);
  *((_QWORD *)pv + 1) = 0LL;
  *((_DWORD *)pv + 4) = 17;
  *((_DWORD *)pv + 5) = 3;
  *((_QWORD *)pv + 3) = -170000LL;
  *((_QWORD *)pv + 4) = 0LL;
  *((_QWORD *)pv + 5) = 0LL;
  *((_QWORD *)pv + 6) = 0LL;
  *((_QWORD *)pv + 7) = 0LL;
  *((_QWORD *)pv + 8) = 0LL;
  *((_QWORD *)pv + 9) = 0LL;
  *((_QWORD *)pv + 10) = 0LL;
  *((_QWORD *)pv + 11) = 0LL;
  *((_QWORD *)pv + 12) = 0LL;
  *((_QWORD *)pv + 13) = 0LL;
  *((_DWORD *)pv + 28) = 1023410176;
  *((_DWORD *)pv + 29) = 10000;
  *((_QWORD *)pv + 15) = 0LL;
  *((_QWORD *)pv + 16) = 0LL;
  *((_DWORD *)pv + 34) = 0;
  v3 = *(_QWORD *)pv;
  *(_QWORD *)pv = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = CoreUICreate(pv);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_13;
  }
  v16[0] = L"Windows.Perception.PerceptionTimestampHelper";
  v15 = 1;
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v17, v16);
  v14 = 0LL;
  ActivationFactory = RoGetActivationFactory(*(_QWORD *)(v5 + 24), &GUID_d2b11f53_48f3_4131_9edc_4979a97e16bd, &v14);
  v7 = retaddr;
  if ( ActivationFactory < 0 )
  {
LABEL_13:
    wil::details::in1diag3::_Throw_Hr(
      v7,
      (void *)0x669,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)ActivationFactory);
    JUMPOUT(0x18005A1B0LL);
  }
  v8 = v14;
  v9 = 0LL;
  v14 = 0LL;
  v10 = *((_QWORD *)pv + 9);
  *((_QWORD *)pv + 9) = v8;
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v9 = v14;
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  ThreadpoolTimer = CreateThreadpoolTimer(lambda_aa0eaa0d8a3377c6799a200e781869ec_::_lambda_invoker_cdecl_, pv, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    v2,
    ThreadpoolTimer);
  if ( !*v2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x35,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
      v12);
    __debugbreak();
  }
  SetThreadpoolTimer(*v2, (PFILETIME)pv + 3, 0, *((_DWORD *)pv + 5));
  return (MPCHeadMovementDetector *)pv;
}
