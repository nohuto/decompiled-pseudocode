/*
 * XREFs of ProcLibDeviceStart @ 0x1C0027484
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C001C2F0 (EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     AcpiEval_OSC @ 0x1C00069C0 (AcpiEval_OSC.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1C00081B8 (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     AcquireBiosPpmControl @ 0x1C00085E0 (AcquireBiosPpmControl.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C000931C (ProcLibTraceProcessorSpecificEvent.c)
 *     __security_check_cookie @ 0x1C000CA20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     InitAcpiPerfStates @ 0x1C00209E4 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C0020D1C (InitAcpiThrottleStates.c)
 *     InitAcpiProcessorDomains @ 0x1C0021B5C (InitAcpiProcessorDomains.c)
 *     RegisterXsdDomain @ 0x1C0021D98 (RegisterXsdDomain.c)
 *     InitAcpiCpc @ 0x1C0022250 (InitAcpiCpc.c)
 *     InitAcpiCStates @ 0x1C0022CC4 (InitAcpiCStates.c)
 *     AcpiEval_PDC @ 0x1C0023634 (AcpiEval_PDC.c)
 *     AcpiEval_PPC @ 0x1C002478C (AcpiEval_PPC.c)
 *     AcpiEval_TPC @ 0x1C0024BAC (AcpiEval_TPC.c)
 *     AcquireAcpiInterfaces @ 0x1C00268A0 (AcquireAcpiInterfaces.c)
 *     EnumerateControlMethods @ 0x1C002706C (EnumerateControlMethods.c)
 *     ProcLibCapChange @ 0x1C0028588 (ProcLibCapChange.c)
 *     ProcLibTraceSummary2 @ 0x1C0028AFC (ProcLibTraceSummary2.c)
 *     InitPep @ 0x1C002B58C (InitPep.c)
 *     QueryPepCapabilites @ 0x1C002B810 (QueryPepCapabilites.c)
 *     InitPepPerfStates @ 0x1C002BD0C (InitPepPerfStates.c)
 *     InitPepIdleStates @ 0x1C002C6F8 (InitPepIdleStates.c)
 *     InitAcpiLegacyPcc @ 0x1C002DFA0 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C002E1E8 (InitAcpiLpiStates.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002FA1C (ValidatePerfDomainSymmetry.c)
 *     InitializeEnergyEstimation @ 0x1C0030844 (InitializeEnergyEstimation.c)
 */

__int64 __fastcall ProcLibDeviceStart(__int64 a1)
{
  __int64 v1; // rdx
  int (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _DWORD *, _QWORD, _QWORD); // rax
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
  unsigned __int16 v14; // r9
  unsigned __int8 v15; // dl
  unsigned int v16; // r8d
  int inited; // eax
  __int64 v18; // rax
  int v19; // eax
  int PepCapabilites; // eax
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  unsigned __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  unsigned __int16 v34; // r9
  __int64 v35; // rcx
  char v36; // al
  void (__fastcall *v37)(_QWORD, _QWORD); // rax
  void (__fastcall *v38)(_QWORD); // rax
  int v39; // ebx
  int v40; // eax
  unsigned int v41; // edi
  int v42; // eax
  int v43; // eax
  unsigned int v44; // ebx
  int v45; // eax
  char v46; // al
  __int64 v47; // rax
  void (__fastcall *v48)(__int64); // rax
  int v49; // r9d
  unsigned __int64 v50; // r8
  __int64 v51; // rcx
  int Type; // [rsp+28h] [rbp-E0h]
  ULONG Size[2]; // [rsp+30h] [rbp-D8h]
  ULONG Sizea[2]; // [rsp+30h] [rbp-D8h]
  ULONG Sizeb[2]; // [rsp+30h] [rbp-D8h]
  int *v57; // [rsp+88h] [rbp-80h] BYREF
  int v58; // [rsp+90h] [rbp-78h]
  _DWORD v59[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v60; // [rsp+A0h] [rbp-68h]
  int v61; // [rsp+A8h] [rbp-60h]
  int v62; // [rsp+ACh] [rbp-5Ch]
  _BYTE v63[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v65[3]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v66; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int64 v67; // [rsp+E0h] [rbp-28h]
  struct _GROUP_AFFINITY Affinity; // [rsp+E8h] [rbp-20h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+F8h] [rbp-10h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v66 = 0LL;
  v67 = 0LL;
  *(_QWORD *)(a1 + 248) = Globals;
  *(_QWORD *)(a1 + 264) = Globals;
  v59[1] = 0;
  v62 = 0;
  *(_QWORD *)(a1 + 256) = 0LL;
  v60 = &v66;
  v59[0] = 1;
  v61 = 16;
  v3 = *(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _DWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488);
  v58 = 0;
  if ( v3(WdfDriverGlobals, v1, 0LL, 2703744LL, 0LL, v59, 0LL, 0LL) >= 0 )
  {
    if ( HIDWORD(v66) )
    {
      *(_DWORD *)(a1 + 188) = HIDWORD(v66);
      *(_BYTE *)(a1 + 185) = v67;
      *(_BYTE *)(a1 + 184) = 1;
      *(_WORD *)(a1 + 186) = 0x2000;
      *(_DWORD *)(a1 + 192) = 0;
    }
  }
  else
  {
    v67 = 0xFFFFFFFF00000000uLL;
    v66 = 0LL;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x1Bu,
      (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids);
    *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFFCFFFF9uLL;
  }
  *(_DWORD *)(a1 + 48) = HIDWORD(v67);
  *(_DWORD *)(a1 + 52) = v66;
  v4 = ((__int64 (__fastcall *)(__int64))qword_1C00117D0)(a1);
  v5 = v4;
  if ( v4 < 0 )
  {
    *(_QWORD *)(a1 + 264) = 0LL;
    Size[0] = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x1Cu,
      (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
      *(_QWORD *)Size);
    if ( dword_1C0011814 == 1 )
      v5 = 0;
    goto LABEL_148;
  }
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
    if ( v6 < 0 )
    {
      Sizea[0] = v6;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        4u,
        0x1Du,
        (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
        *(_QWORD *)Sizea);
    }
    KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(a1 + 56));
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v58 = 1;
  }
  v65[2] = 0LL;
  v65[1] = &DEVPKEY_Device_BiosDeviceName;
  v65[0] = 24LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int64, _QWORD, __int64 *, _BYTE *))(WdfFunctions_01015 + 3472))(
         WdfDriverGlobals,
         v7,
         v65,
         512LL,
         0LL,
         &v64,
         v63);
  if ( v8 < 0 )
  {
    Sizeb[0] = v8;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x1Eu,
      (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
      *(_QWORD *)Sizeb);
    v9 = L"Unknown";
  }
  else
  {
    v9 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                            WdfDriverGlobals,
                            v64,
                            0LL);
  }
  *(_QWORD *)(a1 + 64) = v9;
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  *(_QWORD *)(a1 + 1136) = WorkItem;
  *(_BYTE *)(a1 + 1145) = 1;
  if ( !WorkItem )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x1Fu,
      (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids);
    v5 = -1073741670;
    goto LABEL_146;
  }
  v57 = 0LL;
  if ( qword_1C0011508 )
  {
    v12 = AcpiEval_OSC(a1, (_DWORD *)qword_1C0011508, v11, &v57);
    if ( v12 >= 0 )
    {
      v13 = *v57;
      if ( (*v57 & 0xE) == 0 )
      {
        *(_QWORD *)(a1 + 88) = v57;
        goto LABEL_33;
      }
      if ( (v13 & 2) != 0 )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x20u,
          (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids);
      if ( (v13 & 4) != 0 )
        WPP_RECORDER_SF_DDDDDDDDDDD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          *(unsigned __int8 *)(qword_1C0011508 + 13),
          *(unsigned __int8 *)(qword_1C0011508 + 12),
          *(unsigned __int8 *)(qword_1C0011508 + 11),
          Type);
      if ( (v13 & 8) == 0 )
      {
LABEL_33:
        if ( v12 >= 0 )
          goto LABEL_36;
        goto LABEL_34;
      }
      v14 = 34;
      v15 = 2;
      v16 = 1;
      Sizeb[0] = *(_DWORD *)(qword_1C0011508 + 16);
LABEL_32:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v15,
        v16,
        v14,
        (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
        *(_QWORD *)Sizeb);
      goto LABEL_33;
    }
    if ( v12 != -1073741772 )
    {
      v14 = 36;
      Sizeb[0] = v12;
      v16 = 3;
      v15 = 3;
      goto LABEL_32;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0x23u,
      (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids);
  }
LABEL_34:
  if ( qword_1C0011500 )
    AcpiEval_PDC(a1, (const void *)qword_1C0011500, word_1C0011510);
LABEL_36:
  EnumerateControlMethods(a1, (_DWORD *)(a1 + 1072));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    Sizeb[0] = *(_DWORD *)(a1 + 1072);
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      3u,
      0x25u,
      (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
      *(_QWORD *)Sizeb);
  }
  if ( (*(_QWORD *)(a1 + 264) & 0x111300000F00LL) != 0 )
  {
    inited = InitPep(a1);
    if ( inited < 0 )
    {
      Sizeb[0] = inited;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x26u,
        (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
        *(_QWORD *)Sizeb);
      *(_QWORD *)(a1 + 264) &= 0xFFFFEEECFFFFF0FFuLL;
    }
  }
  v18 = *(_QWORD *)(a1 + 264);
  if ( (v18 & 0xE0000000000LL) != 0 )
  {
    v19 = InitAcpiLpiStates(a1);
    if ( v19 >= 0 )
    {
      *(_QWORD *)(a1 + 264) &= 0xFFFFFFFCFFF80C88uLL;
    }
    else
    {
      Sizeb[0] = v19;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x27u,
        (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
        *(_QWORD *)Sizeb);
    }
    v18 = *(_QWORD *)(a1 + 264);
  }
  if ( (v18 & 0x111300000F00LL) != 0 )
  {
    PepCapabilites = QueryPepCapabilites(a1);
    if ( PepCapabilites < 0 )
    {
      Sizeb[0] = PepCapabilites;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x28u,
        (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
        *(_QWORD *)Sizeb);
      *(_QWORD *)(a1 + 264) &= 0xFFFFEEECFFFFF0FFuLL;
    }
  }
  if ( (*(_DWORD *)(a1 + 264) & 0x7F077) != 0 )
  {
    v21 = InitAcpiCStates(a1);
    if ( v21 < 0 )
    {
      Sizeb[0] = v21;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x29u,
        (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
        *(_QWORD *)Sizeb);
    }
  }
  v22 = *(_QWORD *)(a1 + 264);
  if ( (v22 & 0x7F077) == 0 )
  {
    v22 &= 0xFFFFFFFFFFFFFCFFuLL;
    *(_QWORD *)(a1 + 264) = v22;
  }
  if ( (v22 & 0x300000300LL) != 0 )
  {
    v23 = InitPepIdleStates(a1);
    if ( v23 < 0 )
    {
      Sizeb[0] = v23;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Au,
        (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
        *(_QWORD *)Sizeb);
      *(_QWORD *)(a1 + 264) &= 0xFFFFFFFCFFFFFCFFuLL;
    }
  }
  v24 = *(_QWORD *)(a1 + 264);
  if ( (v24 & 0x1000000000LL) != 0 )
  {
    v25 = InitPepPerfStates(a1);
    v26 = *(_QWORD *)(a1 + 264);
    if ( v25 >= 0 )
    {
      v24 = v26 & 0xFFFFFFFF04CFFFFFuLL;
      *(_QWORD *)(a1 + 264) = v24;
    }
    else
    {
      *(_QWORD *)(a1 + 264) = v26 & 0xFFFFFFEFFFFFFFFFuLL;
      Sizeb[0] = v25;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Bu,
        (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
        *(_QWORD *)Sizeb);
      v24 = *(_QWORD *)(a1 + 264);
    }
  }
  if ( (v24 & 0x8000000) != 0 )
  {
    v27 = InitAcpiCpc(a1);
    v28 = *(_QWORD *)(a1 + 264);
    if ( v27 >= 0 )
    {
      v24 = v28 & 0xFFFFFFFF0CCFFFFFuLL;
      *(_QWORD *)(a1 + 264) = v24;
    }
    else
    {
      *(_QWORD *)(a1 + 264) = v28 & 0xFFFFFFFFF7FFFFFFuLL;
      Sizeb[0] = v27;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Cu,
        (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
        *(_QWORD *)Sizeb);
      v24 = *(_QWORD *)(a1 + 264);
    }
  }
  if ( (v24 & 0x80000000) != 0 )
  {
    v29 = InitAcpiLegacyPcc(a1);
    v30 = *(_QWORD *)(a1 + 264);
    if ( v29 >= 0 )
    {
      v24 = v30 & 0xFFFFFFFF8CCFFFFFuLL;
      *(_QWORD *)(a1 + 264) = v24;
    }
    else
    {
      *(_QWORD *)(a1 + 264) = v30 & 0xFFFFFFFF7FFFFFFFuLL;
      Sizeb[0] = v29;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Du,
        (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
        *(_QWORD *)Sizeb);
      v24 = *(_QWORD *)(a1 + 264);
    }
  }
  if ( (v24 & 0x70000000) != 0 )
  {
    v31 = InitAcpiPerfStates(a1);
    if ( v31 < 0 )
    {
      *(_QWORD *)(a1 + 264) &= 0xFFFFFFFF8FFFFFFFuLL;
      Sizeb[0] = v31;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Eu,
        (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
        *(_QWORD *)Sizeb);
    }
  }
  if ( (*(_DWORD *)(a1 + 264) & 0x3300000) != 0 )
  {
    v32 = InitAcpiThrottleStates(a1);
    if ( v32 < 0 )
    {
      *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFCCFFFFFuLL;
      Sizeb[0] = v32;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Fu,
        (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
        *(_QWORD *)Sizeb);
    }
  }
  if ( !qword_1C0011518 || (v33 = qword_1C0011518(a1), v5 = v33, v33 >= 0) )
  {
    if ( dword_1C0011814 == 1 )
    {
LABEL_104:
      InitAcpiProcessorDomains(a1);
      if ( (*(_DWORD *)(a1 + 264) & 0x7B07F070) == 0 || (v5 = AcquireAcpiInterfaces(a1), v5 >= 0) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208),
          0LL);
        v39 = ((__int64 (__fastcall *)(__int64))qword_1C0011798)(a1);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208));
        if ( v39 < 0 )
        {
          Sizeb[0] = v39;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x32u,
            (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
            *(_QWORD *)Sizeb);
        }
        v40 = *(_DWORD *)(a1 + 264);
        v41 = 0;
        LODWORD(v57) = 0;
        if ( (v40 & 0x70000000) != 0 )
        {
          v42 = AcpiEval_PPC(a1, (int *)&v57);
          if ( v42 >= 0 )
          {
            v41 = (unsigned int)v57;
          }
          else if ( v42 == -1073741772 )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              2u,
              0x33u,
              (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids);
          }
          else
          {
            Sizeb[0] = v42;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x34u,
              (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
              *(_QWORD *)Sizeb);
          }
        }
        v43 = *(_DWORD *)(a1 + 264);
        v44 = 0;
        LODWORD(v57) = 0;
        if ( (v43 & 0x3000000) != 0 )
        {
          v45 = AcpiEval_TPC(a1, (unsigned int *)&v57);
          if ( v45 >= 0 )
          {
            v44 = (unsigned int)v57;
          }
          else if ( v45 == -1073741772 )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              2u,
              0x35u,
              (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids);
          }
          else
          {
            Sizeb[0] = v45;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x36u,
              (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
              *(_QWORD *)Sizeb);
          }
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C00113E8,
          0LL);
        ProcLibCapChange(a1, v41, v44, 100LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C00113E8);
        if ( (*(_QWORD *)(a1 + 264) & 0x10FF300000LL) != 0 )
        {
          if ( *(_QWORD *)(a1 + 520) )
            v46 = RegisterXsdDomain((_QWORD *)a1);
          else
            v46 = !byte_1C0011810 || (unsigned int)((__int64 (__fastcall *)(__int64))qword_1C00117D8)(a1) == 0;
          if ( v46 && (int)ValidatePerfDomainSymmetry(a1) >= 0 )
          {
            v47 = *(_QWORD *)(a1 + 264);
            if ( (v47 & 0x1000000000LL) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C00117C8)(a1);
            }
            else if ( (v47 & 0x8000000) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C00117C0)(a1);
            }
            else if ( (v47 & 0x80000000) != 0 )
            {
              ((void (__fastcall *)(__int64))qword_1C00117B8)(a1);
            }
            else
            {
              v48 = (void (__fastcall *)(__int64))qword_1C00117A0;
              if ( (*(_QWORD *)(a1 + 264) & 0x73300000LL) == 0 )
                v48 = (void (__fastcall *)(__int64))qword_1C00117B0;
              v48(a1);
            }
          }
        }
        if ( (*(_QWORD *)(a1 + 264) & 0x2000000000LL) != 0 && ++dword_1C0011B88 == dword_1C00113E4 )
          InitializeEnergyEstimation();
        AcquireBiosPpmControl(a1);
        v5 = 0;
        goto LABEL_146;
      }
      v37 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 176);
      if ( v37 )
        v37(*(_QWORD *)(a1 + 8), AcpiNotifyCallback);
      v38 = *(void (__fastcall **)(_QWORD))(a1 + 120);
      if ( v38 )
        v38(*(_QWORD *)(a1 + 104));
      v34 = 49;
      Sizeb[0] = v5;
      goto LABEL_78;
    }
    v35 = *(_QWORD *)(a1 + 264);
    if ( (v35 & 0x60000000) != 0 && *(_BYTE *)(a1 + 392) == 127 )
    {
      if ( (v35 & 0x20000000) != 0 )
      {
        *(_QWORD *)(a1 + 280) = qword_1C0011538;
        *(_QWORD *)(a1 + 296) = qword_1C0011548;
      }
      if ( (v35 & 0x40000000) == 0 )
        goto LABEL_91;
      v35 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 280) = SetPerfStateFFH;
    }
    else if ( *(_BYTE *)(a1 + 392) == 1 && (v35 & 0x10000000) != 0 )
    {
      *(_QWORD *)(a1 + 280) = SetPerfStateIO;
      v35 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 296) = SetPerfStateIOHidden;
    }
    else
    {
      v35 &= 0xFFFFFFFF8FFFFFFFuLL;
    }
    *(_QWORD *)(a1 + 264) = v35;
LABEL_91:
    if ( (v35 & 0x4000000) != 0 )
      *(_QWORD *)(a1 + 312) = qword_1C0011560;
    if ( (v35 & 0xA8000000) != 0 )
    {
      *(_QWORD *)(a1 + 328) = qword_1C0011570;
      *(_QWORD *)(a1 + 336) = qword_1C0011578;
    }
    v36 = *(_BYTE *)(a1 + 448);
    if ( (v35 & 0x2000000) != 0 && v36 == 127 )
    {
      *(_QWORD *)(a1 + 288) = qword_1C0011540;
      *(_QWORD *)(a1 + 304) = qword_1C0011550;
    }
    else if ( v36 == 1 && (v35 & 0x1100000) != 0 )
    {
      *(_QWORD *)(a1 + 288) = SetPerfStateIO;
      *(_QWORD *)(a1 + 304) = SetPerfStateIOHidden;
    }
    else
    {
      *(_QWORD *)(a1 + 264) = v35 & 0xFFFFFFFFFCCFFFFFuLL;
    }
    if ( qword_1C0011568 )
      *(_QWORD *)(a1 + 320) = qword_1C0011568;
    goto LABEL_104;
  }
  v34 = 48;
  Sizeb[0] = v33;
LABEL_78:
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    3u,
    v34,
    (__int64)&WPP_dc300d8d1e0f373d9cfb995524f7bf64_Traceguids,
    *(_QWORD *)Sizeb);
LABEL_146:
  if ( v58 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_148:
  v49 = *(_DWORD *)(a1 + 256);
  v50 = *(_QWORD *)(a1 + 264);
  if ( (v49 & 0x7F077 & v50) != (v49 & 0x7F077) )
  {
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C00117F0, 0, 0LL);
    v49 = *(_DWORD *)(a1 + 256);
    v50 = *(_QWORD *)(a1 + 264);
  }
  v51 = v49 & 0x40000000;
  if ( (v50 & 0x40000000) == 0 )
    v51 = v49 & 0x70000000;
  if ( ((unsigned int)v50 & (unsigned int)v51) != v51 )
  {
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C00117F8, 0, 0LL);
    v49 = *(_DWORD *)(a1 + 256);
    v50 = *(_QWORD *)(a1 + 264);
  }
  if ( ((unsigned int)v50 & v49 & 0x3300000) != (unsigned __int64)(v49 & 0x3300000) )
  {
    ProcLibTraceProcessorSpecificEvent(a1, (const EVENT_DESCRIPTOR *)qword_1C0011800, 0, 0LL);
    v49 = *(_DWORD *)(a1 + 256);
    v50 = *(_QWORD *)(a1 + 264);
  }
  if ( ((unsigned int)v50 & v49 & 0x80000000) != (unsigned __int64)(v49 & 0x80000000) )
  {
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_PCC_ERROR, 0, 0LL);
    v49 = *(_DWORD *)(a1 + 256);
    v50 = *(_QWORD *)(a1 + 264);
  }
  if ( ((unsigned int)v50 & v49 & 0x8000000) != (unsigned __int64)(v49 & 0x8000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_CPC_ERROR, 0, 0LL);
  ProcLibTraceSummary2(a1, 0LL);
  return (unsigned int)v5;
}
