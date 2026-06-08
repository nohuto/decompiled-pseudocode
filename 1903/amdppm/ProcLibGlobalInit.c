/*
 * XREFs of ProcLibGlobalInit @ 0x1C0035560
 * Callers:
 *     DriverEntry @ 0x1C003526C (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000138C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0003010 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_s @ 0x1C000413C (WPP_RECORDER_SF_s.c)
 *     DisplayPPMFlags @ 0x1C0006E2C (DisplayPPMFlags.c)
 *     HviIsAnyHypervisorPresent @ 0x1C000DDBC (HviIsAnyHypervisorPresent.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1C000DE18 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000E300 (memset.c)
 *     GetRegistryDwordValue @ 0x1C001C5F0 (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C001C694 (GetRegistryQwordValue.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C001CF70 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C001CF9C (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C001CFC8 (ProcLibTraceThrottleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C001CFF4 (ProcLibTracePccErrata.c)
 *     GetHvPpmCapabilities @ 0x1C00201C8 (GetHvPpmCapabilities.c)
 *     InitDriver @ 0x1C0035008 (InitDriver.c)
 *     ProcLibRegisterEtw @ 0x1C00351A8 (ProcLibRegisterEtw.c)
 *     CollectAcpiBiosInfo @ 0x1C0035408 (CollectAcpiBiosInfo.c)
 *     PopulateEnergyEstimationParameters @ 0x1C00360F0 (PopulateEnergyEstimationParameters.c)
 */

__int64 __fastcall ProcLibGlobalInit(PDEVICE_OBJECT DeviceObject)
{
  int v2; // eax
  unsigned int v3; // edi
  unsigned __int16 v4; // r9
  unsigned int v5; // r8d
  int v6; // eax
  unsigned __int16 v7; // r9
  int v8; // eax
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // di
  char v13; // si
  unsigned __int64 v14; // rbx
  __int64 v20; // rbx
  SIZE_T v21; // rbx
  _LIST_ENTRY *PoolWithTag; // rax
  __int64 v23; // rdx
  _DWORD *v24; // rcx
  const CHAR *v25; // r8
  const CHAR *v26; // r9
  bool v27; // zf
  unsigned int v28; // ebx
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
  _QWORD v43[5]; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 InputBuffer; // [rsp+80h] [rbp+17h] BYREF
  unsigned __int64 v45; // [rsp+88h] [rbp+1Fh]

  memset(v43, 0, sizeof(v43));
  v2 = ZwPowerInformation(ProcessorStateHandler, 0LL, 0, &dword_1C0013620, 0x110u);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v6 = dword_1C0013620;
    if ( dword_1C0013620 != 62 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741735;
      v7 = 11;
      v36 = 62;
LABEL_10:
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        v7,
        (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
        v6,
        v36);
      return (unsigned int)-1073741735;
    }
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
           WdfDriverGlobals,
           0LL,
           &qword_1C0013418);
    v3 = v8;
    if ( v8 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v3;
      v4 = 12;
      goto LABEL_15;
    }
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2496))(
           WdfDriverGlobals,
           0LL,
           &qword_1C0013420);
    v3 = v8;
    if ( v8 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v3;
      v4 = 13;
      goto LABEL_15;
    }
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 2520))(
           WdfDriverGlobals,
           0LL,
           &qword_1C0013958);
    v3 = v8;
    if ( v8 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v3;
      v4 = 14;
LABEL_15:
      v35 = v8;
      v5 = 4;
      goto LABEL_6;
    }
    WorkItem = IoAllocateWorkItem(DeviceObject);
    word_1C001396C = 0;
    qword_1C0013960 = WorkItem;
    qword_1C0013430 = (__int64)&qword_1C0013428;
    qword_1C0013428 = (__int64)&qword_1C0013428;
    qword_1C0013440 = (__int64)&qword_1C0013438;
    qword_1C0013438 = (__int64)&qword_1C0013438;
    qword_1C0013450 = (__int64)&qword_1C0013448;
    qword_1C0013448 = (__int64)&qword_1C0013448;
    qword_1C0013460 = (__int64)&qword_1C0013458;
    qword_1C0013458 = (__int64)&qword_1C0013458;
    qword_1C0013470 = (__int64)&qword_1C0013468;
    qword_1C0013468 = (__int64)&qword_1C0013468;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"AllowPepPerfStates",
      &v42);
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"Overrides",
      &dword_1C0013410);
    GetRegistryQwordValue(v11, v10, &qword_1C0013408);
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"DisableAsserts",
      &v40);
    if ( v40 )
      byte_1C001396E = 1;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
      (__int64)L"PerfEnablePackageIdle",
      &v41);
    qword_1C00137D8 = (__int64)RegisterKernelIdleStates;
    v12 = 0;
    byte_1C0013BE0 = 0;
    qword_1C00137E0 = (__int64)RegisterKernelPerfStates;
    byte_1C0013850 = v41 == 0;
    dword_1C0013854 = 0;
    qword_1C00137F0 = (__int64)RegisterKernelPerfFeedback;
    v13 = 0;
    qword_1C00137F8 = (__int64)RegisterKernelLegacyPcc;
    qword_1C00137E8 = (__int64)RegisterKernelCap;
    qword_1C0013800 = (__int64)RegisterKernelCpc;
    qword_1C0013808 = (__int64)RegisterKernelPepPerf;
    qword_1C0013810 = (__int64)GetNtProcessorNumber;
    qword_1C0013818 = (__int64)RegisterKernelPackage;
    qword_1C0013820 = (__int64)&PPM_ETW_SUMMARY;
    EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2;
    qword_1C0013830 = (__int64)&PPM_ETW_IDLE_STATES_ERROR;
    qword_1C0013838 = (__int64)&PPM_ETW_PERF_STATES_ERROR;
    qword_1C0013840 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR;
    qword_1C0013848 = (__int64)&PPM_ETW_LONG_CAP_INFO;
    if ( HviIsAnyHypervisorPresent() )
    {
      v14 = 0LL;
      byte_1C0013BE0 = 1;
      InputBuffer = 0LL;
      v12 = 1;
      v45 = 0LL;
      if ( HviIsHypervisorMicrosoftCompatible() )
      {
        _RAX = 1073741827LL;
        __asm { cpuid }
        InputBuffer = __PAIR64__(_RBX, _RAX);
        v14 = __PAIR64__(_RBX, _RAX);
        v45 = __PAIR64__(_RDX, _RCX);
      }
      if ( (v14 & 0x100000000000LL) != 0 )
      {
        GetHvPpmCapabilities(&v39, &v38, 0LL);
        if ( v38 )
        {
          dword_1C0013854 = 2;
          qword_1C00137E0 = (__int64)RegisterHvPerfStatesCounters;
          qword_1C00137F0 = (__int64)RegisterHvPerfFeedbackCounters;
          qword_1C00137F8 = (__int64)RegisterHvLegacyPccCounters;
          qword_1C0013800 = (__int64)RegisterHvCpcCounters;
        }
        else
        {
          v20 = 1280LL;
          if ( !v39 )
            goto LABEL_40;
          dword_1C0013854 = 1;
          qword_1C00137E0 = (__int64)RegisterHvPerfStates;
          qword_1C00137F8 = (__int64)RegisterHvLegacyPcc;
          qword_1C00137F0 = (__int64)RegisterNoop;
          qword_1C0013808 = (__int64)RegisterNoop;
          qword_1C0013820 = (__int64)&PPM_ETW_SUMMARY_HV;
          EventDescriptor = (PCEVENT_DESCRIPTOR)&PPM_ETW_SUMMARY2_HV;
          qword_1C0013838 = (__int64)&PPM_ETW_PERF_STATES_ERROR_HV;
          qword_1C0013840 = (__int64)&PPM_ETW_THROTTLE_STATES_ERROR_HV;
          qword_1C00137E8 = (__int64)RegisterHvCap;
          qword_1C0013848 = (__int64)&PPM_ETW_LONG_CAP_INFO_HV;
          qword_1C0013800 = (__int64)RegisterHvCpc;
        }
        v20 = 512LL;
        qword_1C00137D8 = (__int64)RegisterHvIdleStates;
        qword_1C0013830 = (__int64)&PPM_ETW_IDLE_STATES_ERROR_HV;
        qword_1C0013810 = (__int64)GetLpIndex;
        qword_1C0013818 = (__int64)RegisterHvPackage;
LABEL_40:
        v21 = 8 * v20;
        PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v21, 0x72637250u);
        WPP_MAIN_CB.Queue.ListEntry.Blink = PoolWithTag;
        if ( !PoolWithTag )
        {
          v3 = -1073741670;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return v3;
          v4 = 16;
          v35 = -1073741670;
          goto LABEL_5;
        }
        memset(PoolWithTag, 0, v21);
        v2 = ProcLibRegisterEtw();
        v3 = v2;
        if ( v2 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return v3;
          v4 = 17;
          goto LABEL_4;
        }
        v45 = 0LL;
        InputBuffer = (unsigned __int64)ProcessSystemSleepStateNotify;
        v2 = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, 0x10u, 0LL, 0);
        v3 = v2;
        if ( v2 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return v3;
          v4 = 18;
          goto LABEL_4;
        }
        v2 = CollectAcpiBiosInfo(v24, v23, v25, v26);
        v3 = v2;
        if ( v2 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return v3;
          v4 = 19;
          goto LABEL_4;
        }
        v37 = 1;
        EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PSTATES, &v37);
        v27 = v37 == 2;
        v37 = 1;
        v28 = 0;
        if ( v27 )
          v28 = 1879048192;
        EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_ACPI1_CSTATE_C2, &v37);
        if ( v37 == 2 )
          v28 |= 2u;
        v37 = 1;
        EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_TSTATES, &v37);
        if ( v37 == 2 )
          v28 |= 0x3300000u;
        v37 = 1;
        EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v37);
        if ( v37 == 2 )
          v28 |= 0x80000000;
        v29 = 0x180099900377LL;
        qword_1C0013408 = v28 | (unsigned __int64)qword_1C0013408;
        dword_1C00138B8 = v28;
        dword_1C0013520 = 1;
        dword_1C0013524 = 256;
        if ( v42 )
          v29 = 0x181099D00377LL;
        Globals[0] = v29 | 0x10400000400LL;
        if ( (unsigned __int8)PoEnergyEstimationEnabled() )
        {
          Globals[0] |= 0x2000000000uLL;
          PopulateEnergyEstimationParameters();
        }
        InputBuffer = 0LL;
        inited = InitDriver((__int64)&dword_1C0013520, &InputBuffer);
        v3 = inited;
        if ( inited < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              3u,
              0x14u,
              (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
              inited);
          memset(&dword_1C0013520, 0, 0x100uLL);
          return v3;
        }
        v31 = InputBuffer | Globals[0];
        Globals[0] |= InputBuffer;
        if ( dword_1C0013854 == 1 )
        {
          qword_1C0013548 = 0LL;
          v32 = 0xFFFFDFFCF7FFFEFFuLL;
          qword_1C0013560 = 0LL;
          qword_1C0013568 = 0LL;
          qword_1C0013570 = 0LL;
          qword_1C0013590 = 0LL;
          byte_1C0013598 = 0;
          qword_1C0013578 = 0LL;
          qword_1C0013580 = 0LL;
          qword_1C00135A0 = 0LL;
          qword_1C00135A8 = 0LL;
          qword_1C00135B0 = 0LL;
          qword_1C00135B8 = 0LL;
          qword_1C00135E0 = 0LL;
          qword_1C00135E8 = 0LL;
        }
        else
        {
          if ( dword_1C0013854 != 2 )
          {
LABEL_73:
            if ( v13 )
            {
              qword_1C00135E0 = 0LL;
              qword_1C00135E8 = 0LL;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v33 = "Enabled";
              if ( !dword_1C0013854 )
                v33 = "Disabled";
              WPP_RECORDER_SF_s(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                2u,
                0x15u,
                (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
                v33);
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
            if ( (v28 & Globals[0] & 0x7F077LL) != 0 )
              ProcLibTraceIdleStatesErrata(0);
            if ( (v28 & Globals[0] & 0x70000000) != 0 )
              ProcLibTracePerfStatesErrata(0);
            if ( (v28 & Globals[0] & 0x3300000) != 0 )
              ProcLibTraceThrottleStatesErrata(0);
            if ( (v28 & Globals[0] & 0x80000000) != 0 )
              ProcLibTracePccErrata(0);
            if ( qword_1C0013408 )
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
              DisplayPPMFlags(~qword_1C0013408, 5u);
              Globals[0] &= ~qword_1C0013408;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                2u,
                0x19u,
                (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids);
            DisplayPPMFlags(Globals[0], 4u);
            if ( qword_1C0013560 && (dword_1C0013410 & 0x70000000) != 0 )
              qword_1C0013560 = 0LL;
            return v3;
          }
          v32 = 0xFFFFFFFCFFFFFEFFuLL;
        }
        Globals[0] = v32 & v31;
        goto LABEL_73;
      }
      qword_1C00137D8 = (__int64)RegisterGuestIdleStates;
      qword_1C00137E0 = (__int64)RegisterNoop;
      qword_1C00137F0 = (__int64)RegisterNoop;
      qword_1C00137F8 = (__int64)RegisterNoop;
      qword_1C00137E8 = (__int64)RegisterNoop;
      qword_1C0013800 = (__int64)RegisterNoop;
      qword_1C0013808 = (__int64)RegisterNoop;
      qword_1C0013818 = (__int64)RegisterNoop;
    }
    v20 = 1280LL;
    v13 = v12;
    if ( !v12 && (int)HalPrivateDispatchTable[143]((__int64)v43) >= 0 )
    {
      v6 = v43[0];
      if ( LODWORD(v43[0]) != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741735;
        v7 = 15;
        v36 = 1;
        goto LABEL_10;
      }
      v13 = 0;
      qword_1C0013700 = v43[1];
      qword_1C0013708 = v43[2];
      qword_1C0013710 = v43[3];
      qword_1C0013718 = v43[4];
    }
    goto LABEL_40;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 10;
LABEL_4:
    v35 = v2;
LABEL_5:
    v5 = 3;
LABEL_6:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v5,
      v4,
      (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
      v35);
  }
  return v3;
}
