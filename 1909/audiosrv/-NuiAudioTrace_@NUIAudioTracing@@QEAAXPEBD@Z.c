/*
 * XREFs of ?NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z @ 0x18013CA5C
 * Callers:
 *     ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x18013C9B8 (-DumpTraceWin32@@YAXPEBD00H@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001E08C (_TlgKeywordOn.c)
 *     _TlgCreateSz @ 0x18003FD98 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z @ 0x18013CAE0 (-get@-$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z.c)
 */

void __fastcall NUIAudioTracing::NuiAudioTrace_(NUIAudioTracing *this, const char *a2)
{
  __int64 v3; // rax
  LPCGUID v4; // r8
  TraceLoggingHProvider v5; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  v3 = wil::details::static_lazy<NUIAudioTracing>::get(
         this,
         lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v3 + 8) > 2u )
  {
    if ( TlgKeywordOn(*(TraceLoggingHProvider *)(v3 + 8), 0LL) )
    {
      TlgCreateSz(&pDesc, a2);
      TlgWrite(v5, &unk_18017BFED, v4, (LPCGUID)v5, 3u, &pData);
    }
  }
}
