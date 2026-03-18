/*
 * XREFs of imp_WdfDriverErrorReportApiMissing @ 0x1C004DE80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C0044500 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0044534 (_TlgWrite.c)
 *     WPP_IFR_SF_sSLSs @ 0x1C004D614 (WPP_IFR_SF_sSLSs.c)
 *     _TlgCreateSz @ 0x1C004D940 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x1C004D978 (_TlgCreateWsz.c)
 *     ?FxVerifierDriverReportedBugcheck@@YAXPEAU_FX_DRIVER_GLOBALS@@K_K111@Z @ 0x1C005B3E4 (-FxVerifierDriverReportedBugcheck@@YAXPEAU_FX_DRIVER_GLOBALS@@K_K111@Z.c)
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
  const _TlgProvider_t *v9; // rcx
  unsigned int v10; // r8d
  unsigned __int16 v11; // r9
  const wchar_t *flags; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  char *DriverName; // rax
  bool v15; // zf
  const char *v16; // rbx
  unsigned __int64 TelemetryContext; // rax
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  unsigned int Major; // eax
  unsigned int Minor; // eax
  unsigned int v21; // r10d
  const _TlgProvider_t *v22; // rcx
  const _GUID *v23; // r8
  const _GUID *v24; // r9
  const char *id; // rax
  _FX_DRIVER_GLOBALS *v26; // rcx
  const _GUID *pEventMetadata; // [rsp+20h] [rbp-B1h]
  unsigned int v29; // [rsp+50h] [rbp-81h] BYREF
  unsigned int v30; // [rsp+54h] [rbp-7Dh] BYREF
  int v31; // [rsp+58h] [rbp-79h] BYREF
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
  v15 = DriverGlobals->DriverName[0] == 0;
  v16 = "(Unknown)";
  if ( !v15 )
    v16 = DriverName;
  if ( Tlgg_TelemetryProviderProv.LevelPlus1 > 5 && TlgKeywordOn(v9, 0x200000000000uLL) )
  {
    TelemetryContext = (unsigned __int64)m_Globals->TelemetryContext;
    _TlgData[2].Reserved = 0;
    _TlgData[2].Ptr = TelemetryContext;
    _TlgData[2].Size = 16;
    TlgCreateSz(&_TlgData[3], m_Globals->Public.DriverName);
    WdfBindInfo = m_Globals->WdfBindInfo;
    Major = WdfBindInfo->Version.Major;
    _TlgData[4].Reserved = 0;
    v29 = Major;
    _TlgData[4].Ptr = (unsigned __int64)&v29;
    _TlgData[4].Size = 4;
    Minor = WdfBindInfo->Version.Minor;
    _TlgData[5].Reserved = 0;
    v30 = Minor;
    _TlgData[5].Ptr = (unsigned __int64)&v30;
    _TlgData[5].Size = 4;
    TlgCreateWsz(&_TlgData[6], flags);
    _TlgData[7].Reserved = 0;
    _TlgData[7].Ptr = (unsigned __int64)&v31;
    v31 = level;
    _TlgData[7].Size = v21;
    TlgWrite(v22, (char *)&TlgEvent_0._TlgChannel, v23, v24, 8u, _TlgData);
  }
  id = "WDF";
  if ( FrameworkExtensionName )
    id = " ";
  WPP_IFR_SF_sSLSs(m_Globals, v8, v10, v11, pEventMetadata, v16, flags, level, flags, id);
  if ( !DoesApiReturnNtstatus || m_Globals->FxVerifierOn )
    FxVerifierDriverReportedBugcheck(v26, 0x10Du, 0x10uLL, (unsigned __int64)v16, (unsigned __int64)flags, level);
  return 3221225594LL;
}
