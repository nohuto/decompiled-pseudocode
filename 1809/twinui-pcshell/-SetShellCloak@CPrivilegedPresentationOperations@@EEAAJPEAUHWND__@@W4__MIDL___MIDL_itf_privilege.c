/*
 * XREFs of ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x180060580
 * Callers:
 *     <none>
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     IsDwmSetWindowAttributePresent @ 0x180087BB8 (IsDwmSetWindowAttributePresent.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180088C30 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800EF81C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjec.c)
 *     ??$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1801A25C8 (--$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetShellCloak(__int64 a1, HWND a2, int a3)
{
  _DWORD *v7; // rcx
  RTL_SRWLOCK *v8; // rbx
  unsigned int v9; // esi
  volatile int *v10; // rdx
  DWORD WindowThreadProcessId; // [rsp+20h] [rbp-20h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-18h] BYREF
  BOOL pvAttribute[4]; // [rsp+30h] [rbp-10h] BYREF
  HWND v14; // [rsp+68h] [rbp+28h] BYREF
  WINBOOL fPending; // [rsp+78h] [rbp+38h] BYREF

  v14 = a2;
  if ( !(unsigned __int8)IsDwmSetWindowAttributePresent() )
    return 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180510100;
    qword_180510100[0] = &ShellScreenClippingLogging::`vftable';
    qword_180510118 = (struct _TlgProvider_t *)&`PrivilegedOperationsTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180510100, qword_180510118);
    InitOnceComplete(&`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper, 0, qword_180510100);
  }
  v7 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v7 && *v7 )
  {
    WindowThreadProcessId = GetWindowThreadProcessId(a2, (LPDWORD)&fPending);
    LODWORD(Context) = a3 == 1;
    ((void (__fastcall *)(LPVOID *, HWND *, DWORD *, WINBOOL *))PrivilegedOperationsTraceLogging::SetShellCloak<int,HWND__ * &,unsigned long const &,unsigned long &>)(
      &Context,
      &v14,
      &WindowThreadProcessId,
      &fPending);
  }
  v8 = *(RTL_SRWLOCK **)(a1 + 48);
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(v8);
  AcquireSRWLockExclusive(v8 + 6);
  EnableIAMAccess(v8[5].Ptr, 1LL);
  pvAttribute[0] = a3 != 0;
  v9 = DwmSetWindowAttribute(a2, 0xDu, pvAttribute, 4u);
  EnableIAMAccess(v8[5].Ptr, 0LL);
  ReleaseSRWLockExclusive(v8 + 6);
  if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)&v8[4].Ptr + 4), v10) )
  {
    (*((void (__fastcall **)(RTL_SRWLOCK *, __int64))v8->Ptr + 9))(v8, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v9;
}
