/*
 * XREFs of ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18000C610
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18000D0D0 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18002801C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18002BFE8 (atexit.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MPCInputRouter_UpdateFocusedInputTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@_NPEAUIMPCInputPostProcessor@@@Z @ 0x180055480 (-MPCInputRouter_UpdateFocusedInputTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@_NPEAUIMPCInputPost.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x180056080 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 */

__int64 __fastcall MPCInputRouter::UpdateFocusedInputTarget(MPCInputRouter *this, struct IInputTarget *a2)
{
  int v2; // esi
  struct IMPCInputPostProcessor *v4; // rsi
  __int64 v6; // rcx
  _DWORD *v7; // rax
  int updated; // eax
  ISMTracing *v10; // rcx
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+50h] [rbp+18h] BYREF

  v11 = v2;
  v4 = (struct IMPCInputPostProcessor *)*((_QWORD *)this + 107);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    qword_1801E1460[0] = &RawInputProvidersContinuousTracing::`vftable';
    Context = qword_1801E1460;
    qword_1801E1478 = (struct _TlgProvider_t *)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801E1460, qword_1801E1478);
    InitOnceComplete(&`ISMTracing::Instance'::`2'::wrapper, 0, qword_1801E1460);
  }
  v7 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v7 && *v7 )
  {
    wil::details::static_lazy<ISMTracing>::get(v6, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCInputRouter_UpdateFocusedInputTarget_(v10, a2, *((_BYTE *)this + 904) != 0, v4);
  }
  if ( *((_BYTE *)this + 904) )
  {
    MPCInputRouter::UpdateFocusedInputTarget3D(this, a2);
  }
  else
  {
    updated = DWMInputRouter::UpdateFocusedInputTarget(this, a2);
    if ( updated < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xF0,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)updated,
        v11);
      __debugbreak();
    }
  }
  return 0LL;
}
