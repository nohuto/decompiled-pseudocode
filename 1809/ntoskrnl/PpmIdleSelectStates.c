/*
 * XREFs of PpmIdleSelectStates @ 0x1401801D0
 * Callers:
 *     PoIdle @ 0x14005D6B0 (PoIdle.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x1400DC8F0 (PoCopyDeepIdleMask.c)
 *     KeSubtractAffinityEx @ 0x1400ED8C0 (KeSubtractAffinityEx.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     PpmIdleUpdateSelectionStatistics @ 0x140180500 (PpmIdleUpdateSelectionStatistics.c)
 *     PpmComputeIdleDurationHint @ 0x14018051C (PpmComputeIdleDurationHint.c)
 *     PpmEstimateIdleDuration @ 0x1401805C0 (PpmEstimateIdleDuration.c)
 *     PpmIdleEvaluateConstraints @ 0x1401807D4 (PpmIdleEvaluateConstraints.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PpmCheckPreConditionsForDeepSleep @ 0x1402D3E7C (PpmCheckPreConditionsForDeepSleep.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1402D4884 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleCheckProcessorStateEligibility @ 0x1402D4AC8 (PpmIdleCheckProcessorStateEligibility.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x1402D5254 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleSetSynchronizationState @ 0x1402D5350 (PpmIdleSetSynchronizationState.c)
 *     PpmUnlockProcessors @ 0x1402D6180 (PpmUnlockProcessors.c)
 */

_QWORD *__fastcall PpmIdleSelectStates(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        char *a4,
        _DWORD *a5,
        int *a6,
        _QWORD *a7,
        char *a8)
{
  __int64 v8; // r13
  __int64 v9; // rdi
  char v10; // r15
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rbx
  int v14; // eax
  char v15; // r15
  char v16; // si
  __int64 v17; // rdx
  __int64 v18; // r14
  int v19; // r12d
  unsigned int v20; // r10d
  int v21; // ecx
  char v22; // al
  char v23; // al
  int v24; // edx
  __int64 v25; // r9
  __int64 v26; // r9
  _DWORD *v27; // rsi
  char v28; // al
  __int64 v29; // rcx
  _QWORD *result; // rax
  __int64 v31; // rsi
  _DWORD *v32; // rcx
  int v33; // eax
  int v34; // r8d
  __int64 v35; // rax
  int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r14
  int v40; // ecx
  char v41; // al
  char v42; // al
  int v43; // edx
  int v44; // r9d
  int v45; // edx
  int v46; // ecx
  __int64 v47; // rax
  __int64 v48; // rsi
  unsigned int (__fastcall *v49)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  int v52; // eax
  _DWORD *v53; // rax
  unsigned int (__fastcall *v54)(_QWORD, _QWORD, __int64, _QWORD); // rax
  char v55; // al
  _DWORD *v56; // rax
  _DWORD *v57; // rax
  int v58; // ecx
  char v59; // [rsp+40h] [rbp-C0h]
  char v60; // [rsp+40h] [rbp-C0h]
  char v61; // [rsp+41h] [rbp-BFh]
  unsigned int v62; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v63; // [rsp+48h] [rbp-B8h]
  int v64; // [rsp+50h] [rbp-B0h]
  int v65; // [rsp+54h] [rbp-ACh]
  int v66; // [rsp+58h] [rbp-A8h]
  int v67; // [rsp+5Ch] [rbp-A4h] BYREF
  int v68; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v69; // [rsp+68h] [rbp-98h]
  _QWORD *v70; // [rsp+70h] [rbp-90h]
  int v71; // [rsp+78h] [rbp-88h]
  int v72; // [rsp+7Ch] [rbp-84h]
  int v73; // [rsp+80h] [rbp-80h]
  _DWORD *v74; // [rsp+88h] [rbp-78h]
  __int64 v75; // [rsp+90h] [rbp-70h] BYREF
  int v76; // [rsp+98h] [rbp-68h]
  char *v77; // [rsp+A0h] [rbp-60h]
  __int64 v78; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-50h]
  __int64 v80; // [rsp+B8h] [rbp-48h]
  __int64 v81; // [rsp+C0h] [rbp-40h]
  _DWORD *v82; // [rsp+C8h] [rbp-38h]
  int *v83; // [rsp+D0h] [rbp-30h]
  char *v84; // [rsp+D8h] [rbp-28h]
  _QWORD *v85; // [rsp+E0h] [rbp-20h]
  _DWORD *v86; // [rsp+E8h] [rbp-18h] BYREF
  int v87; // [rsp+F0h] [rbp-10h]
  int v88; // [rsp+F4h] [rbp-Ch]
  _DWORD *v89; // [rsp+F8h] [rbp-8h] BYREF
  int v90; // [rsp+100h] [rbp+0h]
  int v91; // [rsp+104h] [rbp+4h]
  _BYTE v92[176]; // [rsp+110h] [rbp+10h] BYREF

  v8 = PpmPlatformStates;
  v63 = a1;
  v82 = a5;
  v9 = *(_QWORD *)(a1 + 23808);
  v83 = a6;
  v10 = 1;
  v85 = a7;
  v77 = a8;
  v81 = *(_QWORD *)(a1 + 23816);
  v72 = PopFxSystemLatencyHint;
  v59 = 0;
  LOBYTE(v65) = 0;
  v61 = 0;
  v79 = 0LL;
  v62 = 0;
  v74 = 0LL;
  v64 = 0;
  v69 = 0LL;
  v66 = 0;
  v67 = 0;
  v75 = 0LL;
  v78 = 0LL;
  v68 = 0;
  v84 = a4;
  v70 = a3;
  *a2 = PpmIdleEvaluateConstraints(a1, a3);
  *(_DWORD *)(v9 + 244) = 0;
  *(_DWORD *)(v9 + 240) = 1310721;
  memset((void *)(v9 + 248), 0, 0xA0uLL);
  PpmComputeIdleDurationHint(v63, 0LL, *v70);
  v11 = -1;
  if ( *(_QWORD *)(v9 + 432) )
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v9 + 432))(*(_QWORD *)(v9 + 488), v9 + 496);
  v12 = 0;
  if ( !*(_BYTE *)(v63 + 23869) )
    v12 = v11;
  v73 = v12;
  if ( v8 )
  {
    PoCopyDeepIdleMask((_DWORD *)(v9 + 576));
    KeAddProcessorAffinityEx((_WORD *)(v9 + 576), *(_DWORD *)(v63 + 36));
    v31 = v9 + 792;
    v32 = *(_DWORD **)(v9 + 752);
    v80 = *(_QWORD *)(v8 + 48);
    v33 = *(_DWORD *)v8;
    v74 = v32;
    memset(v32, 0, 4 * v33 + 8);
    LODWORD(v13) = v62;
    v34 = 0;
    v35 = 0LL;
    v71 = 0;
    if ( *(_DWORD *)(v9 + 776) )
    {
      v36 = 0;
      while ( 1 )
      {
        v76 = v36;
        if ( PpmIdleVetoBias != (_BYTE)v34
          || (v37 = 3 * v35, v38 = *(_QWORD *)(v9 + 784), *(_BYTE *)(v38 + 8 * v37 + 1) == (_BYTE)v34) )
        {
          LODWORD(v48) = -2;
        }
        else
        {
          v39 = *(unsigned int *)(v38 + 8 * v37 + 4);
          v40 = v63;
          if ( PpmDripsStateIndex == -1
            || (unsigned int)v39 < PpmDripsStateIndex
            || !(unsigned __int8)PpmCheckPreConditionsForDeepSleep(v63) )
          {
            v42 = v10;
            if ( v59 == 1 )
              v42 = 1;
            v10 = v42;
            v41 = v34;
            v59 = v34;
          }
          else
          {
            v41 = 1;
            if ( v59 == (_BYTE)v34 )
              v10 = 1;
            v59 = 1;
          }
          if ( v10 )
          {
            v10 = v34;
            v43 = (int)v70;
            LOBYTE(v43) = v41;
            PpmEstimateIdleDuration(v40, v43, *v70, 0, (__int64)&v75, (__int64)&v78, (__int64)&v68, (__int64)&v67);
            v34 = 0;
          }
          v44 = v75;
          v45 = v73;
          v46 = v63;
          *(_DWORD *)(v31 + 4) = v34;
          v62 = -1;
          v47 = PpmIdleCheckCoordinatedStateEligibility(v46, v45, v72, v44, v39, v39, (__int64)&v62, v31);
          v48 = v47;
          LODWORD(v13) = v62;
          if ( !*(_BYTE *)(v8 + 12) && !v47 )
          {
            v49 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v8 + 16);
            if ( v49 )
              v48 = v49(*(_QWORD *)(v9 + 488), v62, (unsigned int)v39);
          }
          PpmIdleUpdateSelectionStatistics(v48, 1008 * v39 + v80 + 72);
          v50 = 0xFFFFFFFFLL;
          v51 = 384 * v39;
          if ( v48 != 0xFFFFFFFFLL )
            v79 = *(_QWORD *)(v51 + v8 + 64);
          if ( !v48 )
          {
            *v77 = 1;
            *v74 = v39;
            if ( *(_BYTE *)(v51 + v8 + 121) )
              v50 = (unsigned int)v39;
            v70 = (_QWORD *)v50;
            if ( (unsigned int)KeSubtractAffinityEx(
                                 (unsigned __int16 *)(v9 + 240),
                                 (unsigned __int16 *)(v8 + v51 + 128),
                                 v92) )
              PpmUnlockProcessors(v9 + 240, v92);
            v27 = v69;
            v19 = (int)v70;
            LODWORD(v18) = (_DWORD)v69;
            v15 = v59;
LABEL_83:
            v20 = 1;
            goto LABEL_24;
          }
          if ( v48 == 2147483651LL )
          {
            v61 = 1;
          }
          else
          {
            v52 = (unsigned __int8)v65;
            if ( v48 == 2147483656LL )
              v52 = 1;
            v65 = v52;
          }
          PpmIdleRollbackCoordinatedSelection(v9 + 792, 0LL, 0LL);
          v36 = v64;
        }
        v64 = ++v36;
        v74[v76 + 2] = v48;
        v31 = v9 + 792;
        v35 = (unsigned int)(v71 + 1);
        v71 = v35;
        if ( (unsigned int)v35 >= *(_DWORD *)(v9 + 776) )
        {
          v64 = v36;
          break;
        }
      }
    }
    v53 = v74;
    *(_DWORD *)(v31 + 4) = v34;
    *v53 = -1;
    PpmUnlockProcessors(v9 + 240, v9 + 240);
  }
  else
  {
    LODWORD(v13) = v62;
  }
  v14 = *(_DWORD *)(v9 + 32);
  v15 = 0;
  v60 = 0;
  v16 = 1;
  v69 = *(_DWORD **)(v9 + 744);
  memset(v69, 0, 4 * v14 + 8);
  v18 = 0LL;
  v19 = -1;
  v79 = *(_QWORD *)(v9 + 40);
  if ( !*(_DWORD *)(v9 + 760) )
  {
    v27 = v69;
    goto LABEL_83;
  }
  LOBYTE(v20) = 1;
  while ( 1 )
  {
    v13 = *(unsigned int *)(*(_QWORD *)(v9 + 768) + 24 * v18 + 4);
    v21 = v63;
    if ( !v8
      && (_DWORD)v13 == *(_DWORD *)(v9 + 32) - 1
      && *(_BYTE *)(v9 + 540)
      && (unsigned __int8)PpmCheckPreConditionsForDeepSleep(v63) )
    {
      v23 = v20;
      if ( !v60 )
        v16 = v20;
    }
    else
    {
      v22 = v16;
      if ( v60 == (_BYTE)v20 )
        v22 = v20;
      v16 = v22;
      v23 = 0;
    }
    v60 = v23;
    if ( v16 )
    {
      v16 = 0;
      v24 = (int)v70;
      LOBYTE(v24) = v23;
      PpmEstimateIdleDuration(v21, v24, *v70, 0, (__int64)&v75, (__int64)&v78, (__int64)&v68, (__int64)&v67);
    }
    if ( (_DWORD)v13 )
    {
      v25 = PpmIdleCheckProcessorStateEligibility(v63, v73, v72, v75, v13, 0);
      if ( !v25 )
      {
        v54 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v9 + 440);
        if ( v54 )
          v25 = v54(*(_QWORD *)(v9 + 488), (unsigned int)v13, 0xFFFFFFFFLL, 0LL);
      }
    }
    else
    {
      v25 = 0LL;
    }
    PpmIdleUpdateSelectionStatistics(v25, 1000 * v13 + v81 + 80);
    if ( !v26 )
      break;
    v20 = 1;
    if ( v26 == 2147483651LL )
    {
      v61 = 1;
    }
    else
    {
      v55 = v65;
      if ( v26 == 2147483656LL )
        v55 = 1;
      LOBYTE(v65) = v55;
    }
    v56 = v69;
    v69[v18 + 2] = v26;
    v18 = (unsigned int)(v18 + 1);
    if ( (unsigned int)v18 >= *(_DWORD *)(v9 + 760) )
    {
      v15 = v60;
      v27 = v56;
      LODWORD(v18) = v66;
      goto LABEL_24;
    }
  }
  v27 = v69;
  *v69 = v13;
  if ( *(_BYTE *)(248 * v13 + v9 + 1058) && (!v8 || *(_BYTE *)(248 * v13 + v9 + 1061) && !(_DWORD)v13) )
  {
    v28 = 0;
    v20 = 1;
  }
  else
  {
    v20 = 1;
    v28 = 1;
  }
  v15 = v60;
  *v77 = v28;
LABEL_24:
  if ( *v77 )
  {
    LOBYTE(v17) = 1;
    PpmIdleSetSynchronizationState(v63 + 23872, v17);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x200000) != 0 )
  {
    v57 = v74;
    if ( v74 )
    {
      v58 = v64;
      v88 = 0;
      v74[1] = v64;
      v86 = v57;
      v87 = 4 * v58 + 8;
      EtwTraceKernelEvent((__int64)&v86, v20, 0x40200000u, 0x123Eu, 0x602u);
    }
    if ( v27 )
    {
      v91 = 0;
      v90 = 4 * v18 + 8;
      v27[1] = v18;
      v89 = v27;
      EtwTraceKernelEvent((__int64)&v89, 1u, 0x40200000u, 0x123Du, 0x602u);
    }
  }
  *(_WORD *)(v9 + 48) |= v67;
  v29 = v79;
  *(_BYTE *)(v9 + 7) = v65;
  *(_BYTE *)(v9 + 6) = v61;
  *(_QWORD *)(v9 + 520) = v78;
  *(_QWORD *)(v9 + 512) = v75;
  *(_BYTE *)(v9 + 541) = v68;
  *v82 = v13;
  *v83 = v19;
  *v84 = v15;
  result = v85;
  *v85 = v29;
  return result;
}
