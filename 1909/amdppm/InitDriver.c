/*
 * XREFs of InitDriver @ 0x1C0035008
 * Callers:
 *     ProcLibGlobalInit @ 0x1C0035560 (ProcLibGlobalInit.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C000194C (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     IsACountMCountSupported @ 0x1C0001A7C (IsACountMCountSupported.c)
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C000DF80 (GetCpuIdInfo.c)
 *     IsMonitorMWaitSupported @ 0x1C001C584 (IsMonitorMWaitSupported.c)
 *     GetHvPpmCapabilities @ 0x1C00201C8 (GetHvPpmCapabilities.c)
 */

__int64 __fastcall InitDriver(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 result; // rax
  char v6[4]; // [rsp+20h] [rbp-30h] BYREF
  int v7; // [rsp+24h] [rbp-2Ch]
  __int64 v8; // [rsp+28h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-20h]
  _QWORD v10[2]; // [rsp+38h] [rbp-18h] BYREF

  wil_details_FeaturePropertyCache_ReportUsageToService(0LL, 3LL);
  v7 = 0;
  *(_QWORD *)(a1 + 64) = ValidatePStateCapability;
  v4 = 0x20000000LL;
  *(_QWORD *)(a1 + 72) = SetFFHPState;
  *(_QWORD *)(a1 + 40) = AmdPpmDeviceStart;
  if ( IsACountMCountSupported() )
  {
    v4 = 603979776LL;
    *(_QWORD *)(a1 + 128) = ACountMCountHardwareFeedback;
  }
  v10[0] = 0LL;
  v10[1] = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  GetCpuIdInfo(0x80000000, v10);
  if ( LODWORD(v10[0]) >= 7 )
  {
    GetCpuIdInfo(0x80000007, &v8);
    if ( (v9 & 0x20000000000LL) != 0 )
      *(_QWORD *)(a1 + 152) = SetPerformanceBoostMode;
  }
  if ( IsACountMCountSupported() )
  {
    v8 = 0LL;
    v9 = 0LL;
    GetCpuIdInfo(1u, &v8);
    if ( (v8 & 0xF00) == 0xF00 && (unsigned int)(unsigned __int8)((unsigned int)v8 >> 20) + 15 >= 0x17 )
      v4 |= 0x400000uLL;
  }
  v6[0] = IsMonitorMWaitSupported();
  if ( v6[0] || (GetHvPpmCapabilities(0LL, 0LL, v6), v6[0]) )
  {
    *(_QWORD *)(a1 + 48) = InitAcpiIdleStateSupport;
    *(_QWORD *)(a1 + 56) = DecodeMWaitIdleState;
    v4 |= 0x2000007F000uLL;
  }
  *a2 |= v4;
  *(_QWORD *)(a1 + 192) = InitEnergyCountersOnCurrentProcessor;
  *(_QWORD *)(a1 + 200) = UnInitEnergyCountersOnCurrentProcessor;
  result = 0LL;
  *(_DWORD *)(a1 + 224) = -1073676190;
  *(_QWORD *)(a1 + 232) = -16LL;
  return result;
}
