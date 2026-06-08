/*
 * XREFs of ProcLibGlobalInit @ 0x1C003241C
 * Callers:
 *     DriverEntry @ 0x1C0032168 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00017AC (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_s @ 0x1C0003D18 (WPP_RECORDER_SF_s.c)
 *     DisplayPPMFlags @ 0x1C000873C (DisplayPPMFlags.c)
 *     HviIsAnyHypervisorPresent @ 0x1C000C964 (HviIsAnyHypervisorPresent.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1C000C9C0 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1C000CA20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CEC0 (memset.c)
 *     GetHvPpmCapabilities @ 0x1C001A314 (GetHvPpmCapabilities.c)
 *     GetRegistryDwordValue @ 0x1C00220D8 (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C002217C (GetRegistryQwordValue.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C0028F68 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C0028F94 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C0028FC0 (ProcLibTraceThrottleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C0028FEC (ProcLibTracePccErrata.c)
 *     InitDriver @ 0x1C0032008 (InitDriver.c)
 *     CollectAcpiBiosInfo @ 0x1C00322D8 (CollectAcpiBiosInfo.c)
 *     ProcLibRegisterEtw @ 0x1C0032E68 (ProcLibRegisterEtw.c)
 *     PopulateEnergyEstimationParameters @ 0x1C0032F2C (PopulateEnergyEstimationParameters.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned __int16 v4; // r9
  unsigned int v5; // r8d
  int v6; // eax
  unsigned __int16 v7; // r9
  int v8; // eax
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // di
  char v13; // r14
  __int64 v19; // rbx
  SIZE_T v20; // rbx
  PVOID PoolWithTag; // rax
  __int64 v22; // rdx
  _DWORD *v23; // rcx
  const CHAR *v24; // r8
  const CHAR *v25; // r9
  bool v26; // zf
  unsigned int v27; // ebx
  __int64 v28; // rsi
  __int64 v29; // rax
  int inited; // eax
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  const char *v33; // rax
  int v35; // [rsp+28h] [rbp-41h]
  int v36; // [rsp+30h] [rbp-39h]
  int v37; // [rsp+40h] [rbp-29h] BYREF
  bool v38; // [rsp+44h] [rbp-25h] BYREF
  bool v39; // [rsp+45h] [rbp-24h] BYREF
  int v40; // [rsp+48h] [rbp-21h] BYREF
  int v41; // [rsp+4Ch] [rbp-1Dh] BYREF
  int v42; // [rsp+50h] [rbp-19h] BYREF
  int v43; // [rsp+58h] [rbp-11h] BYREF
  __int64 v44; // [rsp+60h] [rbp-9h]
  __int64 v45; // [rsp+68h] [rbp-1h]
  __int64 v46; // [rsp+70h] [rbp+7h]
  __int64 v47; // [rsp+78h] [rbp+Fh]
  unsigned __int64 InputBuffer; // [rsp+80h] [rbp+17h] BYREF
  unsigned __int64 v49; // [rsp+88h] [rbp+1Fh]

  v2 = ZwPowerInformation(ProcessorStateHandler, 0LL, 0, &dword_1C00115E0, 0x110u);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 10;
LABEL_3:
    v35 = v2;
LABEL_4:
    v5 = 3;
LABEL_5:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v5,
      v4,
      (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
      v35);
    return v3;
  }
  v6 = dword_1C00115E0;
  if ( dword_1C00115E0 != 60 )
  {
    v7 = 11;
    v36 = 60;
LABEL_8:
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v7,
      (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
      v6,
      v36);
    return (unsigned int)-1073741735;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C00113E8);
  v3 = v8;
  if ( v8 < 0 )
  {
    v4 = 12;
LABEL_11:
    v35 = v8;
    v5 = 4;
    goto LABEL_5;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C00113F0);
  v3 = v8;
  if ( v8 < 0 )
  {
    v4 = 13;
    goto LABEL_11;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
         WdfDriverGlobals,
         0LL,
         &qword_1C0011918);
  v3 = v8;
  if ( v8 < 0 )
  {
    v4 = 14;
    goto LABEL_11;
  }
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_1C001192C = 0;
  qword_1C0011920 = WorkItem;
  qword_1C0011400 = (__int64)&qword_1C00113F8;
  qword_1C00113F8 = (__int64)&qword_1C00113F8;
  qword_1C0011410 = (__int64)&qword_1C0011408;
  qword_1C0011408 = (__int64)&qword_1C0011408;
  qword_1C0011420 = (__int64)&qword_1C0011418;
  qword_1C0011418 = (__int64)&qword_1C0011418;
  qword_1C0011430 = (__int64)&qword_1C0011428;
  qword_1C0011428 = (__int64)&qword_1C0011428;
  qword_1C0011440 = (__int64)&qword_1C0011438;
  qword_1C0011438 = (__int64)&qword_1C0011438;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowPepPerfStates",
    &v42);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_1C00113E0);
  GetRegistryQwordValue(v11, v10, &qword_1C00113D8);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v40);
  if ( v40 )
    byte_1C001192E = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v41);
  qword_1C0011798 = (__int64)RegisterKernelIdleStates;
  v12 = 0;
  dword_1C0011814 = 0;
  qword_1C00117A0 = (__int64)RegisterKernelPerfStates;
  byte_1C0011810 = v41 == 0;
  v13 = 0;
  qword_1C00117B0 = (__int64)RegisterKernelPerfFeedback;
  qword_1C00117B8 = (__int64)RegisterKernelLegacyPcc;
  qword_1C00117A8 = (__int64)RegisterKernelCap;
  qword_1C00117C0 = (__int64)RegisterKernelCpc;
  qword_1C00117C8 = (__int64)RegisterKernelPepPerf;
  qword_1C00117D0 = (__int64)GetNtProcessorNumber;
  qword_1C00117D8 = (__int64)RegisterKernelPackage;
  qword_1C00117E0 = (__int64)&PPM_ETW_SUMMARY;
  EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2;
  qword_1C00117F0 = (__int64)&PPM_ETW_IDLE_STATES_ERROR;
  qword_1C00117F8 = (__int64)&PPM_ETW_PERF_STATES_ERROR;
  qword_1C0011800 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR;
  qword_1C0011808 = (__int64)&PPM_ETW_LONG_CAP_INFO;
  if ( !HviIsAnyHypervisorPresent() )
    goto LABEL_29;
  v12 = 1;
  if ( HviIsHypervisorMicrosoftCompatible() )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    InputBuffer = __PAIR64__(_RBX, _RAX);
    v49 = __PAIR64__(_RDX, _RCX);
  }
  else
  {
    InputBuffer = 0LL;
  }
  if ( (InputBuffer & 0x100000000000LL) == 0 )
  {
    qword_1C0011798 = (__int64)RegisterGuestIdleStates;
    qword_1C00117A0 = (__int64)RegisterNoop;
    qword_1C00117B0 = (__int64)RegisterNoop;
    qword_1C00117B8 = (__int64)RegisterNoop;
    qword_1C00117A8 = (__int64)RegisterNoop;
    qword_1C00117C0 = (__int64)RegisterNoop;
    qword_1C00117C8 = (__int64)RegisterNoop;
    qword_1C00117D8 = (__int64)RegisterNoop;
LABEL_29:
    v19 = 1280LL;
    v13 = v12;
    if ( !v12 && (int)HalPrivateDispatchTable[143]((__int64)&v43) >= 0 )
    {
      v6 = v43;
      if ( v43 != 1 )
      {
        v7 = 15;
        v36 = 1;
        goto LABEL_8;
      }
      v13 = 0;
      qword_1C00116C0 = v44;
      qword_1C00116C8 = v45;
      qword_1C00116D0 = v46;
      qword_1C00116D8 = v47;
    }
    goto LABEL_34;
  }
  GetHvPpmCapabilities(&v39, &v38, 0LL);
  if ( v38 )
  {
    dword_1C0011814 = 2;
    qword_1C00117A0 = (__int64)RegisterHvPerfStatesCounters;
    qword_1C00117B0 = (__int64)RegisterHvPerfFeedbackCounters;
    qword_1C00117B8 = (__int64)RegisterHvLegacyPccCounters;
    qword_1C00117C0 = (__int64)RegisterHvCpcCounters;
  }
  else
  {
    v19 = 1280LL;
    if ( !v39 )
      goto LABEL_34;
    dword_1C0011814 = 1;
    qword_1C00117A0 = (__int64)RegisterHvPerfStates;
    qword_1C00117B8 = (__int64)RegisterHvLegacyPcc;
    qword_1C00117B0 = (__int64)RegisterNoop;
    qword_1C00117C8 = (__int64)RegisterNoop;
    qword_1C00117E0 = (__int64)&PPM_ETW_SUMMARY_HV;
    EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2_HV;
    qword_1C00117F8 = (__int64)&PPM_ETW_PERF_STATES_ERROR_HV;
    qword_1C0011800 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_HV;
    qword_1C00117A8 = (__int64)RegisterHvCap;
    qword_1C0011808 = (__int64)&PPM_ETW_LONG_CAP_INFO_HV;
    qword_1C00117C0 = (__int64)RegisterHvCpc;
  }
  v19 = 512LL;
  qword_1C0011798 = (__int64)RegisterHvIdleStates;
  qword_1C00117F0 = (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV;
  qword_1C00117D0 = (__int64)GetLpIndex;
  qword_1C00117D8 = (__int64)RegisterHvPackage;
LABEL_34:
  v20 = 8 * v19;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v20, 0x72637250u);
  DevExts = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v3 = -1073741670;
    v4 = 16;
    v35 = -1073741670;
    goto LABEL_4;
  }
  memset(PoolWithTag, 0, v20);
  v2 = ProcLibRegisterEtw();
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 17;
    goto LABEL_3;
  }
  v49 = 0LL;
  InputBuffer = (unsigned __int64)ProcessSystemSleepStateNotify;
  v2 = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, 0x10u, 0LL, 0);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 18;
    goto LABEL_3;
  }
  v2 = CollectAcpiBiosInfo(v23, v22, v24, v25);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 19;
    goto LABEL_3;
  }
  v37 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v37);
  v26 = v37 == 2;
  v37 = 1;
  v27 = 0;
  if ( v26 )
    v27 = 1879048192;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v37);
  if ( v37 == 2 )
    v27 |= 2u;
  v37 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v37);
  if ( v37 == 2 )
    v27 |= 0x3300000u;
  v37 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v37);
  if ( v37 == 2 )
    v27 |= 0x80000000;
  v28 = v27;
  v29 = 0x180099900377LL;
  qword_1C00113D8 = v27 | (unsigned __int64)qword_1C00113D8;
  dword_1C0011878 = v27;
  dword_1C00114F0 = 1;
  dword_1C00114F4 = 240;
  if ( v42 )
    v29 = 0x181099D00377LL;
  Globals[0] = v29 | 0x10400000400LL;
  if ( (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    Globals[0] |= 0x2000000000uLL;
    PopulateEnergyEstimationParameters();
  }
  InputBuffer = 0LL;
  inited = InitDriver((__int64)&dword_1C00114F0, &InputBuffer);
  v3 = inited;
  if ( inited < 0 )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x14u,
      (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
      inited);
    memset(&dword_1C00114F0, 0, 0xF0uLL);
    return v3;
  }
  v31 = InputBuffer | Globals[0];
  Globals[0] |= InputBuffer;
  if ( dword_1C0011814 == 1 )
  {
    qword_1C0011518 = 0LL;
    v32 = 0xFFFFDFFCF7FFFEFFuLL;
    qword_1C0011530 = 0LL;
    qword_1C0011538 = 0LL;
    qword_1C0011540 = 0LL;
    qword_1C0011548 = 0LL;
    qword_1C0011550 = 0LL;
    qword_1C0011560 = 0LL;
    qword_1C0011568 = 0LL;
    qword_1C0011570 = 0LL;
    qword_1C0011578 = 0LL;
    qword_1C00115A0 = 0LL;
    qword_1C00115A8 = 0LL;
LABEL_60:
    Globals[0] = v32 & v31;
    goto LABEL_61;
  }
  if ( dword_1C0011814 == 2 )
  {
    v32 = 0xFFFFFFFCFFFFFEFFuLL;
    goto LABEL_60;
  }
LABEL_61:
  if ( v13 )
  {
    qword_1C00115A0 = 0LL;
    qword_1C00115A8 = 0LL;
  }
  v33 = "Enabled";
  if ( !dword_1C0011814 )
    v33 = "Disabled";
  WPP_RECORDER_SF_s(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    2u,
    0x15u,
    (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
    v33);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      2u,
      0x16u,
      (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      2u,
      0x17u,
      (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids);
  DisplayPPMFlags(Globals[0], 5u);
  if ( (Globals[0] & v28 & 0x7F077) != 0 )
    ProcLibTraceIdleStatesErrata(0);
  if ( (Globals[0] & v28 & 0x70000000) != 0 )
    ProcLibTracePerfStatesErrata(0);
  if ( (Globals[0] & v28 & 0x3300000) != 0 )
    ProcLibTraceThrottleStatesErrata(0);
  if ( (Globals[0] & (unsigned int)v28 & 0x80000000) != 0 )
    ProcLibTracePccErrata(0);
  if ( qword_1C00113D8 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x18u,
        (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids);
    DisplayPPMFlags(~qword_1C00113D8, 5u);
    Globals[0] &= ~qword_1C00113D8;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    2u,
    0x19u,
    (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids);
  DisplayPPMFlags(Globals[0], 4u);
  if ( qword_1C0011530 && (dword_1C00113E0 & 0x70000000) != 0 )
    qword_1C0011530 = 0LL;
  return v3;
}
