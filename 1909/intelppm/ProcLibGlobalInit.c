/*
 * XREFs of ProcLibGlobalInit @ 0x1C00396F4
 * Callers:
 *     DriverEntry @ 0x1C003903C (DriverEntry.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1C0001C4C (HviIsAnyHypervisorPresent.c)
 *     InitDevExts @ 0x1C0001C98 (InitDevExts.c)
 *     DisplayPPMFlags @ 0x1C0002738 (DisplayPPMFlags.c)
 *     WPP_RECORDER_SF_s @ 0x1C0003520 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00036CC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00046C0 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00093AC (WPP_RECORDER_SF_dd.c)
 *     GetRegistryQwordValue @ 0x1C001FB3C (GetRegistryQwordValue.c)
 *     GetRegistryDwordValue @ 0x1C001FC10 (GetRegistryDwordValue.c)
 *     TraceLoggingRegisterEx @ 0x1C0024A7C (TraceLoggingRegisterEx.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C002AEA8 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C002AF28 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C002B428 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C002C2CC (ProcLibTraceThrottleStatesErrata.c)
 *     GetHvPpmCapabilities @ 0x1C002E8AC (GetHvPpmCapabilities.c)
 *     CollectAcpiBiosInfo @ 0x1C0039178 (CollectAcpiBiosInfo.c)
 *     InitDriver @ 0x1C0039268 (InitDriver.c)
 *     PopulateEnergyEstimationModel @ 0x1C003953C (PopulateEnergyEstimationModel.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  int inited; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  char v10; // si
  ETWENABLECALLBACK *v11; // rdx
  const struct _TlgProvider_t *v12; // rcx
  void *v13; // r8
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  const CHAR *v16; // r8
  const CHAR *v17; // r9
  bool v18; // zf
  unsigned int v19; // ebx
  __int64 v20; // r14
  __int64 v21; // rax
  int *v22; // rdi
  unsigned __int8 i; // bl
  int v24; // eax
  __int64 v25; // rax
  const char *v26; // rax
  unsigned __int16 v28; // r9
  unsigned int v29; // r8d
  unsigned __int16 v30; // r9
  unsigned __int64 v31; // r10
  void *v42; // rax
  unsigned __int64 v43; // rdx
  unsigned int v44; // [rsp+28h] [rbp-51h]
  int v45; // [rsp+30h] [rbp-49h]
  int v46; // [rsp+40h] [rbp-39h] BYREF
  bool v47; // [rsp+44h] [rbp-35h] BYREF
  bool v48; // [rsp+45h] [rbp-34h] BYREF
  int v49; // [rsp+48h] [rbp-31h] BYREF
  int v50; // [rsp+4Ch] [rbp-2Dh] BYREF
  int v51; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v52[5]; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int64 v53; // [rsp+80h] [rbp+7h] BYREF
  unsigned __int64 v54; // [rsp+88h] [rbp+Fh]
  __int64 (__fastcall *InputBuffer)(int, __int64, char); // [rsp+90h] [rbp+17h] BYREF
  unsigned __int64 v56; // [rsp+98h] [rbp+1Fh]

  memset(v52, 0, sizeof(v52));
  inited = ZwPowerInformation(ProcessorStateHandler, 0LL, 0, &dword_1C001B5A0, 0x110u);
  v3 = inited;
  if ( inited < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v28 = 10;
    goto LABEL_60;
  }
  v4 = dword_1C001B5A0;
  if ( dword_1C001B5A0 != 62 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741735;
    v30 = 11;
    v45 = 62;
LABEL_66:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v30,
      (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
      v4,
      v45);
    return (unsigned int)-1073741735;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C001B398);
  v3 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v28 = 12;
    goto LABEL_62;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         0LL,
         &qword_1C001B3A0);
  v3 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v28 = 13;
    goto LABEL_62;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
         WdfDriverGlobals,
         0LL,
         &qword_1C001B8D8);
  v3 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v28 = 14;
LABEL_62:
    v44 = v5;
    v29 = 4;
    goto LABEL_63;
  }
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_1C001B8EC = 0;
  qword_1C001B8E0 = WorkItem;
  qword_1C001B3B0 = (__int64)&qword_1C001B3A8;
  qword_1C001B3A8 = (__int64)&qword_1C001B3A8;
  qword_1C001B3C0 = (__int64)&qword_1C001B3B8;
  qword_1C001B3B8 = (__int64)&qword_1C001B3B8;
  qword_1C001B3D0 = (__int64)&qword_1C001B3C8;
  qword_1C001B3C8 = (__int64)&qword_1C001B3C8;
  qword_1C001B3E0 = (__int64)&qword_1C001B3D8;
  qword_1C001B3D8 = (__int64)&qword_1C001B3D8;
  qword_1C001B3F0 = (__int64)&qword_1C001B3E8;
  qword_1C001B3E8 = (__int64)&qword_1C001B3E8;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowPepPerfStates",
    &v51);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_1C001B390);
  GetRegistryQwordValue(v8, v7, &qword_1C001B388);
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v49);
  if ( v49 )
    byte_1C001B8EE = 1;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v50);
  qword_1C001B758 = (__int64)RegisterKernelIdleStates;
  v9 = 1280;
  byte_1C001BB60 = 0;
  qword_1C001B760 = (__int64)RegisterKernelPerfStates;
  byte_1C001B7D0 = v50 == 0;
  dword_1C001B7D4 = 0;
  qword_1C001B770 = (__int64)RegisterKernelPerfFeedback;
  v10 = 0;
  qword_1C001B778 = (__int64)RegisterKernelLegacyPcc;
  qword_1C001B768 = (__int64)RegisterKernelCap;
  qword_1C001B780 = (__int64)RegisterKernelCpc;
  qword_1C001B788 = (__int64)RegisterKernelPepPerf;
  qword_1C001B790 = (__int64)GetNtProcessorNumber;
  qword_1C001B798 = (__int64)RegisterKernelPackage;
  qword_1C001B7A0 = (__int64)&PPM_ETW_SUMMARY;
  EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2;
  qword_1C001B7B0 = (__int64)&PPM_ETW_IDLE_STATES_ERROR;
  qword_1C001B7B8 = (__int64)&PPM_ETW_PERF_STATES_ERROR;
  qword_1C001B7C0 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR;
  qword_1C001B7C8 = (__int64)&PPM_ETW_LONG_CAP_INFO;
  if ( HviIsAnyHypervisorPresent() )
  {
    byte_1C001BB60 = 1;
    InputBuffer = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    v56 = 0LL;
    if ( HviIsAnyHypervisorPresent() )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      HIDWORD(InputBuffer) = _RBX;
      v56 = __PAIR64__(_RDX, _RCX);
    }
    else
    {
      LODWORD(_RAX) = (_DWORD)InputBuffer;
    }
    if ( (_DWORD)_RAX == 824407624 )
    {
      _RAX = 1073741827LL;
      __asm { cpuid }
      v53 = __PAIR64__(_RBX, _RAX);
      v31 = __PAIR64__(_RBX, _RAX);
      v54 = __PAIR64__(_RDX, _RCX);
    }
    if ( (v31 & 0x100000000000LL) != 0 )
    {
      GetHvPpmCapabilities(&v48, &v47, 0LL);
      if ( v47 )
      {
        dword_1C001B7D4 = 2;
        qword_1C001B760 = (__int64)RegisterHvPerfStatesCounters;
        qword_1C001B770 = (__int64)RegisterHvPerfFeedbackCounters;
        qword_1C001B778 = (__int64)RegisterHvLegacyPccCounters;
        qword_1C001B780 = (__int64)RegisterHvCpcCounters;
      }
      else
      {
        if ( !v48 )
          goto LABEL_10;
        dword_1C001B7D4 = 1;
        qword_1C001B760 = (__int64)RegisterHvPerfStates;
        qword_1C001B778 = (__int64)RegisterHvLegacyPcc;
        qword_1C001B770 = (__int64)RegisterNoop;
        qword_1C001B788 = (__int64)RegisterNoop;
        qword_1C001B7A0 = (__int64)&PPM_ETW_SUMMARY_HV;
        EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2_HV;
        qword_1C001B7B8 = (__int64)&PPM_ETW_PERF_STATES_ERROR_HV;
        qword_1C001B7C0 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_HV;
        qword_1C001B768 = (__int64)RegisterHvCap;
        qword_1C001B7C8 = (__int64)&PPM_ETW_LONG_CAP_INFO_HV;
        qword_1C001B780 = (__int64)RegisterHvCpc;
      }
      v9 = 512;
      qword_1C001B758 = (__int64)RegisterHvIdleStates;
      qword_1C001B7B0 = (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV;
      qword_1C001B790 = (__int64)GetLpIndex;
      v42 = RegisterHvPackage;
    }
    else
    {
      v10 = 1;
      qword_1C001B758 = (__int64)RegisterGuestIdleStates;
      v42 = RegisterNoop;
      qword_1C001B760 = (__int64)RegisterNoop;
      qword_1C001B770 = (__int64)RegisterNoop;
      qword_1C001B778 = (__int64)RegisterNoop;
      qword_1C001B768 = (__int64)RegisterNoop;
      qword_1C001B780 = (__int64)RegisterNoop;
      qword_1C001B788 = (__int64)RegisterNoop;
    }
    qword_1C001B798 = (__int64)v42;
  }
  else
  {
    if ( (int)HalPrivateDispatchTable[143]((__int64)v52) < 0 )
      goto LABEL_10;
    v4 = v52[0];
    if ( LODWORD(v52[0]) != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741735;
      v30 = 15;
      v45 = 1;
      goto LABEL_66;
    }
    qword_1C001B680 = v52[1];
    qword_1C001B688 = v52[2];
    qword_1C001B690 = v52[3];
    qword_1C001B698 = v52[4];
  }
LABEL_10:
  inited = InitDevExts(v9);
  v3 = inited;
  if ( inited < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v28 = 16;
    goto LABEL_60;
  }
  v3 = EtwRegister(
         &PPM_ETW_PROVIDER,
         (PETWENABLECALLBACK)ProcLibTraceControlCallback,
         0LL,
         (PREGHANDLE)&WPP_MAIN_CB.Queue.ListEntry.Blink);
  if ( (v3 & 0x80000000) == 0 )
  {
    TraceLoggingRegisterEx(v12, v11, v13);
    ProcLibEtwRegistered = 1;
    v3 = 0;
  }
  if ( (v3 & 0x80000000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v28 = 17;
    v44 = v3;
    goto LABEL_61;
  }
  v56 = 0LL;
  InputBuffer = ProcessSystemSleepStateNotify;
  inited = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, 0x10u, 0LL, 0);
  v3 = inited;
  if ( inited < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v28 = 18;
    goto LABEL_60;
  }
  inited = CollectAcpiBiosInfo(v15, v14, v16, v17);
  v3 = inited;
  if ( inited < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    v28 = 19;
LABEL_60:
    v44 = inited;
LABEL_61:
    v29 = 3;
LABEL_63:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v29,
      v28,
      (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
      v44);
    return v3;
  }
  v46 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v46);
  v18 = v46 == 2;
  v46 = 1;
  v19 = 0;
  if ( v18 )
    v19 = 1879048192;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v46);
  if ( v46 == 2 )
    v19 |= 2u;
  v46 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v46);
  if ( v46 == 2 )
    v19 |= 0x3300000u;
  v46 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v46);
  if ( v46 == 2 )
    v19 |= 0x80000000;
  v20 = v19;
  v21 = 0x180099900377LL;
  qword_1C001B388 = v19 | (unsigned __int64)qword_1C001B388;
  dword_1C001B838 = v19;
  dword_1C001B4A0 = 1;
  dword_1C001B4A4 = 256;
  if ( v51 )
    v21 = 0x181099D00377LL;
  Globals[0] = v21 | 0x10400000400LL;
  if ( (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    v22 = dword_1C001B948;
    Globals[0] |= 0x2000000000uLL;
    for ( i = 0; i < 2u; ++i )
    {
      PopulateEnergyEstimationModel(i, v22);
      v22 += 64;
    }
  }
  v53 = 0LL;
  v24 = InitDriver((__int64)&dword_1C001B4A0, &v53);
  v3 = v24;
  if ( v24 >= 0 )
  {
    v25 = v53 | Globals[0];
    Globals[0] |= v53;
    if ( dword_1C001B7D4 == 1 )
    {
      qword_1C001B4C8 = 0LL;
      v43 = 0xFFFFDFFCF7FFFEFFuLL;
      qword_1C001B4E0 = 0LL;
      qword_1C001B4E8 = 0LL;
      qword_1C001B4F0 = 0LL;
      qword_1C001B510 = 0LL;
      byte_1C001B518 = 0;
      qword_1C001B4F8 = 0LL;
      qword_1C001B500 = 0LL;
      qword_1C001B520 = 0LL;
      qword_1C001B528 = 0LL;
      qword_1C001B530 = 0LL;
      qword_1C001B538 = 0LL;
      qword_1C001B560 = 0LL;
      qword_1C001B568 = 0LL;
    }
    else
    {
      if ( dword_1C001B7D4 != 2 )
      {
LABEL_32:
        if ( v10 )
        {
          qword_1C001B560 = 0LL;
          qword_1C001B568 = 0LL;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v26 = "Disabled";
          if ( dword_1C001B7D4 )
            v26 = "Enabled";
          WPP_RECORDER_SF_s(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            2u,
            0x15u,
            (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
            v26);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x16u,
                (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                5u,
                2u,
                0x17u,
                (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids);
            }
          }
        }
        DisplayPPMFlags(Globals[0], 5u);
        if ( (v20 & Globals[0] & 0x7F077) != 0 )
          ProcLibTraceIdleStatesErrata(0);
        if ( (v20 & Globals[0] & 0x70000000) != 0 )
          ProcLibTracePerfStatesErrata(0);
        if ( (v20 & Globals[0] & 0x3300000) != 0 )
          ProcLibTraceThrottleStatesErrata(0);
        if ( (v20 & Globals[0] & 0x80000000LL) != 0 )
          ProcLibTracePccErrata(0);
        if ( qword_1C001B388 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              5u,
              2u,
              0x18u,
              (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids);
          }
          DisplayPPMFlags(~qword_1C001B388, 5u);
          Globals[0] &= ~qword_1C001B388;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            2u,
            0x19u,
            (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids);
        DisplayPPMFlags(Globals[0], 4u);
        if ( qword_1C001B4E0 && (dword_1C001B390 & 0x70000000) != 0 )
          qword_1C001B4E0 = 0LL;
        return v3;
      }
      v43 = 0xFFFFFFFCFFFFFEFFuLL;
    }
    Globals[0] = v43 & v25;
    goto LABEL_32;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x14u,
      (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
      v24);
  memset(&dword_1C001B4A0, 0, 0x100uLL);
  return v3;
}
