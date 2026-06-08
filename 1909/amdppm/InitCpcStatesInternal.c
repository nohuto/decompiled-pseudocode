/*
 * XREFs of InitCpcStatesInternal @ 0x1C002A4DC
 * Callers:
 *     RegisterHvCpcCounters @ 0x1C0021700 (RegisterHvCpcCounters.c)
 *     RegisterKernelCpc @ 0x1C002A4C0 (RegisterKernelCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000138C (WPP_RECORDER_SF_.c)
 *     ReadGenAddrMaybeHidden @ 0x1C0002318 (ReadGenAddrMaybeHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C0002348 (WriteGenAddrMaybeHidden.c)
 *     ReadGenAddrHidden @ 0x1C000237C (ReadGenAddrHidden.c)
 *     ResetEnumerationContext @ 0x1C00025D4 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00025F0 (EnumerateNextDevice.c)
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0002B50 (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     DisplayKernelPerfStates @ 0x1C0007A54 (DisplayKernelPerfStates.c)
 *     WPP_RECORDER_SF_ii @ 0x1C0007D18 (WPP_RECORDER_SF_ii.c)
 *     WPP_RECORDER_SF_iii @ 0x1C0007E40 (WPP_RECORDER_SF_iii.c)
 *     CpcRegisterIsSupported @ 0x1C000A3E4 (CpcRegisterIsSupported.c)
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000E300 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001C614 (GetRegistryDwordValueNoDefault.c)
 *     ProcLibCapChange @ 0x1C0027978 (ProcLibCapChange.c)
 *     GetPackageAffinity @ 0x1C002C180 (GetPackageAffinity.c)
 *     GetPerfDomain @ 0x1C002D710 (GetPerfDomain.c)
 *     CpcConnectNativeInterrupt @ 0x1C002DB5C (CpcConnectNativeInterrupt.c)
 */

__int64 __fastcall InitCpcStatesInternal(__int64 a1, __int64 (__fastcall *a2)(_QWORD *, _QWORD))
{
  int v2; // r12d
  int v3; // r13d
  _QWORD *v5; // rdi
  int RegistryDwordValueNoDefault; // eax
  int v7; // ecx
  int v8; // ebx
  SIZE_T v9; // rbx
  char *PoolWithTag; // rax
  char *v11; // r14
  int v12; // eax
  unsigned int v13; // r10d
  char v14; // r11
  unsigned int v15; // edi
  char *v16; // r15
  _BYTE *v17; // rbx
  __int64 v18; // rdx
  char v19; // al
  __int64 v20; // r9
  int v21; // r10d
  int v22; // ecx
  char v23; // al
  int v24; // r10d
  int v25; // r8d
  int v26; // ecx
  bool v27; // zf
  unsigned __int8 v28; // cl
  unsigned int v29; // r8d
  char v30; // si
  __int64 v31; // rax
  int v32; // r8d
  __int64 v33; // rdx
  char v34; // r9
  __int64 v35; // r10
  char v36; // r11
  char v37; // r11
  char v38; // si
  int v39; // eax
  __int64 v40; // rdx
  unsigned int *v41; // rcx
  __int64 v42; // rax
  char v43; // di
  char *v44; // rbx
  __int64 v45; // r15
  PVOID v46; // rsi
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 *v48; // r15
  _BYTE *v49; // r14
  __int64 v50; // rbx
  char *v51; // rbx
  _BYTE *v52; // rsi
  PVOID v53; // r15
  struct _GROUP_AFFINITY *v54; // rdx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rax
  unsigned __int64 v65; // rcx
  int v66; // eax
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // rax
  int v69; // r10d
  unsigned __int16 v70; // r9
  unsigned __int16 v71; // r9
  unsigned int v72; // r8d
  char *v73; // rbx
  int v74; // esi
  unsigned int v75; // r15d
  unsigned int v76; // r13d
  unsigned int v77; // r12d
  _QWORD *v78; // rax
  __int64 v79; // rdx
  char v80; // r10
  int v81; // r12d
  int v82; // r9d
  __int64 v83; // r8
  char v84; // r11
  void *v85; // rax
  __int64 (__fastcall *v86)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // rax
  unsigned int v87; // ecx
  bool v88; // al
  int v89; // eax
  int v90; // ecx
  __int64 v91; // rax
  char v92; // al
  unsigned __int64 v93; // rcx
  __int64 v94; // rax
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // rtt
  __int64 v97; // rax
  __int64 v98; // r12
  _QWORD *v99; // r13
  _BYTE *v100; // rdx
  unsigned int v101; // r15d
  _DWORD *v102; // rsi
  __int64 v103; // r15
  struct _GROUP_AFFINITY *v104; // rdx
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned __int64 v106; // rcx
  unsigned __int64 v107; // rax
  int v108; // eax
  unsigned __int8 v109; // cl
  unsigned __int8 v110; // cl
  int v112; // [rsp+20h] [rbp-E0h]
  char v113; // [rsp+50h] [rbp-B0h]
  char v114; // [rsp+51h] [rbp-AFh]
  char v115; // [rsp+52h] [rbp-AEh]
  char v116; // [rsp+53h] [rbp-ADh]
  char v117; // [rsp+54h] [rbp-ACh]
  char v118; // [rsp+55h] [rbp-ABh]
  PVOID DeferredContext; // [rsp+58h] [rbp-A8h] BYREF
  char v120; // [rsp+60h] [rbp-A0h]
  char IsSupported; // [rsp+61h] [rbp-9Fh]
  bool v122; // [rsp+62h] [rbp-9Eh]
  bool v123; // [rsp+63h] [rbp-9Dh]
  char v124; // [rsp+64h] [rbp-9Ch]
  char v125[3]; // [rsp+65h] [rbp-9Bh] BYREF
  int v126; // [rsp+68h] [rbp-98h]
  int v127; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v128; // [rsp+70h] [rbp-90h]
  int v129; // [rsp+74h] [rbp-8Ch]
  int v130; // [rsp+78h] [rbp-88h]
  int v131; // [rsp+7Ch] [rbp-84h]
  int v132; // [rsp+80h] [rbp-80h]
  _QWORD v133[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v134[4]; // [rsp+98h] [rbp-68h] BYREF
  int v135; // [rsp+B8h] [rbp-48h] BYREF
  int v136; // [rsp+BCh] [rbp-44h] BYREF
  int PerfDomain; // [rsp+C0h] [rbp-40h]
  BOOL v138; // [rsp+C4h] [rbp-3Ch]
  int v139; // [rsp+C8h] [rbp-38h]
  __int64 v140; // [rsp+D0h] [rbp-30h]
  _BYTE *v141; // [rsp+D8h] [rbp-28h]
  _QWORD *v142; // [rsp+E0h] [rbp-20h]
  __int64 v143; // [rsp+E8h] [rbp-18h] BYREF
  __int64 (__fastcall *v144)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // [rsp+F0h] [rbp-10h] BYREF
  char *v145; // [rsp+F8h] [rbp-8h]
  int v146; // [rsp+100h] [rbp+0h] BYREF
  __int64 v147; // [rsp+108h] [rbp+8h] BYREF
  __int64 v148; // [rsp+110h] [rbp+10h] BYREF
  __int64 (__fastcall *v149)(_QWORD *, _QWORD); // [rsp+118h] [rbp+18h]
  struct _GROUP_AFFINITY Affinity; // [rsp+120h] [rbp+20h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v152[176]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v153[176]; // [rsp+1F0h] [rbp+F0h] BYREF

  v149 = a2;
  v140 = a1;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  memset(v134, 0, sizeof(v134));
  memset(v152, 0, 0xA8uLL);
  memset(v153, 0, 0xA8uLL);
  v142 = 0LL;
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  v5 = 0LL;
  v114 = 0;
  v127 = 0;
  RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                  (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                  (__int64)L"~MHz",
                                  (__int64)&v127);
  v7 = v127;
  if ( RegistryDwordValueNoDefault < 0 )
    v7 = 0;
  v127 = v7;
  if ( !v7 )
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
  LOBYTE(v126) = *(_QWORD *)(a1 + 328) != 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0013418,
    0LL);
  PerfDomain = GetPerfDomain(a1, v134, &v146);
  v9 = (unsigned int)(368 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x72637250u);
  v145 = PoolWithTag;
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_8:
    v8 = -1073741670;
    goto LABEL_280;
  }
  memset(PoolWithTag, 0, v9);
  LOBYTE(v129) = 0;
  LOBYTE(v2) = 1;
  v116 = 1;
  v125[0] = 1;
  v118 = 1;
  LOBYTE(v3) = 0;
  v130 = v2;
  v139 = v3;
  LOBYTE(v128) = 0;
  v120 = 0;
  v115 = 0;
  v117 = 0;
  LOBYTE(v131) = 0;
  IsSupported = 0;
  LOBYTE(v132) = 0;
  v124 = 0;
  v113 = 0;
  v123 = 0;
  v135 = 1000;
  v136 = 1000;
  v122 = 0;
  v144 = 0LL;
  v143 = 0LL;
  v147 = 0LL;
  v141 = 0LL;
  v148 = 0LL;
  KeInitializeAffinityEx(v152);
  ResetEnumerationContext(v134);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v134, &DeferredContext) )
  {
    if ( !*((_BYTE *)DeferredContext + 78) )
      KeAddProcessorAffinityEx(v152, *((unsigned int *)DeferredContext + 14));
  }
  LOBYTE(v9) = 0;
  v138 = v9;
  ResetEnumerationContext(v134);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v134, &DeferredContext) )
  {
    if ( !*((_BYTE *)DeferredContext + 78) )
    {
      v141 = (_BYTE *)*((_QWORD *)DeferredContext + 72);
      if ( (int)GetPackageAffinity(DeferredContext, v153) >= 0 )
        v138 = KeIsEqualAffinityEx(v153, v152) != 0;
      break;
    }
  }
  ResetEnumerationContext(v134);
  v12 = EnumerateNextDevice((__int64)v134, &DeferredContext);
  v14 = 10;
  if ( !v12 )
  {
    LOBYTE(v15) = v128;
    v16 = v11 + 92;
    LOBYTE(v11) = v129;
    while ( 1 )
    {
      v17 = (_BYTE *)*((_QWORD *)DeferredContext + 72);
      if ( v17[140] == v14 || v17[152] == v14 )
        v115 = v13;
      if ( v17[176] == v14 || v17[80] == v14 || v17[92] == v14 || v17[68] == v14 || v17[104] == v14 || v17[212] == v14 )
        v117 = v13;
      LODWORD(v11) = (unsigned __int8)v11;
      if ( v17[56] == v14 )
        LODWORD(v11) = v13;
      v15 = (unsigned __int8)v15;
      if ( v17[8] == v14 )
        v15 = v13;
      if ( v17[200] == v14 || v17[188] == v14 || v17[116] == v14 )
        v120 = v13;
      *(_QWORD *)(v16 + 20) = v17;
      IsSupported = CpcRegisterIsSupported((__int64)(v17 + 176));
      *v16 = IsSupported;
      v16[1] = CpcRegisterIsSupported((__int64)(v17 + 68));
      v16[2] = CpcRegisterIsSupported((__int64)(v17 + 80));
      v16[3] = CpcRegisterIsSupported((__int64)(v17 + 92));
      v16[6] = CpcRegisterIsSupported((__int64)(v17 + 104));
      v16[7] = CpcRegisterIsSupported((__int64)(v17 + 56));
      v124 = CpcRegisterIsSupported(v18);
      v19 = CpcRegisterIsSupported((__int64)(v17 + 212));
      v22 = (unsigned __int8)v131;
      if ( v19 )
        v22 = v21;
      v16[4] = v19;
      v131 = v22;
      v23 = CpcRegisterIsSupported(v20);
      LOBYTE(v26) = v132;
      v16[5] = v23;
      v25 = 0;
      v26 = (unsigned __int8)v26;
      if ( v23 )
        v26 = v24;
      v27 = v17[140] == 127;
      v132 = v26;
      v28 = 0;
      if ( !v27 )
        v28 = v126;
      if ( v17[152] != 127 )
        v25 = v28;
      v126 = v25;
      if ( !qword_1C00135C0 || !(unsigned __int8)qword_1C00135C0(v17) )
        v118 = 0;
      v29 = 0;
      memset(v133, 0, 12);
      v30 = 0;
      while ( 1 )
      {
        if ( v29 )
        {
          switch ( v29 )
          {
            case 1u:
              v31 = 80LL;
              break;
            case 2u:
              v31 = 92LL;
              break;
            case 3u:
              v31 = 212LL;
              break;
            default:
              v31 = 104LL;
              break;
          }
        }
        else
        {
          v31 = 68LL;
        }
        if ( !CpcRegisterIsSupported((__int64)&v17[v31]) )
          goto LABEL_65;
        v113 = 1;
        if ( CpcRegisterIsSupported((__int64)v133) )
          break;
        v30 = v34;
        v37 = *(_BYTE *)(v33 + 3);
        *(_QWORD *)((char *)v133 + 4) = *(_QWORD *)(v33 + 4);
        BYTE3(v133[0]) = v37;
        LOBYTE(v133[0]) = v34;
LABEL_65:
        v29 = v32 + 1;
        if ( v29 >= 5 )
        {
          v38 = v116;
          goto LABEL_67;
        }
      }
      if ( v30 == v34 && v35 == *(_QWORD *)(v33 + 4) && v36 == *(_BYTE *)(v33 + 3) )
        goto LABEL_65;
      v38 = 0;
      v116 = 0;
LABEL_67:
      if ( v113 && v38 )
      {
        v39 = v133[1];
        *(_QWORD *)(v16 + 28) = v133[0];
        *((_DWORD *)v16 + 9) = v39;
      }
      if ( qword_1C00135D0 )
      {
        v2 = (unsigned __int8)v2;
        if ( (int)qword_1C00135D0(v16 - 92, &v143, &v147, &v148, &v144, v125, &v135, &v136) < 0 )
          v2 = 0;
      }
      v40 = 19LL;
      v41 = (unsigned int *)&Cpc2RegisterTable;
      do
      {
        v42 = *v41;
        v41 += 6;
        v3 = (unsigned __int8)v3;
        if ( v17[v42] == 10 )
          v3 = 1;
        --v40;
      }
      while ( v40 );
      v139 = v3;
      v16 += 368;
      if ( (unsigned int)EnumerateNextDevice((__int64)v134, &DeferredContext) )
      {
        v128 = v15;
        v5 = 0LL;
        v129 = (int)v11;
        v11 = v145;
        v130 = v2;
        break;
      }
    }
  }
  if ( !v143 || !v144 )
    LOBYTE(v130) = 0;
  if ( (_BYTE)v3 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(qword_1C0013940 + 88))(*(_QWORD *)(qword_1C0013940 + 56));
    if ( v8 < 0 )
      goto LABEL_280;
    ResetEnumerationContext(v134);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v134, &DeferredContext) )
    {
      v43 = 0;
      v44 = v11 + 112;
      do
      {
        if ( *(v44 - 20) )
        {
          v45 = *(_QWORD *)v44;
          v46 = DeferredContext;
          if ( *(_BYTE *)(*(_QWORD *)v44 + 176LL) == 127 && !*((_BYTE *)DeferredContext + 78) )
          {
            KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
            p_PreviousAffinity = &PreviousAffinity;
            if ( v43 )
              p_PreviousAffinity = 0LL;
            KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
            v43 = 1;
          }
          WriteGenAddrMaybeHidden((__int64)v46, (_BYTE *)(v45 + 176), 1uLL);
        }
        v44 += 368;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v134, &DeferredContext) );
      v114 = v43;
      v5 = v142;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C0013940 + 104))(*(_QWORD *)(qword_1C0013940 + 56), 0LL);
    if ( v8 < 0 )
      goto LABEL_280;
  }
  ResetEnumerationContext(v134);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v134, &DeferredContext) )
  {
    v48 = (__int64 *)(v11 + 112);
    v49 = v141;
    do
    {
      v50 = *v48;
      if ( *((_BYTE *)DeferredContext + 78)
        && *(_BYTE *)(v50 + 20) == 10
        && !ReadGenAddrHidden(*((_DWORD *)DeferredContext + 20), v50 + 20) )
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
        *(_QWORD *)(v50 + 20) = *(_QWORD *)(v49 + 20);
        *(_DWORD *)(v50 + 28) = *((_DWORD *)v49 + 7);
        if ( *(_BYTE *)(v50 + 8) == 10 )
        {
          *(_QWORD *)(v50 + 8) = *((_QWORD *)v49 + 1);
          *(_DWORD *)(v50 + 16) = *((_DWORD *)v49 + 4);
        }
        if ( *(_BYTE *)(v50 + 32) == 10 )
        {
          *(_QWORD *)(v50 + 32) = *((_QWORD *)v49 + 4);
          *(_DWORD *)(v50 + 40) = *((_DWORD *)v49 + 10);
        }
        if ( *(_BYTE *)(v50 + 44) == 10 )
        {
          *(_QWORD *)(v50 + 44) = *(_QWORD *)(v49 + 44);
          *(_DWORD *)(v50 + 52) = *((_DWORD *)v49 + 13);
        }
        if ( *(_BYTE *)(v50 + 224) == 10 )
        {
          *(_QWORD *)(v50 + 224) = *((_QWORD *)v49 + 28);
          *(_DWORD *)(v50 + 232) = *((_DWORD *)v49 + 58);
        }
        if ( *(_BYTE *)(v50 + 56) == 10 )
        {
          *(_QWORD *)(v50 + 56) = *((_QWORD *)v49 + 7);
          *(_DWORD *)(v50 + 64) = *((_DWORD *)v49 + 16);
        }
      }
      v48 += 46;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64)v134, &DeferredContext) );
    v11 = v145;
    v5 = 0LL;
  }
  ResetEnumerationContext(v134);
  if ( (unsigned int)EnumerateNextDevice((__int64)v134, &DeferredContext) )
  {
    v69 = 1;
LABEL_164:
    if ( *((_QWORD *)v11 + 1) < *((_QWORD *)v11 + 2) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_162;
      v71 = 41;
LABEL_167:
      v72 = v69;
LABEL_161:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        v72,
        v71,
        (__int64)&WPP_5ebc86338b0b3226bdc1929ba03294e5_Traceguids);
      goto LABEL_162;
    }
    v73 = v11 + 32;
    if ( *((_QWORD *)v11 + 3) < *((_QWORD *)v11 + 4) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_162;
      v71 = 42;
      goto LABEL_167;
    }
    v74 = v69 + ((_BYTE)v126 != 0);
    v75 = (32 * PerfDomain + 447) & 0xFFFFFFF8;
    v76 = v75 + 24 * v74;
    v128 = v76 + 8 * PerfDomain * v74;
    v77 = v128;
    v78 = ExAllocatePoolWithTag(NonPagedPoolNx, v128, 0x72637250u);
    v142 = v78;
    v5 = v78;
    if ( !v78 )
      goto LABEL_8;
    memset(v78, 0, v77);
    v79 = v140;
    if ( *(_BYTE *)(v140 + 1122) )
      v5[48] = PepParkPreference;
    if ( (*(_QWORD *)(v79 + 264) & 0x10000000000LL) != 0 )
    {
      v5[49] = PepParkMask;
      v5[50] = PepPerfCheckComplete;
      v5[9] = *(_QWORD *)(v79 + 1104);
    }
    v80 = v130;
    v81 = PerfDomain;
    v82 = v146;
    v5[52] = v5 + 55;
    v83 = (__int64)v5 + v75;
    *(_DWORD *)v5 = 62;
    *((_DWORD *)v5 + 4) = v81;
    *((_DWORD *)v5 + 9) = v74;
    v5[51] = v83;
    v5[53] = (char *)v5 + v76;
    *((_WORD *)v5 + 2) = v82;
    if ( v80 )
    {
      v5[42] = v143;
      v5[43] = v147;
      if ( v138 && v148 )
      {
        v84 = v113;
        if ( v82 == 254 )
        {
          v5[44] = v148;
          v5[10] = v11;
        }
      }
      else
      {
        v84 = v113;
      }
LABEL_190:
      v86 = v144;
      if ( v80 )
      {
LABEL_192:
        v5[41] = v86;
        if ( (_BYTE)v139 )
        {
          if ( v115 )
            v5[45] = CpcReadFeedback;
          if ( v117 )
          {
            v5[46] = CpcAcquirePerformance;
            v5[47] = CpcCommitPerformance;
          }
          if ( v120 )
          {
            v5[38] = AcquirePccSubspace;
            v5[39] = ExecutePccWrite;
          }
          v87 = *(_DWORD *)(qword_1C0013940 + 68);
          if ( v87 )
          {
            v79 = v140;
            *((_DWORD *)v5 + 10) = 0x989680 / (v87 >> 1);
          }
        }
        if ( IsSupported || (*(_QWORD *)(v79 + 264) & 0x4000000000LL) != 0 )
          v5[40] = CpcReinitializeHandler;
        *((_BYTE *)v5 + 6) = 0;
        v88 = v84 || v80;
        *((_BYTE *)v5 + 7) = v88;
        *((_BYTE *)v5 + 8) = v118;
        *((_BYTE *)v5 + 52) = v122;
        *((_DWORD *)v5 + 5) = v127;
        *((_DWORD *)v5 + 6) = *((_DWORD *)v11 + 17);
        v89 = *((_DWORD *)v11 + 19);
        *((_DWORD *)v5 + 7) = v89;
        v90 = *((_DWORD *)v11 + 20);
        if ( !v89 )
          v89 = 1;
        *((_DWORD *)v5 + 7) = v89;
        if ( !v90 )
          v90 = 1;
        *((_DWORD *)v5 + 8) = v90;
        v5[7] = *(_QWORD *)v73;
        v5[8] = *((_QWORD *)v11 + 2);
        v91 = *(_QWORD *)(v79 + 336);
        if ( v91 )
          v5[32] = v91;
        v5[34] = *(_QWORD *)(v79 + 344);
        if ( (_BYTE)v131 )
          *((_BYTE *)v5 + 9) = 1;
        if ( (_BYTE)v132 )
        {
          if ( v80 )
            *((_BYTE *)v5 + 10) = 1;
          else
            v5[36] = CpcSetAutonomousActivityWindow;
        }
        if ( v123 )
          v5[37] = CpcSetAutonomousMode;
        if ( v124 )
          v5[33] = CpcSetTimeWindow;
        if ( (*(_DWORD *)(v79 + 264) & 0x400000) != 0 && v80 && (v82 == 254 || v81 == 1) )
        {
          *((_BYTE *)v5 + 11) = 1;
          if ( (*(_QWORD *)(v79 + 264) & 0x400000000LL) == 0 || (v92 = 0, v125[0]) )
            v92 = 1;
          *((_BYTE *)v5 + 12) = v92;
          *((_DWORD *)v5 + 12) = v135;
          *((_DWORD *)v5 + 108) = v136;
        }
        v93 = *((_QWORD *)v11 + 2);
        v94 = *((_QWORD *)v11 + 5);
        if ( v93 == v94 )
        {
          LODWORD(v95) = 100;
        }
        else
        {
          v96 = 100 * v94;
          v95 = 100 * v94 / v93;
          v79 = v96 % v93;
        }
        *(_DWORD *)(v83 + 8) = v95;
        *(_QWORD *)v83 = PerfReadWrappingCounter;
        *(_DWORD *)(v83 + 12) = 1;
        *(_BYTE *)(v83 + 17) = 1;
        *(_BYTE *)(v83 + 16) = v115 == 0;
        if ( (_BYTE)v126 )
        {
          v97 = v5[51];
          *(_QWORD *)(v97 + 32) = 100LL;
          *(_QWORD *)(v97 + 24) = PerfReadWrappingCounter;
          *(_WORD *)(v97 + 40) = 257;
        }
        DisplayKernelPerfStates((__int64)v5, v79, v83);
        v98 = v5[52];
        v99 = (_QWORD *)v5[53];
        ResetEnumerationContext(v134);
        if ( !(unsigned int)EnumerateNextDevice((__int64)v134, &DeferredContext) )
        {
          do
          {
            v100 = (_BYTE *)*((_QWORD *)v73 + 10);
            v101 = 100;
            v102 = DeferredContext;
            v141 = v100;
            if ( v73[67] )
            {
              v103 = (__int64)(v100 + 56);
              if ( v100[56] == 127 && !*((_BYTE *)DeferredContext + 78) )
              {
                KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
                v104 = &PreviousAffinity;
                if ( v114 )
                  v104 = 0LL;
                KeSetSystemGroupAffinityThread(&Affinity, v104);
                v114 = 1;
              }
              GenAddrMaybeHidden = ReadGenAddrMaybeHidden((__int64)v102, v103);
              v106 = *((_QWORD *)v73 - 2);
              if ( GenAddrMaybeHidden > v106 )
              {
                GenAddrMaybeHidden = *((_QWORD *)v73 - 2);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  WPP_RECORDER_SF_(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    3u,
                    1u,
                    0x2Bu,
                    (__int64)&WPP_5ebc86338b0b3226bdc1929ba03294e5_Traceguids);
                  GenAddrMaybeHidden = *((_QWORD *)v73 - 2);
                }
                v106 = GenAddrMaybeHidden;
              }
              if ( GenAddrMaybeHidden < *(_QWORD *)v73 )
              {
                GenAddrMaybeHidden = *(_QWORD *)v73;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  WPP_RECORDER_SF_(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    3u,
                    1u,
                    0x2Cu,
                    (__int64)&WPP_5ebc86338b0b3226bdc1929ba03294e5_Traceguids);
                  GenAddrMaybeHidden = *(_QWORD *)v73;
                  v106 = *((_QWORD *)v73 - 2);
                }
              }
              v101 = *((_DWORD *)v73 + 12);
              *((_QWORD *)v73 + 3) = GenAddrMaybeHidden;
              v107 = 100 * GenAddrMaybeHidden / v106;
              if ( (unsigned int)v107 > v101 )
                v101 = v107;
              *((_DWORD *)v73 + 13) = v101;
              if ( v101 != v102[181] )
                ProcLibCapChange(v140, v102[112], v102[124], v101);
              v100 = v141;
            }
            else
            {
              *((_QWORD *)v73 + 3) = *((_QWORD *)v73 - 2);
            }
            *((_QWORD *)v73 - 4) = v102;
            *(_QWORD *)(v98 + 8) = v73 - 32;
            if ( *((_BYTE *)v102 + 78) )
            {
              v108 = v102[20];
              *(_BYTE *)(v98 + 28) = 1;
            }
            else
            {
              v108 = v102[14];
            }
            *(_DWORD *)v98 = v108;
            *(_DWORD *)(v98 + 20) = v102[180];
            *(_DWORD *)(v98 + 16) = v101;
            *(_DWORD *)(v98 + 24) = v101 < 0x64 ? 2 : 0;
            *v99 = v73 + 128;
            *((_QWORD *)v73 + 22) = GetCpcDifferentialFeedback;
            *((_QWORD *)v73 + 23) = v100;
            v109 = v100[153];
            if ( v109 < 0x40u )
              *((_QWORD *)v73 + 20) = (1LL << v109) - 1;
            v110 = v100[141];
            if ( v110 < 0x40u )
              *((_QWORD *)v73 + 21) = (1LL << v110) - 1;
            ++v99;
            if ( (_BYTE)v126 )
            {
              *v99++ = v73 + 192;
              *((_QWORD *)v73 + 30) = *((_QWORD *)v102 + 41);
            }
            v98 += 32LL;
            v73 += 368;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64)v134, &DeferredContext) );
          v5 = v142;
          v11 = v145;
        }
        if ( v114 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        v8 = v149(v5, v128);
        if ( v8 >= 0 )
        {
          ResetEnumerationContext(v134);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v134, &DeferredContext) )
          {
            *((_QWORD *)DeferredContext + 30) = v11;
            v11 += 368;
          }
          if ( (*(_QWORD *)(v140 + 264) & 0x4000000000LL) != 0 )
          {
            ResetEnumerationContext(v134);
            while ( !(unsigned int)EnumerateNextDevice((__int64)v134, &DeferredContext) )
            {
              if ( !*((_BYTE *)DeferredContext + 78) )
                CpcConnectNativeInterrupt(DeferredContext);
            }
          }
          v11 = 0LL;
          v8 = 0;
        }
        goto LABEL_280;
      }
LABEL_191:
      v86 = PerfSelectionCpc;
      goto LABEL_192;
    }
    v84 = v113;
    if ( v113 )
    {
      if ( v116 )
      {
        v5[42] = PerfControlCpcSingleRegister;
        v85 = PerfControlCpcSingleRegisterHidden;
      }
      else
      {
        v5[42] = PerfControlCpc;
        v85 = (void *)qword_1C0013588;
        if ( !qword_1C0013588 || !CpcHiddenProcessorMitigationReported )
        {
          v5[43] = PerfControlCpcHidden;
          goto LABEL_190;
        }
      }
    }
    else
    {
      v85 = AcpiCStateIdleCancel;
      v5[42] = AcpiCStateIdleCancel;
    }
    v5[43] = v85;
    goto LABEL_191;
  }
  v51 = v11 + 100;
  while ( 1 )
  {
    v52 = *(_BYTE **)(v51 + 12);
    v53 = DeferredContext;
    if ( (v52[8] == 127 || v52[20] == 127 || v52[32] == 127 || v52[44] == 127 || v52[224] == 127 || v52[188] == 127)
      && !*((_BYTE *)DeferredContext + 78) )
    {
      KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
      v54 = &PreviousAffinity;
      if ( v114 )
        v54 = 0LL;
      KeSetSystemGroupAffinityThread(&Affinity, v54);
      v114 = 1;
    }
    *v51 = v115;
    v51[1] = v129;
    v51[2] = v128;
    v51[3] = v117;
    *((_DWORD *)v51 - 9) = v127;
    *(_QWORD *)(v51 - 92) = ReadGenAddrMaybeHidden((__int64)v53, (__int64)(v52 + 8));
    v55 = ReadGenAddrMaybeHidden((__int64)v53, (__int64)(v52 + 20));
    *(_QWORD *)(v51 - 84) = v55;
    if ( !v55 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_162;
      v71 = 35;
      v72 = 1;
      goto LABEL_161;
    }
    v56 = ReadGenAddrMaybeHidden((__int64)v53, (__int64)(v52 + 32));
    v57 = *(_QWORD *)(v51 - 84);
    *(_QWORD *)(v51 - 76) = v56;
    if ( v56 > v57 )
      *(_QWORD *)(v51 - 76) = v57;
    *(_QWORD *)(v51 - 68) = ReadGenAddrMaybeHidden((__int64)v53, (__int64)(v52 + 44));
    *(_QWORD *)(v51 - 60) = ReadGenAddrMaybeHidden((__int64)v53, (__int64)(v52 + 224));
    if ( CpcRegisterIsSupported((__int64)(v52 + 188)) )
    {
      v122 = ReadGenAddrMaybeHidden((__int64)v53, (__int64)(v52 + 188)) != 0;
      v123 = v52[188] != 126;
    }
    if ( v51 - 100 == v11 )
      goto LABEL_144;
    v61 = *(_QWORD *)(v51 - 92);
    v62 = *((_QWORD *)v11 + 1);
    if ( v61 != v62 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_162;
      v70 = 36;
      goto LABEL_158;
    }
    v61 = *(_QWORD *)(v51 - 84);
    v62 = *((_QWORD *)v11 + 2);
    if ( v61 != v62 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_162;
      v70 = 37;
      goto LABEL_158;
    }
    v61 = *(_QWORD *)(v51 - 68);
    v62 = *((_QWORD *)v11 + 4);
    if ( v61 != v62 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_162;
      v70 = 38;
LABEL_158:
      WPP_RECORDER_SF_ii(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v70,
        (__int64)&WPP_5ebc86338b0b3226bdc1929ba03294e5_Traceguids,
        v61,
        v62);
      goto LABEL_162;
    }
    v63 = *(_QWORD *)(v51 - 76);
    v64 = *((_QWORD *)v11 + 3);
    if ( v63 != v64 )
      break;
LABEL_144:
    v65 = *(_QWORD *)(v51 - 84);
    v66 = 100LL * *(_QWORD *)(v51 - 92) / v65;
    *((_DWORD *)v51 - 8) = v66;
    *((_DWORD *)v51 - 7) = v66;
    v67 = 100LL * *(_QWORD *)(v51 - 76) / v65;
    v68 = 100LL * *(_QWORD *)(v51 - 68) / v65;
    if ( !(_DWORD)v68 )
      LODWORD(v68) = 1;
    *((_DWORD *)v51 - 5) = v68;
    if ( !(_DWORD)v67 )
      LODWORD(v67) = 1;
    *((_DWORD *)v51 - 6) = v67;
    v51 += 368;
    if ( (unsigned int)EnumerateNextDevice((__int64)v134, &DeferredContext) )
      goto LABEL_164;
  }
  if ( v118 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_iii((__int64)WPP_GLOBAL_Control->DeviceExtension, v58, v59, v60, v112);
      v64 = *((_QWORD *)v11 + 3);
    }
    *(_QWORD *)(v51 - 76) = v64;
    goto LABEL_144;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ii(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x27u,
      (__int64)&WPP_5ebc86338b0b3226bdc1929ba03294e5_Traceguids,
      v63,
      *((_QWORD *)v11 + 3));
LABEL_162:
  v8 = -1073741811;
LABEL_280:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0013418);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x72637250u);
  return (unsigned int)v8;
}
