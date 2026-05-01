/*
 * XREFs of ??$ClosingExclusiveOnHide@PEBGI@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAI@Z @ 0x180209568
 * Callers:
 *     ?put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x180217AA0 (-put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedViewHostItemTelemetryProvider@@P6AXXZ@Z @ 0x180217098 (-get@-$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedV.c)
 */

char __fastcall Win32BackedViewHostItemTelemetry::ClosingExclusiveOnHide<unsigned short const *,unsigned int>(
        LPCWSTR *a1,
        __int64 a2)
{
  __int64 v4; // rax
  TraceLoggingHProvider v5; // r10
  __int64 v7; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-48h] BYREF
  __int64 v10; // [rsp+70h] [rbp-38h]
  int v11; // [rsp+78h] [rbp-30h]
  int v12; // [rsp+7Ch] [rbp-2Ch]
  __int64 *v13; // [rsp+80h] [rbp-28h]
  int v14; // [rsp+88h] [rbp-20h]
  int v15; // [rsp+8Ch] [rbp-1Ch]

  v4 = wil::details::static_lazy<Win32BackedViewHostItemTelemetryProvider>::get(
         a1,
         lambda_ec1d4b054d630c017dce9880fb168525_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v4 + 8) > 5u )
  {
    LOBYTE(v4) = TlgKeywordOn(*(TraceLoggingHProvider *)(v4 + 8), 0x400000000000uLL);
    if ( (_BYTE)v4 )
    {
      TlgCreateWsz(&pDesc, *a1);
      v12 = 0;
      v15 = 0;
      v13 = &v7;
      v10 = a2;
      v11 = 4;
      v7 = 0x2000000LL;
      v14 = 8;
      LOBYTE(v4) = TlgWrite(v5, &unk_1804C9D3B, 0LL, 0LL, 5u, &pData);
    }
  }
  return v4;
}
