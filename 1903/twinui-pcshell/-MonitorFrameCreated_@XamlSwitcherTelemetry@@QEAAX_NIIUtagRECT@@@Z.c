/*
 * XREFs of ?MonitorFrameCreated_@XamlSwitcherTelemetry@@QEAAX_NIIUtagRECT@@@Z @ 0x1802CC32C
 * Callers:
 *     ??$MonitorFrameCreated@_NIIAEAUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAI1AEAUtagRECT@@@Z @ 0x1802BFFC0 (--$MonitorFrameCreated@_NIIAEAUtagRECT@@@XamlSwitcherTelemetry@@SAX$$QEA_N$$QEAI1AEAUtagRECT@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x1802B310C (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 */

void __fastcall XamlSwitcherTelemetry::MonitorFrameCreated_(
        XamlSwitcherTelemetry *this,
        unsigned __int8 a2,
        int a3,
        int a4,
        struct tagRECT *a5)
{
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  int v8; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-51h] BYREF
  int *v10; // [rsp+68h] [rbp-31h]
  __int64 v11; // [rsp+70h] [rbp-29h]
  int *v12; // [rsp+78h] [rbp-21h]
  __int64 v13; // [rsp+80h] [rbp-19h]
  int *v14; // [rsp+88h] [rbp-11h]
  __int64 v15; // [rsp+90h] [rbp-9h]
  struct tagRECT *v16; // [rsp+98h] [rbp-1h]
  __int64 v17; // [rsp+A0h] [rbp+7h]
  LONG *p_top; // [rsp+A8h] [rbp+Fh]
  __int64 v19; // [rsp+B0h] [rbp+17h]
  LONG *p_right; // [rsp+B8h] [rbp+1Fh]
  __int64 v21; // [rsp+C0h] [rbp+27h]
  LONG *p_bottom; // [rsp+C8h] [rbp+2Fh]
  __int64 v23; // [rsp+D0h] [rbp+37h]
  int v24; // [rsp+108h] [rbp+6Fh] BYREF
  int v25; // [rsp+110h] [rbp+77h] BYREF

  v25 = a4;
  v24 = a3;
  v6 = (const struct _TlgProvider_t *)wil::details::static_lazy<XamlSwitcherLogging>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v6 > 5u )
  {
    if ( TlgKeywordOn(v6, 0x400000000000uLL) )
    {
      v8 = a2;
      v10 = &v8;
      v12 = &v24;
      v14 = &v25;
      p_top = &a5->top;
      p_right = &a5->right;
      p_bottom = &a5->bottom;
      v11 = 4LL;
      v13 = 4LL;
      v15 = 4LL;
      v16 = a5;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      TlgWrite(v7, &unk_1804D5764, 0LL, 0LL, 9u, &pData);
    }
  }
}
