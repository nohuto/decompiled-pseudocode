/*
 * XREFs of KiRetireDpcList @ 0x1400C1DD0
 * Callers:
 *     KiIdleLoop @ 0x1401C75D0 (KiIdleLoop.c)
 *     KyRetireDpcList @ 0x1401CAB20 (KyRetireDpcList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiTimer2Expiration @ 0x1400BFE90 (KiTimer2Expiration.c)
 *     KiExecuteAllDpcs @ 0x1400C2660 (KiExecuteAllDpcs.c)
 *     KiProcessExpiredTimerList @ 0x1400C33F0 (KiProcessExpiredTimerList.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     KeSignalGate @ 0x1401309D0 (KeSignalGate.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KiBeginCounterAccumulation @ 0x1402AC5DC (KiBeginCounterAccumulation.c)
 *     KiSetVpThreadSystemWork @ 0x1402B0770 (KiSetVpThreadSystemWork.c)
 */

signed __int16 __fastcall KiRetireDpcList(__int64 a1)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  char v7; // bl
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  __int16 v20; // bx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r8
  char v23; // cl
  bool v24; // zf
  signed __int16 result; // ax
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // ecx
  unsigned int v29; // edx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // esi
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // rdi
  char v36; // cl
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // rbx
  unsigned int v40; // ebx
  int v41; // eax
  unsigned __int64 v42; // r8
  int v43; // edi
  unsigned int v44; // r11d
  unsigned int v45; // esi
  unsigned int v46; // edx
  int v47; // ecx
  __int64 v48; // r14
  _QWORD *v49; // rbx
  __int64 v50; // r8
  unsigned int v51; // eax
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v54; // r15
  __int64 v55; // r10
  _QWORD *v56; // rax
  ULONG_PTR v57; // r9
  unsigned __int64 v58; // rax
  struct _KPRCB *v59; // rcx
  _DWORD *v60; // rdx
  _QWORD *v61; // rdx
  _QWORD *v62; // rax
  unsigned int v63; // edx
  unsigned __int64 v64; // rcx
  ULONG_PTR BugCheckParameter4; // rcx
  char v66; // al
  __int64 v67; // rcx
  char v68; // al
  _QWORD *i; // rcx
  _DWORD *v70; // rcx
  _DWORD *v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rbx
  __int64 v74; // r9
  unsigned int *v75; // r10
  __int64 v76; // r11
  __int64 v77; // r8
  unsigned __int64 v78; // rax
  int v79; // eax
  int v80; // eax
  int v81; // eax
  struct _KPRCB *v82; // rcx
  _DWORD *v83; // rdx
  int v84; // eax
  int v85; // eax
  __int64 v86; // rax
  int v87; // [rsp+34h] [rbp-CCh]
  unsigned int v88; // [rsp+38h] [rbp-C8h]
  __int64 v89; // [rsp+40h] [rbp-C0h]
  __int64 v90; // [rsp+40h] [rbp-C0h]
  unsigned int v91; // [rsp+48h] [rbp-B8h]
  int v92; // [rsp+4Ch] [rbp-B4h]
  char v93; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v94; // [rsp+58h] [rbp-A8h]
  unsigned int v95; // [rsp+60h] [rbp-A0h]
  struct _KPRCB *v96; // [rsp+68h] [rbp-98h]
  unsigned __int64 v97; // [rsp+70h] [rbp-90h]
  __int64 v98; // [rsp+78h] [rbp-88h]
  int v99; // [rsp+80h] [rbp-80h] BYREF
  int v100; // [rsp+84h] [rbp-7Ch]
  __int64 v101; // [rsp+88h] [rbp-78h]
  __int64 v102; // [rsp+90h] [rbp-70h]
  __int64 v103; // [rsp+98h] [rbp-68h]
  __int64 v104; // [rsp+A0h] [rbp-60h]
  __int64 v105; // [rsp+A8h] [rbp-58h]
  __int64 v106; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v107; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v108; // [rsp+C0h] [rbp-40h]
  _QWORD v109[3]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v110[34]; // [rsp+E0h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  memset(v110, 0, sizeof(v110));
  v98 = v2;
  do
  {
    *(_BYTE *)(a1 + 32) = 1;
    v3 = __rdtsc();
    v4 = v3 - *(_QWORD *)(a1 + 23488);
    v5 = v4 + *(_QWORD *)(v2 + 72);
    v6 = v4 + *(unsigned int *)(v2 + 80);
    *(_QWORD *)(v2 + 72) = v5;
    *(_QWORD *)(a1 + 23488) = v3;
    v7 = *(_BYTE *)(v2 + 2);
    if ( v6 > 0xFFFFFFFF )
      LODWORD(v6) = -1;
    *(_DWORD *)(v2 + 80) = v6;
    if ( (v7 & 0x3E) != 0 )
    {
      if ( (v7 & 0x10) != 0 )
      {
        v5 = *(_QWORD *)(a1 + 23488) - *(_QWORD *)(a1 + 23496);
        *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v2 + 124) + 23504) += v5;
        v7 &= ~0x10u;
        *(_QWORD *)(a1 + 23496) = 0LL;
      }
      if ( (v7 & 0x20) != 0 )
      {
        v8 = *(_QWORD *)(v2 + 1984);
        if ( v8 )
        {
          v9 = *(_QWORD *)(a1 + 24176);
          v10 = *(_QWORD *)(a1 + 24184);
          if ( v9 && v10 )
          {
            if ( *(_BYTE *)(v10 + 100) )
            {
              v11 = *(_DWORD *)(v10 + 116);
            }
            else
            {
              v11 = *(_DWORD *)(v10 + 72);
              if ( v11 >= *(_DWORD *)(v9 + 360) )
                v11 = *(_DWORD *)(v9 + 360);
            }
          }
          else
          {
            v11 = 100;
          }
          if ( v11 < 0x4B )
            v12 = v11 / 0x19;
          else
            v12 = 3;
          v13 = *(unsigned __int8 *)(a1 + 24224);
          v14 = v12;
          v15 = v13 + 2LL * v12;
          v16 = *(_QWORD *)(v8 + 8 * v15);
          v5 = v8 + 8 * v15;
          v17 = KiTimelineBitmapTime;
          *(_QWORD *)v5 = v4 + v16;
          v18 = *(_DWORD *)(v8 + 192);
          if ( v17 > v18 )
          {
            LODWORD(v90) = v17;
            v5 = v17 - v18;
            if ( (unsigned int)v5 >= 0x20 )
              HIDWORD(v90) = 1;
            else
              HIDWORD(v90) = (*(_DWORD *)(v8 + 196) << (v17 - v18)) | 1;
            *(_QWORD *)(v8 + 192) = v90;
          }
          else
          {
            v19 = v18 - v17;
            if ( v19 < 0x20 )
              *(_DWORD *)(v8 + 196) |= 1 << v19;
          }
          if ( !KiEfficiencyClassSystem && (*(_DWORD *)(v2 + 120) & 3) == 2 )
          {
            v5 = 2 * v14;
            *(_QWORD *)(v8 + 16 * v14 + 8) += v4;
          }
          if ( *(_QWORD *)(v2 + 1928) )
          {
            *(_QWORD *)(v8 + 8 * (v13 + 16 + 2 * v14)) += v4;
            v5 = *(_QWORD *)(*(_QWORD *)(v2 + 1928) + 1984LL) + 8 * (v13 + 8 + 2 * v14);
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
        v72 = *(_QWORD *)(v2 + 1520);
        if ( v72 )
          *(_BYTE *)(v72 + 64) = 0;
        v7 &= ~0x40u;
      }
      if ( (v7 & 0x3E) != 0 )
      {
        v31 = *(_QWORD *)(v2 + 104);
        if ( v31 )
        {
          for ( i = (_QWORD *)(*(unsigned int *)(a1 + 216) + v31); i; i = (_QWORD *)i[51] )
            *i += v4;
        }
        if ( (*(_BYTE *)(v2 + 2) & 8) != 0
          && (*(_QWORD *)(v2 + 576) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192)
                                                                                               + 136LL) )
        {
          *(_QWORD *)(a1 + 23528) += v4;
        }
        if ( *(_BYTE *)(v2 + 125) )
        {
          if ( (*(_DWORD *)(v2 + 120) & 3) == 2 )
            *(_QWORD *)(a1 + 23544) += v4;
          else
            *(_QWORD *)(a1 + 23536) += v4;
        }
        v32 = *(_QWORD *)(v2 + 360);
        if ( v32 )
        {
          v73 = *(_QWORD *)(v32 + 32);
          if ( v73 )
          {
            v74 = 1LL;
            if ( KiHwCountersCount )
            {
              v75 = (unsigned int *)&KiHwCounters;
              v76 = (unsigned int)KiHwCountersCount;
              v77 = v32 + 48;
              do
              {
                if ( (v74 & v73) != 0 )
                {
                  v78 = __readpmc(*v75);
                  *(_QWORD *)(v77 + 8) += (unsigned int)(v78 - *(_DWORD *)v77);
                  *(_QWORD *)v77 = v78;
                }
                v74 *= 2LL;
                ++v75;
                v77 += 24LL;
                --v76;
              }
              while ( v76 );
            }
          }
        }
      }
    }
    v20 = *(_WORD *)(a1 + 11884);
    *(_WORD *)(a1 + 11884) = 1;
    v93 = v20;
    if ( (v20 & 8) != 0 )
    {
      v33 = *(_DWORD *)(a1 + 11888);
      v34 = MEMORY[0xFFFFF78000000008];
      v97 = MEMORY[0xFFFFF78000000008];
      if ( KiLastNonHrTimerExpiration == *(_QWORD *)(a1 + 11688) )
      {
        v36 = 0;
        _enable();
        v110[1] = MEMORY[0xFFFFF78000000014];
        goto LABEL_75;
      }
      *(_QWORD *)(a1 + 11688) = KiLastNonHrTimerExpiration;
      v35 = v34 >> 18;
      v36 = 1;
      *(_DWORD *)(a1 + 11888) = v34 >> 18;
      _enable();
      v110[1] = MEMORY[0xFFFFF78000000014];
      v107 = 0LL;
      v108 = 0LL;
      if ( KiSerializeTimerExpiration )
      {
        if ( !*(_BYTE *)(a1 + 33) )
          goto LABEL_75;
        v37 = KiProcessorBlock[0];
      }
      else
      {
        v37 = a1;
      }
      v38 = v37 + 13952;
      v89 = v37 + 13952;
      if ( v37 != -13952 )
      {
        v39 = 2LL * *(unsigned int *)(a1 + 26624);
        *(_DWORD *)(a1 + 26624) = ((unsigned __int8)*(_DWORD *)(a1 + 26624) + 1) & 0xF;
        *(_QWORD *)(a1 + 8 * v39 + 26632) = v34;
        *(LARGE_INTEGER *)(a1 + 8 * v39 + 26640) = KeQueryPerformanceCounter(0LL);
        if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        {
          v107 = v34;
          v109[0] = &v107;
          LOBYTE(v108) = 0;
          v109[1] = 16LL;
          EtwTraceKernelEvent((unsigned int)v109, 1, 1073872896, 3920, 1538);
        }
        v40 = v35 - v33 + 1;
        v95 = v40;
        if ( v40 <= 0x100 )
        {
LABEL_62:
          v92 = v40;
          v41 = 256 - v40;
          v94 = v34;
          v42 = v34;
          if ( 256 - v40 > 0x18 )
            v41 = 24;
          goto LABEL_64;
        }
        v50 = (v35 - v40 + 1) << 18;
        do
        {
          if ( v40 <= 0x100 )
            goto LABEL_62;
          v42 = v50 + 0x4000000;
          v92 = 256;
          v94 = v42;
          v41 = 0;
LABEL_64:
          v91 = 0;
          v101 = 3221225472LL;
          v43 = v33 - 1;
          v102 = 0LL;
          v44 = 0;
          v103 = 0LL;
          v100 = v33 + v92;
          v45 = 0;
          v46 = v100 - 1;
          v47 = v100 - 1 + v41;
          v88 = v100 - 1;
          v87 = v47;
          do
          {
            v48 = 32 * ((unsigned __int8)++v43 + 16LL) + v38;
            if ( v45 <= v46 || *(_QWORD *)(v48 + 24) <= v42 )
            {
              v49 = (_QWORD *)(v48 + 8);
              if ( v49 != (_QWORD *)*v49 )
              {
LABEL_78:
                CurrentPrcb = KeGetCurrentPrcb();
                v96 = CurrentPrcb;
                v99 = 0;
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                if ( !SchedulerAssist || CurrentPrcb->NestingLevel > 1u )
                {
                  v54 = CurrentPrcb;
                  goto LABEL_80;
                }
                v79 = SchedulerAssist[5];
                v54 = v96;
                SchedulerAssist[5] = v79 + 1;
                if ( v79 == -1 )
LABEL_140:
                  KiRemoveSystemWorkPriorityKick(v54);
LABEL_80:
                while ( _interlockedbittestandset64((volatile signed __int32 *)v48, 0LL) )
                {
                  v70 = v54->SchedulerAssist;
                  if ( v70 )
                  {
                    if ( v54->NestingLevel <= 1u )
                    {
                      v80 = v70[5] - 1;
                      v70[5] = v80;
                      if ( !v80 )
                        KiRemoveSystemWorkPriorityKick(v54);
                    }
                  }
                  do
                    KeYieldProcessorEx(&v99);
                  while ( *(_QWORD *)v48 );
                  v71 = v54->SchedulerAssist;
                  if ( v71 )
                  {
                    if ( v54->NestingLevel <= 1u )
                    {
                      v81 = v71[5];
                      v71[5] = v81 + 1;
                      if ( v81 == -1 )
                        goto LABEL_140;
                    }
                  }
                }
                v55 = v89;
                v44 = v91;
                v42 = v94;
                while ( 1 )
                {
                  v56 = (_QWORD *)*v49;
                  if ( v49 == (_QWORD *)*v49 )
                    goto LABEL_85;
                  v57 = (ULONG_PTR)(v56 - 4);
                  v58 = *(v56 - 1);
                  if ( v58 > v42 )
                    break;
                  v61 = *(_QWORD **)(v57 + 32);
                  v62 = *(_QWORD **)(v57 + 40);
                  if ( v61[1] != v57 + 32 || *v62 != v57 + 32 )
                    __fastfail(3u);
                  *v62 = v61;
                  v61[1] = v62;
                  if ( v62 == v61 )
                  {
                    *(_DWORD *)(v48 + 28) = -1;
                    if ( KiSerializeTimerExpiration )
                    {
                      v63 = v43 & 0x3F;
                      v64 = 8LL * ((unsigned __int8)v43 >> 6);
                    }
                    else
                    {
                      v63 = *(unsigned __int8 *)(v89 - 13743);
                      v64 = (unsigned __int64)(unsigned __int8)v43 << 6;
                    }
                    _interlockedbittestandreset64(
                      (volatile signed __int32 *)(qword_140573688[2 * *(unsigned __int8 *)(v89 - 13744)] + v64),
                      v63);
                    v42 = v94;
                  }
                  BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(v89 + 8LL * v44), v57);
                  if ( BugCheckParameter4 )
                    KeBugCheckEx(0xC7u, 8uLL, 1uLL, v57, BugCheckParameter4);
                  v66 = BYTE3(v101) ^ v44++;
                  v91 = v44;
                  v67 = v66 & 0x3Fu ^ BYTE3(v101);
                  v104 = 0LL;
                  v105 = 0LL;
                  v106 = 0LL;
                  v68 = v67 ^ *(_BYTE *)(v57 + 3);
                  BYTE3(v101) = v67;
                  BYTE3(v104) = v68;
                  _InterlockedXor((volatile signed __int32 *)v57, v104);
                  if ( v44 == 64 )
                  {
                    _InterlockedAnd64((volatile signed __int64 *)v48, 0LL);
                    v82 = KeGetCurrentPrcb();
                    v83 = v82->SchedulerAssist;
                    if ( v83 )
                    {
                      if ( v82->NestingLevel <= 1u )
                      {
                        v84 = v83[5] - 1;
                        v83[5] = v84;
                        if ( !v84 )
                        {
                          KiRemoveSystemWorkPriorityKick(v82);
                          v55 = v89;
                        }
                      }
                    }
                    KiProcessExpiredTimerList(a1, v110, v55, 64LL);
                    v44 = 0;
                    v91 = 0;
                    if ( v49 == (_QWORD *)*v49 )
                      goto LABEL_156;
                    goto LABEL_78;
                  }
                }
                *(_QWORD *)(v48 + 24) = v58;
LABEL_85:
                _InterlockedAnd64((volatile signed __int64 *)v48, 0LL);
                v59 = KeGetCurrentPrcb();
                v60 = v59->SchedulerAssist;
                if ( v60 )
                {
                  if ( v59->NestingLevel <= 1u )
                  {
                    v85 = v60[5] - 1;
                    v60[5] = v85;
                    if ( !v85 )
                    {
                      KiRemoveSystemWorkPriorityKick(v59);
                      v44 = v91;
LABEL_156:
                      v42 = v94;
                    }
                  }
                }
                v47 = v87;
                v46 = v88;
              }
              ++v45;
            }
            v38 = v89;
          }
          while ( v43 != v47 );
          if ( v44 )
            KiProcessExpiredTimerList(a1, v110, v89, v44);
          v24 = v95 == v92;
          v40 = v95 - v92;
          v33 = v100;
          v50 = v94;
          v34 = v97;
          v95 -= v92;
        }
        while ( !v24 );
        LOBYTE(v20) = v93;
        if ( (*(_BYTE *)(a1 + 11884) & 8) == 0 )
        {
          v51 = *(_DWORD *)(a1 + 23464);
          v2 = v98;
          *(_DWORD *)(a1 + 23460) = 0;
          v36 = 1;
          if ( v51 >= KeTimeIncrement )
            *(_DWORD *)(a1 + 23464) = v51 - KeTimeIncrement;
          else
            *(_DWORD *)(a1 + 23464) = 0;
          goto LABEL_75;
        }
        v36 = 1;
      }
      v2 = v98;
LABEL_75:
      if ( *(_BYTE *)(a1 + 33) )
        KiTimer2Expiration(a1, v34, v36, v110);
      _disable();
    }
    KiExecuteAllDpcs(a1, v2, v110, 0LL);
    if ( (v20 & 4) != 0 )
    {
      _enable();
      KeSignalGate(a1 + 22656, 0LL);
      _disable();
    }
    v21 = __rdtsc();
    v22 = v21 - *(_QWORD *)(a1 + 23488);
    *(_QWORD *)(a1 + 23608) += v22;
    v23 = *(_BYTE *)(v2 + 2);
    if ( (v23 & 0x20) != 0 )
    {
      v26 = *(_QWORD *)(a1 + 24176);
      v27 = *(_QWORD *)(a1 + 24184);
      if ( v26 && v27 )
      {
        if ( *(_BYTE *)(v27 + 100) )
        {
          v28 = *(_DWORD *)(v27 + 116);
        }
        else
        {
          v28 = *(_DWORD *)(v27 + 72);
          if ( v28 >= *(_DWORD *)(v26 + 360) )
            v28 = *(_DWORD *)(v26 + 360);
        }
      }
      else
      {
        v28 = 100;
      }
      if ( v28 < 0x4B )
        v29 = v28 / 0x19;
      else
        v29 = 3;
      v30 = 8 * (*(unsigned __int8 *)(a1 + 24224) + 2LL * v29) + 23616;
      *(_QWORD *)(v30 + a1) += v22;
      v23 = *(_BYTE *)(v2 + 2);
    }
    if ( (v23 & 0x40) != 0 )
    {
      if ( *(_QWORD *)(a1 + 25016) )
        KiSetVpThreadSystemWork(a1, 0LL);
      v86 = *(_QWORD *)(v2 + 1520);
      if ( v86 )
        *(_BYTE *)(v86 + 64) = 1;
    }
    *(_QWORD *)(a1 + 23488) = v21;
    if ( (*(_BYTE *)(v2 + 2) & 0x10) != 0 )
      *(_QWORD *)(a1 + 23496) = v21;
    if ( (*(_BYTE *)(v2 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v2, 0LL);
    v24 = *(_BYTE *)(a1 + 6) == 0;
    *(_BYTE *)(a1 + 32) = 0;
    if ( !v24 )
      *(_BYTE *)(a1 + 6) = 0;
    result = _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 11884), 0, 1);
  }
  while ( result != 1 );
  *(_QWORD *)(a1 + 11808) = 0LL;
  return result;
}
