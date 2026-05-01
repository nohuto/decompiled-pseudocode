/*
 * XREFs of ??$XamlExplorerHostWindowAvailable@_KAEA_N@XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAAX$$QEA_KAEA_N@Z @ 0x1802B02F4
 * Callers:
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KAEBU_GUID@@PEAPEAX@Z @ 0x1802B0E30 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWi.c)
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x1802B310C (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 */

int __fastcall XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::XamlExplorerHostWindowAvailable<unsigned __int64,bool &>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 v6; // rax
  const struct _TlgProvider_t *v7; // rcx
  int v8; // eax
  int v10; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 v12; // [rsp+60h] [rbp-38h]
  int v13; // [rsp+68h] [rbp-30h]
  int v14; // [rsp+6Ch] [rbp-2Ch]
  int *v15; // [rsp+70h] [rbp-28h]
  int v16; // [rsp+78h] [rbp-20h]
  int v17; // [rsp+7Ch] [rbp-1Ch]

  v6 = wil::details::static_lazy<XamlSwitcherLogging>::get(
         a1,
         lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_);
  v7 = *(const struct _TlgProvider_t **)(v6 + 8);
  if ( *(_DWORD *)v7 > 5u )
  {
    v8 = *a3;
    v14 = 0;
    v17 = 0;
    v10 = v8;
    v15 = &v10;
    v12 = a2;
    v13 = 8;
    v16 = 4;
    LODWORD(v6) = TlgWrite(v7, &unk_1804D5091, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
  }
  return v6;
}
