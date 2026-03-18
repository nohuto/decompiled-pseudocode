/*
 * XREFs of PpmIdleSelectStates @ 0x140189C30
 * Callers:
 *     PoIdle @ 0x140031020 (PoIdle.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x1400BE1E0 (KeAddProcessorAffinityEx.c)
 *     KeSubtractAffinityEx @ 0x1400BEDF0 (KeSubtractAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x1400F8FD0 (PoCopyDeepIdleMask.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     PpmIdleUpdateSelectionStatistics @ 0x140189F5C (PpmIdleUpdateSelectionStatistics.c)
 *     PpmComputeIdleDurationHint @ 0x140189F78 (PpmComputeIdleDurationHint.c)
 *     PpmEstimateIdleDuration @ 0x14018A02C (PpmEstimateIdleDuration.c)
 *     PpmIdleEvaluateConstraints @ 0x14018A27C (PpmIdleEvaluateConstraints.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PpmCheckPreConditionsForDeepSleep @ 0x1402EE35C (PpmCheckPreConditionsForDeepSleep.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1402EED84 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleCheckProcessorStateEligibility @ 0x1402EEF84 (PpmIdleCheckProcessorStateEligibility.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x1402EF704 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleSetSynchronizationState @ 0x1402EF800 (PpmIdleSetSynchronizationState.c)
 *     PpmUnlockProcessors @ 0x1402F0664 (PpmUnlockProcessors.c)
 */

__int64 __fastcall PpmIdleSelectStates(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        char *a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        char *a8)
{
  __int64 v10; // rdi
  char v11; // r13
  __int64 v12; // r12
  char v13; // r15
  __int64 v14; // rax
  __int64 v15; // r14
  int v16; // eax
  int v17; // ecx
  __int64 v18; // rbx
  _DWORD *v19; // r15
  char v20; // si
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r14
  unsigned int v25; // r10d
  int v26; // ecx
  __int64 v27; // r9
  int v28; // esi
  char v29; // al
  _DWORD *v30; // rcx
  _QWORD *v31; // rcx
  __int64 result; // rax
  __int64 v33; // rsi
  _DWORD *v34; // rcx
  int v35; // eax
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r14
  int v42; // ecx
  int v43; // edx
  bool v44; // zf
  int v45; // r9d
  int v46; // edx
  int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // rsi
  unsigned int (__fastcall *v50)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  int v53; // eax
  _DWORD *v54; // rcx
  unsigned int (__fastcall *v55)(_QWORD, _QWORD, __int64, _QWORD); // rax
  char v56; // al
  _DWORD *v57; // rax
  int v58; // ecx
  __int64 v59; // [rsp+20h] [rbp-E0h]
  char v60; // [rsp+50h] [rbp-B0h]
  unsigned int v61; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v62; // [rsp+58h] [rbp-A8h]
  int v63; // [rsp+60h] [rbp-A0h]
  int v64; // [rsp+64h] [rbp-9Ch]
  int v65; // [rsp+68h] [rbp-98h]
  int v66; // [rsp+6Ch] [rbp-94h] BYREF
  int v67; // [rsp+70h] [rbp-90h] BYREF
  _DWORD *v68; // [rsp+78h] [rbp-88h]
  int v69; // [rsp+80h] [rbp-80h]
  int v70; // [rsp+84h] [rbp-7Ch]
  int v71; // [rsp+88h] [rbp-78h]
  _DWORD *v72; // [rsp+90h] [rbp-70h]
  __int64 v73; // [rsp+98h] [rbp-68h] BYREF
  _QWORD *v74; // [rsp+A0h] [rbp-60h]
  int v75; // [rsp+A8h] [rbp-58h]
  char *v76; // [rsp+B0h] [rbp-50h]
  __int64 v77; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v78; // [rsp+C0h] [rbp-40h]
  __int64 v79; // [rsp+C8h] [rbp-38h]
  __int64 v80; // [rsp+D0h] [rbp-30h]
  __int64 v81; // [rsp+D8h] [rbp-28h]
  _DWORD *v82; // [rsp+E0h] [rbp-20h]
  __int64 v83; // [rsp+E8h] [rbp-18h]
  char *v84; // [rsp+F0h] [rbp-10h]
  __int64 v85; // [rsp+F8h] [rbp-8h]
  _DWORD *v86; // [rsp+100h] [rbp+0h] BYREF
  int v87; // [rsp+108h] [rbp+8h]
  int v88; // [rsp+10Ch] [rbp+Ch]
  _DWORD *v89; // [rsp+110h] [rbp+10h] BYREF
  int v90; // [rsp+118h] [rbp+18h]
  int v91; // [rsp+11Ch] [rbp+1Ch]
  _BYTE v92[176]; // [rsp+120h] [rbp+20h] BYREF

  v82 = a5;
  v83 = a6;
  v85 = a7;
  v74 = a3;
  v62 = a1;
  v76 = a8;
  v84 = a4;
  memset(v92, 0, 0xA8uLL);
  v10 = *(_QWORD *)(a1 + 23808);
  v11 = 0;
  v12 = PpmPlatformStates;
  v81 = *(_QWORD *)(a1 + 23816);
  v13 = 1;
  LOBYTE(v64) = 0;
  v79 = 0xFFFFFFFFLL;
  v60 = 0;
  v78 = 0LL;
  v61 = 0;
  v72 = 0LL;
  v63 = 0;
  v68 = 0LL;
  v65 = 0;
  v66 = 0;
  v73 = 0LL;
  v77 = 0LL;
  v67 = 0;
  v70 = PopFxSystemLatencyHint;
  v14 = PpmIdleEvaluateConstraints(a1, v74);
  v15 = v10 + 240;
  *a2 = v14;
  *(_DWORD *)(v10 + 244) = 0;
  *(_DWORD *)(v10 + 240) = 1310721;
  memset((void *)(v10 + 248), 0, 0xA0uLL);
  PpmComputeIdleDurationHint(v62, 0LL, *v74);
  v16 = -1;
  if ( *(_QWORD *)(v10 + 432) )
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v10 + 432))(*(_QWORD *)(v10 + 488), v10 + 496);
  v17 = 0;
  if ( !*(_BYTE *)(v62 + 23869) )
    v17 = v16;
  v71 = v17;
  if ( v12 )
  {
    PoCopyDeepIdleMask((_DWORD *)(v10 + 576));
    KeAddProcessorAffinityEx((_WORD *)(v10 + 576), *(_DWORD *)(v62 + 36));
    v33 = v10 + 792;
    v34 = *(_DWORD **)(v10 + 752);
    v80 = *(_QWORD *)(v12 + 48);
    v35 = *(_DWORD *)v12;
    v72 = v34;
    memset(v34, 0, 4 * v35 + 8);
    LODWORD(v18) = v61;
    v36 = 0LL;
    v37 = 0LL;
    v69 = 0;
    if ( *(_DWORD *)(v10 + 776) )
    {
      v38 = 0LL;
      while ( 1 )
      {
        v75 = v38;
        if ( PpmIdleVetoBias != (_BYTE)v36
          || (v39 = 3 * v37, v40 = *(_QWORD *)(v10 + 784), *(_BYTE *)(v40 + 8 * v39 + 1) == (_BYTE)v36) )
        {
          LODWORD(v49) = -2;
        }
        else
        {
          v41 = *(unsigned int *)(v40 + 8 * v39 + 4);
          v42 = v62;
          if ( PpmDripsStateIndex == -1
            || (unsigned int)v41 < PpmDripsStateIndex
            || !(unsigned __int8)PpmCheckPreConditionsForDeepSleep(v62, v38, v36, 1LL) )
          {
            v43 = 1;
            v44 = v11 == 1;
            v11 = v36;
          }
          else
          {
            v43 = 1;
            v44 = v11 == 0;
            v11 = 1;
          }
          if ( v44 )
            v13 = 1;
          if ( v13 )
          {
            v13 = v36;
            LOBYTE(v43) = v11;
            v59 = v36;
            LOBYTE(v36) = v11;
            PpmEstimateIdleDuration(
              v42,
              v43,
              v36,
              *v74,
              v59,
              (__int64)&v73,
              (__int64)&v77,
              (__int64)&v67,
              (__int64)&v66);
            LODWORD(v36) = 0;
          }
          v45 = v73;
          v46 = v71;
          v47 = v62;
          *(_DWORD *)(v33 + 4) = v36;
          v61 = -1;
          v48 = PpmIdleCheckCoordinatedStateEligibility(v47, v46, v70, v45, v41, v41, (__int64)&v61, v33);
          v49 = v48;
          LODWORD(v18) = v61;
          if ( !*(_BYTE *)(v12 + 12) && !v48 )
          {
            v50 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v12 + 16);
            if ( v50 )
              v49 = v50(*(_QWORD *)(v10 + 488), v61, (unsigned int)v41);
          }
          PpmIdleUpdateSelectionStatistics(v49, 1008 * v41 + v80 + 72);
          v51 = 0xFFFFFFFFLL;
          v52 = 384 * v41;
          if ( v49 != 0xFFFFFFFFLL )
            v78 = *(_QWORD *)(v52 + v12 + 64);
          if ( !v49 )
          {
            *v76 = 1;
            *v72 = v41;
            if ( *(_BYTE *)(v52 + v12 + 121) )
              v51 = (unsigned int)v41;
            v79 = v51;
            if ( (unsigned int)KeSubtractAffinityEx(
                                 (unsigned __int16 *)(v10 + 240),
                                 (unsigned __int16 *)(v12 + v52 + 128),
                                 v92) )
              PpmUnlockProcessors(v10 + 240, v92);
            v19 = v68;
            v28 = (int)v68;
LABEL_82:
            v25 = 1;
            goto LABEL_24;
          }
          if ( v49 == 2147483651LL )
          {
            v60 = 1;
          }
          else
          {
            v53 = (unsigned __int8)v64;
            if ( v49 == 2147483656LL )
              v53 = 1;
            v64 = v53;
          }
          PpmIdleRollbackCoordinatedSelection(v10 + 792, 0LL, 0LL);
          LODWORD(v38) = v63;
        }
        v38 = (unsigned int)(v38 + 1);
        v54 = v72;
        v63 = v38;
        v72[v75 + 2] = v49;
        v33 = v10 + 792;
        v37 = (unsigned int)(v69 + 1);
        v69 = v37;
        if ( (unsigned int)v37 >= *(_DWORD *)(v10 + 776) )
        {
          v63 = v38;
          v15 = v10 + 240;
          goto LABEL_63;
        }
      }
    }
    v54 = v72;
LABEL_63:
    *(_DWORD *)(v33 + 4) = v36;
    *v54 = -1;
    PpmUnlockProcessors(v15, v15);
  }
  else
  {
    LODWORD(v18) = v61;
  }
  v19 = *(_DWORD **)(v10 + 744);
  v11 = 0;
  v20 = 1;
  memset(v19, 0, 4 * *(_DWORD *)(v10 + 32) + 8);
  v24 = 0LL;
  v78 = *(_QWORD *)(v10 + 40);
  if ( !*(_DWORD *)(v10 + 760) )
  {
    v28 = 0;
    goto LABEL_82;
  }
  LOBYTE(v25) = 1;
  while ( 1 )
  {
    v18 = *(unsigned int *)(*(_QWORD *)(v10 + 768) + 24 * v24 + 4);
    v26 = v62;
    if ( !v12
      && (_DWORD)v18 == *(_DWORD *)(v10 + 32) - 1
      && *(_BYTE *)(v10 + 540)
      && (unsigned __int8)PpmCheckPreConditionsForDeepSleep(v62, v21, v22, v23) )
    {
      v44 = v11 == 0;
      v11 = v25;
      if ( v44 )
        v20 = v25;
    }
    else
    {
      if ( v11 == (_BYTE)v25 )
        v20 = v25;
      v11 = 0;
    }
    if ( v20 )
    {
      v20 = 0;
      LOBYTE(v21) = v11;
      PpmEstimateIdleDuration(v26, v21, 0, *v74, 0LL, (__int64)&v73, (__int64)&v77, (__int64)&v67, (__int64)&v66);
    }
    if ( (_DWORD)v18 )
    {
      v27 = PpmIdleCheckProcessorStateEligibility(v62, v71, v70, v73, v18, 0);
      if ( !v27 )
      {
        v55 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v10 + 440);
        if ( v55 )
          v27 = v55(*(_QWORD *)(v10 + 488), (unsigned int)v18, 0xFFFFFFFFLL, 0LL);
      }
    }
    else
    {
      v27 = 0LL;
    }
    PpmIdleUpdateSelectionStatistics(v27, 1000 * v18 + v81 + 80);
    if ( !v23 )
      break;
    v25 = 1;
    if ( v23 == 2147483651LL )
    {
      v60 = 1;
    }
    else
    {
      v56 = v64;
      if ( v23 == 2147483656LL )
        v56 = 1;
      LOBYTE(v64) = v56;
    }
    v19[v24 + 2] = v23;
    v24 = (unsigned int)(v24 + 1);
    if ( (unsigned int)v24 >= *(_DWORD *)(v10 + 760) )
    {
      v28 = v65;
      goto LABEL_24;
    }
  }
  *v19 = v18;
  v28 = v24;
  if ( *(_BYTE *)(248 * v18 + v10 + 1058) && (!v12 || *(_BYTE *)(248 * v18 + v10 + 1061) && !(_DWORD)v18) )
  {
    v29 = 0;
    v25 = 1;
  }
  else
  {
    v25 = 1;
    v29 = 1;
  }
  *v76 = v29;
LABEL_24:
  if ( *v76 )
  {
    LOBYTE(v21) = 1;
    PpmIdleSetSynchronizationState(v62 + 23872, v21);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x200000) != 0 )
  {
    v57 = v72;
    if ( v72 )
    {
      v58 = v63;
      v88 = 0;
      v72[1] = v63;
      v86 = v57;
      v87 = 4 * v58 + 8;
      EtwTraceKernelEvent((__int64)&v86, v25, 0x40200000u, 0x123Eu, 0x602u);
    }
    if ( v19 )
    {
      v91 = 0;
      v90 = 4 * v28 + 8;
      v19[1] = v28;
      v89 = v19;
      EtwTraceKernelEvent((__int64)&v89, 1u, 0x40200000u, 0x123Du, 0x602u);
    }
  }
  *(_WORD *)(v10 + 48) |= v66;
  v30 = (_DWORD *)v83;
  *(_BYTE *)(v10 + 7) = v64;
  *(_BYTE *)(v10 + 6) = v60;
  *(_QWORD *)(v10 + 520) = v77;
  *(_QWORD *)(v10 + 512) = v73;
  *(_BYTE *)(v10 + 541) = v67;
  *v82 = v18;
  *v30 = v79;
  v31 = (_QWORD *)v85;
  *v84 = v11;
  result = v78;
  *v31 = v78;
  return result;
}
