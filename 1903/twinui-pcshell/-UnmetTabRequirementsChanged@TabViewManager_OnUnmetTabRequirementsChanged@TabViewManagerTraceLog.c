/*
 * XREFs of ?UnmetTabRequirementsChanged@TabViewManager_OnUnmetTabRequirementsChanged@TabViewManagerTraceLogging@@QEAAXW4DWM_TAB_WINDOW_REQUIREMENTS@@0AEBUWindowCharacteristics@TelemetryHelpers@@@Z @ 0x180240C80
 * Callers:
 *     ?OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x18023521C (-OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18004974C (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

char __fastcall TabViewManagerTraceLogging::TabViewManager_OnUnmetTabRequirementsChanged::UnmetTabRequirementsChanged(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  LPVOID v8; // rax
  const struct _TlgProvider_t *v9; // rbx
  const unsigned __int16 *v10; // rdx
  const WCHAR *v11; // rax
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  int *v18; // [rsp+60h] [rbp-A0h]
  __int64 v19; // [rsp+68h] [rbp-98h]
  int *v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  __int64 v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  __int64 v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  int *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  int *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  __int64 v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  __int64 v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+F0h] [rbp-10h] BYREF

  v8 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         a1,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)v8 + 1);
  if ( *(_DWORD *)v9 > 5u )
  {
    LOBYTE(v8) = TlgKeywordOn(*((TraceLoggingHProvider *)v8 + 1), 0x400000000000uLL);
    if ( (_BYTE)v8 )
    {
      v13 = a2;
      v18 = &v13;
      v19 = 4LL;
      v20 = &v14;
      v14 = a3;
      v22 = a4 + 16;
      v24 = a4 + 20;
      v15 = *(_DWORD *)(a4 + 32);
      v26 = &v15;
      v16 = *(_DWORD *)(a4 + 24);
      v28 = &v16;
      v32 = a4 + 8;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v30 = a4;
      v31 = 8LL;
      v33 = 8LL;
      TlgCreateWsz(&pDesc, (LPCWSTR)(a4 + 36));
      v11 = SQM::CensorAppID(*(LPCWSTR *)(a4 + 552), v10);
      TlgCreateWsz(&v35, v11);
      LOBYTE(v8) = TlgWrite(v9, &unk_1804CC656, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0xCu, &pData);
    }
  }
  return (char)v8;
}
