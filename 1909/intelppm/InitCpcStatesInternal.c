/*
 * XREFs of InitCpcStatesInternal @ 0x1C0032738
 * Callers:
 *     RegisterHvCpcCounters @ 0x1C002EE80 (RegisterHvCpcCounters.c)
 *     RegisterKernelCpc @ 0x1C0034410 (RegisterKernelCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00036CC (WPP_RECORDER_SF_.c)
 *     EnumerateNextDevice @ 0x1C0003934 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003974 (ResetEnumerationContext.c)
 *     DisplayKernelPerfStates @ 0x1C0003990 (DisplayKernelPerfStates.c)
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00046C0 (memset.c)
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0007D28 (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ReadGenAddrHidden @ 0x1C0008338 (ReadGenAddrHidden.c)
 *     ReadGenAddrMaybeHidden @ 0x1C00083A4 (ReadGenAddrMaybeHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C00086A0 (WriteGenAddrMaybeHidden.c)
 *     CpcRegisterIsSupported @ 0x1C0008AD4 (CpcRegisterIsSupported.c)
 *     WPP_RECORDER_SF_ii @ 0x1C000E0D4 (WPP_RECORDER_SF_ii.c)
 *     WPP_RECORDER_SF_iii @ 0x1C000E1FC (WPP_RECORDER_SF_iii.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001FC34 (GetRegistryDwordValueNoDefault.c)
 *     ProcLibCapChange @ 0x1C0022FA4 (ProcLibCapChange.c)
 *     InitCommonPerfStateContext @ 0x1C00241F8 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C0024474 (GetPerfDomain.c)
 *     CpcConnectNativeInterrupt @ 0x1C002C664 (CpcConnectNativeInterrupt.c)
 *     GetPackageAffinity @ 0x1C0032564 (GetPackageAffinity.c)
 */

__int64 __fastcall InitCpcStatesInternal(__int64 a1, __int64 (__fastcall *a2)(_QWORD *, _QWORD))
{
  int v2; // r12d
  int v3; // r13d
  int v4; // r15d
  _QWORD *v6; // rdi
  int RegistryDwordValueNoDefault; // eax
  int v8; // ecx
  int v9; // ebx
  void (__fastcall *v10)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  SIZE_T v11; // rbx
  char *PoolWithTag; // rax
  char *v13; // rsi
  int v14; // eax
  unsigned int v15; // r10d
  char v16; // r11
  unsigned int v17; // edi
  char *v18; // r15
  _BYTE *v19; // rbx
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // r9
  int v23; // r10d
  int v24; // ecx
  char v25; // al
  int v26; // r10d
  int v27; // r8d
  int v28; // ecx
  bool v29; // zf
  unsigned __int8 v30; // cl
  unsigned int v31; // r8d
  char v32; // r14
  __int64 v33; // rax
  int v34; // r8d
  __int64 v35; // rdx
  char v36; // r9
  __int64 v37; // r10
  char v38; // r11
  char v39; // r11
  char v40; // r14
  int v41; // eax
  __int64 v42; // rdx
  unsigned int *v43; // rcx
  __int64 v44; // rax
  char v45; // di
  char *v46; // rbx
  __int64 v47; // r15
  PVOID v48; // r14
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 *v50; // r15
  __int64 v51; // rsi
  __int64 v52; // rbx
  char *v53; // rbx
  char *v54; // r14
  PVOID v55; // r15
  struct _GROUP_AFFINITY *v56; // rdx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rax
  unsigned __int64 v67; // rcx
  int v68; // eax
  unsigned __int64 v69; // r8
  unsigned __int64 v70; // rax
  int v71; // r10d
  unsigned __int16 v72; // r9
  unsigned __int16 v73; // r9
  unsigned int v74; // r8d
  char *v75; // rbx
  int v76; // r14d
  unsigned int v77; // r15d
  unsigned int v78; // r12d
  _QWORD *v79; // rax
  unsigned __int64 v80; // rdx
  char v81; // r10
  int v82; // r12d
  int v83; // r9d
  char *v84; // rax
  char *v85; // r8
  char v86; // r11
  void *v87; // rax
  __int64 (__fastcall *v88)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // rax
  unsigned int v89; // ecx
  bool v90; // al
  int v91; // eax
  int v92; // ecx
  __int64 v93; // rax
  char v94; // al
  unsigned __int64 v95; // rcx
  __int64 v96; // rax
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rtt
  __int64 v99; // rax
  _QWORD *v100; // r12
  __int64 v101; // r11
  __int64 v102; // rdi
  __int64 v103; // r10
  unsigned int v104; // r14d
  _DWORD *v105; // r15
  char *v106; // r14
  struct _GROUP_AFFINITY *v107; // rdx
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned __int64 v109; // rcx
  unsigned __int64 v110; // rax
  __int64 v111; // r10
  __int64 v112; // r11
  unsigned __int8 v113; // cl
  unsigned __int8 v114; // cl
  int v116; // [rsp+20h] [rbp-E0h]
  char v117; // [rsp+50h] [rbp-B0h]
  char v118; // [rsp+51h] [rbp-AFh]
  char v119; // [rsp+52h] [rbp-AEh]
  char v120; // [rsp+53h] [rbp-ADh]
  char v121; // [rsp+54h] [rbp-ACh]
  char v122; // [rsp+55h] [rbp-ABh]
  PVOID DeferredContext; // [rsp+58h] [rbp-A8h] BYREF
  char v124; // [rsp+60h] [rbp-A0h]
  char IsSupported; // [rsp+61h] [rbp-9Fh]
  bool v126; // [rsp+62h] [rbp-9Eh]
  bool v127; // [rsp+63h] [rbp-9Dh]
  char v128; // [rsp+64h] [rbp-9Ch]
  char v129[3]; // [rsp+65h] [rbp-9Bh] BYREF
  int v130; // [rsp+68h] [rbp-98h]
  int v131; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v132; // [rsp+70h] [rbp-90h]
  unsigned int v133; // [rsp+74h] [rbp-8Ch]
  int v134; // [rsp+78h] [rbp-88h]
  int v135; // [rsp+7Ch] [rbp-84h]
  int v136; // [rsp+80h] [rbp-80h]
  _QWORD v137[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v138[4]; // [rsp+98h] [rbp-68h] BYREF
  int v139; // [rsp+B8h] [rbp-48h] BYREF
  int v140; // [rsp+BCh] [rbp-44h] BYREF
  int PerfDomain; // [rsp+C0h] [rbp-40h]
  __int64 v142; // [rsp+C8h] [rbp-38h]
  BOOL v143; // [rsp+D0h] [rbp-30h]
  int v144; // [rsp+D4h] [rbp-2Ch]
  _QWORD *v145; // [rsp+D8h] [rbp-28h]
  __int64 v146; // [rsp+E0h] [rbp-20h]
  __int64 v147; // [rsp+E8h] [rbp-18h] BYREF
  __int64 (__fastcall *v148)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // [rsp+F0h] [rbp-10h] BYREF
  char *v149; // [rsp+F8h] [rbp-8h]
  __int64 v150; // [rsp+100h] [rbp+0h] BYREF
  __int64 v151; // [rsp+108h] [rbp+8h] BYREF
  __int64 v152; // [rsp+110h] [rbp+10h] BYREF
  __int64 (__fastcall *v153)(_QWORD *, _QWORD); // [rsp+118h] [rbp+18h]
  struct _GROUP_AFFINITY Affinity; // [rsp+120h] [rbp+20h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v156[176]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v157[176]; // [rsp+1F0h] [rbp+F0h] BYREF

  v153 = a2;
  v146 = a1;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  memset(v138, 0, sizeof(v138));
  memset(v156, 0, 0xA8uLL);
  memset(v157, 0, 0xA8uLL);
  v145 = 0LL;
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  v6 = 0LL;
  v118 = 0;
  v131 = 0;
  RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                  (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                  (__int64)L"~MHz",
                                  (__int64)&v131);
  v8 = v131;
  if ( RegistryDwordValueNoDefault < 0 )
    v8 = 0;
  v131 = v8;
  if ( !v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x21u,
        (__int64)&WPP_5ebc86338b0b3226bdc1929ba03294e5_Traceguids);
    *(_QWORD *)(a1 + 264) &= ~0x8000000uLL;
    return (unsigned int)-1073741823;
  }
  LOBYTE(v4) = *(_QWORD *)(a1 + 328) != 0LL;
  v10 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v130 = v4;
  v10(WdfDriverGlobals, qword_1C001B398, 0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v138, &v150);
  v11 = (unsigned int)(368 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72637250u);
  v149 = PoolWithTag;
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_8:
    v9 = -1073741670;
    goto LABEL_278;
  }
  memset(PoolWithTag, 0, v11);
  LOBYTE(v132) = 0;
  LOBYTE(v2) = 1;
  v120 = 1;
  v129[0] = 1;
  v122 = 1;
  LOBYTE(v3) = 0;
  v134 = v2;
  v144 = v3;
  LOBYTE(v133) = 0;
  v124 = 0;
  v119 = 0;
  v121 = 0;
  LOBYTE(v135) = 0;
  IsSupported = 0;
  LOBYTE(v136) = 0;
  v128 = 0;
  v117 = 0;
  v127 = 0;
  v139 = 1000;
  v140 = 1000;
  v126 = 0;
  v148 = 0LL;
  v147 = 0LL;
  v151 = 0LL;
  v142 = 0LL;
  v152 = 0LL;
  KeInitializeAffinityEx(v156);
  ResetEnumerationContext(v138);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) )
  {
    if ( !*((_BYTE *)DeferredContext + 78) )
      KeAddProcessorAffinityEx(v156, *((unsigned int *)DeferredContext + 14));
  }
  LOBYTE(v11) = 0;
  v143 = v11;
  ResetEnumerationContext(v138);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) )
  {
    if ( !*((_BYTE *)DeferredContext + 78) )
    {
      v142 = *((_QWORD *)DeferredContext + 72);
      if ( (int)GetPackageAffinity((__int64)DeferredContext, (__int64)v157) >= 0 )
        v143 = KeIsEqualAffinityEx(v157, v156) != 0;
      break;
    }
  }
  ResetEnumerationContext(v138);
  v14 = EnumerateNextDevice((__int64)v138, &DeferredContext);
  v16 = 10;
  if ( !v14 )
  {
    LOBYTE(v17) = v133;
    v130 = v4;
    v18 = v13 + 92;
    LOBYTE(v13) = v132;
    while ( 1 )
    {
      v19 = (_BYTE *)*((_QWORD *)DeferredContext + 72);
      if ( v19[140] == v16 || v19[152] == v16 )
        v119 = v15;
      if ( v19[176] == v16 || v19[80] == v16 || v19[92] == v16 || v19[68] == v16 || v19[104] == v16 || v19[212] == v16 )
        v121 = v15;
      LODWORD(v13) = (unsigned __int8)v13;
      if ( v19[56] == v16 )
        LODWORD(v13) = v15;
      v17 = (unsigned __int8)v17;
      if ( v19[8] == v16 )
        v17 = v15;
      if ( v19[200] == v16 || v19[188] == v16 || v19[116] == v16 )
        v124 = v15;
      *(_QWORD *)(v18 + 20) = v19;
      IsSupported = CpcRegisterIsSupported((__int64)(v19 + 176));
      *v18 = IsSupported;
      v18[1] = CpcRegisterIsSupported((__int64)(v19 + 68));
      v18[2] = CpcRegisterIsSupported((__int64)(v19 + 80));
      v18[3] = CpcRegisterIsSupported((__int64)(v19 + 92));
      v18[6] = CpcRegisterIsSupported((__int64)(v19 + 104));
      v18[7] = CpcRegisterIsSupported((__int64)(v19 + 56));
      v128 = CpcRegisterIsSupported(v20);
      v21 = CpcRegisterIsSupported((__int64)(v19 + 212));
      v24 = (unsigned __int8)v135;
      if ( v21 )
        v24 = v23;
      v18[4] = v21;
      v135 = v24;
      v25 = CpcRegisterIsSupported(v22);
      LOBYTE(v28) = v136;
      v18[5] = v25;
      v27 = 0;
      v28 = (unsigned __int8)v28;
      if ( v25 )
        v28 = v26;
      v29 = v19[140] == 127;
      v136 = v28;
      v30 = 0;
      if ( !v29 )
        v30 = v130;
      if ( v19[152] != 127 )
        v27 = v30;
      v130 = v27;
      if ( !qword_1C001B540 || !(unsigned __int8)qword_1C001B540(v19) )
        v122 = 0;
      v31 = 0;
      memset(v137, 0, 12);
      v32 = 0;
      while ( 1 )
      {
        if ( v31 )
        {
          switch ( v31 )
          {
            case 1u:
              v33 = 80LL;
              break;
            case 2u:
              v33 = 92LL;
              break;
            case 3u:
              v33 = 212LL;
              break;
            default:
              v33 = 104LL;
              break;
          }
        }
        else
        {
          v33 = 68LL;
        }
        if ( !CpcRegisterIsSupported((__int64)&v19[v33]) )
          goto LABEL_65;
        v117 = 1;
        if ( CpcRegisterIsSupported((__int64)v137) )
          break;
        v32 = v36;
        v39 = *(_BYTE *)(v35 + 3);
        *(_QWORD *)((char *)v137 + 4) = *(_QWORD *)(v35 + 4);
        BYTE3(v137[0]) = v39;
        LOBYTE(v137[0]) = v36;
LABEL_65:
        v31 = v34 + 1;
        if ( v31 >= 5 )
        {
          v40 = v120;
          goto LABEL_67;
        }
      }
      if ( v32 == v36 && v37 == *(_QWORD *)(v35 + 4) && v38 == *(_BYTE *)(v35 + 3) )
        goto LABEL_65;
      v40 = 0;
      v120 = 0;
LABEL_67:
      if ( v117 && v40 )
      {
        v41 = v137[1];
        *(_QWORD *)(v18 + 28) = v137[0];
        *((_DWORD *)v18 + 9) = v41;
      }
      if ( qword_1C001B550 )
      {
        v2 = (unsigned __int8)v2;
        if ( (int)qword_1C001B550(v18 - 92, &v147, &v151, &v152, &v148, v129, &v139, &v140) < 0 )
          v2 = 0;
      }
      v42 = 19LL;
      v43 = (unsigned int *)&Cpc2RegisterTable;
      do
      {
        v44 = *v43;
        v43 += 6;
        v3 = (unsigned __int8)v3;
        if ( v19[v44] == 10 )
          v3 = 1;
        --v42;
      }
      while ( v42 );
      v144 = v3;
      v18 += 368;
      if ( (unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) )
      {
        v133 = v17;
        v6 = 0LL;
        v132 = (unsigned int)v13;
        v13 = v149;
        v134 = v2;
        break;
      }
    }
  }
  if ( !v147 || !v148 )
    LOBYTE(v134) = 0;
  if ( (_BYTE)v3 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(qword_1C001B8C0 + 88))(*(_QWORD *)(qword_1C001B8C0 + 56));
    if ( v9 < 0 )
      goto LABEL_278;
    ResetEnumerationContext(v138);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) )
    {
      v45 = 0;
      v46 = v13 + 112;
      do
      {
        if ( *(v46 - 20) )
        {
          v47 = *(_QWORD *)v46;
          v48 = DeferredContext;
          if ( *(_BYTE *)(*(_QWORD *)v46 + 176LL) == 127 && !*((_BYTE *)DeferredContext + 78) )
          {
            KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
            p_PreviousAffinity = &PreviousAffinity;
            if ( v45 )
              p_PreviousAffinity = 0LL;
            KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
            v45 = 1;
          }
          WriteGenAddrMaybeHidden((__int64)v48, (_BYTE *)(v47 + 176), 1LL);
        }
        v46 += 368;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) );
      v118 = v45;
      v6 = v145;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C001B8C0 + 104))(*(_QWORD *)(qword_1C001B8C0 + 56), 0LL);
    if ( v9 < 0 )
      goto LABEL_278;
  }
  ResetEnumerationContext(v138);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) )
  {
    v50 = (__int64 *)(v13 + 112);
    v51 = v142;
    do
    {
      v52 = *v50;
      if ( *((_BYTE *)DeferredContext + 78)
        && *(_BYTE *)(v52 + 20) == 10
        && !ReadGenAddrHidden(*((unsigned int *)DeferredContext + 20), (char *)(v52 + 20)) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            1u,
            0x22u,
            (__int64)&WPP_5ebc86338b0b3226bdc1929ba03294e5_Traceguids);
        if ( !CpcHiddenProcessorMitigationReported )
        {
          ProcLibTraceHiddenProcessorDegradedOperation();
          CpcHiddenProcessorMitigationReported = 1;
        }
        *(_QWORD *)(v52 + 20) = *(_QWORD *)(v51 + 20);
        *(_DWORD *)(v52 + 28) = *(_DWORD *)(v51 + 28);
        if ( *(_BYTE *)(v52 + 8) == 10 )
        {
          *(_QWORD *)(v52 + 8) = *(_QWORD *)(v51 + 8);
          *(_DWORD *)(v52 + 16) = *(_DWORD *)(v51 + 16);
        }
        if ( *(_BYTE *)(v52 + 32) == 10 )
        {
          *(_QWORD *)(v52 + 32) = *(_QWORD *)(v51 + 32);
          *(_DWORD *)(v52 + 40) = *(_DWORD *)(v51 + 40);
        }
        if ( *(_BYTE *)(v52 + 44) == 10 )
        {
          *(_QWORD *)(v52 + 44) = *(_QWORD *)(v51 + 44);
          *(_DWORD *)(v52 + 52) = *(_DWORD *)(v51 + 52);
        }
        if ( *(_BYTE *)(v52 + 224) == 10 )
        {
          *(_QWORD *)(v52 + 224) = *(_QWORD *)(v51 + 224);
          *(_DWORD *)(v52 + 232) = *(_DWORD *)(v51 + 232);
        }
        if ( *(_BYTE *)(v52 + 56) == 10 )
        {
          *(_QWORD *)(v52 + 56) = *(_QWORD *)(v51 + 56);
          *(_DWORD *)(v52 + 64) = *(_DWORD *)(v51 + 64);
        }
      }
      v50 += 46;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) );
    v13 = v149;
    v6 = 0LL;
  }
  ResetEnumerationContext(v138);
  if ( (unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) )
  {
    v71 = 1;
LABEL_164:
    if ( *((_QWORD *)v13 + 1) < *((_QWORD *)v13 + 2) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_162;
      v73 = 41;
LABEL_167:
      v74 = v71;
LABEL_161:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        v74,
        v73,
        (__int64)&WPP_5ebc86338b0b3226bdc1929ba03294e5_Traceguids);
      goto LABEL_162;
    }
    v75 = v13 + 32;
    if ( *((_QWORD *)v13 + 3) < *((_QWORD *)v13 + 4) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_162;
      v73 = 42;
      goto LABEL_167;
    }
    v76 = v71 + ((_BYTE)v130 != 0);
    v77 = (32 * PerfDomain + 447) & 0xFFFFFFF8;
    v133 = v77 + 24 * v76;
    v132 = v133 + 8 * PerfDomain * v76;
    v78 = v132;
    v79 = ExAllocatePoolWithTag(NonPagedPoolNx, v132, 0x72637250u);
    v145 = v79;
    v6 = v79;
    if ( !v79 )
      goto LABEL_8;
    memset(v79, 0, v78);
    v80 = v146;
    if ( *(_BYTE *)(v146 + 1122) )
      v6[48] = PepParkPreference;
    if ( (*(_QWORD *)(v80 + 264) & 0x10000000000LL) != 0 )
    {
      v6[49] = PepParkMask;
      v6[50] = PepPerfCheckComplete;
      v6[9] = *(_QWORD *)(v80 + 1104);
    }
    v81 = v134;
    v82 = PerfDomain;
    v83 = v150;
    v6[52] = v6 + 55;
    v84 = (char *)v6 + v133;
    v85 = (char *)v6 + v77;
    *(_DWORD *)v6 = 62;
    *((_DWORD *)v6 + 4) = v82;
    *((_DWORD *)v6 + 9) = v76;
    v6[51] = v85;
    v6[53] = v84;
    *((_WORD *)v6 + 2) = v83;
    if ( v81 )
    {
      v6[42] = v147;
      v6[43] = v151;
      if ( v143 && v152 )
      {
        v86 = v117;
        if ( v83 == 254 )
        {
          v6[44] = v152;
          v6[10] = v13;
        }
      }
      else
      {
        v86 = v117;
      }
LABEL_190:
      v88 = v148;
      if ( v81 )
      {
LABEL_192:
        v6[41] = v88;
        if ( (_BYTE)v144 )
        {
          if ( v119 )
            v6[45] = CpcReadFeedback;
          if ( v121 )
          {
            v6[46] = CpcAcquirePerformance;
            v6[47] = CpcCommitPerformance;
          }
          if ( v124 )
          {
            v6[38] = AcquirePccSubspace;
            v6[39] = ExecutePccWrite;
          }
          v89 = *(_DWORD *)(qword_1C001B8C0 + 68);
          if ( v89 )
          {
            v80 = v146;
            *((_DWORD *)v6 + 10) = 0x989680 / (v89 >> 1);
          }
        }
        if ( IsSupported || (*(_QWORD *)(v80 + 264) & 0x4000000000LL) != 0 )
          v6[40] = CpcReinitializeHandler;
        *((_BYTE *)v6 + 6) = 0;
        v90 = v86 || v81;
        *((_BYTE *)v6 + 7) = v90;
        *((_BYTE *)v6 + 8) = v122;
        *((_BYTE *)v6 + 52) = v126;
        *((_DWORD *)v6 + 5) = v131;
        *((_DWORD *)v6 + 6) = *((_DWORD *)v13 + 17);
        v91 = *((_DWORD *)v13 + 19);
        *((_DWORD *)v6 + 7) = v91;
        v92 = *((_DWORD *)v13 + 20);
        if ( !v91 )
          v91 = 1;
        *((_DWORD *)v6 + 7) = v91;
        if ( !v92 )
          v92 = 1;
        *((_DWORD *)v6 + 8) = v92;
        v6[7] = *(_QWORD *)v75;
        v6[8] = *((_QWORD *)v13 + 2);
        v93 = *(_QWORD *)(v80 + 336);
        if ( v93 )
          v6[32] = v93;
        v6[34] = *(_QWORD *)(v80 + 344);
        if ( (_BYTE)v135 )
          *((_BYTE *)v6 + 9) = 1;
        if ( (_BYTE)v136 )
        {
          if ( v81 )
            *((_BYTE *)v6 + 10) = 1;
          else
            v6[36] = CpcSetAutonomousActivityWindow;
        }
        if ( v127 )
          v6[37] = CpcSetAutonomousMode;
        if ( v128 )
          v6[33] = CpcSetTimeWindow;
        if ( (*(_DWORD *)(v80 + 264) & 0x400000) != 0 && v81 && (v83 == 254 || v82 == 1) )
        {
          *((_BYTE *)v6 + 11) = 1;
          if ( (*(_QWORD *)(v80 + 264) & 0x400000000LL) == 0 || (v94 = 0, v129[0]) )
            v94 = 1;
          *((_BYTE *)v6 + 12) = v94;
          *((_DWORD *)v6 + 12) = v139;
          *((_DWORD *)v6 + 108) = v140;
        }
        v95 = *((_QWORD *)v13 + 2);
        v96 = *((_QWORD *)v13 + 5);
        if ( v95 == v96 )
        {
          LODWORD(v97) = 100;
        }
        else
        {
          v98 = 100 * v96;
          v97 = 100 * v96 / v95;
          v80 = v98 % v95;
        }
        *((_DWORD *)v85 + 2) = v97;
        *(_QWORD *)v85 = PerfReadWrappingCounter;
        *((_DWORD *)v85 + 3) = 1;
        v85[17] = 1;
        v85[16] = v119 == 0;
        if ( (_BYTE)v130 )
        {
          v99 = v6[51];
          *(_QWORD *)(v99 + 32) = 100LL;
          *(_QWORD *)(v99 + 24) = PerfReadWrappingCounter;
          *(_WORD *)(v99 + 40) = 257;
        }
        DisplayKernelPerfStates((__int64)v6, v80, (int)v85);
        v100 = (_QWORD *)v6[53];
        v142 = v6[52];
        ResetEnumerationContext(v138);
        if ( !(unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) )
        {
          v102 = v146;
          do
          {
            v103 = *((_QWORD *)v75 + 10);
            v104 = 100;
            v105 = DeferredContext;
            v150 = v103;
            if ( v75[67] )
            {
              v106 = (char *)(v103 + 56);
              if ( *(_BYTE *)(v103 + 56) == 127 && !*((_BYTE *)DeferredContext + 78) )
              {
                KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
                v107 = &PreviousAffinity;
                if ( v118 )
                  v107 = 0LL;
                KeSetSystemGroupAffinityThread(&Affinity, v107);
                v118 = 1;
              }
              GenAddrMaybeHidden = ReadGenAddrMaybeHidden((__int64)v105, v106);
              v109 = *((_QWORD *)v75 - 2);
              if ( GenAddrMaybeHidden > v109 )
              {
                GenAddrMaybeHidden = *((_QWORD *)v75 - 2);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  WPP_RECORDER_SF_(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    3u,
                    1u,
                    0x2Bu,
                    (__int64)&WPP_5ebc86338b0b3226bdc1929ba03294e5_Traceguids);
                  GenAddrMaybeHidden = *((_QWORD *)v75 - 2);
                }
                v109 = GenAddrMaybeHidden;
              }
              if ( GenAddrMaybeHidden < *(_QWORD *)v75 )
              {
                GenAddrMaybeHidden = *(_QWORD *)v75;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  WPP_RECORDER_SF_(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    3u,
                    1u,
                    0x2Cu,
                    (__int64)&WPP_5ebc86338b0b3226bdc1929ba03294e5_Traceguids);
                  GenAddrMaybeHidden = *(_QWORD *)v75;
                  v109 = *((_QWORD *)v75 - 2);
                }
              }
              v104 = *((_DWORD *)v75 + 12);
              *((_QWORD *)v75 + 3) = GenAddrMaybeHidden;
              v110 = 100 * GenAddrMaybeHidden / v109;
              if ( (unsigned int)v110 > v104 )
                v104 = v110;
              *((_DWORD *)v75 + 13) = v104;
              if ( v104 != v105[181] )
                ProcLibCapChange(v102, v105[112], v105[124], v104);
              v101 = v142;
            }
            else
            {
              *((_QWORD *)v75 + 3) = *((_QWORD *)v75 - 2);
            }
            InitCommonPerfStateContext((__int64)v105, (_QWORD *)v75 - 4, v101, v104, v104 < 0x64 ? 2 : 0);
            *v100 = v75 + 128;
            *((_QWORD *)v75 + 22) = GetCpcDifferentialFeedback;
            *((_QWORD *)v75 + 23) = v111;
            v113 = *(_BYTE *)(v111 + 153);
            if ( v113 < 0x40u )
              *((_QWORD *)v75 + 20) = (1LL << v113) - 1;
            v114 = *(_BYTE *)(v111 + 141);
            if ( v114 < 0x40u )
              *((_QWORD *)v75 + 21) = (1LL << v114) - 1;
            ++v100;
            if ( (_BYTE)v130 )
            {
              *v100++ = v75 + 192;
              *((_QWORD *)v75 + 30) = *((_QWORD *)v105 + 41);
            }
            v142 = v112 + 32;
            v75 += 368;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) );
          v6 = v145;
          v13 = v149;
        }
        if ( v118 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        v9 = v153(v6, v132);
        if ( v9 >= 0 )
        {
          ResetEnumerationContext(v138);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) )
          {
            *((_QWORD *)DeferredContext + 30) = v13;
            v13 += 368;
          }
          if ( (*(_QWORD *)(v146 + 264) & 0x4000000000LL) != 0 )
          {
            ResetEnumerationContext(v138);
            while ( !(unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) )
            {
              if ( !*((_BYTE *)DeferredContext + 78) )
                CpcConnectNativeInterrupt((struct _DEVICE_OBJECT **)DeferredContext);
            }
          }
          v13 = 0LL;
          v9 = 0;
        }
        goto LABEL_278;
      }
LABEL_191:
      v88 = PerfSelectionCpc;
      goto LABEL_192;
    }
    v86 = v117;
    if ( v117 )
    {
      if ( v120 )
      {
        v6[42] = PerfControlCpcSingleRegister;
        v87 = PerfControlCpcSingleRegisterHidden;
      }
      else
      {
        v6[42] = PerfControlCpc;
        v87 = (void *)qword_1C001B508;
        if ( !qword_1C001B508 || !CpcHiddenProcessorMitigationReported )
        {
          v6[43] = PerfControlCpcHidden;
          goto LABEL_190;
        }
      }
    }
    else
    {
      v87 = AcpiCStateIdleCancel;
      v6[42] = AcpiCStateIdleCancel;
    }
    v6[43] = v87;
    goto LABEL_191;
  }
  v53 = v13 + 100;
  while ( 1 )
  {
    v54 = *(char **)(v53 + 12);
    v55 = DeferredContext;
    if ( (v54[8] == 127 || v54[20] == 127 || v54[32] == 127 || v54[44] == 127 || v54[224] == 127 || v54[188] == 127)
      && !*((_BYTE *)DeferredContext + 78) )
    {
      KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
      v56 = &PreviousAffinity;
      if ( v118 )
        v56 = 0LL;
      KeSetSystemGroupAffinityThread(&Affinity, v56);
      v118 = 1;
    }
    *v53 = v119;
    v53[1] = v132;
    v53[2] = v133;
    v53[3] = v121;
    *((_DWORD *)v53 - 9) = v131;
    *(_QWORD *)(v53 - 92) = ReadGenAddrMaybeHidden((__int64)v55, v54 + 8);
    v57 = ReadGenAddrMaybeHidden((__int64)v55, v54 + 20);
    *(_QWORD *)(v53 - 84) = v57;
    if ( !v57 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_162;
      v73 = 35;
      v74 = 1;
      goto LABEL_161;
    }
    v58 = ReadGenAddrMaybeHidden((__int64)v55, v54 + 32);
    v59 = *(_QWORD *)(v53 - 84);
    *(_QWORD *)(v53 - 76) = v58;
    if ( v58 > v59 )
      *(_QWORD *)(v53 - 76) = v59;
    *(_QWORD *)(v53 - 68) = ReadGenAddrMaybeHidden((__int64)v55, v54 + 44);
    *(_QWORD *)(v53 - 60) = ReadGenAddrMaybeHidden((__int64)v55, v54 + 224);
    if ( CpcRegisterIsSupported((__int64)(v54 + 188)) )
    {
      v126 = ReadGenAddrMaybeHidden((__int64)v55, v54 + 188) != 0;
      v127 = v54[188] != 126;
    }
    if ( v53 - 100 == v13 )
      goto LABEL_144;
    v63 = *(_QWORD *)(v53 - 92);
    v64 = *((_QWORD *)v13 + 1);
    if ( v63 != v64 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_162;
      v72 = 36;
      goto LABEL_158;
    }
    v63 = *(_QWORD *)(v53 - 84);
    v64 = *((_QWORD *)v13 + 2);
    if ( v63 != v64 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_162;
      v72 = 37;
      goto LABEL_158;
    }
    v63 = *(_QWORD *)(v53 - 68);
    v64 = *((_QWORD *)v13 + 4);
    if ( v63 != v64 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_162;
      v72 = 38;
LABEL_158:
      WPP_RECORDER_SF_ii(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v72,
        (__int64)&WPP_5ebc86338b0b3226bdc1929ba03294e5_Traceguids,
        v63,
        v64);
      goto LABEL_162;
    }
    v65 = *(_QWORD *)(v53 - 76);
    v66 = *((_QWORD *)v13 + 3);
    if ( v65 != v66 )
      break;
LABEL_144:
    v67 = *(_QWORD *)(v53 - 84);
    v68 = 100LL * *(_QWORD *)(v53 - 92) / v67;
    *((_DWORD *)v53 - 8) = v68;
    *((_DWORD *)v53 - 7) = v68;
    v69 = 100LL * *(_QWORD *)(v53 - 76) / v67;
    v70 = 100LL * *(_QWORD *)(v53 - 68) / v67;
    if ( !(_DWORD)v70 )
      LODWORD(v70) = 1;
    *((_DWORD *)v53 - 5) = v70;
    if ( !(_DWORD)v69 )
      LODWORD(v69) = 1;
    *((_DWORD *)v53 - 6) = v69;
    v53 += 368;
    if ( (unsigned int)EnumerateNextDevice((__int64)v138, &DeferredContext) )
      goto LABEL_164;
  }
  if ( v122 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_iii((__int64)WPP_GLOBAL_Control->DeviceExtension, v60, v61, v62, v116);
      v66 = *((_QWORD *)v13 + 3);
    }
    *(_QWORD *)(v53 - 76) = v66;
    goto LABEL_144;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ii(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x27u,
      (__int64)&WPP_5ebc86338b0b3226bdc1929ba03294e5_Traceguids,
      v65,
      *((_QWORD *)v13 + 3));
LABEL_162:
  v9 = -1073741811;
LABEL_278:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001B398);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x72637250u);
  return (unsigned int)v9;
}
