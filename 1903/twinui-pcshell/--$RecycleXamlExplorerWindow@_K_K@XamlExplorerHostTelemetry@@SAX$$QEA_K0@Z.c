/*
 * XREFs of ??$RecycleXamlExplorerWindow@_K_K@XamlExplorerHostTelemetry@@SAX$$QEA_K0@Z @ 0x1802B0254
 * Callers:
 *     ?RecycleXamlExplorerWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindow@@@Z @ 0x1802B2540 (-RecycleXamlExplorerWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindow@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x1802B310C (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 */

int __fastcall XamlExplorerHostTelemetry::RecycleXamlExplorerWindow<unsigned __int64,unsigned __int64>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  const struct _TlgProvider_t *v5; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v4 = wil::details::static_lazy<XamlSwitcherLogging>::get(
         a1,
         lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_);
  v5 = *(const struct _TlgProvider_t **)(v4 + 8);
  if ( *(_DWORD *)v5 > 5u )
  {
    v10 = 0;
    v13 = 0;
    v9 = 8;
    v12 = 8;
    v8 = a1;
    v11 = a2;
    LODWORD(v4) = TlgWrite(v5, &unk_1804D5054, 0LL, 0LL, 4u, &pData);
  }
  return v4;
}
