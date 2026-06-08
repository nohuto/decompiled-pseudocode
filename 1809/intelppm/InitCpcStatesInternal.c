/*
 * XREFs of InitCpcStatesInternal @ 0x1C002FF1C
 * Callers:
 *     RegisterHvCpcCounters @ 0x1C002C900 (RegisterHvCpcCounters.c)
 *     RegisterKernelCpc @ 0x1C0031A50 (RegisterKernelCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002E78 (WPP_RECORDER_SF_.c)
 *     EnumerateNextDevice @ 0x1C0002F1C (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0002F5C (ResetEnumerationContext.c)
 *     DisplayKernelPerfStates @ 0x1C0003050 (DisplayKernelPerfStates.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0004238 (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ReadGenAddrHidden @ 0x1C00042AC (ReadGenAddrHidden.c)
 *     ReadGenAddrMaybeHidden @ 0x1C0004318 (ReadGenAddrMaybeHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C000447C (WriteGenAddrMaybeHidden.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004FC0 (memset.c)
 *     CpcRegisterIsSupported @ 0x1C00088C4 (CpcRegisterIsSupported.c)
 *     WPP_RECORDER_SF_ii @ 0x1C000D83C (WPP_RECORDER_SF_ii.c)
 *     WPP_RECORDER_SF_iii @ 0x1C000D964 (WPP_RECORDER_SF_iii.c)
 *     InitCommonPerfStateContext @ 0x1C001E008 (InitCommonPerfStateContext.c)
 *     ProcLibCapChange @ 0x1C0020310 (ProcLibCapChange.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0023418 (GetRegistryDwordValueNoDefault.c)
 *     GetPerfDomain @ 0x1C0023648 (GetPerfDomain.c)
 *     CpcConnectNativeInterrupt @ 0x1C002A664 (CpcConnectNativeInterrupt.c)
 *     GetPackageAffinity @ 0x1C002FD48 (GetPackageAffinity.c)
 */

__int64 __fastcall InitCpcStatesInternal(__int64 a1, __int64 (__fastcall *a2)(_QWORD *, _QWORD))
{
  unsigned int v2; // r12d
  int v3; // r14d
  int v4; // r13d
  _QWORD *v6; // rbx
  int RegistryDwordValueNoDefault; // eax
  int v8; // ecx
  int v9; // edi
  void (__fastcall *v10)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  SIZE_T v11; // rdi
  char *PoolWithTag; // rax
  char *v13; // rsi
  __int64 v14; // r15
  int v15; // eax
  char v16; // r10
  char v17; // r10
  int v18; // eax
  unsigned int v19; // r11d
  __int64 v20; // rdx
  unsigned int v21; // ebx
  char v22; // r15
  char *v23; // r12
  _BYTE *v24; // rdi
  __int64 v25; // rdx
  char v26; // al
  __int64 v27; // r9
  int v28; // r11d
  int v29; // ecx
  char v30; // al
  unsigned int v31; // r10d
  int v32; // r11d
  unsigned int v33; // r8d
  int v34; // ecx
  bool v35; // zf
  unsigned __int8 v36; // cl
  char v37; // al
  unsigned int v38; // r8d
  char v39; // r14
  __int64 v40; // rax
  int v41; // r8d
  __int64 v42; // rdx
  char v43; // r9
  __int64 v44; // r10
  char v45; // r11
  char v46; // r11
  int v47; // eax
  unsigned int *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rax
  char *v51; // rdi
  char v52; // bl
  __int64 v53; // r12
  PVOID v54; // r14
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 *v56; // r13
  __int64 v57; // rdi
  char *v58; // rdi
  char *v59; // r14
  PVOID v60; // r15
  struct _GROUP_AFFINITY *v61; // rdx
  __int64 GenAddrMaybeHidden; // rax
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rcx
  unsigned __int64 v71; // rcx
  int v72; // eax
  unsigned __int64 v73; // r8
  unsigned __int64 v74; // rax
  int v75; // r10d
  unsigned __int16 v76; // r9
  unsigned __int16 v77; // r9
  unsigned int v78; // r8d
  char *v79; // rdi
  int v80; // r14d
  unsigned int v81; // r15d
  unsigned int v82; // r13d
  unsigned int v83; // r12d
  _QWORD *v84; // rax
  unsigned __int64 v85; // rdx
  char v86; // r10
  int v87; // r12d
  int v88; // r9d
  char *v89; // r8
  char v90; // r11
  void *v91; // rax
  __int64 (__fastcall *v92)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // rax
  unsigned int v93; // ecx
  bool v94; // al
  int v95; // eax
  int v96; // ecx
  __int64 v97; // rax
  char v98; // al
  unsigned __int64 v99; // rcx
  __int64 v100; // rax
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rtt
  __int64 v103; // rax
  _QWORD *v104; // r12
  __int64 v105; // r10
  __int64 v106; // rbx
  char *v107; // r13
  unsigned int v108; // r14d
  _DWORD *v109; // r15
  struct _GROUP_AFFINITY *v110; // rdx
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rcx
  unsigned __int64 v113; // rax
  __int64 v114; // r10
  char v115; // cl
  char v116; // cl
  int v118; // [rsp+20h] [rbp-E0h]
  char v119; // [rsp+40h] [rbp-C0h]
  char v120; // [rsp+41h] [rbp-BFh]
  char v121; // [rsp+42h] [rbp-BEh]
  char v122; // [rsp+43h] [rbp-BDh]
  char v123; // [rsp+44h] [rbp-BCh]
  char v124; // [rsp+45h] [rbp-BBh]
  PVOID DeferredContext; // [rsp+48h] [rbp-B8h] BYREF
  char v126; // [rsp+50h] [rbp-B0h]
  char IsSupported; // [rsp+51h] [rbp-AFh]
  bool v128; // [rsp+52h] [rbp-AEh]
  bool v129; // [rsp+53h] [rbp-ADh]
  char v130; // [rsp+54h] [rbp-ACh]
  char v131; // [rsp+55h] [rbp-ABh] BYREF
  char v132[2]; // [rsp+56h] [rbp-AAh] BYREF
  unsigned int v133; // [rsp+58h] [rbp-A8h]
  int v134; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v135; // [rsp+60h] [rbp-A0h]
  int v136; // [rsp+64h] [rbp-9Ch]
  int v137; // [rsp+68h] [rbp-98h]
  int v138; // [rsp+6Ch] [rbp-94h]
  int v139; // [rsp+70h] [rbp-90h]
  int v140; // [rsp+74h] [rbp-8Ch]
  _QWORD v141[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v142[4]; // [rsp+88h] [rbp-78h] BYREF
  int v143; // [rsp+A8h] [rbp-58h]
  int PerfDomain; // [rsp+ACh] [rbp-54h]
  _QWORD *v145; // [rsp+B0h] [rbp-50h]
  __int64 v146; // [rsp+B8h] [rbp-48h]
  __int64 v147; // [rsp+C0h] [rbp-40h]
  int v148; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v149; // [rsp+D0h] [rbp-30h] BYREF
  __int64 (__fastcall *v150)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // [rsp+D8h] [rbp-28h] BYREF
  char *v151; // [rsp+E0h] [rbp-20h]
  __int64 v152; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v153; // [rsp+F0h] [rbp-10h] BYREF
  __int64 (__fastcall *v154)(_QWORD *, _QWORD); // [rsp+F8h] [rbp-8h]
  struct _GROUP_AFFINITY Affinity; // [rsp+100h] [rbp+0h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v157[176]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v158[176]; // [rsp+1D0h] [rbp+D0h] BYREF

  v4 = 0;
  v154 = a2;
  v147 = a1;
  v6 = 0LL;
  v120 = 0;
  v145 = 0LL;
  v134 = 0;
  RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                  (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                  (__int64)L"~MHz",
                                  (__int64)&v134);
  v8 = v134;
  if ( RegistryDwordValueNoDefault < 0 )
    v8 = 0;
  v134 = v8;
  if ( !v8 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x21u,
      (__int64)&WPP_74c73a8d2c983a7ecb82bd797551b25b_Traceguids);
    *(_QWORD *)(a1 + 264) &= ~0x8000000uLL;
    return (unsigned int)-1073741823;
  }
  LOBYTE(v2) = *(_QWORD *)(a1 + 312) != 0LL;
  v10 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v133 = v2;
  v10(WdfDriverGlobals, qword_1C001A398, 0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v142, &v148);
  v11 = (unsigned int)(368 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72637250u);
  v151 = PoolWithTag;
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_6;
  memset(PoolWithTag, 0, v11);
  v132[0] = 0;
  LOBYTE(v3) = 0;
  v122 = 1;
  v131 = 1;
  v124 = 1;
  LOBYTE(v140) = 0;
  LOBYTE(v135) = 0;
  v126 = 0;
  v121 = 0;
  v123 = 0;
  LOBYTE(v138) = 0;
  IsSupported = 0;
  LOBYTE(v139) = 0;
  v130 = 0;
  v119 = 0;
  v129 = 0;
  v128 = 0;
  LOBYTE(v4) = 1;
  v137 = v3;
  v150 = 0LL;
  v14 = 0LL;
  v149 = 0LL;
  v152 = 0LL;
  v146 = 0LL;
  v153 = 0LL;
  v136 = v4;
  KeInitializeAffinityEx(v157);
  ResetEnumerationContext(v142);
  v15 = EnumerateNextDevice((__int64)v142, &DeferredContext);
  v16 = 0;
  while ( !v15 )
  {
    if ( *((_BYTE *)DeferredContext + 78) == v16 )
      KeAddProcessorAffinityEx(v157, *((unsigned int *)DeferredContext + 14));
    v15 = EnumerateNextDevice((__int64)v142, &DeferredContext);
  }
  LOBYTE(v11) = v16;
  v143 = v11;
  ResetEnumerationContext(v142);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v142, &DeferredContext) )
  {
    if ( *((_BYTE *)DeferredContext + 78) == v17 )
    {
      v14 = *((_QWORD *)DeferredContext + 70);
      v146 = v14;
      if ( (int)GetPackageAffinity((__int64)DeferredContext, (__int64)v158) >= 0 )
      {
        LODWORD(v11) = (unsigned __int8)v11;
        if ( (unsigned int)KeIsEqualAffinityEx(v158, v157) )
          LODWORD(v11) = 1;
        v143 = v11;
      }
      break;
    }
  }
  ResetEnumerationContext(v142);
  v18 = EnumerateNextDevice((__int64)v142, &DeferredContext);
  LOBYTE(v20) = 10;
  if ( !v18 )
  {
    LOBYTE(v21) = v135;
    v22 = 1;
    v133 = v2;
    v23 = v13 + 92;
    LOBYTE(v13) = v140;
    while ( 1 )
    {
      v24 = (_BYTE *)*((_QWORD *)DeferredContext + 70);
      if ( v24[140] == 10 || v24[152] == 10 )
        v121 = v19;
      if ( v24[176] == 10 || v24[80] == 10 || v24[92] == 10 || v24[68] == 10 || v24[104] == 10 || v24[212] == 10 )
        v123 = v19;
      LODWORD(v13) = (unsigned __int8)v13;
      if ( v24[56] == 10 )
        LODWORD(v13) = v19;
      v21 = (unsigned __int8)v21;
      if ( v24[8] == 10 )
        v21 = v19;
      if ( v24[200] == 10 || v24[188] == 10 || v24[116] == 10 )
        v126 = v19;
      *(_QWORD *)(v23 + 20) = v24;
      IsSupported = CpcRegisterIsSupported((__int64)(v24 + 176));
      *v23 = IsSupported;
      v23[1] = CpcRegisterIsSupported((__int64)(v24 + 68));
      v23[2] = CpcRegisterIsSupported((__int64)(v24 + 80));
      v23[3] = CpcRegisterIsSupported((__int64)(v24 + 92));
      v23[6] = CpcRegisterIsSupported((__int64)(v24 + 104));
      v23[7] = CpcRegisterIsSupported((__int64)(v24 + 56));
      v130 = CpcRegisterIsSupported(v25);
      v26 = CpcRegisterIsSupported((__int64)(v24 + 212));
      v29 = (unsigned __int8)v138;
      if ( v26 )
        v29 = v28;
      v23[4] = v26;
      v138 = v29;
      v30 = CpcRegisterIsSupported(v27);
      LOBYTE(v34) = v139;
      v23[5] = v30;
      v33 = v31;
      v34 = (unsigned __int8)v34;
      if ( v30 )
        v34 = v32;
      v35 = v24[140] == 127;
      v139 = v34;
      v36 = v31;
      if ( !v35 )
        v36 = v133;
      if ( v24[152] != 127 )
        v33 = v36;
      v133 = v33;
      if ( !qword_1C001A530 || (v37 = qword_1C001A530(v24), v31 = 0, !v37) )
        v124 = v31;
      v38 = v31;
      memset(v141, 0, 12);
      v39 = 0;
      while ( 1 )
      {
        if ( v38 )
        {
          switch ( v38 )
          {
            case 1u:
              v40 = 80LL;
              break;
            case 2u:
              v40 = 92LL;
              break;
            case 3u:
              v40 = 212LL;
              break;
            default:
              v40 = 104LL;
              break;
          }
        }
        else
        {
          v40 = 68LL;
        }
        if ( !CpcRegisterIsSupported((__int64)&v24[v40]) )
          goto LABEL_66;
        v119 = 1;
        if ( CpcRegisterIsSupported((__int64)v141) )
          break;
        v39 = v43;
        v46 = *(_BYTE *)(v42 + 3);
        *(_QWORD *)((char *)v141 + 4) = *(_QWORD *)(v42 + 4);
        BYTE3(v141[0]) = v46;
        LOBYTE(v141[0]) = v43;
LABEL_66:
        v38 = v41 + 1;
        if ( v38 >= 5 )
          goto LABEL_67;
      }
      if ( v39 == v43 && v44 == *(_QWORD *)(v42 + 4) && v45 == *(_BYTE *)(v42 + 3) )
        goto LABEL_66;
      v22 = 0;
LABEL_67:
      if ( v119 && v22 )
      {
        v47 = v141[1];
        *(_QWORD *)(v23 + 28) = v141[0];
        *((_DWORD *)v23 + 9) = v47;
      }
      if ( qword_1C001A540 )
      {
        v4 = (unsigned __int8)v4;
        if ( (int)qword_1C001A540(v23 - 92, &v149, &v152, &v153, &v150, &v131, v132) < 0 )
          v4 = 0;
      }
      LOBYTE(v3) = v137;
      v48 = (unsigned int *)&Cpc2RegisterTable;
      v49 = 19LL;
      do
      {
        v50 = *v48;
        v48 += 6;
        v3 = (unsigned __int8)v3;
        if ( v24[v50] == 10 )
          v3 = 1;
        --v49;
      }
      while ( v49 );
      v137 = v3;
      v23 += 368;
      if ( (unsigned int)EnumerateNextDevice((__int64)v142, &DeferredContext) )
      {
        v122 = v22;
        v14 = v146;
        v135 = v21;
        v6 = v145;
        v140 = (int)v13;
        v13 = v151;
        v136 = v4;
        break;
      }
    }
  }
  if ( !v149 || !v150 )
    LOBYTE(v136) = 0;
  if ( (_BYTE)v3 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(qword_1C001A8B0 + 88))(*(_QWORD *)(qword_1C001A8B0 + 56), v20);
    if ( v9 < 0 )
      goto LABEL_264;
    ResetEnumerationContext(v142);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v142, &DeferredContext) )
    {
      v51 = v13 + 112;
      v52 = 0;
      do
      {
        if ( *(v51 - 20) )
        {
          v53 = *(_QWORD *)v51;
          v54 = DeferredContext;
          if ( *(_BYTE *)(*(_QWORD *)v51 + 176LL) == 127 && !*((_BYTE *)DeferredContext + 78) )
          {
            KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
            p_PreviousAffinity = &PreviousAffinity;
            if ( v52 )
              p_PreviousAffinity = 0LL;
            KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
            v52 = 1;
          }
          WriteGenAddrMaybeHidden((__int64)v54, (_BYTE *)(v53 + 176), 1LL);
        }
        v51 += 368;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v142, &DeferredContext) );
      v120 = v52;
      v6 = 0LL;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C001A8B0 + 104))(*(_QWORD *)(qword_1C001A8B0 + 56), 0LL);
    if ( v9 < 0 )
      goto LABEL_264;
  }
  ResetEnumerationContext(v142);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v142, &DeferredContext) )
  {
    v56 = (__int64 *)(v13 + 112);
    v6 = 0LL;
    do
    {
      v57 = *v56;
      if ( *((_BYTE *)DeferredContext + 78)
        && *(_BYTE *)(v57 + 20) == 10
        && !ReadGenAddrHidden(*((unsigned int *)DeferredContext + 20), (char *)(v57 + 20)) )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0x22u,
          (__int64)&WPP_74c73a8d2c983a7ecb82bd797551b25b_Traceguids);
        if ( !CpcHiddenProcessorMitigationReported )
        {
          ProcLibTraceHiddenProcessorDegradedOperation();
          CpcHiddenProcessorMitigationReported = 1;
        }
        *(_QWORD *)(v57 + 20) = *(_QWORD *)(v14 + 20);
        *(_DWORD *)(v57 + 28) = *(_DWORD *)(v14 + 28);
        if ( *(_BYTE *)(v57 + 8) == 10 )
        {
          *(_QWORD *)(v57 + 8) = *(_QWORD *)(v14 + 8);
          *(_DWORD *)(v57 + 16) = *(_DWORD *)(v14 + 16);
        }
        if ( *(_BYTE *)(v57 + 32) == 10 )
        {
          *(_QWORD *)(v57 + 32) = *(_QWORD *)(v14 + 32);
          *(_DWORD *)(v57 + 40) = *(_DWORD *)(v14 + 40);
        }
        if ( *(_BYTE *)(v57 + 44) == 10 )
        {
          *(_QWORD *)(v57 + 44) = *(_QWORD *)(v14 + 44);
          *(_DWORD *)(v57 + 52) = *(_DWORD *)(v14 + 52);
        }
        if ( *(_BYTE *)(v57 + 224) == 10 )
        {
          *(_QWORD *)(v57 + 224) = *(_QWORD *)(v14 + 224);
          *(_DWORD *)(v57 + 232) = *(_DWORD *)(v14 + 232);
        }
        if ( *(_BYTE *)(v57 + 56) == 10 )
        {
          *(_QWORD *)(v57 + 56) = *(_QWORD *)(v14 + 56);
          *(_DWORD *)(v57 + 64) = *(_DWORD *)(v14 + 64);
        }
      }
      v56 += 46;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64)v142, &DeferredContext) );
    v13 = v151;
  }
  ResetEnumerationContext(v142);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v142, &DeferredContext) )
  {
    v58 = v13 + 100;
    while ( 1 )
    {
      v59 = *(char **)(v58 + 12);
      v60 = DeferredContext;
      if ( (v59[8] == 127 || v59[20] == 127 || v59[32] == 127 || v59[44] == 127 || v59[224] == 127 || v59[188] == 127)
        && !*((_BYTE *)DeferredContext + 78) )
      {
        KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
        v61 = &PreviousAffinity;
        if ( v120 )
          v61 = 0LL;
        KeSetSystemGroupAffinityThread(&Affinity, v61);
        v120 = 1;
      }
      *v58 = v121;
      v58[1] = v140;
      v58[2] = v135;
      v58[3] = v123;
      *((_DWORD *)v58 - 9) = v134;
      *(_QWORD *)(v58 - 92) = ReadGenAddrMaybeHidden((__int64)v60, v59 + 8);
      GenAddrMaybeHidden = ReadGenAddrMaybeHidden((__int64)v60, v59 + 20);
      *(_QWORD *)(v58 - 84) = GenAddrMaybeHidden;
      if ( !GenAddrMaybeHidden )
        break;
      v63 = ReadGenAddrMaybeHidden((__int64)v60, v59 + 32);
      v64 = *(_QWORD *)(v58 - 84);
      *(_QWORD *)(v58 - 76) = v63;
      if ( v63 > v64 )
        *(_QWORD *)(v58 - 76) = v64;
      *(_QWORD *)(v58 - 68) = ReadGenAddrMaybeHidden((__int64)v60, v59 + 44);
      *(_QWORD *)(v58 - 60) = ReadGenAddrMaybeHidden((__int64)v60, v59 + 224);
      if ( CpcRegisterIsSupported((__int64)(v59 + 188)) )
      {
        v128 = ReadGenAddrMaybeHidden((__int64)v60, v59 + 188) != 0;
        v129 = v59[188] != 126;
      }
      if ( v58 - 100 != v13 )
      {
        v68 = *(_QWORD *)(v58 - 92);
        v69 = *((_QWORD *)v13 + 1);
        if ( v68 != v69 )
        {
          v76 = 36;
          goto LABEL_150;
        }
        v68 = *(_QWORD *)(v58 - 84);
        v69 = *((_QWORD *)v13 + 2);
        if ( v68 != v69 )
        {
          v76 = 37;
          goto LABEL_150;
        }
        v68 = *(_QWORD *)(v58 - 68);
        v69 = *((_QWORD *)v13 + 4);
        if ( v68 != v69 )
        {
          v76 = 38;
LABEL_150:
          WPP_RECORDER_SF_ii(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            v76,
            (__int64)&WPP_74c73a8d2c983a7ecb82bd797551b25b_Traceguids,
            v68,
            v69);
          goto LABEL_153;
        }
        v70 = *(_QWORD *)(v58 - 76);
        if ( v70 != *((_QWORD *)v13 + 3) )
        {
          if ( !v124 )
          {
            WPP_RECORDER_SF_ii(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x27u,
              (__int64)&WPP_74c73a8d2c983a7ecb82bd797551b25b_Traceguids,
              v70,
              *((_QWORD *)v13 + 3));
            goto LABEL_153;
          }
          WPP_RECORDER_SF_iii((__int64)WPP_GLOBAL_Control->DeviceExtension, v65, v66, v67, v118);
          *(_QWORD *)(v58 - 76) = *((_QWORD *)v13 + 3);
        }
      }
      v71 = *(_QWORD *)(v58 - 84);
      v72 = 100LL * *(_QWORD *)(v58 - 92) / v71;
      *((_DWORD *)v58 - 8) = v72;
      *((_DWORD *)v58 - 7) = v72;
      v73 = 100LL * *(_QWORD *)(v58 - 76) / v71;
      v74 = 100LL * *(_QWORD *)(v58 - 68) / v71;
      if ( !(_DWORD)v74 )
        LODWORD(v74) = 1;
      *((_DWORD *)v58 - 5) = v74;
      if ( !(_DWORD)v73 )
        LODWORD(v73) = 1;
      *((_DWORD *)v58 - 6) = v73;
      v58 += 368;
      if ( (unsigned int)EnumerateNextDevice((__int64)v142, &DeferredContext) )
        goto LABEL_155;
    }
    v77 = 35;
    v78 = 1;
    goto LABEL_152;
  }
  v75 = 1;
LABEL_155:
  if ( *((_QWORD *)v13 + 1) < *((_QWORD *)v13 + 2) )
  {
    v77 = 41;
LABEL_157:
    v78 = v75;
LABEL_152:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v78,
      v77,
      (__int64)&WPP_74c73a8d2c983a7ecb82bd797551b25b_Traceguids);
LABEL_153:
    v9 = -1073741811;
    goto LABEL_264;
  }
  v79 = v13 + 32;
  if ( *((_QWORD *)v13 + 3) < *((_QWORD *)v13 + 4) )
  {
    v77 = 42;
    goto LABEL_157;
  }
  v80 = v75 + ((_BYTE)v133 != 0);
  v81 = (32 * PerfDomain + 439) & 0xFFFFFFF8;
  v82 = v81 + 24 * v80;
  v135 = v82 + 8 * PerfDomain * v80;
  v83 = v135;
  v84 = ExAllocatePoolWithTag(NonPagedPoolNx, v135, 0x72637250u);
  v145 = v84;
  v6 = v84;
  if ( v84 )
  {
    memset(v84, 0, v83);
    v85 = v147;
    if ( *(_BYTE *)(v147 + 1106) )
      v6[48] = PepParkPreference;
    if ( (*(_QWORD *)(v85 + 264) & 0x10000000000LL) != 0 )
    {
      v6[49] = PepParkMask;
      v6[50] = PepPerfCheckComplete;
      v6[9] = *(_QWORD *)(v85 + 1088);
    }
    v86 = v136;
    v87 = PerfDomain;
    v88 = v148;
    v6[52] = v6 + 54;
    v89 = (char *)v6 + v81;
    *(_DWORD *)v6 = 60;
    *((_DWORD *)v6 + 4) = v87;
    *((_DWORD *)v6 + 9) = v80;
    v6[51] = v89;
    v6[53] = (char *)v6 + v82;
    *((_WORD *)v6 + 2) = v88;
    if ( v86 )
    {
      v6[42] = v149;
      v6[43] = v152;
      if ( (_BYTE)v143 && v153 )
      {
        v90 = v119;
        if ( v88 == 254 )
        {
          v6[44] = v153;
          v6[10] = v13;
        }
      }
      else
      {
        v90 = v119;
      }
LABEL_179:
      v92 = v150;
      if ( v86 )
      {
LABEL_181:
        v6[41] = v92;
        if ( (_BYTE)v137 )
        {
          if ( v121 )
            v6[45] = CpcReadFeedback;
          if ( v123 )
          {
            v6[46] = CpcAcquirePerformance;
            v6[47] = CpcCommitPerformance;
          }
          if ( v126 )
          {
            v6[38] = AcquirePccSubspace;
            v6[39] = ExecutePccWrite;
          }
          v93 = *(_DWORD *)(qword_1C001A8B0 + 68);
          if ( v93 )
          {
            v85 = v147;
            *((_DWORD *)v6 + 10) = 0x989680 / (v93 >> 1);
          }
        }
        if ( IsSupported || (*(_QWORD *)(v85 + 264) & 0x4000000000LL) != 0 )
          v6[40] = CpcReinitializeHandler;
        *((_BYTE *)v6 + 6) = 0;
        v94 = v90 || v86;
        *((_BYTE *)v6 + 7) = v94;
        *((_BYTE *)v6 + 8) = v124;
        *((_BYTE *)v6 + 52) = v128;
        *((_DWORD *)v6 + 5) = v134;
        *((_DWORD *)v6 + 6) = *((_DWORD *)v13 + 17);
        v95 = *((_DWORD *)v13 + 19);
        *((_DWORD *)v6 + 7) = v95;
        v96 = *((_DWORD *)v13 + 20);
        if ( !v95 )
          v95 = 1;
        *((_DWORD *)v6 + 7) = v95;
        if ( !v96 )
          v96 = 1;
        *((_DWORD *)v6 + 8) = v96;
        v6[7] = *(_QWORD *)v79;
        v6[8] = *((_QWORD *)v13 + 2);
        v97 = *(_QWORD *)(v85 + 320);
        if ( v97 )
          v6[32] = v97;
        v6[34] = *(_QWORD *)(v85 + 328);
        if ( (_BYTE)v138 )
          *((_BYTE *)v6 + 9) = 1;
        if ( (_BYTE)v139 )
        {
          if ( v86 )
            *((_BYTE *)v6 + 10) = 1;
          else
            v6[36] = CpcSetAutonomousActivityWindow;
        }
        if ( v129 )
          v6[37] = CpcSetAutonomousMode;
        if ( v130 )
          v6[33] = CpcSetTimeWindow;
        if ( (*(_DWORD *)(v85 + 264) & 0x400000) != 0 && v86 && (v88 == 254 || v87 == 1) )
        {
          *((_BYTE *)v6 + 11) = 1;
          if ( (*(_QWORD *)(v85 + 264) & 0x400000000LL) == 0 || (v98 = 0, v131) )
            v98 = 1;
          *((_BYTE *)v6 + 12) = v98;
          *((_DWORD *)v6 + 12) = -(v132[0] == 0);
        }
        v99 = *((_QWORD *)v13 + 2);
        v100 = *((_QWORD *)v13 + 5);
        if ( v99 == v100 )
        {
          LODWORD(v101) = 100;
        }
        else
        {
          v102 = 100 * v100;
          v101 = 100 * v100 / v99;
          v85 = v102 % v99;
        }
        *((_DWORD *)v89 + 2) = v101;
        *(_QWORD *)v89 = PerfReadWrappingCounter;
        *((_DWORD *)v89 + 3) = 1;
        v89[17] = 1;
        v89[16] = v121 == 0;
        if ( (_BYTE)v133 )
        {
          v103 = v6[51];
          *(_QWORD *)(v103 + 32) = 100LL;
          *(_QWORD *)(v103 + 24) = PerfReadWrappingCounter;
          *(_WORD *)(v103 + 40) = 257;
        }
        DisplayKernelPerfStates((__int64)v6, v85, (int)v89);
        v104 = (_QWORD *)v6[53];
        v146 = v6[52];
        ResetEnumerationContext(v142);
        if ( !(unsigned int)EnumerateNextDevice((__int64)v142, &DeferredContext) )
        {
          v106 = v147;
          do
          {
            v107 = (char *)*((_QWORD *)v79 + 10);
            v108 = 100;
            v109 = DeferredContext;
            if ( v79[67] )
            {
              if ( v107[56] == 127 && !*((_BYTE *)DeferredContext + 78) )
              {
                KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
                v110 = &PreviousAffinity;
                if ( v120 )
                  v110 = 0LL;
                KeSetSystemGroupAffinityThread(&Affinity, v110);
                v120 = 1;
              }
              v111 = ReadGenAddrMaybeHidden((__int64)v109, v107 + 56);
              v112 = *((_QWORD *)v79 - 2);
              if ( v111 > v112 )
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  1u,
                  0x2Bu,
                  (__int64)&WPP_74c73a8d2c983a7ecb82bd797551b25b_Traceguids);
                v111 = *((_QWORD *)v79 - 2);
                v112 = v111;
              }
              if ( v111 < *(_QWORD *)v79 )
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  1u,
                  0x2Cu,
                  (__int64)&WPP_74c73a8d2c983a7ecb82bd797551b25b_Traceguids);
                v111 = *(_QWORD *)v79;
                v112 = *((_QWORD *)v79 - 2);
              }
              v108 = *((_DWORD *)v79 + 12);
              *((_QWORD *)v79 + 3) = v111;
              v113 = 100 * v111 / v112;
              if ( (unsigned int)v113 > v108 )
                v108 = v113;
              *((_DWORD *)v79 + 13) = v108;
              if ( v108 != v109[177] )
                ProcLibCapChange(v106, v109[108], v109[120], v108);
              v105 = v146;
            }
            else
            {
              *((_QWORD *)v79 + 3) = *((_QWORD *)v79 - 2);
            }
            InitCommonPerfStateContext((__int64)v109, (_QWORD *)v79 - 4, v105, v108, v108 < 0x64 ? 2 : 0);
            *v104 = v79 + 128;
            *((_QWORD *)v79 + 22) = GetCpcDifferentialFeedback;
            *((_QWORD *)v79 + 23) = v107;
            v115 = v107[153];
            if ( (unsigned __int8)v115 < 0x40u )
              *((_QWORD *)v79 + 20) = (1LL << v115) - 1;
            v116 = v107[141];
            if ( (unsigned __int8)v116 < 0x40u )
              *((_QWORD *)v79 + 21) = (1LL << v116) - 1;
            ++v104;
            if ( (_BYTE)v133 )
            {
              *v104++ = v79 + 192;
              *((_QWORD *)v79 + 30) = *((_QWORD *)v109 + 39);
            }
            v146 = v114 + 32;
            v79 += 368;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64)v142, &DeferredContext) );
          v6 = v145;
          v13 = v151;
        }
        if ( v120 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        v9 = v154(v6, v135);
        if ( v9 >= 0 )
        {
          ResetEnumerationContext(v142);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v142, &DeferredContext) )
          {
            *((_QWORD *)DeferredContext + 30) = v13;
            v13 += 368;
          }
          if ( (*(_QWORD *)(v147 + 264) & 0x4000000000LL) != 0 )
          {
            ResetEnumerationContext(v142);
            while ( !(unsigned int)EnumerateNextDevice((__int64)v142, &DeferredContext) )
            {
              if ( !*((_BYTE *)DeferredContext + 78) )
                CpcConnectNativeInterrupt((PDEVICE_OBJECT *)DeferredContext);
            }
          }
          v13 = 0LL;
          v9 = 0;
        }
        goto LABEL_264;
      }
LABEL_180:
      v92 = PerfSelectionCpc;
      goto LABEL_181;
    }
    v90 = v119;
    if ( v119 )
    {
      if ( v122 )
      {
        v6[42] = PerfControlCpcSingleRegister;
        v91 = PerfControlCpcSingleRegisterHidden;
      }
      else
      {
        v6[42] = PerfControlCpc;
        v91 = (void *)qword_1C001A508;
        if ( !qword_1C001A508 || !CpcHiddenProcessorMitigationReported )
        {
          v6[43] = PerfControlCpcHidden;
          goto LABEL_179;
        }
      }
    }
    else
    {
      v91 = AcpiCStateIdleCancel;
      v6[42] = AcpiCStateIdleCancel;
    }
    v6[43] = v91;
    goto LABEL_180;
  }
LABEL_6:
  v9 = -1073741670;
LABEL_264:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001A398);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x72637250u);
  return (unsigned int)v9;
}
