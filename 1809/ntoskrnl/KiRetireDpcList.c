/*
 * XREFs of KiRetireDpcList @ 0x1400C6400
 * Callers:
 *     KiIdleLoop @ 0x1401C0680 (KiIdleLoop.c)
 *     KyRetireDpcList @ 0x1401C4400 (KyRetireDpcList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiExecuteAllDpcs @ 0x1400C6C80 (KiExecuteAllDpcs.c)
 *     KiProcessExpiredTimerList @ 0x1400C7760 (KiProcessExpiredTimerList.c)
 *     PpmPerfGetCurrentFrequency @ 0x1400C82A0 (PpmPerfGetCurrentFrequency.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     KiTimer2Expiration @ 0x1400FB470 (KiTimer2Expiration.c)
 *     KeSignalGate @ 0x140127780 (KeSignalGate.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiBeginCounterAccumulation @ 0x140295FFC (KiBeginCounterAccumulation.c)
 *     KiSetVpThreadSystemWork @ 0x140299950 (KiSetVpThreadSystemWork.c)
 */

signed __int16 __fastcall KiRetireDpcList(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  char v7; // bl
  unsigned int CurrentFrequency; // edx
  __int64 v9; // r9
  unsigned int v10; // edx
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  __int16 v18; // bx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r8
  char v21; // cl
  bool v22; // zf
  signed __int16 result; // ax
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // ecx
  unsigned int v27; // edx
  _QWORD *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // esi
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rdi
  unsigned __int8 v34; // cl
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // rbx
  unsigned int v38; // ebx
  int v39; // eax
  unsigned __int64 v40; // r8
  int v41; // edi
  unsigned int v42; // esi
  unsigned int v43; // r10d
  __int64 v44; // rdx
  int v45; // ecx
  __int64 v46; // r14
  _QWORD *v47; // rbx
  __int64 v48; // r8
  unsigned int v49; // eax
  struct _KPRCB *CurrentPrcb; // r13
  _DWORD *SchedulerAssist; // rcx
  char v52; // r11
  _QWORD *v53; // rax
  ULONG_PTR v54; // r9
  unsigned __int64 v55; // rax
  struct _KPRCB *v56; // rcx
  _DWORD *v57; // rdx
  _QWORD *v58; // rdx
  _QWORD *v59; // rax
  unsigned int v60; // edx
  unsigned __int64 v61; // rcx
  ULONG_PTR BugCheckParameter4; // rcx
  char v63; // al
  _QWORD *i; // rcx
  _DWORD *v65; // rcx
  _DWORD *v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rbx
  __int64 v69; // r9
  unsigned int *v70; // r10
  __int64 v71; // r11
  __int64 v72; // r8
  unsigned __int64 v73; // rax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  struct _KPRCB *v77; // rcx
  _DWORD *v78; // rdx
  int v79; // eax
  int v80; // eax
  __int64 v81; // rax
  char v82; // [rsp+31h] [rbp-1D7h]
  int v83; // [rsp+34h] [rbp-1D4h]
  unsigned int v84; // [rsp+38h] [rbp-1D0h]
  unsigned int v85; // [rsp+3Ch] [rbp-1CCh]
  int v86; // [rsp+40h] [rbp-1C8h]
  char v87; // [rsp+44h] [rbp-1C4h]
  unsigned __int64 v88; // [rsp+48h] [rbp-1C0h]
  unsigned int v89; // [rsp+50h] [rbp-1B8h]
  unsigned __int64 v90; // [rsp+58h] [rbp-1B0h]
  int v91; // [rsp+60h] [rbp-1A8h] BYREF
  int v92; // [rsp+64h] [rbp-1A4h]
  __int64 v93; // [rsp+68h] [rbp-1A0h]
  __int64 v94; // [rsp+70h] [rbp-198h]
  __int64 v95; // [rsp+78h] [rbp-190h]
  unsigned int v96; // [rsp+80h] [rbp-188h]
  _QWORD v97[2]; // [rsp+98h] [rbp-170h] BYREF
  unsigned __int64 v98; // [rsp+A8h] [rbp-160h] BYREF
  char v99; // [rsp+B0h] [rbp-158h]
  int v100; // [rsp+C0h] [rbp-148h] BYREF
  __int64 v101; // [rsp+C8h] [rbp-140h]

  v1 = *(_QWORD *)(a1 + 8);
  v94 = v1;
  v100 = 0;
  do
  {
    *(_BYTE *)(a1 + 32) = 1;
    v3 = __rdtsc();
    v4 = v3 - *(_QWORD *)(a1 + 23488);
    v5 = v4 + *(_QWORD *)(v1 + 72);
    v6 = v4 + *(unsigned int *)(v1 + 80);
    *(_QWORD *)(v1 + 72) = v5;
    *(_QWORD *)(a1 + 23488) = v3;
    v7 = *(_BYTE *)(v1 + 2);
    if ( v6 > 0xFFFFFFFF )
      LODWORD(v6) = -1;
    *(_DWORD *)(v1 + 80) = v6;
    if ( (v7 & 0x3E) != 0 )
    {
      if ( (v7 & 0x10) != 0 )
      {
        v5 = *(_QWORD *)(a1 + 23488) - *(_QWORD *)(a1 + 23496);
        *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v1 + 124) + 23504) += v5;
        v7 &= ~0x10u;
        *(_QWORD *)(a1 + 23496) = 0LL;
      }
      if ( (v7 & 0x20) != 0 )
      {
        if ( *(_QWORD *)(v1 + 1968) )
        {
          CurrentFrequency = PpmPerfGetCurrentFrequency(a1, 0LL);
          if ( CurrentFrequency < 0x4B )
            v10 = CurrentFrequency / 0x19;
          else
            v10 = 3;
          v11 = *(unsigned __int8 *)(a1 + 24224);
          v12 = v10;
          v13 = v11 + 2LL * v10;
          v14 = *(_QWORD *)(v9 + 8 * v13);
          v5 = v9 + 8 * v13;
          v15 = KiTimelineBitmapTime;
          *(_QWORD *)v5 = v4 + v14;
          v16 = *(_DWORD *)(v9 + 192);
          if ( v15 > v16 )
          {
            LODWORD(v93) = v15;
            v5 = v15 - v16;
            if ( (unsigned int)v5 >= 0x20 )
              HIDWORD(v93) = 1;
            else
              HIDWORD(v93) = (*(_DWORD *)(v9 + 196) << (v15 - v16)) | 1;
            *(_QWORD *)(v9 + 192) = v93;
          }
          else
          {
            v17 = v16 - v15;
            if ( v17 < 0x20 )
              *(_DWORD *)(v9 + 196) |= 1 << v17;
          }
          if ( !KiEfficiencyClassSystem && (*(_DWORD *)(v1 + 120) & 3) == 2 )
          {
            v5 = 2 * v12;
            *(_QWORD *)(v9 + 16 * v12 + 8) += v4;
          }
          if ( *(_QWORD *)(v1 + 1912) )
          {
            *(_QWORD *)(v9 + 8 * (v11 + 16 + 2 * v12)) += v4;
            v5 = *(_QWORD *)(*(_QWORD *)(v1 + 1912) + 1968LL) + 8 * (v11 + 8 + 2 * v12);
            _InterlockedExchangeAdd64((volatile signed __int64 *)v5, v4);
          }
        }
        v7 &= ~0x20u;
      }
      if ( (v7 & 0x40) != 0 )
      {
        if ( *(_QWORD *)(a1 + 25016) )
        {
          LOBYTE(v5) = 1;
          KiSetVpThreadSystemWork(a1, v5);
        }
        v67 = *(_QWORD *)(v1 + 1512);
        if ( v67 )
          *(_BYTE *)(v67 + 64) = 0;
        v7 &= ~0x40u;
      }
      if ( (v7 & 0x3E) != 0 )
      {
        v29 = *(_QWORD *)(v1 + 104);
        if ( v29 )
        {
          for ( i = (_QWORD *)(*(unsigned int *)(a1 + 216) + v29); i; i = (_QWORD *)i[51] )
            *i += v4;
        }
        if ( (*(_BYTE *)(v1 + 2) & 8) != 0
          && (*(_QWORD *)(v1 + 576) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192)
                                                                                               + 136LL) )
        {
          *(_QWORD *)(a1 + 23528) += v4;
        }
        if ( *(_BYTE *)(v1 + 125) )
        {
          if ( (*(_DWORD *)(v1 + 120) & 3) == 2 )
            *(_QWORD *)(a1 + 23544) += v4;
          else
            *(_QWORD *)(a1 + 23536) += v4;
        }
        v30 = *(_QWORD *)(v1 + 360);
        if ( v30 )
        {
          v68 = *(_QWORD *)(v30 + 32);
          if ( v68 )
          {
            v69 = 1LL;
            if ( KiHwCountersCount )
            {
              v70 = (unsigned int *)&KiHwCounters;
              v71 = (unsigned int)KiHwCountersCount;
              v72 = v30 + 48;
              do
              {
                if ( (v69 & v68) != 0 )
                {
                  v73 = __readpmc(*v70);
                  *(_QWORD *)(v72 + 8) += (unsigned int)(v73 - *(_DWORD *)v72);
                  *(_QWORD *)v72 = v73;
                }
                v69 *= 2LL;
                ++v70;
                v72 += 24LL;
                --v71;
              }
              while ( v71 );
            }
          }
        }
      }
    }
    v18 = *(_WORD *)(a1 + 11884);
    *(_WORD *)(a1 + 11884) = 1;
    v87 = v18;
    if ( (v18 & 8) != 0 )
    {
      v31 = *(_DWORD *)(a1 + 11888);
      v32 = MEMORY[0xFFFFF78000000008];
      v90 = MEMORY[0xFFFFF78000000008];
      if ( KiLastNonHrTimerExpiration == *(_QWORD *)(a1 + 11688) )
      {
        v34 = 0;
        _enable();
        v101 = MEMORY[0xFFFFF78000000014];
      }
      else
      {
        *(_QWORD *)(a1 + 11688) = KiLastNonHrTimerExpiration;
        v33 = v32 >> 18;
        v34 = 1;
        *(_DWORD *)(a1 + 11888) = v32 >> 18;
        _enable();
        v101 = MEMORY[0xFFFFF78000000014];
        if ( KiSerializeTimerExpiration )
        {
          if ( !*(_BYTE *)(a1 + 33) )
          {
LABEL_73:
            _disable();
            goto LABEL_23;
          }
          v35 = KiProcessorBlock[0];
        }
        else
        {
          v35 = a1;
        }
        v36 = v35 + 13952;
        v95 = v35 + 13952;
        if ( v35 != -13952 )
        {
          v37 = 2LL * *(unsigned int *)(a1 + 26624);
          *(_DWORD *)(a1 + 26624) = ((unsigned __int8)*(_DWORD *)(a1 + 26624) + 1) & 0xF;
          *(_QWORD *)(a1 + 8 * v37 + 26632) = v32;
          *(LARGE_INTEGER *)(a1 + 8 * v37 + 26640) = KeQueryPerformanceCounter(0LL);
          if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
          {
            v98 = v32;
            v97[0] = &v98;
            v99 = 0;
            v97[1] = 16LL;
            EtwTraceKernelEvent((unsigned int)v97, 1, 1073872896, 3920, 1538);
          }
          v38 = v33 - v31 + 1;
          v89 = v38;
          if ( v38 <= 0x100 )
          {
LABEL_57:
            v86 = v38;
            v39 = 256 - v38;
            v88 = v32;
            v40 = v32;
            if ( 256 - v38 > 0x18 )
              v39 = 24;
            goto LABEL_59;
          }
          v48 = (v33 - v38 + 1) << 18;
          do
          {
            if ( v38 <= 0x100 )
              goto LABEL_57;
            v40 = v48 + 0x4000000;
            v86 = 256;
            v88 = v40;
            v39 = 0;
LABEL_59:
            v41 = v31 - 1;
            v85 = 0;
            v92 = v31 + v86;
            v42 = 0;
            v43 = 0;
            v82 = -64;
            v44 = (unsigned int)(v92 - 1);
            v45 = v44 + v39;
            v84 = v92 - 1;
            v83 = v44 + v39;
            do
            {
              v46 = v36 + 32 * ((unsigned __int8)++v41 + 16LL);
              if ( v42 <= (unsigned int)v44 || *(_QWORD *)(v46 + 24) <= v40 )
              {
                v47 = (_QWORD *)(v46 + 8);
                if ( v47 != (_QWORD *)*v47 )
                {
LABEL_74:
                  CurrentPrcb = KeGetCurrentPrcb();
                  v91 = 0;
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  if ( SchedulerAssist )
                  {
                    if ( CurrentPrcb->NestingLevel <= 1u )
                    {
                      v74 = SchedulerAssist[5];
                      SchedulerAssist[5] = v74 + 1;
                      if ( v74 == -1 )
LABEL_131:
                        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                    }
                  }
                  while ( _interlockedbittestandset64((volatile signed __int32 *)v46, 0LL) )
                  {
                    v65 = CurrentPrcb->SchedulerAssist;
                    if ( v65 )
                    {
                      if ( CurrentPrcb->NestingLevel <= 1u )
                      {
                        v75 = v65[5] - 1;
                        v65[5] = v75;
                        if ( !v75 )
                          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                      }
                    }
                    do
                      KeYieldProcessorEx(&v91, v44, v40);
                    while ( *(_QWORD *)v46 );
                    v66 = CurrentPrcb->SchedulerAssist;
                    if ( v66 )
                    {
                      if ( CurrentPrcb->NestingLevel <= 1u )
                      {
                        v76 = v66[5];
                        v66[5] = v76 + 1;
                        if ( v76 == -1 )
                          goto LABEL_131;
                      }
                    }
                  }
                  v36 = v95;
                  v43 = v85;
                  v40 = v88;
                  v52 = v82;
                  while ( 1 )
                  {
                    v53 = (_QWORD *)*v47;
                    if ( v47 == (_QWORD *)*v47 )
                      goto LABEL_80;
                    v54 = (ULONG_PTR)(v53 - 4);
                    v55 = *(v53 - 1);
                    if ( v55 > v40 )
                      break;
                    v58 = *(_QWORD **)(v54 + 32);
                    v59 = *(_QWORD **)(v54 + 40);
                    if ( v58[1] != v54 + 32 || *v59 != v54 + 32 )
                      __fastfail(3u);
                    *v59 = v58;
                    v58[1] = v59;
                    if ( v59 == v58 )
                    {
                      *(_DWORD *)(v46 + 28) = -1;
                      if ( KiSerializeTimerExpiration )
                      {
                        v60 = v41 & 0x3F;
                        v61 = 8LL * ((unsigned __int8)v41 >> 6);
                      }
                      else
                      {
                        v60 = *(unsigned __int8 *)(v36 - 13743);
                        v61 = (unsigned __int64)(unsigned __int8)v41 << 6;
                      }
                      _interlockedbittestandreset64(
                        (volatile signed __int32 *)(qword_1405434C8[2 * *(unsigned __int8 *)(v36 - 13744)] + v61),
                        v60);
                      v40 = v88;
                    }
                    BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(v36 + 8LL * v43), v54);
                    if ( BugCheckParameter4 )
                      KeBugCheckEx(0xC7u, 8uLL, 1uLL, v54, BugCheckParameter4);
                    v96 = 0;
                    v63 = v52 ^ v43++;
                    v85 = v43;
                    v52 ^= v63 & 0x3F;
                    v82 = v52;
                    HIBYTE(v96) = v52 ^ *(_BYTE *)(v54 + 3);
                    _InterlockedXor((volatile signed __int32 *)v54, v96);
                    if ( v43 == 64 )
                    {
                      _InterlockedAnd64((volatile signed __int64 *)v46, 0LL);
                      v77 = KeGetCurrentPrcb();
                      v78 = v77->SchedulerAssist;
                      if ( v78 )
                      {
                        if ( v77->NestingLevel <= 1u )
                        {
                          v79 = v78[5] - 1;
                          v78[5] = v79;
                          if ( !v79 )
                            KiRemoveSystemWorkPriorityKick(v77);
                        }
                      }
                      KiProcessExpiredTimerList(a1, &v100, v36, 64LL);
                      v43 = 0;
                      v85 = 0;
                      if ( v47 == (_QWORD *)*v47 )
                        goto LABEL_147;
                      goto LABEL_74;
                    }
                  }
                  *(_QWORD *)(v46 + 24) = v55;
LABEL_80:
                  _InterlockedAnd64((volatile signed __int64 *)v46, 0LL);
                  v56 = KeGetCurrentPrcb();
                  v57 = v56->SchedulerAssist;
                  if ( v57 )
                  {
                    if ( v56->NestingLevel <= 1u )
                    {
                      v80 = v57[5] - 1;
                      v57[5] = v80;
                      if ( !v80 )
                      {
                        KiRemoveSystemWorkPriorityKick(v56);
                        v43 = v85;
LABEL_147:
                        v40 = v88;
                      }
                    }
                  }
                  v45 = v83;
                  v44 = v84;
                }
                ++v42;
              }
            }
            while ( v41 != v45 );
            if ( v43 )
              KiProcessExpiredTimerList(a1, &v100, v36, v43);
            v22 = v89 == v86;
            v38 = v89 - v86;
            v31 = v92;
            v48 = v88;
            v32 = v90;
            v89 -= v86;
          }
          while ( !v22 );
          v1 = v94;
          LOBYTE(v18) = v87;
          if ( (*(_BYTE *)(a1 + 11884) & 8) == 0 )
          {
            v49 = *(_DWORD *)(a1 + 23464);
            *(_DWORD *)(a1 + 23460) = 0;
            if ( v49 >= KeTimeIncrement )
              *(_DWORD *)(a1 + 23464) = v49 - KeTimeIncrement;
            else
              *(_DWORD *)(a1 + 23464) = 0;
          }
          v34 = 1;
        }
      }
      if ( *(_BYTE *)(a1 + 33) )
        KiTimer2Expiration(a1, v32, v34, &v100);
      goto LABEL_73;
    }
LABEL_23:
    KiExecuteAllDpcs(a1, v1, &v100, 0LL);
    if ( (v18 & 4) != 0 )
    {
      _enable();
      KeSignalGate(a1 + 22656, 0LL);
      _disable();
    }
    v19 = __rdtsc();
    v20 = v19 - *(_QWORD *)(a1 + 23488);
    *(_QWORD *)(a1 + 23608) += v20;
    v21 = *(_BYTE *)(v1 + 2);
    if ( (v21 & 0x20) != 0 )
    {
      v24 = *(_QWORD *)(a1 + 24176);
      v25 = *(_QWORD *)(a1 + 24184);
      if ( v24 && v25 )
      {
        if ( *(_BYTE *)(v25 + 100) )
        {
          v26 = *(_DWORD *)(v25 + 116);
        }
        else
        {
          v26 = *(_DWORD *)(v25 + 72);
          if ( v26 >= *(_DWORD *)(v24 + 360) )
            v26 = *(_DWORD *)(v24 + 360);
        }
      }
      else
      {
        v26 = 100;
      }
      if ( v26 < 0x4B )
        v27 = v26 / 0x19;
      else
        v27 = 3;
      v28 = (_QWORD *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 24224) + 2952LL + 2LL * v27));
      *v28 += v20;
      v21 = *(_BYTE *)(v1 + 2);
    }
    if ( (v21 & 0x40) != 0 )
    {
      if ( *(_QWORD *)(a1 + 25016) )
        KiSetVpThreadSystemWork(a1, 0LL);
      v81 = *(_QWORD *)(v1 + 1512);
      if ( v81 )
        *(_BYTE *)(v81 + 64) = 1;
    }
    *(_QWORD *)(a1 + 23488) = v19;
    if ( (*(_BYTE *)(v1 + 2) & 0x10) != 0 )
      *(_QWORD *)(a1 + 23496) = v19;
    if ( (*(_BYTE *)(v1 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v1, 0LL);
    v22 = *(_BYTE *)(a1 + 6) == 0;
    *(_BYTE *)(a1 + 32) = 0;
    if ( !v22 )
      *(_BYTE *)(a1 + 6) = 0;
    result = _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 11884), 0, 1);
  }
  while ( result != 1 );
  *(_QWORD *)(a1 + 11808) = 0LL;
  return result;
}
