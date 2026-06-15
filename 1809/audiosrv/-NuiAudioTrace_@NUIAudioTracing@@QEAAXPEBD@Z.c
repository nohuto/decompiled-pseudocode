/*
 * XREFs of ?NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z @ 0x180135C0C
 * Callers:
 *     ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x180135B68 (-DumpTraceWin32@@YAXPEBD00H@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x180009C20 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z @ 0x180135C90 (-get@-$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z.c)
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
      TlgWrite(v5, &unk_18017805F, v4, (LPCGUID)v5, 3u, &pData);
    }
  }
}
