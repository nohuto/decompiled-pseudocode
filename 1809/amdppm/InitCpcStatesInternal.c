/*
 * XREFs of InitCpcStatesInternal @ 0x1C001EC8C
 * Callers:
 *     RegisterHvCpcCounters @ 0x1C001B530 (RegisterHvCpcCounters.c)
 *     RegisterKernelCpc @ 0x1C001EC70 (RegisterKernelCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_ii @ 0x1C0001C90 (WPP_RECORDER_SF_ii.c)
 *     WPP_RECORDER_SF_iii @ 0x1C0001DB8 (WPP_RECORDER_SF_iii.c)
 *     ReadGenAddrMaybeHidden @ 0x1C00039F8 (ReadGenAddrMaybeHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C0003A28 (WriteGenAddrMaybeHidden.c)
 *     ReadGenAddrHidden @ 0x1C0003A5C (ReadGenAddrHidden.c)
 *     ResetEnumerationContext @ 0x1C0003CB4 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0003CD0 (EnumerateNextDevice.c)
 *     CpcRegisterIsSupported @ 0x1C0004944 (CpcRegisterIsSupported.c)
 *     DisplayKernelPerfStates @ 0x1C00090D4 (DisplayKernelPerfStates.c)
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0009714 (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     __security_check_cookie @ 0x1C000CA20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CEC0 (memset.c)
 *     GetPackageAffinity @ 0x1C0020810 (GetPackageAffinity.c)
 *     GetPerfDomain @ 0x1C0022064 (GetPerfDomain.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C00220FC (GetRegistryDwordValueNoDefault.c)
 *     CpcConnectNativeInterrupt @ 0x1C00225B0 (CpcConnectNativeInterrupt.c)
 *     ProcLibCapChange @ 0x1C0028588 (ProcLibCapChange.c)
 */

__int64 __fastcall InitCpcStatesInternal(__int64 a1, __int64 (__fastcall *a2)(_QWORD *, _QWORD))
{
  int v2; // esi
  int v3; // r13d
  _BYTE *v4; // r15
  _QWORD *v6; // rbx
  int RegistryDwordValueNoDefault; // eax
  int v8; // ecx
  int v9; // edi
  SIZE_T v10; // rdi
  char *PoolWithTag; // rax
  char *v12; // r14
  int v13; // eax
  unsigned int v14; // r11d
  __int64 v15; // rdx
  unsigned int v16; // ebx
  char *v17; // r12
  char v18; // r15
  _BYTE *v19; // rdi
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // r9
  int v23; // r11d
  int v24; // ecx
  char v25; // al
  int v26; // r11d
  int v27; // r8d
  int v28; // ecx
  bool v29; // zf
  unsigned __int8 v30; // cl
  unsigned int v31; // r8d
  char v32; // si
  __int64 v33; // rax
  int v34; // r8d
  char v35; // r9
  __int64 v36; // rdx
  char v37; // r9
  __int64 v38; // r10
  char v39; // r11
  char v40; // r11
  int v41; // eax
  unsigned int *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rax
  char v45; // bl
  char *v46; // rdi
  __int64 v47; // r12
  PVOID v48; // rsi
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 *v50; // r13
  __int64 v51; // rdi
  char *v52; // rdi
  _BYTE *v53; // rsi
  PVOID v54; // r15
  struct _GROUP_AFFINITY *v55; // rdx
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rcx
  unsigned __int64 v65; // rcx
  int v66; // eax
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // rax
  int v69; // r10d
  unsigned __int16 v70; // r9
  unsigned __int16 v71; // r9
  unsigned int v72; // r8d
  char *v73; // rdi
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
  __int64 v100; // rbx
  _BYTE *v101; // rdx
  unsigned int v102; // r15d
  _DWORD *v103; // rsi
  __int64 v104; // r15
  struct _GROUP_AFFINITY *v105; // rdx
  unsigned __int64 v106; // rax
  unsigned __int64 v107; // rcx
  unsigned __int64 v108; // rax
  int v109; // eax
  unsigned __int8 v110; // cl
  unsigned __int8 v111; // cl
  int v113; // [rsp+20h] [rbp-E0h]
  char v114; // [rsp+40h] [rbp-C0h]
  char v115; // [rsp+41h] [rbp-BFh]
  char v116; // [rsp+42h] [rbp-BEh]
  char v117; // [rsp+43h] [rbp-BDh]
  char v118; // [rsp+44h] [rbp-BCh]
  char v119; // [rsp+45h] [rbp-BBh]
  PVOID DeferredContext; // [rsp+48h] [rbp-B8h] BYREF
  char v121; // [rsp+50h] [rbp-B0h]
  char IsSupported; // [rsp+51h] [rbp-AFh]
  bool v123; // [rsp+52h] [rbp-AEh]
  bool v124; // [rsp+53h] [rbp-ADh]
  char v125; // [rsp+54h] [rbp-ACh]
  char v126; // [rsp+55h] [rbp-ABh] BYREF
  char v127[2]; // [rsp+56h] [rbp-AAh] BYREF
  int v128; // [rsp+58h] [rbp-A8h]
  int v129; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v130; // [rsp+60h] [rbp-A0h]
  int v131; // [rsp+64h] [rbp-9Ch]
  int v132; // [rsp+68h] [rbp-98h]
  int v133; // [rsp+6Ch] [rbp-94h]
  int v134; // [rsp+70h] [rbp-90h]
  int v135; // [rsp+74h] [rbp-8Ch]
  _QWORD v136[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v137[4]; // [rsp+88h] [rbp-78h] BYREF
  BOOL v138; // [rsp+A8h] [rbp-58h]
  int PerfDomain; // [rsp+ACh] [rbp-54h]
  _QWORD *v140; // [rsp+B0h] [rbp-50h]
  _BYTE *v141; // [rsp+B8h] [rbp-48h]
  __int64 v142; // [rsp+C0h] [rbp-40h]
  int v143; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v144; // [rsp+D0h] [rbp-30h] BYREF
  __int64 (__fastcall *v145)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // [rsp+D8h] [rbp-28h] BYREF
  __int64 v146; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v147; // [rsp+E8h] [rbp-18h] BYREF
  char *v148; // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v149)(_QWORD *, _QWORD); // [rsp+F8h] [rbp-8h]
  struct _GROUP_AFFINITY Affinity; // [rsp+100h] [rbp+0h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v152[176]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v153[176]; // [rsp+1D0h] [rbp+D0h] BYREF

  v4 = 0LL;
  v149 = a2;
  v142 = a1;
  v6 = 0LL;
  v115 = 0;
  v140 = 0LL;
  v129 = 0;
  RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                  L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                  L"~MHz",
                                  &v129);
  v8 = v129;
  if ( RegistryDwordValueNoDefault < 0 )
    v8 = 0;
  v129 = v8;
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
  LOBYTE(v128) = *(_QWORD *)(a1 + 312) != 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00113E8,
    0LL);
  PerfDomain = GetPerfDomain(a1, v137, &v143);
  v10 = (unsigned int)(368 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72637250u);
  v148 = PoolWithTag;
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_6;
  memset(PoolWithTag, 0, v10);
  LOBYTE(v135) = 0;
  LOBYTE(v3) = 1;
  LOBYTE(v130) = 0;
  LOBYTE(v2) = 0;
  v131 = v3;
  v132 = v2;
  v121 = 0;
  v116 = 0;
  v118 = 0;
  LOBYTE(v133) = 0;
  IsSupported = 0;
  LOBYTE(v134) = 0;
  v125 = 0;
  v114 = 0;
  v117 = 1;
  v124 = 0;
  v126 = 1;
  v127[0] = 0;
  v123 = 0;
  v119 = 1;
  v145 = 0LL;
  v144 = 0LL;
  v146 = 0LL;
  v141 = 0LL;
  v147 = 0LL;
  KeInitializeAffinityEx(v152);
  ResetEnumerationContext(v137);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) )
  {
    if ( !*((_BYTE *)DeferredContext + 78) )
      KeAddProcessorAffinityEx(v152, *((unsigned int *)DeferredContext + 14));
  }
  LOBYTE(v10) = 0;
  v138 = v10;
  ResetEnumerationContext(v137);
  while ( !(unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) )
  {
    if ( !*((_BYTE *)DeferredContext + 78) )
    {
      v4 = (_BYTE *)*((_QWORD *)DeferredContext + 70);
      v141 = v4;
      if ( (int)GetPackageAffinity(DeferredContext, v153) >= 0 )
        v138 = KeIsEqualAffinityEx(v153, v152) != 0;
      break;
    }
  }
  ResetEnumerationContext(v137);
  v13 = EnumerateNextDevice((__int64)v137, &DeferredContext);
  LOBYTE(v15) = 10;
  if ( !v13 )
  {
    LOBYTE(v16) = v130;
    v17 = v12 + 92;
    LOBYTE(v12) = v135;
    v18 = 1;
    while ( 1 )
    {
      v19 = (_BYTE *)*((_QWORD *)DeferredContext + 70);
      if ( v19[140] == 10 || v19[152] == 10 )
        v116 = v14;
      if ( v19[176] == 10 || v19[80] == 10 || v19[92] == 10 || v19[68] == 10 || v19[104] == 10 || v19[212] == 10 )
        v118 = v14;
      LODWORD(v12) = (unsigned __int8)v12;
      if ( v19[56] == 10 )
        LODWORD(v12) = v14;
      v16 = (unsigned __int8)v16;
      if ( v19[8] == 10 )
        v16 = v14;
      if ( v19[200] == 10 || v19[188] == 10 || v19[116] == 10 )
        v121 = v14;
      *(_QWORD *)(v17 + 20) = v19;
      IsSupported = CpcRegisterIsSupported((__int64)(v19 + 176));
      *v17 = IsSupported;
      v17[1] = CpcRegisterIsSupported((__int64)(v19 + 68));
      v17[2] = CpcRegisterIsSupported((__int64)(v19 + 80));
      v17[3] = CpcRegisterIsSupported((__int64)(v19 + 92));
      v17[6] = CpcRegisterIsSupported((__int64)(v19 + 104));
      v17[7] = CpcRegisterIsSupported((__int64)(v19 + 56));
      v125 = CpcRegisterIsSupported(v20);
      v21 = CpcRegisterIsSupported((__int64)(v19 + 212));
      v24 = (unsigned __int8)v133;
      if ( v21 )
        v24 = v23;
      v17[4] = v21;
      v133 = v24;
      v25 = CpcRegisterIsSupported(v22);
      LOBYTE(v28) = v134;
      v17[5] = v25;
      v27 = 0;
      v28 = (unsigned __int8)v28;
      if ( v25 )
        v28 = v26;
      v29 = v19[140] == 127;
      v134 = v28;
      v30 = 0;
      if ( !v29 )
        v30 = v128;
      if ( v19[152] != 127 )
        v27 = v30;
      v128 = v27;
      if ( !qword_1C0011580 || !(unsigned __int8)qword_1C0011580(v19) )
        v119 = 0;
      v31 = 0;
      memset(v136, 0, 12);
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
          goto LABEL_64;
        v114 = 1;
        if ( CpcRegisterIsSupported((__int64)v136) )
          break;
        v32 = v37;
        v40 = *(_BYTE *)(v36 + 3);
        *(_QWORD *)((char *)v136 + 4) = *(_QWORD *)(v36 + 4);
        BYTE3(v136[0]) = v40;
        LOBYTE(v136[0]) = v37;
LABEL_63:
        v35 = 0;
LABEL_64:
        v31 = v34 + 1;
        if ( v31 >= 5 )
          goto LABEL_67;
      }
      if ( v32 == v37 && v38 == *(_QWORD *)(v36 + 4) && v39 == *(_BYTE *)(v36 + 3) )
        goto LABEL_63;
      v35 = 0;
      v18 = 0;
LABEL_67:
      if ( v114 != v35 && v18 )
      {
        v41 = v136[1];
        *(_QWORD *)(v17 + 28) = v136[0];
        *((_DWORD *)v17 + 9) = v41;
      }
      if ( qword_1C0011590 )
      {
        v3 = (unsigned __int8)v3;
        if ( (int)qword_1C0011590(v17 - 92, &v144, &v146, &v147, &v145, &v126, v127) < 0 )
          v3 = 0;
      }
      LOBYTE(v2) = v132;
      v42 = (unsigned int *)&Cpc2RegisterTable;
      v43 = 19LL;
      do
      {
        v44 = *v42;
        v42 += 6;
        v2 = (unsigned __int8)v2;
        if ( v19[v44] == 10 )
          v2 = 1;
        --v43;
      }
      while ( v43 );
      v132 = v2;
      v17 += 368;
      if ( (unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) )
      {
        v117 = v18;
        v4 = v141;
        v130 = v16;
        v6 = v140;
        v135 = (int)v12;
        v12 = v148;
        v131 = v3;
        break;
      }
    }
  }
  if ( !v144 || !v145 )
    LOBYTE(v131) = 0;
  if ( (_BYTE)v2 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(qword_1C0011900 + 88))(*(_QWORD *)(qword_1C0011900 + 56), v15);
    if ( v9 < 0 )
      goto LABEL_266;
    ResetEnumerationContext(v137);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) )
    {
      v45 = 0;
      v46 = v12 + 112;
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
          WriteGenAddrMaybeHidden((__int64)v48, (_BYTE *)(v47 + 176), 1uLL);
        }
        v46 += 368;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) );
      v4 = v141;
      v115 = v45;
      v6 = v140;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C0011900 + 104))(*(_QWORD *)(qword_1C0011900 + 56), 0LL);
    if ( v9 < 0 )
      goto LABEL_266;
  }
  ResetEnumerationContext(v137);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) )
  {
    v50 = (__int64 *)(v12 + 112);
    do
    {
      v51 = *v50;
      if ( *((_BYTE *)DeferredContext + 78)
        && *(_BYTE *)(v51 + 20) == 10
        && !ReadGenAddrHidden(*((_DWORD *)DeferredContext + 20), v51 + 20) )
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
        *(_QWORD *)(v51 + 20) = *(_QWORD *)(v4 + 20);
        *(_DWORD *)(v51 + 28) = *((_DWORD *)v4 + 7);
        if ( *(_BYTE *)(v51 + 8) == 10 )
        {
          *(_QWORD *)(v51 + 8) = *((_QWORD *)v4 + 1);
          *(_DWORD *)(v51 + 16) = *((_DWORD *)v4 + 4);
        }
        if ( *(_BYTE *)(v51 + 32) == 10 )
        {
          *(_QWORD *)(v51 + 32) = *((_QWORD *)v4 + 4);
          *(_DWORD *)(v51 + 40) = *((_DWORD *)v4 + 10);
        }
        if ( *(_BYTE *)(v51 + 44) == 10 )
        {
          *(_QWORD *)(v51 + 44) = *(_QWORD *)(v4 + 44);
          *(_DWORD *)(v51 + 52) = *((_DWORD *)v4 + 13);
        }
        if ( *(_BYTE *)(v51 + 224) == 10 )
        {
          *(_QWORD *)(v51 + 224) = *((_QWORD *)v4 + 28);
          *(_DWORD *)(v51 + 232) = *((_DWORD *)v4 + 58);
        }
        if ( *(_BYTE *)(v51 + 56) == 10 )
        {
          *(_QWORD *)(v51 + 56) = *((_QWORD *)v4 + 7);
          *(_DWORD *)(v51 + 64) = *((_DWORD *)v4 + 16);
        }
      }
      v50 += 46;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) );
    v6 = 0LL;
  }
  ResetEnumerationContext(v137);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) )
  {
    v52 = v12 + 100;
    while ( 1 )
    {
      v53 = *(_BYTE **)(v52 + 12);
      v54 = DeferredContext;
      if ( (v53[8] == 127 || v53[20] == 127 || v53[32] == 127 || v53[44] == 127 || v53[224] == 127 || v53[188] == 127)
        && !*((_BYTE *)DeferredContext + 78) )
      {
        KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
        v55 = &PreviousAffinity;
        if ( v115 )
          v55 = 0LL;
        KeSetSystemGroupAffinityThread(&Affinity, v55);
        v115 = 1;
      }
      *v52 = v116;
      v52[1] = v135;
      v52[2] = v130;
      v52[3] = v118;
      *((_DWORD *)v52 - 9) = v129;
      *(_QWORD *)(v52 - 92) = ReadGenAddrMaybeHidden((__int64)v54, (__int64)(v53 + 8));
      GenAddrMaybeHidden = ReadGenAddrMaybeHidden((__int64)v54, (__int64)(v53 + 20));
      *(_QWORD *)(v52 - 84) = GenAddrMaybeHidden;
      if ( !GenAddrMaybeHidden )
        break;
      v57 = ReadGenAddrMaybeHidden((__int64)v54, (__int64)(v53 + 32));
      v58 = *(_QWORD *)(v52 - 84);
      *(_QWORD *)(v52 - 76) = v57;
      if ( v57 > v58 )
        *(_QWORD *)(v52 - 76) = v58;
      *(_QWORD *)(v52 - 68) = ReadGenAddrMaybeHidden((__int64)v54, (__int64)(v53 + 44));
      *(_QWORD *)(v52 - 60) = ReadGenAddrMaybeHidden((__int64)v54, (__int64)(v53 + 224));
      if ( CpcRegisterIsSupported((__int64)(v53 + 188)) )
      {
        v123 = ReadGenAddrMaybeHidden((__int64)v54, (__int64)(v53 + 188)) != 0;
        v124 = v53[188] != 126;
      }
      if ( v52 - 100 != v12 )
      {
        v62 = *(_QWORD *)(v52 - 92);
        v63 = *((_QWORD *)v12 + 1);
        if ( v62 != v63 )
        {
          v70 = 36;
          goto LABEL_149;
        }
        v62 = *(_QWORD *)(v52 - 84);
        v63 = *((_QWORD *)v12 + 2);
        if ( v62 != v63 )
        {
          v70 = 37;
          goto LABEL_149;
        }
        v62 = *(_QWORD *)(v52 - 68);
        v63 = *((_QWORD *)v12 + 4);
        if ( v62 != v63 )
        {
          v70 = 38;
LABEL_149:
          WPP_RECORDER_SF_ii(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            v70,
            (__int64)&WPP_74c73a8d2c983a7ecb82bd797551b25b_Traceguids,
            v62,
            v63);
          goto LABEL_152;
        }
        v64 = *(_QWORD *)(v52 - 76);
        if ( v64 != *((_QWORD *)v12 + 3) )
        {
          if ( !v119 )
          {
            WPP_RECORDER_SF_ii(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x27u,
              (__int64)&WPP_74c73a8d2c983a7ecb82bd797551b25b_Traceguids,
              v64,
              *((_QWORD *)v12 + 3));
            goto LABEL_152;
          }
          WPP_RECORDER_SF_iii((__int64)WPP_GLOBAL_Control->DeviceExtension, v59, v60, v61, v113);
          *(_QWORD *)(v52 - 76) = *((_QWORD *)v12 + 3);
        }
      }
      v65 = *(_QWORD *)(v52 - 84);
      v66 = 100LL * *(_QWORD *)(v52 - 92) / v65;
      *((_DWORD *)v52 - 8) = v66;
      *((_DWORD *)v52 - 7) = v66;
      v67 = 100LL * *(_QWORD *)(v52 - 76) / v65;
      v68 = 100LL * *(_QWORD *)(v52 - 68) / v65;
      if ( !(_DWORD)v68 )
        LODWORD(v68) = 1;
      *((_DWORD *)v52 - 5) = v68;
      if ( !(_DWORD)v67 )
        LODWORD(v67) = 1;
      *((_DWORD *)v52 - 6) = v67;
      v52 += 368;
      if ( (unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) )
        goto LABEL_154;
    }
    v71 = 35;
    v72 = 1;
    goto LABEL_151;
  }
  v69 = 1;
LABEL_154:
  if ( *((_QWORD *)v12 + 1) < *((_QWORD *)v12 + 2) )
  {
    v71 = 41;
LABEL_156:
    v72 = v69;
LABEL_151:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v72,
      v71,
      (__int64)&WPP_74c73a8d2c983a7ecb82bd797551b25b_Traceguids);
LABEL_152:
    v9 = -1073741811;
    goto LABEL_266;
  }
  v73 = v12 + 32;
  if ( *((_QWORD *)v12 + 3) < *((_QWORD *)v12 + 4) )
  {
    v71 = 42;
    goto LABEL_156;
  }
  v74 = v69 + ((_BYTE)v128 != 0);
  v75 = (32 * PerfDomain + 439) & 0xFFFFFFF8;
  v76 = v75 + 24 * v74;
  v130 = v76 + 8 * PerfDomain * v74;
  v77 = v130;
  v78 = ExAllocatePoolWithTag(NonPagedPoolNx, v130, 0x72637250u);
  v140 = v78;
  v6 = v78;
  if ( v78 )
  {
    memset(v78, 0, v77);
    v79 = v142;
    if ( *(_BYTE *)(v142 + 1106) )
      v6[48] = PepParkPreference;
    if ( (*(_QWORD *)(v79 + 264) & 0x10000000000LL) != 0 )
    {
      v6[49] = PepParkMask;
      v6[50] = PepPerfCheckComplete;
      v6[9] = *(_QWORD *)(v79 + 1088);
    }
    v80 = v131;
    v81 = PerfDomain;
    v82 = v143;
    v6[52] = v6 + 54;
    v83 = (__int64)v6 + v75;
    *(_DWORD *)v6 = 60;
    *((_DWORD *)v6 + 4) = v81;
    *((_DWORD *)v6 + 9) = v74;
    v6[51] = v83;
    v6[53] = (char *)v6 + v76;
    *((_WORD *)v6 + 2) = v82;
    if ( v80 )
    {
      v6[42] = v144;
      v6[43] = v146;
      if ( v138 && v147 )
      {
        v84 = v114;
        if ( v82 == 254 )
        {
          v6[44] = v147;
          v6[10] = v12;
        }
      }
      else
      {
        v84 = v114;
      }
LABEL_178:
      v86 = v145;
      if ( v80 )
      {
LABEL_180:
        v6[41] = v86;
        if ( (_BYTE)v132 )
        {
          if ( v116 )
            v6[45] = CpcReadFeedback;
          if ( v118 )
          {
            v6[46] = CpcAcquirePerformance;
            v6[47] = CpcCommitPerformance;
          }
          if ( v121 )
          {
            v6[38] = AcquirePccSubspace;
            v6[39] = ExecutePccWrite;
          }
          v87 = *(_DWORD *)(qword_1C0011900 + 68);
          if ( v87 )
          {
            v79 = v142;
            *((_DWORD *)v6 + 10) = 0x989680 / (v87 >> 1);
          }
        }
        if ( IsSupported || (*(_QWORD *)(v79 + 264) & 0x4000000000LL) != 0 )
          v6[40] = CpcReinitializeHandler;
        *((_BYTE *)v6 + 6) = 0;
        v88 = v84 || v80;
        *((_BYTE *)v6 + 7) = v88;
        *((_BYTE *)v6 + 8) = v119;
        *((_BYTE *)v6 + 52) = v123;
        *((_DWORD *)v6 + 5) = v129;
        *((_DWORD *)v6 + 6) = *((_DWORD *)v12 + 17);
        v89 = *((_DWORD *)v12 + 19);
        *((_DWORD *)v6 + 7) = v89;
        v90 = *((_DWORD *)v12 + 20);
        if ( !v89 )
          v89 = 1;
        *((_DWORD *)v6 + 7) = v89;
        if ( !v90 )
          v90 = 1;
        *((_DWORD *)v6 + 8) = v90;
        v6[7] = *(_QWORD *)v73;
        v6[8] = *((_QWORD *)v12 + 2);
        v91 = *(_QWORD *)(v79 + 320);
        if ( v91 )
          v6[32] = v91;
        v6[34] = *(_QWORD *)(v79 + 328);
        if ( (_BYTE)v133 )
          *((_BYTE *)v6 + 9) = 1;
        if ( (_BYTE)v134 )
        {
          if ( v80 )
            *((_BYTE *)v6 + 10) = 1;
          else
            v6[36] = CpcSetAutonomousActivityWindow;
        }
        if ( v124 )
          v6[37] = CpcSetAutonomousMode;
        if ( v125 )
          v6[33] = CpcSetTimeWindow;
        if ( (*(_DWORD *)(v79 + 264) & 0x400000) != 0 && v80 && (v82 == 254 || v81 == 1) )
        {
          *((_BYTE *)v6 + 11) = 1;
          if ( (*(_QWORD *)(v79 + 264) & 0x400000000LL) == 0 || (v92 = 0, v126) )
            v92 = 1;
          *((_BYTE *)v6 + 12) = v92;
          *((_DWORD *)v6 + 12) = -(v127[0] == 0);
        }
        v93 = *((_QWORD *)v12 + 2);
        v94 = *((_QWORD *)v12 + 5);
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
        *(_BYTE *)(v83 + 16) = v116 == 0;
        if ( (_BYTE)v128 )
        {
          v97 = v6[51];
          *(_QWORD *)(v97 + 32) = 100LL;
          *(_QWORD *)(v97 + 24) = PerfReadWrappingCounter;
          *(_WORD *)(v97 + 40) = 257;
        }
        DisplayKernelPerfStates((__int64)v6, v79, v83);
        v98 = v6[52];
        v99 = (_QWORD *)v6[53];
        ResetEnumerationContext(v137);
        if ( !(unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) )
        {
          v100 = v142;
          do
          {
            v101 = (_BYTE *)*((_QWORD *)v73 + 10);
            v102 = 100;
            v103 = DeferredContext;
            v141 = v101;
            if ( v73[67] )
            {
              v104 = (__int64)(v101 + 56);
              if ( v101[56] == 127 && !*((_BYTE *)DeferredContext + 78) )
              {
                KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
                v105 = &PreviousAffinity;
                if ( v115 )
                  v105 = 0LL;
                KeSetSystemGroupAffinityThread(&Affinity, v105);
                v115 = 1;
              }
              v106 = ReadGenAddrMaybeHidden((__int64)v103, v104);
              v107 = *((_QWORD *)v73 - 2);
              if ( v106 > v107 )
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  1u,
                  0x2Bu,
                  (__int64)&WPP_74c73a8d2c983a7ecb82bd797551b25b_Traceguids);
                v106 = *((_QWORD *)v73 - 2);
                v107 = v106;
              }
              if ( v106 < *(_QWORD *)v73 )
              {
                WPP_RECORDER_SF_(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  1u,
                  0x2Cu,
                  (__int64)&WPP_74c73a8d2c983a7ecb82bd797551b25b_Traceguids);
                v106 = *(_QWORD *)v73;
                v107 = *((_QWORD *)v73 - 2);
              }
              v102 = *((_DWORD *)v73 + 12);
              *((_QWORD *)v73 + 3) = v106;
              v108 = 100 * v106 / v107;
              if ( (unsigned int)v108 > v102 )
                v102 = v108;
              *((_DWORD *)v73 + 13) = v102;
              if ( v102 != v103[177] )
                ProcLibCapChange(v100, (unsigned int)v103[108], (unsigned int)v103[120], v102);
              v101 = v141;
            }
            else
            {
              *((_QWORD *)v73 + 3) = *((_QWORD *)v73 - 2);
            }
            *((_QWORD *)v73 - 4) = v103;
            *(_QWORD *)(v98 + 8) = v73 - 32;
            if ( *((_BYTE *)v103 + 78) )
            {
              v109 = v103[20];
              *(_BYTE *)(v98 + 28) = 1;
            }
            else
            {
              v109 = v103[14];
            }
            *(_DWORD *)v98 = v109;
            *(_DWORD *)(v98 + 20) = v103[176];
            *(_DWORD *)(v98 + 16) = v102;
            *(_DWORD *)(v98 + 24) = v102 < 0x64 ? 2 : 0;
            *v99 = v73 + 128;
            *((_QWORD *)v73 + 22) = GetCpcDifferentialFeedback;
            *((_QWORD *)v73 + 23) = v101;
            v110 = v101[153];
            if ( v110 < 0x40u )
              *((_QWORD *)v73 + 20) = (1LL << v110) - 1;
            v111 = v101[141];
            if ( v111 < 0x40u )
              *((_QWORD *)v73 + 21) = (1LL << v111) - 1;
            ++v99;
            if ( (_BYTE)v128 )
            {
              *v99++ = v73 + 192;
              *((_QWORD *)v73 + 30) = *((_QWORD *)v103 + 39);
            }
            v98 += 32LL;
            v73 += 368;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) );
          v6 = v140;
          v12 = v148;
        }
        if ( v115 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        v9 = v149(v6, v130);
        if ( v9 >= 0 )
        {
          ResetEnumerationContext(v137);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) )
          {
            *((_QWORD *)DeferredContext + 30) = v12;
            v12 += 368;
          }
          if ( (*(_QWORD *)(v142 + 264) & 0x4000000000LL) != 0 )
          {
            ResetEnumerationContext(v137);
            while ( !(unsigned int)EnumerateNextDevice((__int64)v137, &DeferredContext) )
            {
              if ( !*((_BYTE *)DeferredContext + 78) )
                CpcConnectNativeInterrupt(DeferredContext);
            }
          }
          v12 = 0LL;
          v9 = 0;
        }
        goto LABEL_266;
      }
LABEL_179:
      v86 = PerfSelectionCpc;
      goto LABEL_180;
    }
    v84 = v114;
    if ( v114 )
    {
      if ( v117 )
      {
        v6[42] = PerfControlCpcSingleRegister;
        v85 = PerfControlCpcSingleRegisterHidden;
      }
      else
      {
        v6[42] = PerfControlCpc;
        v85 = (void *)qword_1C0011558;
        if ( !qword_1C0011558 || !CpcHiddenProcessorMitigationReported )
        {
          v6[43] = PerfControlCpcHidden;
          goto LABEL_178;
        }
      }
    }
    else
    {
      v85 = AcpiCStateIdleCancel;
      v6[42] = AcpiCStateIdleCancel;
    }
    v6[43] = v85;
    goto LABEL_179;
  }
LABEL_6:
  v9 = -1073741670;
LABEL_266:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00113E8);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x72637250u);
  return (unsigned int)v9;
}
