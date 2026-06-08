/*
 * XREFs of InitDriver @ 0x1C0036E5C
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00361EC (ProcLibGlobalInit.c)
 * Callees:
 *     IsHgsInterruptSupported @ 0x1C00030D0 (IsHgsInterruptSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C0003138 (IsHwpNativeInterruptSupported.c)
 *     IsHwpSupported @ 0x1C00031A4 (IsHwpSupported.c)
 *     IsPerformanceEnergyBiasSupported @ 0x1C0003208 (IsPerformanceEnergyBiasSupported.c)
 *     IsNonwrappingACountMCountSupported @ 0x1C000326C (IsNonwrappingACountMCountSupported.c)
 *     IsTurboModeSupported @ 0x1C0003EC8 (IsTurboModeSupported.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     IsIntelPccDriverPresent @ 0x1C0003F88 (IsIntelPccDriverPresent.c)
 *     GetCpuIdInfo @ 0x1C0004C40 (GetCpuIdInfo.c)
 *     IsMonitorMWaitSupported @ 0x1C00237A4 (IsMonitorMWaitSupported.c)
 *     GetHvPpmCapabilities @ 0x1C002C37C (GetHvPpmCapabilities.c)
 */

__int64 __fastcall InitDriver(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  char v6; // bp
  __int64 v7; // rdi
  char v9[8]; // [rsp+20h] [rbp-48h] BYREF
  int v10; // [rsp+28h] [rbp-40h] BYREF
  char v11; // [rsp+30h] [rbp-38h]
  int v12; // [rsp+34h] [rbp-34h]
  unsigned int v13[4]; // [rsp+38h] [rbp-30h] BYREF

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
  GetCpuIdInfo(0, v13);
  if ( v13[0] >= 6 )
  {
    GetCpuIdInfo(6u, &v10);
    if ( (v11 & 1) != 0 )
    {
      v5 = 639631360LL;
      *(_QWORD *)(a1 + 112) = GV3HardwareFeedback;
      if ( IsNonwrappingACountMCountSupported() )
      {
        v6 = 1;
        v5 = 0x8026200000LL;
      }
    }
  }
  GetCpuIdInfo(1u, &v10);
  if ( (v12 & 0x400000) != 0 )
    *(_QWORD *)(a1 + 120) = GetFFHThrottleState;
  if ( IsPerformanceEnergyBiasSupported() )
    *(_QWORD *)(a1 + 128) = SetPerformanceEnergyBiasPolicy;
  if ( IsTurboModeSupported() )
  {
    if ( IsPerformanceEnergyBiasSupported() )
    {
      *(_QWORD *)(a1 + 72) = SetGV3PerfStateAndTurbo;
      *(_QWORD *)(a1 + 88) = SetGV3PerfStateAndTurboHidden;
    }
    else
    {
      v6 = 0;
      *(_QWORD *)(a1 + 136) = SetTurboDisablePolicy;
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
    *(_QWORD *)(a1 + 144) = IsCppcThrottleEfficient;
    *(_QWORD *)(a1 + 160) = GetHwpPerfControlHandler;
  }
  if ( IsHwpNativeInterruptSupported() || IsHgsInterruptSupported() )
  {
    v7 |= 0x4000000000uLL;
    *(_QWORD *)(a1 + 152) = ConnectHwpInterrupt;
    *(_QWORD *)(a1 + 168) = EnableHwpInterrupt;
  }
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_DWORD *)(a1 + 208) = 409;
  *(_QWORD *)(a1 + 216) = -65536LL;
  *(_DWORD *)(a1 + 224) = 410;
  if ( qword_1C001A670 && qword_1C001A678 && qword_1C001A680 && qword_1C001A688 )
    v7 |= 0x200000000000uLL;
  if ( IsIntelPccDriverPresent() )
    *(_QWORD *)(a1 + 104) = PerfControlIntelPccWorkaround;
  *(_QWORD *)(a1 + 176) = InitEnergyCounters;
  *(_QWORD *)(a1 + 184) = UnInitEnergyCounters;
  *a2 |= v7;
  return 0LL;
}
