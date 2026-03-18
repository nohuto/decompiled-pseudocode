/*
 * XREFs of imp_WdfDriverErrorReportApiMissing @ 0x1C004D770
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C0043680 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00436AC (_TlgWrite.c)
 *     WPP_IFR_SF_sSLSs @ 0x1C004CEF4 (WPP_IFR_SF_sSLSs.c)
 *     _TlgCreateSz @ 0x1C004D220 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x1C004D258 (_TlgCreateWsz.c)
 *     ?FxVerifierDriverReportedBugcheck@@YAXPEAU_FX_DRIVER_GLOBALS@@K_K111@Z @ 0x1C005B810 (-FxVerifierDriverReportedBugcheck@@YAXPEAU_FX_DRIVER_GLOBALS@@K_K111@Z.c)
 */

__int64 __fastcall imp_WdfDriverErrorReportApiMissing(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        const wchar_t *FrameworkExtensionName,
        unsigned int ApiIndex,
        unsigned __int8 DoesApiReturnNtstatus)
{
  unsigned __int64 level; // r14
  unsigned __int8 v8; // dl
  unsigned int v9; // r8d
  unsigned __int16 v10; // r9
  const wchar_t *flags; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  char *DriverName; // rax
  bool v14; // zf
  const char *v15; // rbx
  unsigned __int64 TelemetryContext; // rax
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  unsigned int Major; // eax
  unsigned int Minor; // eax
  unsigned int v20; // r10d
  const _GUID *v21; // r8
  const _GUID *v22; // r9
  const char *id; // rax
  const _GUID *hProvider; // [rsp+20h] [rbp-B1h]
  unsigned int v26; // [rsp+50h] [rbp-81h] BYREF
  unsigned int v27; // [rsp+54h] [rbp-7Dh] BYREF
  int v28; // [rsp+58h] [rbp-79h] BYREF
  FxDriver *pDriver; // [rsp+60h] [rbp-71h] BYREF
  _EVENT_DATA_DESCRIPTOR _TlgData[8]; // [rsp+70h] [rbp-61h] BYREF

  level = ApiIndex;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Driver,
    0x1001u,
    (void **)&pDriver);
  flags = L"KMDF";
  if ( FrameworkExtensionName )
    flags = FrameworkExtensionName;
  m_Globals = pDriver->m_Globals;
  DriverName = DriverGlobals->DriverName;
  v14 = DriverGlobals->DriverName[0] == 0;
  v15 = "(Unknown)";
  if ( !v14 )
    v15 = DriverName;
  if ( Tlgg_TelemetryProviderProv.LevelPlus1 > 5 && TlgKeywordOn(&Tlgg_TelemetryProviderProv, 0x200000000000uLL) )
  {
    TelemetryContext = (unsigned __int64)m_Globals->TelemetryContext;
    _TlgData[2].Reserved = 0;
    _TlgData[2].Ptr = TelemetryContext;
    _TlgData[2].Size = 16;
    TlgCreateSz(&_TlgData[3], m_Globals->Public.DriverName);
    WdfBindInfo = m_Globals->WdfBindInfo;
    Major = WdfBindInfo->Version.Major;
    _TlgData[4].Reserved = 0;
    v26 = Major;
    _TlgData[4].Ptr = (unsigned __int64)&v26;
    _TlgData[4].Size = 4;
    Minor = WdfBindInfo->Version.Minor;
    _TlgData[5].Reserved = 0;
    v27 = Minor;
    _TlgData[5].Ptr = (unsigned __int64)&v27;
    _TlgData[5].Size = 4;
    TlgCreateWsz(&_TlgData[6], flags);
    _TlgData[7].Reserved = 0;
    _TlgData[7].Ptr = (unsigned __int64)&v28;
    v28 = level;
    _TlgData[7].Size = v20;
    TlgWrite(&Tlgg_TelemetryProviderProv, (char *)&TlgEvent_0._TlgChannel, v21, v22, 8u, _TlgData);
  }
  id = "WDF";
  if ( FrameworkExtensionName )
    id = " ";
  WPP_IFR_SF_sSLSs(m_Globals, v8, v9, v10, hProvider, v15, flags, level, flags, id);
  if ( !DoesApiReturnNtstatus || m_Globals->FxVerifierOn )
    FxVerifierDriverReportedBugcheck(m_Globals, 0x10Du, 0x10uLL, (unsigned __int64)v15, (unsigned __int64)flags, level);
  return 3221225594LL;
}
