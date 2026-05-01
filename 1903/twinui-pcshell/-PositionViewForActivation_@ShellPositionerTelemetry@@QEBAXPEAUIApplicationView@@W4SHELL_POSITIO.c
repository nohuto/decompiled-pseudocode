/*
 * XREFs of ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1800479E4
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAK@Z @ 0x180048814 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?DoesAppHaveQuirk@ShellPositionerTelemetry@@CA_NPEAUIApplicationView@@W4__MIDL___MIDL_itf_shpriv_core_0000_0319_0005@@@Z @ 0x180047C58 (-DoesAppHaveQuirk@ShellPositionerTelemetry@@CA_NPEAUIApplicationView@@W4__MIDL___MIDL_itf_shpriv.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180049718 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18004974C (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ShellPositionerTelemetry::PositionViewForActivation_(__int64 a1, __int64 a2, int a3)
{
  BOOL inited; // eax
  unsigned __int64 *v6; // r8
  void (__fastcall *v7)(__int64, LPCWSTR *); // rbx
  const unsigned __int16 *v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // rbx
  const WCHAR *v11; // rcx
  const WCHAR *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rax
  char v17; // [rsp+38h] [rbp-79h] BYREF
  char HaveQuirk; // [rsp+39h] [rbp-78h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-75h] BYREF
  WINBOOL v20; // [rsp+40h] [rbp-71h] BYREF
  int v21; // [rsp+44h] [rbp-6Dh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-69h] BYREF
  LPVOID v23; // [rsp+50h] [rbp-61h] BYREF
  LPCWSTR pszPath; // [rsp+58h] [rbp-59h] BYREF
  __int64 v25; // [rsp+60h] [rbp-51h]
  __int64 v26; // [rsp+68h] [rbp-49h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-41h] BYREF
  __int64 v28; // [rsp+80h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-29h] BYREF
  void *v30; // [rsp+98h] [rbp-19h]
  int v31; // [rsp+A0h] [rbp-11h]
  int v32; // [rsp+A4h] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp-9h] BYREF
  int *v34; // [rsp+B8h] [rbp+7h]
  int v35; // [rsp+C0h] [rbp+Fh]
  int v36; // [rsp+C4h] [rbp+13h]
  char *p_HaveQuirk; // [rsp+C8h] [rbp+17h]
  int v38; // [rsp+D0h] [rbp+1Fh]
  int v39; // [rsp+D4h] [rbp+23h]
  char *v40; // [rsp+D8h] [rbp+27h]
  int v41; // [rsp+E0h] [rbp+2Fh]
  int v42; // [rsp+E4h] [rbp+33h]

  v28 = -2LL;
  Context = 0LL;
  inited = InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  v6 = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
  if ( inited && fPending )
  {
    Context = &unk_180599C78;
    v13 = operator new((unsigned __int64)&ImmersiveIconsLogging::`vftable', &unk_180599C78);
    *v13 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
    *v13 = v14;
    v13[3] = v15;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
  }
  if ( wil::TraceLoggingProvider::IsEnabled_((wil::TraceLoggingProvider *)Context, 0, (unsigned __int64)v6) )
  {
    pszPath = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    v7 = *(void (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)a2 + 136LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
    v25 = -1LL;
    v26 = -1LL;
    v7(a2, &pszPath);
    v23 = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v20, &v23) && v20 )
    {
      v23 = &unk_180599C78;
      v16 = operator new(v9, &unk_180599C78);
      *v16 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
      *v16 = &ImmersiveIconsLogging::`vftable';
      v16[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
    }
    v10 = *((_QWORD *)v23 + 1);
    if ( *(_DWORD *)v10 > 5u
      && (*(_QWORD *)(v10 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(v10 + 24) & 0x400000000000LL) == *(_QWORD *)(v10 + 24) )
    {
      v11 = &String2;
      if ( pszPath )
        v11 = pszPath;
      v12 = SQM::CensorAppID(v11, v8);
      TlgCreateWsz(&pDesc, v12);
      v21 = a3;
      v34 = &v21;
      v35 = 4;
      v36 = 0;
      HaveQuirk = ShellPositionerTelemetry::DoesAppHaveQuirk(a2);
      p_HaveQuirk = &HaveQuirk;
      v38 = 1;
      v39 = 0;
      if ( (unsigned __int8)ShellPositionerTelemetry::DoesAppHaveQuirk(a2)
        || (v17 = 0, (unsigned __int8)ShellPositionerTelemetry::DoesAppHaveQuirk(a2)) )
      {
        v17 = 1;
      }
      v40 = &v17;
      v41 = 1;
      v42 = 0;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0x400000000000LL;
      UserData.Ptr = *(_QWORD *)(v10 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v30 = &unk_1804DE1DE;
      v31 = 84;
      v32 = 1;
      fPending = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v10 + 32), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  }
}
