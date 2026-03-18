/*
 * XREFs of PpmIdlePrepare @ 0x1400330E0
 * Callers:
 *     PoIdle @ 0x140031410 (PoIdle.c)
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     KiFindNextTimerDueTime @ 0x140034430 (KiFindNextTimerDueTime.c)
 *     MmGetNextNode @ 0x140080AF4 (MmGetNextNode.c)
 *     KiGetNextTimerExpirationDueTime @ 0x14009CE30 (KiGetNextTimerExpirationDueTime.c)
 *     KeAddProcessorAffinityEx @ 0x14009E060 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PpmGetIdleConstrainedMask @ 0x1402EE380 (PpmGetIdleConstrainedMask.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x14033AFBC (ExGetNextWakeTimeForDeepSleep.c)
 */

__int64 __fastcall PpmIdlePrepare(
        __int64 a1,
        bool *a2,
        LARGE_INTEGER *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        __int64 a6)
{
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v10; // rdi
  __int64 v11; // rbx
  LARGE_INTEGER v12; // r14
  __int64 v13; // r12
  LARGE_INTEGER PerformanceCounter; // rdx
  LARGE_INTEGER v15; // r10
  __int64 v16; // r13
  __int64 v17; // rdx
  unsigned __int64 *v18; // rbx
  unsigned __int64 v19; // rax
  int v20; // ecx
  char v21; // al
  bool v22; // r14
  unsigned __int64 v23; // rax
  char v24; // bl
  __int64 v25; // r13
  __int64 v26; // rdi
  int v27; // edx
  __int64 v28; // rcx
  unsigned __int64 v29; // r15
  int v30; // r12d
  bool v31; // zf
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rdi
  int v34; // r14d
  __int64 NextWakeTimeForDeepSleep; // rax
  __int64 v36; // r8
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rdi
  unsigned int v39; // edx
  unsigned int v40; // ecx
  unsigned int i; // eax
  ULONG v42; // eax
  __int64 v43; // r12
  __int64 v44; // rax
  unsigned int v45; // ebx
  __int64 v46; // r13
  __int64 v47; // r15
  unsigned int v48; // edx
  char v49; // r14
  unsigned int *v50; // rdi
  bool v51; // cl
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rax
  struct _KPRCB *CurrentPrcb; // r8
  _KNODE *ParentNode; // r9
  unsigned int v57; // r11d
  int NextNode; // eax
  signed __int64 v60; // rax
  unsigned __int64 v61; // rdx
  __int64 v62; // rcx
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rbx
  __int64 Prcb; // rax
  unsigned __int64 v66; // rcx
  __int64 v67; // rsi
  __int64 v68; // r12
  char v69; // al
  unsigned __int64 v70; // rcx
  __int64 v71; // r14
  bool v72; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v73; // [rsp+48h] [rbp-B8h]
  int v74; // [rsp+50h] [rbp-B0h] BYREF
  int v75; // [rsp+54h] [rbp-ACh]
  __int64 v76; // [rsp+58h] [rbp-A8h]
  int v77; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v78; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v79; // [rsp+68h] [rbp-98h]
  unsigned int v80; // [rsp+6Ch] [rbp-94h]
  unsigned __int64 v81; // [rsp+70h] [rbp-90h]
  __int64 v82; // [rsp+78h] [rbp-88h]
  __int64 v83; // [rsp+80h] [rbp-80h]
  unsigned __int64 v84; // [rsp+88h] [rbp-78h]
  unsigned __int64 v85; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 *v86; // [rsp+98h] [rbp-68h]
  LARGE_INTEGER *v87; // [rsp+A0h] [rbp-60h]
  __int64 v88; // [rsp+A8h] [rbp-58h]
  __int64 v89; // [rsp+B0h] [rbp-50h]
  bool *v90; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v91; // [rsp+C0h] [rbp-40h]
  _QWORD *v92; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v93; // [rsp+D0h] [rbp-30h]
  __int64 v94; // [rsp+D8h] [rbp-28h]
  __int64 v95; // [rsp+E0h] [rbp-20h]
  _QWORD v96[22]; // [rsp+F0h] [rbp-10h] BYREF

  v6 = a1;
  v7 = 0LL;
  v91 = a5;
  v8 = *(_QWORD *)(a1 + 23808);
  v88 = a6;
  v82 = a1;
  v80 = PpmDripsStateIndex;
  v83 = v8 + 488;
  v86 = a4;
  v87 = a3;
  v90 = a2;
  v72 = 0;
  v76 = v8;
  v89 = PpmPlatformStates;
  v84 = 0LL;
  if ( *(_BYTE *)(a1 + 33) )
  {
    if ( PopDeepSleepIsEnabled && PopDeepSleepIsEngaged && !PopDeepSleepEvaluateWorkItemQueued )
    {
      if ( PpmPlatformStates )
        v72 = 1;
      else
        v72 = *(_DWORD *)(v8 + 32) > 1u;
    }
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v6 + 23808);
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
      v6 = v82;
      v15 = PerformanceCounter;
      v16 = v76;
      if ( PerformanceCounter.QuadPart > (unsigned __int64)v12.QuadPart )
      {
        v17 = -1 - v12.QuadPart + PerformanceCounter.QuadPart;
        if ( MEMORY[0xFFFFF78000000369] )
          v17 <<= MEMORY[0xFFFFF78000000369];
        v7 = ((unsigned __int64)v17 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
        v95 = v7;
      }
      v18 = v86;
      v19 = v13 + v7;
      v7 = 0LL;
      *v86 = v19;
      *(LARGE_INTEGER *)(v10 + 496) = v15;
      *(_QWORD *)(v10 + 504) = *(_QWORD *)(v6 + 23832) + *(_QWORD *)(v6 + 24008);
      *(_BYTE *)(v10 + 538) = *(_BYTE *)(v6 + 24228);
      *(_BYTE *)(v10 + 536) = *(_BYTE *)(v6 + 23864);
      *(_BYTE *)(v10 + 537) = *(_BYTE *)(v6 + 23865);
      *(_BYTE *)(v10 + 539) = 1;
      if ( !*(_BYTE *)(v6 + 33) )
        goto LABEL_12;
      CurrentPrcb = KeGetCurrentPrcb();
      v77 = 0;
      ParentNode = CurrentPrcb->ParentNode;
      v57 = ParentNode->Affinity.Reserved[0];
      if ( (ParentNode->DeepIdleSet & ~(1LL << CurrentPrcb->GroupIndex)) == (ParentNode->Affinity.Mask & ~(1LL << (KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] & 0x3F))) )
      {
        while ( 1 )
        {
          NextNode = MmGetNextNode(v57, &v77);
          if ( NextNode == -1 )
            break;
          if ( *(_QWORD *)(KeNodeBlock[NextNode] + 64) != *(_QWORD *)(KeNodeBlock[NextNode] + 136) )
            goto LABEL_12;
        }
        *(_BYTE *)(v10 + 540) = 1;
        *(_WORD *)(v10 + 48) |= 0x80u;
      }
      else
      {
LABEL_12:
        *(_BYTE *)(v10 + 540) = 0;
      }
      if ( *(_BYTE *)(v10 + 1) )
      {
        *(_WORD *)(v10 + 48) |= 0x100u;
        v20 = *(_DWORD *)(v10 + 28);
      }
      else
      {
        v20 = -1;
      }
      *(_DWORD *)(v10 + 528) = v20;
      if ( PpmIdleRespectIdleStateMax )
      {
        v21 = BYTE2(PpmCurrentProfile[341 * dword_140443A2C + 24]);
        *(_BYTE *)(v10 + 542) = v21;
        if ( v21 )
          *(_WORD *)(v10 + 48) |= 0x4000u;
      }
      else
      {
        *(_BYTE *)(v10 + 542) = 0;
      }
      v22 = v72;
      *v87 = v15;
      if ( !v72 || *(_BYTE *)(v16 + 540) )
        break;
      *(_WORD *)(v16 + 48) = 0;
      v72 = 0;
    }
    v23 = *v18;
    v24 = *(_BYTE *)(v6 + 33);
    v25 = *(_QWORD *)(v6 + 23808);
    v73 = v23;
    if ( !v24 && KiSerializeTimerExpiration )
    {
      v81 = 0LL;
      _m_prefetchw(&PpmPlatformIdleHint);
      v53 = PpmPlatformIdleHint;
      if ( (_WORD)PpmPlatformIdleHint )
      {
        while ( 1 )
        {
          v60 = _InterlockedCompareExchange64(&PpmPlatformIdleHint, v53 ^ (unsigned __int16)(v53 ^ (v53 - 1)), v53);
          if ( v53 == v60 )
            break;
          v53 = v60;
          _mm_pause();
          if ( !(_WORD)v60 )
            goto LABEL_58;
        }
        v81 = v53 >> 16;
      }
LABEL_58:
      v26 = *(_QWORD *)(v6 + 23808);
      v24 = *(_BYTE *)(v6 + 33);
    }
    else
    {
      v81 = 0LL;
      v26 = v25;
    }
    v92 = 0LL;
    v93 = 0LL;
    v94 = 0LL;
    memset(v96, 0, 0xA8uLL);
    v28 = *(unsigned __int8 *)(v26 + 540);
    v29 = -1LL;
    v30 = v24 != 0 ? 8 : 0;
    if ( v72 )
      LOWORD(v30) = v30 | 4;
    v31 = *(_BYTE *)(v6 + 33) == 0;
    v32 = KiClockTimerNextTickTime;
    v74 = 2;
    if ( !v31 )
    {
      if ( !(_BYTE)v28 || (_BYTE)KiDynamicTickDisableReason || KiClockState )
      {
        v37 = v73;
      }
      else
      {
        LOBYTE(v27) = 1;
        KiGetNextTimerExpirationDueTime(v6, v27, v73, v72, 0, (__int64)&v85, (__int64)&v74);
        v37 = v73;
        if ( v73 + (unsigned int)KiLastRequestedTimeIncrement < v85 )
          v32 = v85;
        else
          v74 = 2;
      }
      goto LABEL_35;
    }
    v33 = 0LL;
    if ( *(_QWORD *)(v6 + 16) )
    {
      v34 = 1;
    }
    else if ( PoSkipTickMode != 2 || KiSerializeTimerExpiration )
    {
      v34 = 4;
      v75 = 4;
      if ( v72 )
        NextWakeTimeForDeepSleep = ExGetNextWakeTimeForDeepSleep(v28);
      else
        NextWakeTimeForDeepSleep = KiFindNextTimerDueTime(v6, v73, 0LL);
      v33 = NextWakeTimeForDeepSleep;
      if ( KiGroupSchedulingEnabled )
      {
        v54 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v6 + 36)];
        if ( (((unsigned __int64)qword_14042A1B8[v54 >> 6] >> (v54 & 0x3F)) & 1) != 0
          && KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < v33 )
        {
          v34 = 5;
          v33 = KiGenerationEndTick * KeMaximumIncrement;
          v75 = 5;
        }
      }
      if ( *(_BYTE *)(v6 + 33) )
      {
        LOBYTE(v36) = 0;
        v61 = -1LL;
        v62 = v72 + 2LL;
        do
        {
          if ( qword_14044D730[3 * v62] < v61 )
          {
            v36 = (unsigned __int8)v36;
            v61 = qword_14044D730[3 * v62];
            if ( v62 == 3 )
              v36 = 1LL;
          }
          ++v62;
        }
        while ( v62 <= 3 );
        v6 = v82;
        v34 = v75;
        if ( v61 < v33 )
        {
          v34 = 6;
          v33 = v61;
          if ( (_BYTE)v36 )
            v34 = 7;
        }
        if ( *(_BYTE *)(v82 + 33) )
        {
          v63 = ((__int64 (__fastcall *)(_QWORD, unsigned __int64, __int64))off_1404246A8[0])(0LL, v61, v36);
          if ( v63 )
          {
            v37 = v73;
            if ( v33 > v63 )
            {
              v33 = v63;
              v34 = 9;
              if ( v73 > v63 )
                v33 = v73;
            }
            goto LABEL_32;
          }
        }
      }
    }
    else
    {
      v34 = 2;
    }
    v37 = v73;
LABEL_32:
    v74 = v34;
    v22 = v72;
    if ( v32 <= v33 )
      v32 = v33;
    v85 = v33;
LABEL_35:
    if ( v32 == -1LL )
    {
      v38 = -1LL;
    }
    else
    {
      v38 = 0LL;
      if ( v32 > v37 )
        v38 = v32 - v37;
    }
    v39 = *(_DWORD *)(v6 + 11684);
    v40 = 0;
    for ( i = v39; i; i >>= 4 )
      v40 += KeMaximumIncrement;
    if ( !v22 && v39 )
    {
      v42 = KeMaximumIncrement / (v39 + 1);
      if ( !v42 )
        v42 = 1;
      v29 = v42;
    }
    if ( v38 <= v29 )
    {
      v29 = v38;
    }
    else
    {
      LOWORD(v30) = v30 | 1;
      if ( v38 >= v40 )
        v38 = v40;
    }
    if ( PpmIdleDurationExpirationTimeout && *(_BYTE *)(v6 + 33) && (unsigned __int8)PpmGetIdleConstrainedMask(v96) )
    {
      v64 = 0LL;
      v93 = v96[1];
      v92 = v96;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v78, &v92) )
      {
        Prcb = KeGetPrcb(v78);
        v66 = *(_QWORD *)(Prcb + 23848);
        if ( v66 != -1LL && v66 > v64 )
          v64 = *(_QWORD *)(Prcb + 23848);
      }
      if ( v64 && v38 + v73 > v64 )
      {
        LOWORD(v30) = v30 | 0x2000;
        v38 = v64 > v73 ? (unsigned int)(v64 - v73) : 1LL;
        if ( v38 < v29 )
          v29 = v38;
      }
    }
    if ( v29 < v81 )
    {
      v29 = v81;
      v38 = v81;
      LOWORD(v30) = v30 | 0x1000;
    }
    *(_WORD *)(v25 + 48) |= v30;
    v43 = v83;
    *(_BYTE *)(v25 + 541) = v74;
    v44 = v76;
    *(_QWORD *)(v25 + 520) = v38;
    *(_QWORD *)(v25 + 512) = v29;
    (*(void (__fastcall **)(__int64))(v44 + 408))(v43);
    v45 = *(_DWORD *)(v43 + 76);
    v46 = *(unsigned int *)(v43 + 72);
    v75 = v45;
    if ( v45 == -2 || v45 == -1 )
      break;
    v47 = *(_QWORD *)(v6 + 23816);
    v31 = !_BitScanForward(&v48, *(_DWORD *)(v43 + 80));
    v79 = v48;
    if ( !v31 )
    {
      do
      {
        *(_DWORD *)(v43 + 80) &= *(_DWORD *)(v43 + 80) - 1;
        ++*(_DWORD *)(1000LL * v48 + v47 + 52);
        v31 = !_BitScanForward(&v48, *(_DWORD *)(v43 + 80));
      }
      while ( !v31 );
      v79 = v48;
    }
    v49 = 0;
    v50 = *(unsigned int **)(v43 + 64);
    if ( *(_DWORD *)(v43 + 60) )
    {
      v67 = v88;
      v68 = *(unsigned int *)(v43 + 60);
      do
      {
        if ( *((_BYTE *)v50 + 4) == 0xFF )
        {
          v69 = v49;
          if ( !v49 )
            v69 = 1;
          v49 = v69;
          KeAddProcessorAffinityEx(v67, *v50);
        }
        v50 += 2;
        --v68;
      }
      while ( v68 );
      v6 = v82;
      v45 = v75;
      v43 = v83;
      if ( v49 && *(_BYTE *)(v83 + 52) )
      {
        v70 = v84;
        if ( v84 < *(_QWORD *)(v83 + 24) )
          v70 = *(_QWORD *)(v83 + 24);
        v84 = v70;
      }
    }
    v51 = v72;
    if ( !v72 )
      goto LABEL_56;
    v71 = v89;
    if ( v89 )
    {
      if ( (_DWORD)v46 != -1 && (unsigned int)v46 >= v80 )
        goto LABEL_56;
    }
    else if ( v45 == *(_DWORD *)(v76 + 32) - 1 )
    {
      goto LABEL_56;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(v76 + 464))(*(_QWORD *)v43, 0LL);
    ++*(_DWORD *)(1000LL * v45 + v47 + 48);
    if ( (_DWORD)v46 != -1 && v71 )
      ++*(_DWORD *)(1008 * v46 + *(_QWORD *)(v71 + 48) + 24);
    v72 = 0;
    v7 = 0LL;
    *(_WORD *)(v76 + 48) = 2;
  }
  v51 = 0;
LABEL_56:
  *v90 = v51;
  *v91 = v84;
  return v45;
}
