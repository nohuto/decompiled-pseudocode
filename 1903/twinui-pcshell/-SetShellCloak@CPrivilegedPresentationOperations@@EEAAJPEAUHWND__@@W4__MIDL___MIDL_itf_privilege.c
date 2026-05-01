/*
 * XREFs of ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x1800645D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     IsDwmSetWindowAttributePresent @ 0x18008A9BC (IsDwmSetWindowAttributePresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1801E96B0 (--$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetShellCloak(__int64 a1, HWND a2, int a3)
{
  HWND v4; // rsi
  _DWORD *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned int v9; // esi
  DWORD dwProcessId; // [rsp+20h] [rbp-20h] BYREF
  DWORD WindowThreadProcessId; // [rsp+24h] [rbp-1Ch] BYREF
  BOOL v13; // [rsp+28h] [rbp-18h] BYREF
  BOOL pvAttribute; // [rsp+2Ch] [rbp-14h] BYREF
  LPVOID Context; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+38h] [rbp-8h]
  HWND v17; // [rsp+68h] [rbp+28h] BYREF
  WINBOOL fPending; // [rsp+78h] [rbp+38h] BYREF

  v17 = a2;
  v4 = a2;
  if ( !(unsigned __int8)IsDwmSetWindowAttributePresent() )
    return 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = &qword_18059A528;
    qword_18059A528 = &ShellScreenClippingLogging::`vftable';
    qword_18059A540 = (struct _TlgProvider_t *)&`PrivilegedOperationsTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18059A528, qword_18059A540);
    InitOnceComplete(&`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper, 0, &qword_18059A528);
  }
  v6 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v6 && *v6 )
  {
    WindowThreadProcessId = GetWindowThreadProcessId(v4, &dwProcessId);
    v13 = a3 == 1;
    PrivilegedOperationsTraceLogging::SetShellCloak<int,HWND__ * &,unsigned long const &,unsigned long &>(
      &v13,
      &v17,
      &WindowThreadProcessId,
      &dwProcessId);
  }
  v7 = *(_QWORD *)(a1 + 48);
  v8 = v7;
  v16 = v7;
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 36));
    v4 = v17;
    v8 = v16;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(v7 + 48));
  EnableIAMAccess(*(_QWORD *)(v8 + 40), 1LL);
  pvAttribute = a3 != 0;
  v9 = DwmSetWindowAttribute(v4, 0xDu, &pvAttribute, 4u);
  EnableIAMAccess(*(_QWORD *)(v8 + 40), 0LL);
  ReleaseSRWLockExclusive((PSRWLOCK)(v7 + 48));
  if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 36), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 72LL))(v7, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v9;
}
