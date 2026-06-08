/*
 * XREFs of InitDriver @ 0x1C0039268
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00396F4 (ProcLibGlobalInit.c)
 * Callees:
 *     IsNonwrappingACountMCountSupported @ 0x1C0001CF8 (IsNonwrappingACountMCountSupported.c)
 *     IsPerformanceEnergyBiasSupported @ 0x1C0001D78 (IsPerformanceEnergyBiasSupported.c)
 *     IsHwpSupported @ 0x1C0001DF0 (IsHwpSupported.c)
 *     IsHgsInterruptSupported @ 0x1C0001E68 (IsHgsInterruptSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C0001EE4 (IsHwpNativeInterruptSupported.c)
 *     IsTurboModeSupported @ 0x1C0004130 (IsTurboModeSupported.c)
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C0004340 (GetCpuIdInfo.c)
 *     IsMonitorMWaitSupported @ 0x1C001FA10 (IsMonitorMWaitSupported.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001FC34 (GetRegistryDwordValueNoDefault.c)
 *     GetHvPpmCapabilities @ 0x1C002E8AC (GetHvPpmCapabilities.c)
 */

__int64 __fastcall InitDriver(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  char v6; // r14
  __int64 v7; // rdi
  char v9[4]; // [rsp+20h] [rbp-30h] BYREF
  int v10; // [rsp+24h] [rbp-2Ch] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-20h]
  _QWORD v13[2]; // [rsp+38h] [rbp-18h] BYREF

  v4 = 12223;
  if ( IsHwpNativeInterruptSupported() || IsHgsInterruptSupported() )
    v4 = 16319;
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = (void *)0x100000001LL;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = v4;
  *(_QWORD *)(a1 + 16) = &WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  v5 = 572522496LL;
  v6 = 0;
  *(_WORD *)(a1 + 32) = 12;
  *(_OWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = ACPI_OSC_INTEL_GUID;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = 1;
  *(void **)((char *)&WPP_MAIN_CB.Queue.Wcb.DeviceContext + 4) = (void *)2;
  *(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 1) = v4;
  *(_QWORD *)(a1 + 24) = &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  *(_WORD *)(a1 + 34) = 32;
  *(_QWORD *)(a1 + 64) = ValidatePStateCapability;
  *(_QWORD *)(a1 + 72) = SetGV3PerfState;
  *(_QWORD *)(a1 + 80) = SetFFHThrottleState;
  *(_QWORD *)(a1 + 88) = SetGV3PerfStateHidden;
  *(_QWORD *)(a1 + 96) = SetFFHThrottleStateHidden;
  v13[0] = 0LL;
  v13[1] = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  GetCpuIdInfo(0, v13);
  if ( LODWORD(v13[0]) >= 6 )
  {
    GetCpuIdInfo(6u, &v11);
    if ( (v12 & 1) != 0 )
    {
      v5 = 639631360LL;
      *(_QWORD *)(a1 + 128) = GV3HardwareFeedback;
      if ( IsNonwrappingACountMCountSupported() )
      {
        v6 = 1;
        v5 = 0x8026200000LL;
      }
    }
  }
  v11 = 0LL;
  v12 = 0LL;
  GetCpuIdInfo(1u, &v11);
  if ( (v12 & 0x40000000000000LL) != 0 )
    *(_QWORD *)(a1 + 136) = GetFFHThrottleState;
  if ( IsPerformanceEnergyBiasSupported() )
    *(_QWORD *)(a1 + 144) = SetPerformanceEnergyBiasPolicy;
  if ( IsTurboModeSupported() )
  {
    if ( IsPerformanceEnergyBiasSupported() )
    {
      *(_QWORD *)(a1 + 72) = SetGV3PerfStateAndTurbo;
      *(_QWORD *)(a1 + 112) = GetGV3PerfStateFlags;
      *(_QWORD *)(a1 + 88) = SetGV3PerfStateAndTurboHidden;
    }
    else
    {
      v6 = 0;
      *(_QWORD *)(a1 + 152) = SetTurboDisablePolicy;
    }
  }
  v7 = v5 | 0x400000;
  if ( !v6 )
    v7 = v5;
  v9[0] = IsMonitorMWaitSupported();
  if ( v9[0] || (GetHvPpmCapabilities(0LL, 0LL, v9), v9[0]) )
  {
    *(_QWORD *)(a1 + 48) = InitAcpiIdleStateSupport;
    *(_QWORD *)(a1 + 56) = DecodeMWaitIdleState;
    v7 |= 0x12000007F000uLL;
  }
  if ( IsHwpSupported() )
  {
    *(_QWORD *)(a1 + 160) = IsCppcThrottleEfficient;
    *(_QWORD *)(a1 + 176) = GetHwpPerfControlHandler;
  }
  if ( IsHwpNativeInterruptSupported() || IsHgsInterruptSupported() )
  {
    v7 |= 0x4000000000uLL;
    *(_QWORD *)(a1 + 168) = ConnectHwpInterrupt;
    *(_QWORD *)(a1 + 184) = EnableHwpInterrupt;
  }
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_DWORD *)(a1 + 224) = 409;
  *(_QWORD *)(a1 + 232) = -65536LL;
  *(_DWORD *)(a1 + 240) = 410;
  if ( qword_1C001B680 && qword_1C001B688 && qword_1C001B690 && qword_1C001B698 )
    v7 |= 0x200000000000uLL;
  if ( (int)GetRegistryDwordValueNoDefault(
              (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\IntelHswPcc\\Enum",
              (__int64)L"Count",
              (__int64)&v10) >= 0
    && v10 )
  {
    *(_QWORD *)(a1 + 104) = PerfControlIntelPccWorkaround;
  }
  *(_QWORD *)(a1 + 192) = InitEnergyCounters;
  *(_QWORD *)(a1 + 200) = UnInitEnergyCounters;
  *a2 |= v7;
  return 0LL;
}
