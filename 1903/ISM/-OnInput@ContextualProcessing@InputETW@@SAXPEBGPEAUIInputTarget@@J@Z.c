/*
 * XREFs of ?OnInput@ContextualProcessing@InputETW@@SAXPEBGPEAUIInputTarget@@J@Z @ 0x1800FB064
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800FA280 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x1800147C8 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

void __fastcall InputETW::ContextualProcessing::OnInput(LPCWSTR pwsz, struct IInputTarget *a2, int a3)
{
  TraceLoggingHProvider *v5; // rax
  TraceLoggingHProvider v6; // r10
  struct IInputTarget *v7; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp+17h] BYREF
  struct IInputTarget **v10; // [rsp+78h] [rbp+27h]
  int v11; // [rsp+80h] [rbp+2Fh]
  int v12; // [rsp+84h] [rbp+33h]
  int *v13; // [rsp+88h] [rbp+37h]
  int v14; // [rsp+90h] [rbp+3Fh]
  int v15; // [rsp+94h] [rbp+43h]
  int v16; // [rsp+C8h] [rbp+77h] BYREF

  v16 = a3;
  v5 = (TraceLoggingHProvider *)wil::details::static_lazy<InputETW>::get(
                                  (__int64)pwsz,
                                  lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v5[1] > 4u )
  {
    if ( TlgKeywordOn(v5[1], 1uLL) )
    {
      TlgCreateWsz(&pDesc, pwsz);
      v12 = 0;
      v15 = 0;
      v10 = &v7;
      v13 = &v16;
      v7 = a2;
      v11 = 8;
      v14 = 4;
      TlgWrite(v6, &unk_1801A05AE, 0LL, 0LL, 5u, &pData);
    }
  }
}
