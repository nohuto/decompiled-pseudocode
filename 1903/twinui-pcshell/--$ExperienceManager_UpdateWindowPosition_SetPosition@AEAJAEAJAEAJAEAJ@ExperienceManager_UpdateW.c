/*
 * XREFs of ??$ExperienceManager_UpdateWindowPosition_SetPosition@AEAJAEAJAEAJAEAJ@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXAEAJ000@Z @ 0x18019FC60
 * Callers:
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801A5D84 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvider@@P6AXXZ@Z @ 0x1801A6190 (-get@-$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvid.c)
 */

char __fastcall QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::ExperienceManager_UpdateWindowPosition_SetPosition<long &,long &,long &,long &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v9; // rax
  const struct _TlgProvider_t *v10; // rcx
  const struct _TlgProvider_t *v11; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-31h] BYREF
  __int64 v14; // [rsp+50h] [rbp-11h]
  __int64 v15; // [rsp+58h] [rbp-9h]
  __int64 v16; // [rsp+60h] [rbp-1h]
  __int64 v17; // [rsp+68h] [rbp+7h]
  __int64 v18; // [rsp+70h] [rbp+Fh]
  __int64 v19; // [rsp+78h] [rbp+17h]
  __int64 v20; // [rsp+80h] [rbp+1Fh]
  __int64 v21; // [rsp+88h] [rbp+27h]

  v9 = wil::details::static_lazy<QuickConnectLoggingProvider>::get(
         a1,
         lambda_f050a8947b8d1270f7eda0e498aa88e8_::_lambda_invoker_cdecl_);
  v10 = *(const struct _TlgProvider_t **)(v9 + 8);
  if ( *(_DWORD *)v10 > 5u )
  {
    LOBYTE(v9) = TlgKeywordOn(v10, 0x200000000000uLL);
    if ( (_BYTE)v9 )
    {
      v20 = a5;
      v14 = a2;
      v15 = 4LL;
      v16 = a3;
      v17 = 4LL;
      v18 = a4;
      v19 = 4LL;
      v21 = 4LL;
      LOBYTE(v9) = TlgWrite(v11, &unk_1804C0EFC, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 6u, &pData);
    }
  }
  return v9;
}
