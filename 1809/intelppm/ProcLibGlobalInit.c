/*
 * XREFs of ProcLibGlobalInit @ 0x1C00361EC
 * Callers:
 *     DriverEntry @ 0x1C0037274 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     DisplayPPMFlags @ 0x1C000222C (DisplayPPMFlags.c)
 *     WPP_RECORDER_SF_s @ 0x1C0002D8C (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002E78 (WPP_RECORDER_SF_.c)
 *     RegisterSystemSleepStateNotifyHandler @ 0x1C00032E0 (RegisterSystemSleepStateNotifyHandler.c)
 *     InitDevExts @ 0x1C0003328 (InitDevExts.c)
 *     HviIsAnyHypervisorPresent @ 0x1C0003388 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004FC0 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0008E5C (WPP_RECORDER_SF_dd.c)
 *     GetRegistryDwordValue @ 0x1C00233F4 (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C0023498 (GetRegistryQwordValue.c)
 *     TraceLoggingRegisterEx @ 0x1C0024BE4 (TraceLoggingRegisterEx.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C0028EE8 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C0028F68 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C0029458 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C002A2E4 (ProcLibTraceThrottleStatesErrata.c)
 *     GetHvPpmCapabilities @ 0x1C002C37C (GetHvPpmCapabilities.c)
 *     PopulateEnergyEstimationModel @ 0x1C0036040 (PopulateEnergyEstimationModel.c)
 *     InitDriver @ 0x1C0036E5C (InitDriver.c)
 *     CollectAcpiBiosInfo @ 0x1C0037184 (CollectAcpiBiosInfo.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  int inited; // eax
  NTSTATUS v3; // ebx
  unsigned __int16 v4; // r9
  unsigned int v5; // r8d
  int v6; // eax
  unsigned __int16 v7; // r9
  int v8; // eax
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // edi
  char v13; // r14
  void *v24; // rax
  ETWENABLECALLBACK *v25; // rdx
  const struct _TlgProvider_t *v26; // rcx
  void *v27; // r8
  bool v28; // zf
  unsigned int v29; // ebx
  __int64 v30; // rsi
  __int64 v31; // rax
  int *v32; // rdi
  unsigned __int8 i; // bl
  int v34; // eax
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  const char *v37; // rax
  int v39; // [rsp+28h] [rbp-41h]
  int v40; // [rsp+30h] [rbp-39h]
  int v41; // [rsp+40h] [rbp-29h] BYREF
  bool v42; // [rsp+44h] [rbp-25h] BYREF
  bool v43; // [rsp+45h] [rbp-24h] BYREF
  int v44; // [rsp+48h] [rbp-21h] BYREF
  int v45; // [rsp+4Ch] [rbp-1Dh] BYREF
  int v46; // [rsp+50h] [rbp-19h] BYREF
  int v47; // [rsp+58h] [rbp-11h] BYREF
  __int64 v48; // [rsp+60h] [rbp-9h]
  __int64 v49; // [rsp+68h] [rbp-1h]
  __int64 v50; // [rsp+70h] [rbp+7h]
  __int64 v51; // [rsp+78h] [rbp+Fh]
  unsigned __int64 v52; // [rsp+80h] [rbp+17h] BYREF
  int v53; // [rsp+88h] [rbp+1Fh]
  int v54; // [rsp+8Ch] [rbp+23h]

  inited = ZwPowerInformation(ProcessorStateHandler, 0LL, 0, &dword_1C001A590, 0x110u);
  v3 = inited;
  if ( inited < 0 )
  {
    v4 = 10;
LABEL_3:
    v39 = inited;
LABEL_4:
    v5 = 3;
LABEL_5:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v5,
      v4,
      (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
      v39);
    return (unsigned int)v3;
  }
  v6 = dword_1C001A590;
  if ( dword_1C001A590 != 60 )
  {
    v7 = 11;
    v40 = 60;
LABEL_8:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v7,
      (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
      v6,
      v40);
    return (unsigned int)-1073741735;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C001A398);
  v3 = v8;
  if ( v8 < 0 )
  {
    v4 = 12;
LABEL_11:
    v39 = v8;
    v5 = 4;
    goto LABEL_5;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C001A3A0);
  v3 = v8;
  if ( v8 < 0 )
  {
    v4 = 13;
    goto LABEL_11;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
         WdfDriverGlobals,
         0LL,
         &qword_1C001A8C8);
  v3 = v8;
  if ( v8 < 0 )
  {
    v4 = 14;
    goto LABEL_11;
  }
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_1C001A8DC = 0;
  qword_1C001A8D0 = WorkItem;
  qword_1C001A3B0 = (__int64)&qword_1C001A3A8;
  qword_1C001A3A8 = (__int64)&qword_1C001A3A8;
  qword_1C001A3C0 = (__int64)&qword_1C001A3B8;
  qword_1C001A3B8 = (__int64)&qword_1C001A3B8;
  qword_1C001A3D0 = (__int64)&qword_1C001A3C8;
  qword_1C001A3C8 = (__int64)&qword_1C001A3C8;
  qword_1C001A3E0 = (__int64)&qword_1C001A3D8;
  qword_1C001A3D8 = (__int64)&qword_1C001A3D8;
  qword_1C001A3F0 = (__int64)&qword_1C001A3E8;
  qword_1C001A3E8 = (__int64)&qword_1C001A3E8;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowPepPerfStates",
    &v46);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_1C001A390);
  GetRegistryQwordValue(v11, v10, &qword_1C001A388);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v44);
  if ( v44 )
    byte_1C001A8DE = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v45);
  qword_1C001A748 = (__int64)RegisterKernelIdleStates;
  v12 = 1280;
  dword_1C001A7C4 = 0;
  qword_1C001A750 = (__int64)RegisterKernelPerfStates;
  byte_1C001A7C0 = v45 == 0;
  v13 = 0;
  qword_1C001A760 = (__int64)RegisterKernelPerfFeedback;
  qword_1C001A768 = (__int64)RegisterKernelLegacyPcc;
  qword_1C001A758 = (__int64)RegisterKernelCap;
  qword_1C001A770 = (__int64)RegisterKernelCpc;
  qword_1C001A778 = (__int64)RegisterKernelPepPerf;
  qword_1C001A780 = (__int64)GetNtProcessorNumber;
  qword_1C001A788 = (__int64)RegisterKernelPackage;
  qword_1C001A790 = (__int64)&PPM_ETW_SUMMARY;
  EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2;
  qword_1C001A7A0 = (__int64)&PPM_ETW_IDLE_STATES_ERROR;
  qword_1C001A7A8 = (__int64)&PPM_ETW_PERF_STATES_ERROR;
  qword_1C001A7B0 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR;
  qword_1C001A7B8 = (__int64)&PPM_ETW_LONG_CAP_INFO;
  if ( HviIsAnyHypervisorPresent() )
  {
    if ( HviIsAnyHypervisorPresent() )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      HIDWORD(v52) = _RBX;
      v53 = _RCX;
      v54 = _RDX;
    }
    else
    {
      LODWORD(_RAX) = 0;
    }
    if ( (_DWORD)_RAX == 824407624 )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      v52 = __PAIR64__(_RBX, _RAX);
      v53 = _RCX;
      v54 = _RDX;
    }
    else
    {
      v52 = 0LL;
    }
    if ( (v52 & 0x100000000000LL) != 0 )
    {
      GetHvPpmCapabilities(&v43, &v42, 0LL);
      if ( v42 )
      {
        dword_1C001A7C4 = 2;
        qword_1C001A750 = (__int64)RegisterHvPerfStatesCounters;
        qword_1C001A760 = (__int64)RegisterHvPerfFeedbackCounters;
        qword_1C001A768 = (__int64)RegisterHvLegacyPccCounters;
        qword_1C001A770 = (__int64)RegisterHvCpcCounters;
      }
      else
      {
        if ( !v43 )
          goto LABEL_37;
        dword_1C001A7C4 = 1;
        qword_1C001A750 = (__int64)RegisterHvPerfStates;
        qword_1C001A768 = (__int64)RegisterHvLegacyPcc;
        qword_1C001A760 = (__int64)RegisterNoop;
        qword_1C001A778 = (__int64)RegisterNoop;
        qword_1C001A790 = (__int64)&PPM_ETW_SUMMARY_HV;
        EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2_HV;
        qword_1C001A7A8 = (__int64)&PPM_ETW_PERF_STATES_ERROR_HV;
        qword_1C001A7B0 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_HV;
        qword_1C001A758 = (__int64)RegisterHvCap;
        qword_1C001A7B8 = (__int64)&PPM_ETW_LONG_CAP_INFO_HV;
        qword_1C001A770 = (__int64)RegisterHvCpc;
      }
      v12 = 512;
      qword_1C001A748 = (__int64)RegisterHvIdleStates;
      qword_1C001A7A0 = (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV;
      qword_1C001A780 = (__int64)GetLpIndex;
      v24 = RegisterHvPackage;
    }
    else
    {
      v13 = 1;
      qword_1C001A748 = (__int64)RegisterGuestIdleStates;
      v24 = RegisterNoop;
      qword_1C001A750 = (__int64)RegisterNoop;
      qword_1C001A760 = (__int64)RegisterNoop;
      qword_1C001A768 = (__int64)RegisterNoop;
      qword_1C001A758 = (__int64)RegisterNoop;
      qword_1C001A770 = (__int64)RegisterNoop;
      qword_1C001A778 = (__int64)RegisterNoop;
    }
    qword_1C001A788 = (__int64)v24;
  }
  else if ( (int)HalPrivateDispatchTable[143]((__int64)&v47) >= 0 )
  {
    v6 = v47;
    if ( v47 != 1 )
    {
      v7 = 15;
      v40 = 1;
      goto LABEL_8;
    }
    qword_1C001A670 = v48;
    qword_1C001A678 = v49;
    qword_1C001A680 = v50;
    qword_1C001A688 = v51;
  }
LABEL_37:
  inited = InitDevExts(v12);
  v3 = inited;
  if ( inited < 0 )
  {
    v4 = 16;
    goto LABEL_3;
  }
  v3 = EtwRegister(
         &PPM_ETW_PROVIDER,
         (PETWENABLECALLBACK)ProcLibTraceControlCallback,
         0LL,
         (PREGHANDLE)&WPP_MAIN_CB.Queue.ListEntry.Blink);
  if ( v3 >= 0 )
  {
    TraceLoggingRegisterEx(v26, v25, v27);
    ProcLibEtwRegistered = 1;
    v3 = 0;
  }
  if ( v3 < 0 )
  {
    v4 = 17;
    v39 = v3;
    goto LABEL_4;
  }
  inited = RegisterSystemSleepStateNotifyHandler();
  v3 = inited;
  if ( inited < 0 )
  {
    v4 = 18;
    goto LABEL_3;
  }
  inited = CollectAcpiBiosInfo();
  v3 = inited;
  if ( inited < 0 )
  {
    v4 = 19;
    goto LABEL_3;
  }
  v41 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v41);
  v28 = v41 == 2;
  v41 = 1;
  v29 = 0;
  if ( v28 )
    v29 = 1879048192;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v41);
  if ( v41 == 2 )
    v29 |= 2u;
  v41 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v41);
  if ( v41 == 2 )
    v29 |= 0x3300000u;
  v41 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v41);
  if ( v41 == 2 )
    v29 |= 0x80000000;
  v30 = v29;
  v31 = 0x180099900377LL;
  qword_1C001A388 = v29 | (unsigned __int64)qword_1C001A388;
  dword_1C001A828 = v29;
  dword_1C001A4A0 = 1;
  dword_1C001A4A4 = 240;
  if ( v46 )
    v31 = 0x181099D00377LL;
  Globals[0] = v31 | 0x10400000400LL;
  if ( (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    v32 = dword_1C001A938;
    Globals[0] |= 0x2000000000uLL;
    for ( i = 0; i < 2u; ++i )
    {
      PopulateEnergyEstimationModel(i, v32);
      v32 += 64;
    }
  }
  v52 = 0LL;
  v34 = InitDriver(&dword_1C001A4A0, &v52);
  v3 = v34;
  if ( v34 < 0 )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x14u,
      (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
      v34);
    memset(&dword_1C001A4A0, 0, 0xF0uLL);
    return (unsigned int)v3;
  }
  v35 = v52 | Globals[0];
  Globals[0] |= v52;
  if ( dword_1C001A7C4 == 1 )
  {
    qword_1C001A4C8 = 0LL;
    v36 = 0xFFFFDFFCF7FFFEFFuLL;
    qword_1C001A4E0 = 0LL;
    qword_1C001A4E8 = 0LL;
    qword_1C001A4F0 = 0LL;
    qword_1C001A4F8 = 0LL;
    qword_1C001A500 = 0LL;
    qword_1C001A510 = 0LL;
    qword_1C001A518 = 0LL;
    qword_1C001A520 = 0LL;
    qword_1C001A528 = 0LL;
    qword_1C001A550 = 0LL;
    qword_1C001A558 = 0LL;
LABEL_66:
    Globals[0] = v36 & v35;
    goto LABEL_67;
  }
  if ( dword_1C001A7C4 == 2 )
  {
    v36 = 0xFFFFFFFCFFFFFEFFuLL;
    goto LABEL_66;
  }
LABEL_67:
  if ( v13 )
  {
    qword_1C001A550 = 0LL;
    qword_1C001A558 = 0LL;
  }
  v37 = "Disabled";
  if ( dword_1C001A7C4 )
    v37 = "Enabled";
  WPP_RECORDER_SF_s(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    2u,
    0x15u,
    (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
    v37);
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
  if ( (Globals[0] & v30 & 0x7F077) != 0 )
    ProcLibTraceIdleStatesErrata(0);
  if ( (Globals[0] & v30 & 0x70000000) != 0 )
    ProcLibTracePerfStatesErrata(0);
  if ( (Globals[0] & v30 & 0x3300000) != 0 )
    ProcLibTraceThrottleStatesErrata(0);
  if ( (Globals[0] & (unsigned int)v30 & 0x80000000) != 0 )
    ProcLibTracePccErrata(0);
  if ( qword_1C001A388 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        2u,
        0x18u,
        (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids);
    DisplayPPMFlags(~qword_1C001A388, 5u);
    Globals[0] &= ~qword_1C001A388;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    2u,
    0x19u,
    (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids);
  DisplayPPMFlags(Globals[0], 4u);
  if ( qword_1C001A4E0 && (dword_1C001A390 & 0x70000000) != 0 )
    qword_1C001A4E0 = 0LL;
  return (unsigned int)v3;
}
