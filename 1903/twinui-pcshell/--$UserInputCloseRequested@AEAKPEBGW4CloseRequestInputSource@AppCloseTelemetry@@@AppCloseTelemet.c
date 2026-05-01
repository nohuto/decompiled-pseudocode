/*
 * XREFs of ??$UserInputCloseRequested@AEAKPEBGW4CloseRequestInputSource@AppCloseTelemetry@@@AppCloseTelemetry@@SAXAEAK$$QEAPEBG$$QEAW4CloseRequestInputSource@0@@Z @ 0x18010C0F4
 * Callers:
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x18011CF90 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VAppCloselogging@@@details@wil@@QEAAPEAVAppCloselogging@@P6AXXZ@Z @ 0x180120550 (-get@-$static_lazy@VAppCloselogging@@@details@wil@@QEAAPEAVAppCloselogging@@P6AXXZ@Z.c)
 */

char __fastcall AppCloseTelemetry::UserInputCloseRequested<unsigned long &,unsigned short const *,enum AppCloseTelemetry::CloseRequestInputSource>(
        __int64 a1,
        const WCHAR **a2,
        int *a3)
{
  __int64 v6; // rax
  const WCHAR *v7; // rdx
  int v8; // r10d
  TraceLoggingHProvider v9; // r11
  int v11; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  __int64 v13; // [rsp+60h] [rbp-48h]
  int v14; // [rsp+68h] [rbp-40h]
  int v15; // [rsp+6Ch] [rbp-3Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-38h] BYREF
  int *v17; // [rsp+80h] [rbp-28h]
  int v18; // [rsp+88h] [rbp-20h]
  int v19; // [rsp+8Ch] [rbp-1Ch]

  v6 = wil::details::static_lazy<AppCloselogging>::get(
         a1,
         lambda_3e26dcec44775d43d9dfc79dea49f939_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v6 + 8) > 5u )
  {
    LOBYTE(v6) = TlgKeywordOn(*(TraceLoggingHProvider *)(v6 + 8), 0x400000000000uLL);
    if ( (_BYTE)v6 )
    {
      v7 = *a2;
      v15 = 0;
      v13 = a1;
      v14 = 4;
      TlgCreateWsz(&pDesc, v7);
      v8 = *a3;
      v19 = 0;
      v17 = &v11;
      v11 = v8;
      v18 = 4;
      LOBYTE(v6) = TlgWrite(v9, &unk_1804B7053, 0LL, 0LL, 5u, &pData);
    }
  }
  return v6;
}
