/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0CAAAAAAAAAAA@$04@@IEAA@XZ @ 0x1801700EC
 * Callers:
 *     ??1?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18017008C (--1-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_18017008C.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800FFF24 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 *     ??$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18010CC7C (--$_TlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall _TlgActivityBase<wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>::~_TlgActivityBase<wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>(
        _DWORD *a1)
{
  __int64 v2; // rcx
  wil::TraceLoggingProvider *v3; // rax
  _QWORD *v4; // rcx
  WINBOOL v5; // [rsp+30h] [rbp+8h] BYREF
  const struct _TlgProvider_t **v6; // [rsp+38h] [rbp+10h] BYREF

  if ( *a1 == 1 )
  {
    v6 = 0LL;
    *a1 = 2;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
    {
      v6 = (const struct _TlgProvider_t **)&unk_180599C78;
      v3 = (wil::TraceLoggingProvider *)operator new(v2, &unk_180599C78);
      wil::TraceLoggingProvider::TraceLoggingProvider(v3);
      *v4 = &ImmersiveIconsLogging::`vftable';
      v4[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
    }
    _TlgWriteActivityAutoStop<35184372088832,5>(v6[1]);
  }
  *a1 = 3;
}
