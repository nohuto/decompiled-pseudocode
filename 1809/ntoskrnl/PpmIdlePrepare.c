/*
 * XREFs of PpmIdlePrepare @ 0x14005F3A0
 * Callers:
 *     PoIdle @ 0x14005D6B0 (PoIdle.c)
 * Callees:
 *     KiFindNextTimerDueTime @ 0x14005FD20 (KiFindNextTimerDueTime.c)
 *     MmGetNextNode @ 0x140061FC0 (MmGetNextNode.c)
 *     KiGetNextTimerExpirationDueTime @ 0x140061FF0 (KiGetNextTimerExpirationDueTime.c)
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PpmGetIdleConstrainedMask @ 0x1402D412C (PpmGetIdleConstrainedMask.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x14031C7AC (ExGetNextWakeTimeForDeepSleep.c)
 */

__int64 __fastcall PpmIdlePrepare(
        __int64 a1,
        bool *a2,
        LARGE_INTEGER *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        __int64 a6)
{
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rbx
  LARGE_INTEGER v12; // r14
  __int64 v13; // r12
  LARGE_INTEGER PerformanceCounter; // rdx
  LARGE_INTEGER v15; // r10
  __int64 v16; // r13
  __int64 v17; // rdx
  unsigned __int64 *v18; // rbx
  int v19; // ecx
  char v20; // al
  char v21; // al
  unsigned __int64 v22; // r10
  __int64 v23; // r13
  __int64 v24; // rcx
  unsigned __int64 v25; // r14
  __int64 v26; // rdx
  unsigned __int64 v27; // r15
  int v28; // r12d
  bool v29; // zf
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rsi
  int v32; // r14d
  __int64 NextWakeTimeForDeepSleep; // rax
  __int64 v34; // r8
  unsigned __int64 v35; // rsi
  unsigned int v36; // edx
  unsigned int v37; // ecx
  unsigned int i; // eax
  ULONG v39; // eax
  __int64 v40; // r12
  __int64 v41; // rax
  unsigned int v42; // ebx
  __int64 v43; // r13
  __int64 v44; // r15
  unsigned int v45; // edx
  char v46; // r14
  unsigned int *v47; // rsi
  bool v48; // cl
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  struct _KPRCB *CurrentPrcb; // r8
  _KNODE *ParentNode; // r9
  unsigned int v54; // r11d
  int NextNode; // eax
  signed __int64 v57; // rax
  __int64 v58; // rcx
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rbx
  __int64 Prcb; // rax
  unsigned __int64 v63; // rcx
  __int64 v64; // rdi
  __int64 v65; // r12
  char v66; // al
  unsigned __int64 v67; // rcx
  __int64 v68; // r14
  bool v69; // [rsp+30h] [rbp-D0h]
  int v70; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v71; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v72; // [rsp+40h] [rbp-C0h]
  __int64 v73; // [rsp+48h] [rbp-B8h]
  int v74; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v75; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v76; // [rsp+58h] [rbp-A8h]
  unsigned int v77; // [rsp+5Ch] [rbp-A4h]
  __int64 v78; // [rsp+60h] [rbp-A0h]
  __int64 v79; // [rsp+68h] [rbp-98h]
  unsigned __int64 v80; // [rsp+70h] [rbp-90h]
  unsigned __int64 v81; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 *v82; // [rsp+80h] [rbp-80h]
  LARGE_INTEGER *v83; // [rsp+88h] [rbp-78h]
  __int64 v84; // [rsp+90h] [rbp-70h]
  __int64 v85; // [rsp+98h] [rbp-68h]
  __int64 v86; // [rsp+A0h] [rbp-60h]
  bool *v87; // [rsp+A8h] [rbp-58h]
  unsigned __int64 *v88; // [rsp+B0h] [rbp-50h]
  _QWORD v89[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v90; // [rsp+C8h] [rbp-38h]
  __int64 v91; // [rsp+D0h] [rbp-30h]
  char v92[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v93; // [rsp+E8h] [rbp-18h]

  v6 = a1;
  v88 = a5;
  v7 = *(_QWORD *)(a1 + 23808);
  v85 = a6;
  v87 = a2;
  v78 = a1;
  v77 = PpmDripsStateIndex;
  v79 = v7 + 488;
  v82 = a4;
  v83 = a3;
  v69 = 0;
  v73 = v7;
  v86 = PpmPlatformStates;
  v80 = 0LL;
  if ( *(_BYTE *)(a1 + 33) )
  {
    if ( PopDeepSleepIsEnabled && PopDeepSleepIsEngaged && !PopDeepSleepEvaluateWorkItemQueued )
    {
      if ( PpmPlatformStates )
        v69 = 1;
      else
        v69 = *(_DWORD *)(v7 + 32) > 1u;
    }
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v6 + 23808);
      v10 = 0LL;
      while ( 1 )
      {
        v11 = MEMORY[0xFFFFF78000000340];
        if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
        {
          v12.QuadPart = MEMORY[0xFFFFF78000000350];
          v13 = MEMORY[0xFFFFF78000000008];
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          if ( MEMORY[0xFFFFF78000000340] == v11 )
            break;
        }
        _mm_pause();
      }
      v6 = v78;
      v15 = PerformanceCounter;
      v16 = v73;
      if ( PerformanceCounter.QuadPart > (unsigned __int64)v12.QuadPart )
      {
        v17 = -1 - v12.QuadPart + PerformanceCounter.QuadPart;
        if ( MEMORY[0xFFFFF78000000369] )
          v17 <<= MEMORY[0xFFFFF78000000369];
        v10 = ((unsigned __int64)v17 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
        v91 = v10;
      }
      v18 = v82;
      *v82 = v13 + v10;
      *(LARGE_INTEGER *)(v9 + 496) = v15;
      *(_QWORD *)(v9 + 504) = *(_QWORD *)(v6 + 23832) + *(_QWORD *)(v6 + 24008);
      *(_BYTE *)(v9 + 538) = *(_BYTE *)(v6 + 24228);
      *(_BYTE *)(v9 + 536) = *(_BYTE *)(v6 + 23864);
      *(_BYTE *)(v9 + 537) = *(_BYTE *)(v6 + 23865);
      *(_BYTE *)(v9 + 539) = 1;
      if ( !*(_BYTE *)(v6 + 33) )
        goto LABEL_12;
      CurrentPrcb = KeGetCurrentPrcb();
      v74 = 0;
      ParentNode = CurrentPrcb->ParentNode;
      v54 = ParentNode->Affinity.Reserved[0];
      if ( (ParentNode->DeepIdleSet & ~(1LL << CurrentPrcb->GroupIndex)) == (ParentNode->Affinity.Mask & ~(1LL << (KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] & 0x3F))) )
      {
        while ( 1 )
        {
          NextNode = MmGetNextNode(v54, &v74);
          if ( NextNode == -1 )
            break;
          if ( *(_QWORD *)(KeNodeBlock[NextNode] + 64) != *(_QWORD *)(KeNodeBlock[NextNode] + 136) )
            goto LABEL_12;
        }
        *(_BYTE *)(v9 + 540) = 1;
        *(_WORD *)(v9 + 48) |= 0x80u;
      }
      else
      {
LABEL_12:
        *(_BYTE *)(v9 + 540) = 0;
      }
      if ( *(_BYTE *)(v9 + 1) )
      {
        *(_WORD *)(v9 + 48) |= 0x100u;
        v19 = *(_DWORD *)(v9 + 28);
      }
      else
      {
        v19 = -1;
      }
      *(_DWORD *)(v9 + 528) = v19;
      if ( PpmIdleRespectIdleStateMax )
      {
        v20 = BYTE2(PpmCurrentProfile[341 * dword_14041918C + 24]);
        *(_BYTE *)(v9 + 542) = v20;
        if ( v20 )
          *(_WORD *)(v9 + 48) |= 0x4000u;
      }
      else
      {
        *(_BYTE *)(v9 + 542) = 0;
      }
      *v83 = v15;
      if ( !v69 || *(_BYTE *)(v16 + 540) )
        break;
      *(_WORD *)(v16 + 48) = 0;
      v69 = 0;
    }
    v21 = *(_BYTE *)(v6 + 33);
    v22 = *v18;
    v23 = *(_QWORD *)(v6 + 23808);
    v71 = *v18;
    v84 = v23;
    if ( !v21 && KiSerializeTimerExpiration )
    {
      v72 = 0LL;
      _m_prefetchw(&PpmPlatformIdleHint);
      v50 = PpmPlatformIdleHint;
      if ( (_WORD)PpmPlatformIdleHint )
      {
        while ( 1 )
        {
          v57 = _InterlockedCompareExchange64(&PpmPlatformIdleHint, v50 ^ (unsigned __int16)(v50 ^ (v50 - 1)), v50);
          if ( v50 == v57 )
            break;
          v50 = v57;
          _mm_pause();
          if ( !(_WORD)v57 )
            goto LABEL_59;
        }
        v25 = v50 >> 16;
        v72 = v50 >> 16;
      }
      else
      {
LABEL_59:
        v25 = 0LL;
      }
      v24 = *(_QWORD *)(v6 + 23808);
      v21 = *(_BYTE *)(v6 + 33);
    }
    else
    {
      v24 = v23;
      v25 = 0LL;
      v72 = 0LL;
    }
    v26 = *(unsigned __int8 *)(v24 + 540);
    v27 = -1LL;
    v28 = v21 != 0 ? 8 : 0;
    if ( v69 )
      LOWORD(v28) = v28 | 4;
    v29 = *(_BYTE *)(v6 + 33) == 0;
    v30 = KiClockTimerNextTickTime;
    v70 = 2;
    if ( v29 )
    {
      v31 = 0LL;
      if ( *(_QWORD *)(v6 + 16) )
      {
        v32 = 1;
      }
      else if ( PoSkipTickMode != 2 || KiSerializeTimerExpiration )
      {
        v32 = 4;
        if ( v69 )
          NextWakeTimeForDeepSleep = ExGetNextWakeTimeForDeepSleep(v24, v26);
        else
          NextWakeTimeForDeepSleep = KiFindNextTimerDueTime(v6, v22, 0LL);
        v31 = NextWakeTimeForDeepSleep;
        if ( KiGroupSchedulingEnabled )
        {
          v51 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v6 + 36)];
          if ( (((unsigned __int64)qword_140404D58[v51 >> 6] >> (v51 & 0x3F)) & 1) != 0
            && KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < v31 )
          {
            v31 = KiGenerationEndTick * KeMaximumIncrement;
            v32 = 5;
          }
        }
        if ( !*(_BYTE *)(v6 + 33) )
          goto LABEL_31;
        LOBYTE(v34) = 0;
        v58 = v69 + 2LL;
        v59 = -1LL;
        do
        {
          if ( qword_140422E50[3 * v58] < v59 )
          {
            v34 = (unsigned __int8)v34;
            v59 = qword_140422E50[3 * v58];
            if ( v58 == 3 )
              v34 = 1LL;
          }
          ++v58;
        }
        while ( v58 <= 3 );
        v6 = v78;
        v23 = v84;
        if ( v59 < v31 )
        {
          v32 = 6;
          v31 = v59;
          if ( (_BYTE)v34 )
            v32 = 7;
        }
        if ( *(_BYTE *)(v78 + 33)
          && (v60 = ((__int64 (__fastcall *)(__int64, unsigned __int64, __int64))off_1403FF6A8[0])(v58, v59, v34)) != 0 )
        {
          v22 = v71;
          if ( v31 > v60 )
          {
            v31 = v60;
            v32 = 9;
            if ( v71 > v60 )
              v31 = v71;
          }
        }
        else
        {
LABEL_31:
          v22 = v71;
        }
      }
      else
      {
        v32 = 2;
      }
      v70 = v32;
      v25 = v72;
      if ( v30 <= v31 )
        v30 = v31;
      v81 = v31;
    }
    else if ( (_BYTE)v26 && !(_BYTE)KiDynamicTickDisableReason && !KiClockState )
    {
      LOBYTE(v26) = 1;
      KiGetNextTimerExpirationDueTime(v6, v26, v22, v69, (__int64)&v81, (__int64)&v70);
      v22 = v71;
      if ( v71 + (unsigned int)KiLastRequestedTimeIncrement < v81 )
        v30 = v81;
      else
        v70 = 2;
    }
    if ( v30 == -1LL )
    {
      v35 = -1LL;
    }
    else
    {
      v35 = 0LL;
      if ( v30 > v22 )
        v35 = v30 - v22;
    }
    v36 = 0;
    v37 = *(_DWORD *)(v6 + 11684);
    for ( i = v37; i; i >>= 4 )
      v36 += KeMaximumIncrement;
    if ( !v69 && v37 )
    {
      v39 = KeMaximumIncrement / (v37 + 1);
      if ( !v39 )
        v39 = 1;
      v27 = v39;
    }
    if ( v35 <= v27 )
    {
      v27 = v35;
    }
    else
    {
      LOWORD(v28) = v28 | 1;
      if ( v35 >= v36 )
        v35 = v36;
    }
    if ( PpmIdleDurationExpirationTimeout && *(_BYTE *)(v6 + 33) && (unsigned __int8)PpmGetIdleConstrainedMask(v92) )
    {
      v61 = 0LL;
      v90 = 0;
      v89[1] = v93;
      v89[0] = v92;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v75, v89) )
      {
        Prcb = KeGetPrcb(v75);
        v63 = *(_QWORD *)(Prcb + 23848);
        if ( v63 != -1LL && v63 > v61 )
          v61 = *(_QWORD *)(Prcb + 23848);
      }
      if ( v61 && v35 + v71 > v61 )
      {
        LOWORD(v28) = v28 | 0x2000;
        v35 = v61 > v71 ? (unsigned int)(v61 - v71) : 1LL;
        if ( v35 < v27 )
          v27 = v35;
      }
    }
    if ( v27 < v25 )
    {
      v27 = v25;
      v35 = v25;
      LOWORD(v28) = v28 | 0x1000;
    }
    *(_WORD *)(v23 + 48) |= v28;
    v40 = v79;
    *(_BYTE *)(v23 + 541) = v70;
    v41 = v73;
    *(_QWORD *)(v23 + 520) = v35;
    *(_QWORD *)(v23 + 512) = v27;
    (*(void (__fastcall **)(__int64))(v41 + 408))(v40);
    v42 = *(_DWORD *)(v40 + 76);
    v43 = *(unsigned int *)(v40 + 72);
    LODWORD(v71) = v42;
    if ( v42 == -2 || v42 == -1 )
      break;
    v44 = *(_QWORD *)(v6 + 23816);
    v29 = !_BitScanForward(&v45, *(_DWORD *)(v40 + 80));
    v76 = v45;
    if ( !v29 )
    {
      do
      {
        *(_DWORD *)(v40 + 80) &= *(_DWORD *)(v40 + 80) - 1;
        ++*(_DWORD *)(1000LL * v45 + v44 + 52);
        v29 = !_BitScanForward(&v45, *(_DWORD *)(v40 + 80));
      }
      while ( !v29 );
      v76 = v45;
    }
    v46 = 0;
    v47 = *(unsigned int **)(v40 + 64);
    if ( *(_DWORD *)(v40 + 60) )
    {
      v64 = v85;
      v65 = *(unsigned int *)(v40 + 60);
      do
      {
        if ( *((_BYTE *)v47 + 4) == 0xFF )
        {
          v66 = v46;
          if ( !v46 )
            v66 = 1;
          v46 = v66;
          KeAddProcessorAffinityEx(v64, *v47);
        }
        v47 += 2;
        --v65;
      }
      while ( v65 );
      v6 = v78;
      v42 = v71;
      v40 = v79;
      if ( v46 && *(_BYTE *)(v79 + 52) )
      {
        v67 = v80;
        if ( v80 < *(_QWORD *)(v79 + 24) )
          v67 = *(_QWORD *)(v79 + 24);
        v80 = v67;
      }
    }
    v48 = v69;
    if ( !v69 )
      goto LABEL_56;
    v68 = v86;
    if ( v86 )
    {
      if ( (_DWORD)v43 != -1 && (unsigned int)v43 >= v77 )
        goto LABEL_56;
    }
    else if ( v42 == *(_DWORD *)(v73 + 32) - 1 )
    {
      goto LABEL_56;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(v73 + 464))(*(_QWORD *)v40, 0LL);
    ++*(_DWORD *)(1000LL * v42 + v44 + 48);
    if ( (_DWORD)v43 != -1 && v68 )
      ++*(_DWORD *)(1008 * v43 + *(_QWORD *)(v68 + 48) + 24);
    v69 = 0;
    *(_WORD *)(v73 + 48) = 2;
  }
  v48 = 0;
LABEL_56:
  *v87 = v48;
  *v88 = v80;
  return v42;
}
