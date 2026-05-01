/*
 * XREFs of ?TabViewManager_RecoverTabForWindow@TabViewManager_RecoverTabGroupsFromWindowGroups@TabViewManagerTraceLogging@@QEAAXPEAUHWND__@@@Z @ 0x18023EC6C
 * Callers:
 *     _lambda_7776713b7958a1ab94e34a9b72bfa77e_::operator() @ 0x18022B220 (_lambda_7776713b7958a1ab94e34a9b72bfa77e_--operator().c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups::TabViewManager_RecoverTabForWindow(
        TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups *this,
        HWND a2)
{
  __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  _BYTE v6[8]; // [rsp+30h] [rbp-68h] BYREF
  HWND v7; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  HWND *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  _BYTE *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  GetWindowGroupId(a2, v6);
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                                    v4,
                                                    (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)
                                      + 1);
  if ( *(_DWORD *)v5 > 4u )
  {
    v11 = 0;
    v14 = 0;
    v9 = &v7;
    v12 = v6;
    v7 = a2;
    v10 = 8;
    v13 = 4;
    TlgWrite(v5, &unk_1804CE6A1, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
  }
}
