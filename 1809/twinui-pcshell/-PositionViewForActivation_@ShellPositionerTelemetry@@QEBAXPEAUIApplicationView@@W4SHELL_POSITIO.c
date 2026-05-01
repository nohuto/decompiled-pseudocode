/*
 * XREFs of ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18002F6F0
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAK@Z @ 0x18002FC70 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?DoesAppHaveQuirk@ShellPositionerTelemetry@@CA_NPEAUIApplicationView@@W4__MIDL___MIDL_itf_shpriv_core_0000_0318_0005@@@Z @ 0x18002F974 (-DoesAppHaveQuirk@ShellPositionerTelemetry@@CA_NPEAUIApplicationView@@W4__MIDL___MIDL_itf_shpriv.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18007BBCC (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ShellPositionerTelemetry::PositionViewForActivation_(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v5; // rcx
  const unsigned __int16 *v6; // rdx
  __int64 v7; // rbx
  const WCHAR *v8; // rcx
  const WCHAR *v9; // rax
  bool v10; // zf
  char v11; // al
  char HaveQuirk; // [rsp+38h] [rbp-89h] BYREF
  char v13; // [rsp+39h] [rbp-88h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-85h] BYREF
  WINBOOL v15; // [rsp+40h] [rbp-81h] BYREF
  int v16; // [rsp+44h] [rbp-7Dh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-79h] BYREF
  LPVOID v18; // [rsp+50h] [rbp-71h] BYREF
  LPCWSTR pszPath[3]; // [rsp+58h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-51h] BYREF
  __int64 v21; // [rsp+80h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-39h] BYREF
  void *v23; // [rsp+98h] [rbp-29h]
  int v24; // [rsp+A0h] [rbp-21h]
  int v25; // [rsp+A4h] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp-19h] BYREF
  int *v27; // [rsp+B8h] [rbp-9h]
  __int64 v28; // [rsp+C0h] [rbp-1h]
  char *p_HaveQuirk; // [rsp+C8h] [rbp+7h]
  __int64 v30; // [rsp+D0h] [rbp+Fh]
  char *v31; // [rsp+D8h] [rbp+17h]
  __int64 v32; // [rsp+E0h] [rbp+1Fh]

  v21 = -2LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18050F8E8;
    qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
    qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
  }
  v5 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v5 && *v5 )
  {
    pszPath[0] = 0LL;
    pszPath[1] = (LPCWSTR)-1LL;
    pszPath[2] = (LPCWSTR)-1LL;
    (*(void (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)a2 + 136LL))(a2, pszPath);
    v18 = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v15, &v18) && v15 )
    {
      v18 = &qword_18050F8E8;
      qword_18050F8E8 = &ImmersiveIconsLogging::`vftable';
      qword_18050F900 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18050F8E8, qword_18050F900);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18050F8E8);
    }
    v7 = *((_QWORD *)v18 + 1);
    if ( *(_DWORD *)v7 > 5u
      && (*(_QWORD *)(v7 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(v7 + 24) & 0x400000000000LL) == *(_QWORD *)(v7 + 24) )
    {
      v8 = &word_180411F30;
      if ( pszPath[0] )
        v8 = pszPath[0];
      v9 = SQM::CensorAppID(v8, v6);
      TlgCreateWsz(&pDesc, v9);
      v16 = a3;
      v27 = &v16;
      v28 = 4LL;
      HaveQuirk = ShellPositionerTelemetry::DoesAppHaveQuirk(a2);
      p_HaveQuirk = &HaveQuirk;
      v30 = 1LL;
      if ( (unsigned __int8)ShellPositionerTelemetry::DoesAppHaveQuirk(a2)
        || (v10 = (unsigned __int8)ShellPositionerTelemetry::DoesAppHaveQuirk(a2) == 0, v11 = 0, !v10) )
      {
        v11 = 1;
      }
      v13 = v11;
      v31 = &v13;
      v32 = 1LL;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180465720 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0x400000000000LL;
      UserData.Ptr = *(_QWORD *)(v7 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v23 = &unk_18046572B;
      v24 = 84;
      v25 = 1;
      EventWriteTransfer(*(_QWORD *)(v7 + 32), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)pszPath);
  }
}
