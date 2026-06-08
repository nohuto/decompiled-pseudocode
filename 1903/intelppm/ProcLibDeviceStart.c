/*
 * XREFs of ProcLibDeviceStart @ 0x1C0020CA8
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C001FCC0 (EvtDevicePrepareHardware.c)
 * Callees:
 *     AcquireBiosPpmControl @ 0x1C000196C (AcquireBiosPpmControl.c)
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00036CC (WPP_RECORDER_SF_.c)
 *     AcpiEval_OSC @ 0x1C00037A4 (AcpiEval_OSC.c)
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C000805C (ProcLibTraceProcessorSpecificEvent.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1C000CF28 (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     AcpiEval_PPC @ 0x1C001F35C (AcpiEval_PPC.c)
 *     InitAcpiCpc @ 0x1C002005C (InitAcpiCpc.c)
 *     InitAcpiProcessorDomains @ 0x1C0020148 (InitAcpiProcessorDomains.c)
 *     InitAcpiCStates @ 0x1C00203AC (InitAcpiCStates.c)
 *     InitAcpiPerfStates @ 0x1C0020570 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C002070C (InitAcpiThrottleStates.c)
 *     QueryPepCapabilites @ 0x1C00208BC (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x1C0020A28 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C0020AA4 (InitAcpiLpiStates.c)
 *     ProcLibTraceSummary2 @ 0x1C0022B5C (ProcLibTraceSummary2.c)
 *     RegisterXsdDomain @ 0x1C0022E00 (RegisterXsdDomain.c)
 *     ProcLibCapChange @ 0x1C0022FA4 (ProcLibCapChange.c)
 *     AcquireAcpiInterfaces @ 0x1C0023048 (AcquireAcpiInterfaces.c)
 *     InitPep @ 0x1C0023104 (InitPep.c)
 *     EnumerateControlMethods @ 0x1C0023350 (EnumerateControlMethods.c)
 *     ValidatePerfDomainSymmetry @ 0x1C00237EC (ValidatePerfDomainSymmetry.c)
 *     InitializeEnergyEstimation @ 0x1C0024390 (InitializeEnergyEstimation.c)
 *     AcpiEval_PDC @ 0x1C0030630 (AcpiEval_PDC.c)
 *     AcpiEval_TPC @ 0x1C003073C (AcpiEval_TPC.c)
 *     ReleaseAcpiInterfaces @ 0x1C0031D7C (ReleaseAcpiInterfaces.c)
 *     InitPepIdleStates @ 0x1C0035E1C (InitPepIdleStates.c)
 *     InitPepPerfStates @ 0x1C0037784 (InitPepPerfStates.c)
 */

__int64 __fastcall ProcLibDeviceStart(__int64 a1)
{
  __int64 v1; // rdx
  int (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD); // rax
  int v4; // eax
  int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // rax
  int v8; // eax
  const wchar_t *v9; // rax
  PIO_WORKITEM WorkItem; // rax
  __int16 v11; // r8
  int v12; // r13d
  int v13; // ebx
  int inited; // eax
  __int64 v15; // rax
  int v16; // eax
  int PepCapabilites; // eax
  int v18; // eax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  char v28; // al
  int v29; // ebx
  int v30; // eax
  unsigned int v31; // edi
  int v32; // eax
  int v33; // eax
  unsigned int v34; // ebx
  char v35; // al
  int v36; // r9d
  unsigned __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v40; // rax
  void (__fastcall *v41)(__int64); // rax
  unsigned __int16 v42; // r9
  unsigned __int8 v43; // dl
  unsigned int v44; // r8d
  int v45; // eax
  int v46; // ecx
  __int64 v47; // rax
  int v48; // eax
  unsigned __int16 v49; // r9
  int v50; // eax
  int Type; // [rsp+28h] [rbp-E0h]
  ULONG Size[2]; // [rsp+30h] [rbp-D8h]
  ULONG Sizea[2]; // [rsp+30h] [rbp-D8h]
  ULONG Sizeb[2]; // [rsp+30h] [rbp-D8h]
  int *v55; // [rsp+88h] [rbp-80h] BYREF
  int v56; // [rsp+90h] [rbp-78h]
  __int64 v57; // [rsp+98h] [rbp-70h] BYREF
  const DEVPROPKEY *v58; // [rsp+A0h] [rbp-68h]
  __int64 v59; // [rsp+A8h] [rbp-60h]
  _BYTE v60[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v61; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v62[3]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v63; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int64 v64; // [rsp+E0h] [rbp-28h]
  struct _GROUP_AFFINITY Affinity; // [rsp+E8h] [rbp-20h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+F8h] [rbp-10h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v63 = 0LL;
  v64 = 0LL;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  *(_QWORD *)(a1 + 248) = Globals;
  *(_QWORD *)(a1 + 264) = Globals;
  *(_QWORD *)(a1 + 256) = 0LL;
  v62[1] = &v63;
  v62[0] = 1LL;
  v62[2] = 16LL;
  v3 = *(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488);
  v56 = 0;
  if ( v3(WdfDriverGlobals, v1, 0LL, 2703744LL, 0LL, v62, 0LL, 0LL) < 0 )
  {
    v64 = 0xFFFFFFFF00000000uLL;
    v63 = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x1Bu,
        (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids);
    *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFFCFFFF9uLL;
  }
  else if ( HIDWORD(v63) )
  {
    *(_DWORD *)(a1 + 188) = HIDWORD(v63);
    *(_BYTE *)(a1 + 185) = v64;
    *(_BYTE *)(a1 + 184) = 1;
    *(_WORD *)(a1 + 186) = 0x2000;
    *(_DWORD *)(a1 + 192) = 0;
  }
  *(_DWORD *)(a1 + 48) = HIDWORD(v64);
  *(_DWORD *)(a1 + 52) = v63;
  v4 = ((__int64 (__fastcall *)(__int64))qword_1C001B790)(a1);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 56) == -1 )
    {
      if ( (Globals & 0x200000000000LL) != 0 )
      {
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 264) &= 0xFFFFFFCFFFFFFFFFuLL;
        *(_BYTE *)(a1 + 78) = 1;
      }
    }
    else
    {
      v6 = IoSetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 8), &PROCESSOR_NUMBER_PKEY, 0, 0, 7u, 4u, (PVOID)(a1 + 56));
      if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizea[0] = v6;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          4u,
          0x1Du,
          (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
          *(_QWORD *)Sizea);
      }
      KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(a1 + 56));
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v56 = 1;
    }
    v58 = &DEVPKEY_Device_BiosDeviceName;
    v57 = 24LL;
    v59 = 0LL;
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *, __int64, _QWORD, __int64 *, _BYTE *))(WdfFunctions_01015 + 3472))(
           WdfDriverGlobals,
           v7,
           &v57,
           512LL,
           0LL,
           &v61,
           v60);
    if ( v8 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v8;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x1Eu,
          (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
          *(_QWORD *)Sizeb);
      }
      v9 = L"Unknown";
    }
    else
    {
      v9 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                              WdfDriverGlobals,
                              v61,
                              0LL);
    }
    *(_QWORD *)(a1 + 64) = v9;
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
    *(_QWORD *)(a1 + 1152) = WorkItem;
    *(_BYTE *)(a1 + 1161) = 1;
    if ( !WorkItem )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          4u,
          0x1Fu,
          (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids);
      v5 = -1073741670;
      goto LABEL_82;
    }
    v55 = 0LL;
    if ( qword_1C001B4B8 )
    {
      v12 = AcpiEval_OSC(a1, (_DWORD *)qword_1C001B4B8, v11, &v55);
      if ( v12 >= 0 )
      {
        v13 = *v55;
        if ( (*v55 & 0xE) == 0 )
        {
          *(_QWORD *)(a1 + 88) = v55;
          goto LABEL_15;
        }
        if ( (v13 & 2) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x20u,
            (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids);
        if ( (v13 & 4) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDDDDDDDDD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            *(unsigned __int8 *)(qword_1C001B4B8 + 13),
            *(unsigned __int8 *)(qword_1C001B4B8 + 12),
            *(unsigned __int8 *)(qword_1C001B4B8 + 11),
            Type);
        if ( (v13 & 8) == 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_15:
          if ( v12 >= 0 )
            goto LABEL_16;
          goto LABEL_136;
        }
        v42 = 34;
        v43 = 2;
        v44 = 1;
        Sizeb[0] = *(_DWORD *)(qword_1C001B4B8 + 16);
LABEL_140:
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v43,
          v44,
          v42,
          (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
          *(_QWORD *)Sizeb);
        goto LABEL_15;
      }
      if ( v12 != -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_15;
        v42 = 36;
        Sizeb[0] = v12;
        v44 = 3;
        v43 = 3;
        goto LABEL_140;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0x23u,
          (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids);
    }
LABEL_136:
    if ( qword_1C001B4B0 )
      AcpiEval_PDC(a1, qword_1C001B4B0, (unsigned __int16)word_1C001B4C0);
LABEL_16:
    EnumerateControlMethods(a1, a1 + 1088);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      Sizeb[0] = *(_DWORD *)(a1 + 1088);
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        3u,
        0x25u,
        (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
        *(_QWORD *)Sizeb);
    }
    if ( (*(_QWORD *)(a1 + 264) & 0x111300000F00LL) != 0 )
    {
      inited = InitPep(a1);
      if ( inited < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = inited;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x26u,
            (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
            *(_QWORD *)Sizeb);
        }
        *(_QWORD *)(a1 + 264) &= 0xFFFFEEECFFFFF0FFuLL;
      }
    }
    v15 = *(_QWORD *)(a1 + 264);
    if ( (v15 & 0xE0000000000LL) != 0 )
    {
      v16 = InitAcpiLpiStates(a1);
      if ( v16 >= 0 )
      {
        *(_QWORD *)(a1 + 264) &= 0xFFFFFFFCFFF80C88uLL;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v16;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x27u,
          (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
          *(_QWORD *)Sizeb);
      }
      v15 = *(_QWORD *)(a1 + 264);
    }
    if ( (v15 & 0x111300000F00LL) != 0 )
    {
      PepCapabilites = QueryPepCapabilites(a1);
      if ( PepCapabilites < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = PepCapabilites;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x28u,
            (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
            *(_QWORD *)Sizeb);
        }
        *(_QWORD *)(a1 + 264) &= 0xFFFFEEECFFFFF0FFuLL;
      }
    }
    if ( (*(_DWORD *)(a1 + 264) & 0x7F077) != 0 )
    {
      v18 = InitAcpiCStates(a1);
      if ( v18 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v18;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x29u,
          (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
          *(_QWORD *)Sizeb);
      }
    }
    v19 = *(_QWORD *)(a1 + 264);
    if ( (v19 & 0x7F077) == 0 )
    {
      v19 &= 0xFFFFFFFFFFFFFCFFuLL;
      *(_QWORD *)(a1 + 264) = v19;
    }
    if ( (v19 & 0x300000300LL) != 0 )
    {
      v45 = InitPepIdleStates(a1);
      if ( v45 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v45;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x2Au,
            (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
            *(_QWORD *)Sizeb);
        }
        *(_QWORD *)(a1 + 264) &= 0xFFFFFFFCFFFFFCFFuLL;
      }
    }
    v20 = *(_QWORD *)(a1 + 264);
    if ( (v20 & 0x1000000000LL) != 0 )
    {
      v46 = InitPepPerfStates(a1);
      v47 = *(_QWORD *)(a1 + 264);
      if ( v46 >= 0 )
      {
        v20 = v47 & 0xFFFFFFFF04CFFFFFuLL;
        *(_QWORD *)(a1 + 264) = v20;
      }
      else
      {
        v20 = v47 & 0xFFFFFFEFFFFFFFFFuLL;
        *(_QWORD *)(a1 + 264) = v20;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v46;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x2Bu,
            (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
            *(_QWORD *)Sizeb);
          v20 = *(_QWORD *)(a1 + 264);
        }
      }
    }
    if ( (v20 & 0x8000000) != 0 )
    {
      v21 = InitAcpiCpc(a1);
      v22 = *(_QWORD *)(a1 + 264);
      if ( v21 >= 0 )
      {
        v20 = v22 & 0xFFFFFFFF0CCFFFFFuLL;
        *(_QWORD *)(a1 + 264) = v20;
      }
      else
      {
        v20 = v22 & 0xFFFFFFFFF7FFFFFFuLL;
        *(_QWORD *)(a1 + 264) = v20;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v21;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x2Cu,
            (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
            *(_QWORD *)Sizeb);
          v20 = *(_QWORD *)(a1 + 264);
        }
      }
    }
    if ( (v20 & 0x80000000) != 0 )
    {
      v23 = InitAcpiLegacyPcc((_QWORD *)a1);
      v24 = *(_QWORD *)(a1 + 264);
      if ( v23 >= 0 )
      {
        v20 = v24 & 0xFFFFFFFF8CCFFFFFuLL;
        *(_QWORD *)(a1 + 264) = v20;
      }
      else
      {
        v20 = v24 & 0xFFFFFFFF7FFFFFFFuLL;
        *(_QWORD *)(a1 + 264) = v20;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v23;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x2Du,
            (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
            *(_QWORD *)Sizeb);
          v20 = *(_QWORD *)(a1 + 264);
        }
      }
    }
    if ( (v20 & 0x70000000) != 0 )
    {
      v25 = InitAcpiPerfStates(a1);
      if ( v25 < 0 )
      {
        *(_QWORD *)(a1 + 264) &= 0xFFFFFFFF8FFFFFFFuLL;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v25;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x2Eu,
            (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
            *(_QWORD *)Sizeb);
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 264) & 0x3300000) != 0 )
    {
      v26 = InitAcpiThrottleStates(a1);
      if ( v26 < 0 )
      {
        *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFCCFFFFFuLL;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v26;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x2Fu,
            (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
            *(_QWORD *)Sizeb);
        }
      }
    }
    if ( qword_1C001B4C8 )
    {
      v48 = qword_1C001B4C8(a1);
      v5 = v48;
      if ( v48 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_82;
        v49 = 48;
        Sizeb[0] = v48;
        goto LABEL_162;
      }
    }
    if ( dword_1C001B7D4 == 1 )
    {
LABEL_67:
      InitAcpiProcessorDomains(a1);
      if ( (*(_DWORD *)(a1 + 264) & 0x7B07F070) != 0 )
      {
        v5 = AcquireAcpiInterfaces(a1);
        if ( v5 < 0 )
        {
          ReleaseAcpiInterfaces(a1);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
LABEL_82:
            if ( v56 )
              KeRevertToUserGroupAffinityThread(&PreviousAffinity);
            goto LABEL_84;
          }
          v49 = 49;
          Sizeb[0] = v5;
LABEL_162:
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            v49,
            (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
            *(_QWORD *)Sizeb);
          goto LABEL_82;
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 208),
        0LL);
      v29 = ((__int64 (__fastcall *)(__int64))qword_1C001B758)(a1);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 208));
      if ( v29 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v29;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0x32u,
          (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
          *(_QWORD *)Sizeb);
      }
      v30 = *(_DWORD *)(a1 + 264);
      v31 = 0;
      LODWORD(v55) = 0;
      if ( (v30 & 0x70000000) != 0 )
      {
        v32 = AcpiEval_PPC(a1, (int *)&v55);
        if ( v32 < 0 )
        {
          if ( v32 == -1073741772 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                2u,
                0x33u,
                (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids);
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            Sizeb[0] = v32;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x34u,
              (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
              *(_QWORD *)Sizeb);
          }
        }
        else
        {
          v31 = (unsigned int)v55;
        }
      }
      v33 = *(_DWORD *)(a1 + 264);
      v34 = 0;
      LODWORD(v55) = 0;
      if ( (v33 & 0x3000000) != 0 )
      {
        v50 = AcpiEval_TPC(a1, &v55);
        if ( v50 >= 0 )
        {
          v34 = (unsigned int)v55;
        }
        else if ( v50 == -1073741772 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              2u,
              0x35u,
              (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids);
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v50;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x36u,
            (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
            *(_QWORD *)Sizeb);
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C001B398,
        0LL);
      ProcLibCapChange(a1, v31, v34, 100LL);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C001B398);
      if ( (*(_QWORD *)(a1 + 264) & 0x10FF300000LL) != 0 )
      {
        if ( *(_QWORD *)(a1 + 536) )
        {
          v35 = RegisterXsdDomain(a1);
          goto LABEL_77;
        }
        if ( !byte_1C001B7D0 )
        {
          v35 = 1;
LABEL_77:
          if ( !v35 )
            goto LABEL_78;
LABEL_97:
          if ( (int)ValidatePerfDomainSymmetry(a1) >= 0 )
          {
            v40 = *(_QWORD *)(a1 + 264);
            if ( (v40 & 0x1000000000LL) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C001B788)(a1);
            }
            else if ( (v40 & 0x8000000) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C001B780)(a1);
            }
            else if ( (v40 & 0x80000000) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C001B778)(a1);
            }
            else
            {
              v41 = (void (__fastcall *)(__int64))qword_1C001B760;
              if ( (*(_QWORD *)(a1 + 264) & 0x73300000LL) == 0 )
                v41 = (void (__fastcall *)(__int64))qword_1C001B770;
              v41(a1);
            }
          }
          goto LABEL_78;
        }
        if ( !(unsigned int)((__int64 (__fastcall *)(__int64))qword_1C001B798)(a1) )
          goto LABEL_97;
      }
LABEL_78:
      if ( (*(_QWORD *)(a1 + 264) & 0x2000000000LL) != 0 && ++dword_1C001BB48 == dword_1C001B394 )
        InitializeEnergyEstimation();
      AcquireBiosPpmControl(a1);
      v5 = 0;
      goto LABEL_82;
    }
    v27 = *(_QWORD *)(a1 + 264);
    if ( (v27 & 0x60000000) != 0 && *(_BYTE *)(a1 + 408) == 127 )
    {
      if ( (v27 & 0x20000000) != 0 )
      {
        *(_QWORD *)(a1 + 280) = qword_1C001B4E8;
        *(_QWORD *)(a1 + 312) = qword_1C001B510;
        *(_BYTE *)(a1 + 320) = byte_1C001B518;
        *(_QWORD *)(a1 + 296) = qword_1C001B4F8;
      }
      if ( (v27 & 0x40000000) == 0 )
        goto LABEL_58;
      v27 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 280) = SetPerfStateFFH;
    }
    else if ( *(_BYTE *)(a1 + 408) == 1 && (v27 & 0x10000000) != 0 )
    {
      *(_QWORD *)(a1 + 280) = SetPerfStateIO;
      v27 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 296) = SetPerfStateIOHidden;
    }
    else
    {
      v27 &= 0xFFFFFFFF8FFFFFFFuLL;
    }
    *(_QWORD *)(a1 + 264) = v27;
LABEL_58:
    if ( (v27 & 0x4000000) != 0 )
      *(_QWORD *)(a1 + 328) = qword_1C001B520;
    if ( (v27 & 0xA8000000) != 0 )
    {
      *(_QWORD *)(a1 + 344) = qword_1C001B530;
      *(_QWORD *)(a1 + 352) = qword_1C001B538;
    }
    v28 = *(_BYTE *)(a1 + 464);
    if ( (v27 & 0x2000000) != 0 && v28 == 127 )
    {
      *(_QWORD *)(a1 + 288) = qword_1C001B4F0;
      *(_QWORD *)(a1 + 304) = qword_1C001B500;
    }
    else if ( v28 == 1 && (v27 & 0x1100000) != 0 )
    {
      *(_QWORD *)(a1 + 288) = SetPerfStateIO;
      *(_QWORD *)(a1 + 304) = SetPerfStateIOHidden;
    }
    else
    {
      *(_QWORD *)(a1 + 264) = v27 & 0xFFFFFFFFFCCFFFFFuLL;
    }
    if ( qword_1C001B528 )
      *(_QWORD *)(a1 + 336) = qword_1C001B528;
    goto LABEL_67;
  }
  *(_QWORD *)(a1 + 264) = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    Size[0] = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x1Cu,
      (__int64)&WPP_d2c23616b8ad3f999ff1e196a592e3b6_Traceguids,
      *(_QWORD *)Size);
  }
  if ( dword_1C001B7D4 == 1 )
    v5 = 0;
LABEL_84:
  v36 = *(_DWORD *)(a1 + 256);
  v37 = *(_QWORD *)(a1 + 264);
  if ( (v36 & 0x7F077 & v37) != (v36 & 0x7F077) )
  {
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C001B7B0, 0, 0LL);
    v36 = *(_DWORD *)(a1 + 256);
    v37 = *(_QWORD *)(a1 + 264);
  }
  v38 = v36 & 0x40000000;
  if ( (v37 & 0x40000000) == 0 )
    v38 = v36 & 0x70000000;
  if ( ((unsigned int)v37 & (unsigned int)v38) != v38 )
  {
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C001B7B8, 0, 0LL);
    v36 = *(_DWORD *)(a1 + 256);
    v37 = *(_QWORD *)(a1 + 264);
  }
  if ( ((unsigned int)v37 & v36 & 0x3300000) != (unsigned __int64)(v36 & 0x3300000) )
  {
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C001B7C0, 0, 0LL);
    v36 = *(_DWORD *)(a1 + 256);
    v37 = *(_QWORD *)(a1 + 264);
  }
  if ( ((unsigned int)v37 & v36 & 0x80000000) != (unsigned __int64)(v36 & 0x80000000) )
  {
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_PCC_ERROR, 0, 0LL);
    v36 = *(_DWORD *)(a1 + 256);
    v37 = *(_QWORD *)(a1 + 264);
  }
  if ( ((unsigned int)v37 & v36 & 0x8000000) != (unsigned __int64)(v36 & 0x8000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_CPC_ERROR, 0, 0LL);
  ProcLibTraceSummary2(a1, 0LL);
  return (unsigned int)v5;
}
