/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$04@@IEAA@XZ @ 0x1801510E0
 * Callers:
 *     ??1?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180150FD8 (--1-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_180150FD8.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800EA3D0 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

int __fastcall _TlgActivityBase<wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>,0,5>::~_TlgActivityBase<wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>,0,5>(
        __int64 a1)
{
  _UNKNOWN **v1; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  WINBOOL v5; // [rsp+30h] [rbp+8h] BYREF
  const struct _TlgProvider_t **v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = &retaddr;
  if ( *(_DWORD *)a1 == 1 )
  {
    v6 = 0LL;
    *(_DWORD *)a1 = 2;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
    {
      v6 = (const struct _TlgProvider_t **)qword_18050F960;
      qword_18050F960[0] = &ShellScreenClippingLogging::`vftable';
      qword_18050F978 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F960, qword_18050F978);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_18050F960);
    }
    LODWORD(v1) = _TlgWriteActivityAutoStop<0,5>(v6[1], (const GUID *)(a1 + 8));
  }
  *(_DWORD *)a1 = 3;
  return (int)v1;
}
