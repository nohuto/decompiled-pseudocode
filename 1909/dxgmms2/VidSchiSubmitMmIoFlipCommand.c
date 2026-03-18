/*
 * XREFs of VidSchiSubmitMmIoFlipCommand @ 0x1C000EFA0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C008B560 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00C9F58 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0007280 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0008230 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiUpdateContextStatus @ 0x1C000A6F0 (VidSchiUpdateContextStatus.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000AD10 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000CD30 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C000D280 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0018640 (memmove.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     VidSchiRestartQueuedFlip @ 0x1C0030520 (VidSchiRestartQueuedFlip.c)
 *     VidSchiRewindPacket @ 0x1C00305EC (VidSchiRewindPacket.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00339FC (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C003A4F4 (VidSchiCompletePendingFlipOnPlane.c)
 *     VidSchIsVSyncEnabled @ 0x1C007B780 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitMmIoFlipCommand(struct _VIDSCH_QUEUE_PACKET *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  struct _VIDSCH_QUEUE_PACKET *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rbx
  unsigned int v10; // ebx
  KIRQL v11; // r15
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // r9
  _QWORD *v15; // r10
  __int64 v16; // r8
  bool v17; // zf
  int v18; // edx
  __int64 v19; // r15
  unsigned int v20; // r8d
  __int64 v21; // rbx
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  char v27; // di
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int16 v31; // dx
  unsigned int v32; // r8d
  int v33; // eax
  char v34; // cl
  _QWORD *v35; // r9
  int v36; // eax
  _DWORD *v37; // rdi
  int v38; // ecx
  int v39; // ecx
  int v40; // edx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  __int64 v44; // rax
  int v45; // eax
  int v46; // eax
  int v47; // ecx
  __int64 v48; // rax
  int v49; // ecx
  _DWORD *v50; // rax
  unsigned int v51; // r11d
  int v52; // r8d
  unsigned int v53; // r9d
  int v54; // eax
  unsigned int v55; // r10d
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // r10
  __int64 v59; // r8
  __int64 v60; // rcx
  __int64 v61; // r11
  unsigned int v62; // r8d
  __int64 v63; // rax
  unsigned int v64; // r9d
  unsigned int v65; // r10d
  bool v66; // cc
  __int64 *v67; // rax
  __int64 v68; // r13
  int v69; // edi
  LARGE_INTEGER *v70; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v72; // ebx
  _QWORD *v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  int v77; // ecx
  int v78; // eax
  unsigned int v79; // r8d
  unsigned int v80; // edx
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rax
  int v84; // eax
  __int64 v85; // rdx
  char v86; // r13
  int v87; // eax
  int v88; // eax
  unsigned int v89; // ebx
  void (__fastcall *v90)(_QWORD, _QWORD); // rax
  __int64 v91; // rdx
  __int64 v92; // r8
  void (__fastcall *v93)(_QWORD, _QWORD); // rax
  void (__fastcall *v94)(_QWORD, _QWORD); // rax
  _QWORD *v95; // rax
  __int64 v96; // rax
  int v97; // ecx
  int v98; // ecx
  int v99; // ecx
  int v100; // ecx
  int v101; // eax
  unsigned int v102; // eax
  int v103; // ecx
  char v104; // cl
  int v105; // eax
  unsigned int v106; // ecx
  unsigned __int64 v107; // r9
  unsigned __int64 *v108; // rax
  int v109; // r9d
  int v110; // r9d
  __int64 v111; // rcx
  _QWORD *v112; // rax
  int v113; // r9d
  int v114; // [rsp+30h] [rbp-89h]
  int v115; // [rsp+34h] [rbp-85h]
  int v116; // [rsp+34h] [rbp-85h]
  unsigned int v117; // [rsp+38h] [rbp-81h]
  unsigned int v118; // [rsp+3Ch] [rbp-7Dh]
  _QWORD v119[2]; // [rsp+40h] [rbp-79h] BYREF
  char v120; // [rsp+50h] [rbp-69h]
  __int64 v121; // [rsp+58h] [rbp-61h]
  __int64 v122; // [rsp+60h] [rbp-59h]
  unsigned int v123; // [rsp+68h] [rbp-51h]
  int v124; // [rsp+6Ch] [rbp-4Dh]
  __int64 v125; // [rsp+70h] [rbp-49h]
  int v126; // [rsp+78h] [rbp-41h]
  __int64 v127; // [rsp+80h] [rbp-39h]
  _QWORD *v128; // [rsp+88h] [rbp-31h]
  int v129; // [rsp+90h] [rbp-29h]
  int v130; // [rsp+94h] [rbp-25h]
  int v131; // [rsp+98h] [rbp-21h]
  int v132; // [rsp+9Ch] [rbp-1Dh]
  int v133; // [rsp+A0h] [rbp-19h]
  int v134; // [rsp+A4h] [rbp-15h]
  int v135; // [rsp+A8h] [rbp-11h]
  int v136; // [rsp+ACh] [rbp-Dh]
  _QWORD *v137; // [rsp+B0h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B8h] [rbp-1h] BYREF
  char v139; // [rsp+120h] [rbp+67h] BYREF
  KIRQL v140; // [rsp+128h] [rbp+6Fh]
  unsigned int v141; // [rsp+130h] [rbp+77h]
  DWORD v142; // [rsp+138h] [rbp+7Fh]

  v3 = *((_QWORD *)a1 + 11);
  v4 = a1;
  v5 = *((unsigned int *)a1 + 40);
  v141 = v5;
  v6 = (unsigned int)v5;
  v7 = *(_QWORD *)(v3 + 104);
  v8 = *(_QWORD *)(v7 + 32);
  v9 = v8 + 8 * (v5 + 322);
  v121 = *(_QWORD *)v9;
  v128 = (_QWORD *)v9;
  if ( (*(_BYTE *)(v8 + 2428) & 1) != 0
    || *(_DWORD *)(v8 + 2404)
    || *(_BYTE *)(v7 + 204)
    || (a2 = 0LL, _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 200), 0, 0)) )
  {
    do
      v4 = VidSchiProcessCompletedQueuePacketInternal(v4, a2, a3);
    while ( v4 );
    return;
  }
  if ( (*(_DWORD *)(v7 + 48) & 2) != 0 || *((int *)v4 + 100) >= 4 || *(_BYTE *)(v8 + 144) )
    VidSchIsVSyncEnabled(v8, (unsigned int)v5);
  v10 = *(_DWORD *)(*(_QWORD *)v9 + 33280LL);
  if ( v10 != -1 )
  {
    v90 = *(void (__fastcall **)(_QWORD, _QWORD))(v8 + 2432);
    if ( v90 )
      v90(*(_QWORD *)(v8 + 2496), v10);
  }
  v140 = KfRaiseIrql(2u);
  v11 = v140;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1648), &LockHandle);
  v12 = *((_DWORD *)v4 + 16);
  v119[1] = v119;
  v119[0] = v119;
  v120 = 0;
  if ( (v12 & 0x20) != 0 )
  {
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v119);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v11);
    do
      v4 = VidSchiProcessCompletedQueuePacketInternal(v4, v91, v92);
    while ( v4 );
    if ( v10 != -1 )
    {
      v93 = *(void (__fastcall **)(_QWORD, _QWORD))(v8 + 2448);
      if ( v93 )
        v93(*(_QWORD *)(v8 + 2496), v10);
    }
    if ( v120 )
      return;
LABEL_140:
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v119);
    return;
  }
  v13 = *((_QWORD *)v4 + 51);
  v14 = v121;
  v15 = (_QWORD *)(v7 + 8 * (v6 + 47));
  v16 = *v15;
  v137 = v15;
  v125 = v13;
  if ( v13 - v16 > (unsigned __int64)(unsigned int)(64 - *(_DWORD *)(v121 + 2332)) )
  {
    VidSchiRewindPacket(v4, 1LL, 1LL, 1LL);
    VidSchiUpdateContextStatus(v3, (_QWORD *)3, 2980LL);
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v119);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v11);
    if ( v10 != -1 )
    {
      v94 = *(void (__fastcall **)(_QWORD, _QWORD))(v8 + 2448);
      if ( v94 )
        v94(*(_QWORD *)(v8 + 2496), v10);
    }
    if ( v120 )
      return;
    goto LABEL_140;
  }
  v17 = *(_DWORD *)(v121 + 4) == 3;
  v139 = 0;
  if ( v17 || (v18 = v16, !*((_DWORD *)v4 + 101)) && (*((_DWORD *)v4 + 68) & 0x10000000) != 0 )
  {
    v115 = 1;
    v18 = v16;
    v127 = 1LL;
  }
  else
  {
    v115 = 0;
    v127 = 0LL;
  }
  v19 = *(_QWORD *)(v121 + 24);
  if ( (*((_DWORD *)v4 + 18) & 0x800000) != 0 )
  {
    v20 = ((unsigned __int16)*((_DWORD *)v4 + 206) | (unsigned __int16)(*((_DWORD *)v4 + 206) >> 10)) & 0x3FF;
  }
  else
  {
    LODWORD(v13) = v125;
    v20 = (1 << *(_DWORD *)(v8 + 140)) - 1;
  }
  v17 = !_BitScanForward((unsigned int *)&v21, v20);
  v129 = v21;
  if ( v17 )
    LOBYTE(v21) = -1;
  if ( v20 )
  {
    v22 = *(_QWORD *)(v8 + 8 * v6 + 2576);
    while ( 1 )
    {
      v23 = (unsigned int)(char)v21;
      v24 = *(int *)(216 * v23 + v22 + 172);
      if ( (int)v24 > -1 )
      {
        v85 = *(unsigned int *)(136 * v24 + *(_QWORD *)(v8 + 2704) + 112);
        if ( (_DWORD)v85 == 2 )
          break;
      }
      v21 = 0xFFFFFFFFLL;
      v20 &= ~(1 << v23);
      v17 = !_BitScanForward((unsigned int *)&v25, v20);
      v130 = v25;
      if ( !v17 )
        v21 = (unsigned __int8)v25;
      if ( !v20 )
      {
        LODWORD(v13) = *((_DWORD *)v4 + 102);
        v18 = *(_DWORD *)v15;
        v14 = v121;
        goto LABEL_24;
      }
    }
    v95 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v85);
    v95[5] = (char)v21;
    v95[3] = 281LL;
    v95[4] = 0x100000LL;
    v95[6] = v6;
    v95[7] = v8;
    WdLogEvent5_WdCriticalError(v95);
    __debugbreak();
    goto LABEL_148;
  }
LABEL_24:
  v26 = (unsigned int)(v13 - v18);
  v27 = v26 + *(_DWORD *)(v19 + 32);
  v125 = v26;
  v28 = *(_QWORD *)(v8 + 616);
  LODWORD(v6) = v27 & 0x3F;
  v29 = *(unsigned int *)(v3 + 88);
  v30 = v19 + 1312LL * (unsigned int)v6;
  v142 = v6;
  v122 = v30;
  v21 = v30 + 80;
  if ( (unsigned int)v29 < *(_DWORD *)(v8 + 688) )
    v28 += 8 * v29;
  v17 = *(_DWORD *)(v30 + 1132) == 8;
  v31 = *(_WORD *)(*(_QWORD *)v28 + 6LL);
  v118 = v31;
  if ( !v17 )
  {
    ++*(_DWORD *)(v8 + 724);
    ++*(_DWORD *)(v7 + 1276);
    ++*(_DWORD *)(v3 + 784);
    ++*(_DWORD *)(v14 + 2332);
    if ( (*((_DWORD *)v4 + 68) & 0x800000) != 0 )
      v32 = ((unsigned __int16)*((_DWORD *)v4 + 206) | (unsigned __int16)(*((_DWORD *)v4 + 206) >> 10)) & 0x3FF;
    else
      v32 = (1 << *(_DWORD *)(v8 + 140)) - 1;
    v17 = !_BitScanForward((unsigned int *)&v33, v32);
    v34 = -1;
    v131 = v33;
    if ( !v17 )
      v34 = v33;
    if ( v32 )
    {
      v35 = v128;
      do
      {
        ++*(_DWORD *)(216LL * v34 + *v35 + 180);
        v36 = 1 << v34;
        v34 = -1;
        v32 &= ~v36;
        v17 = !_BitScanForward((unsigned int *)&v36, v32);
        v132 = v36;
        if ( !v17 )
          v34 = v36;
      }
      while ( v32 );
    }
    v37 = *(_DWORD **)(v21 + 1184);
    memset((void *)v21, 0, 0x520uLL);
    *(_QWORD *)(v21 + 1184) = v37;
    memset(v37 + 4, 0, v37[1] * ((v37[2] << 6) + ((8 * v37[2] + 191) & 0xFFFFFFF8)));
    *(_QWORD *)v21 = v3;
    *(_QWORD *)(v21 + 1040) = *(_QWORD *)(v3 + 104);
    *(_DWORD *)(v21 + 1048) = *((_DWORD *)v4 + 28);
    *(_DWORD *)(v21 + 1056) = *((_DWORD *)v4 + 98);
    *(_QWORD *)(v21 + 520) = *(_QWORD *)(v3 + 152);
    *(_BYTE *)(v21 + 1076) = (*((_DWORD *)v4 + 68) & 0x10) != 0;
    v38 = *(_DWORD *)(v21 + 1136) ^ (*(_DWORD *)(v21 + 1136) ^ (*((_DWORD *)v4 + 18) >> 19)) & 0x10;
    *(_DWORD *)(v21 + 1136) = v38;
    v39 = ((unsigned __int16)v38 ^ (*((_DWORD *)v4 + 68) >> 21)) & 0x200 ^ v38;
    *(_DWORD *)(v21 + 1136) = v39;
    v40 = v39 ^ ((unsigned __int16)v39 ^ (*((_DWORD *)v4 + 68) >> 21)) & 0x400;
    v17 = (_DWORD)v125 == 0;
    *(_DWORD *)(v21 + 1136) = v40;
    if ( v17 )
    {
      ++*(_QWORD *)(v19 + 64);
      v40 = *(_DWORD *)(v21 + 1136);
      *(_QWORD *)(v21 + 1064) = *(_QWORD *)(v19 + 64);
    }
    if ( (v40 & 0x200) != 0 )
    {
      v97 = *((_DWORD *)v4 + 158);
      *(_DWORD *)(v21 + 1192) = v97;
      v98 = v97 - 1;
      if ( v98 )
      {
        if ( v98 == 1 )
        {
          *(_OWORD *)(v21 + 1196) = *(_OWORD *)((char *)v4 + 636);
          *(_OWORD *)(v21 + 1212) = *(_OWORD *)((char *)v4 + 652);
          *(_OWORD *)(v21 + 1228) = *(_OWORD *)((char *)v4 + 668);
          *(_OWORD *)(v21 + 1244) = *(_OWORD *)((char *)v4 + 684);
          *(_QWORD *)(v21 + 1260) = *(_QWORD *)((char *)v4 + 700);
        }
      }
      else
      {
        *(_OWORD *)(v21 + 1196) = *(_OWORD *)((char *)v4 + 636);
        *(_QWORD *)(v21 + 1212) = *(_QWORD *)((char *)v4 + 652);
        *(_DWORD *)(v21 + 1220) = *((_DWORD *)v4 + 165);
      }
    }
    else
    {
      *(_DWORD *)(v21 + 1192) = 0;
    }
    if ( (v40 & 0x400) != 0 )
    {
      *(_OWORD *)(v21 + 1268) = *(_OWORD *)((char *)v4 + 708);
      *(_OWORD *)(v21 + 1284) = *(_OWORD *)((char *)v4 + 724);
    }
    memmove(*(void **)(v21 + 1184), (char *)v4 + 824, *((unsigned int *)v4 + 209));
    *(_DWORD *)(v21 + 1080) = *((_DWORD *)v4 + 104);
    *(_DWORD *)(v21 + 1084) = 1 << v118;
    v41 = *(_DWORD *)(v21 + 1136) ^ (*(_DWORD *)(v21 + 1136) ^ (*((_DWORD *)v4 + 68) >> 19)) & 1;
    *(_DWORD *)(v21 + 1136) = v41;
    v42 = ((unsigned __int8)v41 ^ (unsigned __int8)(*((_DWORD *)v4 + 68) >> 19)) & 2 ^ v41;
    *(_DWORD *)(v21 + 1136) = v42;
    v43 = ((unsigned __int8)v42 ^ (unsigned __int8)(*((_DWORD *)v4 + 68) >> 19)) & 4 ^ v42;
    *(_DWORD *)(v21 + 1136) = v43;
    *(_DWORD *)(v21 + 1136) = v43 ^ ((unsigned __int8)v43 ^ (unsigned __int8)(*((_DWORD *)v4 + 68) >> 19)) & 8;
    *(_QWORD *)(v21 + 1160) = *((_QWORD *)v4 + 37);
    *(_QWORD *)(v21 + 1168) = *((_QWORD *)v4 + 38);
    v44 = *((_QWORD *)v4 + 39);
    *((_QWORD *)v4 + 37) = 0LL;
    *(_QWORD *)(v21 + 1176) = v44;
    if ( v44 )
      _InterlockedIncrement((volatile signed __int32 *)(v44 + 4));
    v45 = *((_DWORD *)v4 + 68);
    *(_DWORD *)(v21 + 1092) = 1;
    if ( (v45 & 0x400) != 0 )
    {
      *(_DWORD *)(v21 + 1088) = *((_DWORD *)v4 + 105);
      v46 = *((_DWORD *)v4 + 105);
    }
    else
    {
      *(_DWORD *)(v21 + 1088) = 1;
      v46 = 1;
    }
    *(_DWORD *)(v21 + 1096) = v46;
    if ( *(_BYTE *)(v21 + 1076) || v115 )
    {
      *(_DWORD *)(v21 + 1072) = 0;
      v103 = *(_DWORD *)(v21 + 1136) ^ (*(_DWORD *)(v21 + 1136) ^ (*((_DWORD *)v4 + 68) >> 21)) & 0x80;
      *(_DWORD *)(v21 + 1136) = v103;
      v102 = v103 ^ ((unsigned __int16)v103 ^ (*((_DWORD *)v4 + 68) >> 20)) & 0x100;
    }
    else
    {
      v47 = *((_DWORD *)v4 + 101);
      if ( v47 == 1 )
      {
        *(_DWORD *)(v21 + 1072) = 0;
LABEL_50:
        LODWORD(v6) = v142;
        goto LABEL_51;
      }
      if ( v47 )
      {
        v99 = v47 - 2;
        if ( v99 )
        {
          v100 = v99 - 1;
          if ( v100 )
          {
            LODWORD(v6) = v142;
            if ( v100 == 1 )
              *(_DWORD *)(v21 + 1072) = 3;
            else
              *(_DWORD *)(v21 + 1072) = 0;
            goto LABEL_51;
          }
          *(_DWORD *)(v21 + 1072) = 2;
        }
        else
        {
          *(_DWORD *)(v21 + 1072) = 1;
        }
        goto LABEL_50;
      }
      v101 = *(_DWORD *)(v21 + 1136) | 0x80;
      *(_DWORD *)(v21 + 1072) = 0;
      v102 = v101 & 0xFFFFFEFF;
    }
    *(_DWORD *)(v21 + 1136) = v102;
    goto LABEL_50;
  }
LABEL_148:
  *(_QWORD *)(v21 + 8LL * *(unsigned int *)(v21 + 1092)) = v3;
  *(_QWORD *)(v21 + 8LL * *(unsigned int *)(v21 + 1092) + 520) = *(_QWORD *)(v3 + 152);
  v96 = *(_QWORD *)(v3 + 104);
  ++*(_DWORD *)(v21 + 1092);
  *(_QWORD *)(v21 + 1040) = v96;
  ++*(_DWORD *)(v3 + 784);
  *(_DWORD *)(v21 + 1084) |= 1 << v31;
LABEL_51:
  v48 = v121;
  v49 = *((_DWORD *)v4 + 106);
  *(_DWORD *)(v21 + 1140) = v49;
  if ( (*(_DWORD *)(v48 + 70584) & 1) != 0 && (*(_DWORD *)(v21 + 1136) & 0x80u) != 0 )
  {
    if ( !v49 )
      v49 = -1;
    *(_DWORD *)(v21 + 1140) = v49;
  }
  if ( (*((_DWORD *)v4 + 68) & 0x800) != 0 )
    *(_BYTE *)(v21 + 1077) = 1;
  v50 = *(_DWORD **)(v21 + 1184);
  v51 = 0;
  v52 = 0;
  v114 = 0;
  v53 = *v50 & 0x3FF;
  if ( *(_BYTE *)(v8 + 144) )
    v51 = (*v50 >> 10) & 0x3FF;
  v17 = !_BitScanForward((unsigned int *)&v54, v53);
  v133 = v54;
  if ( v17 )
    LOBYTE(v54) = -1;
  v55 = (char)v54;
  v17 = !_BitScanForward((unsigned int *)&v54, v51);
  v134 = v56;
  if ( v17 )
    LOBYTE(v54) = -1;
  v57 = (unsigned int)(char)v54;
  v117 = (char)v54;
  while ( v53 || v51 )
  {
    if ( v55 >= (unsigned int)v57 )
      goto LABEL_173;
    v77 = *(_DWORD *)(v21 + 1080);
    v78 = 1;
    v79 = v118;
    v80 = 0;
    v124 = 1;
    v123 = 0;
    v116 = 0;
    v126 = v77;
    while ( (v77 & v78) == 0 )
    {
LABEL_171:
      ++v80;
      v78 *= 2;
      v123 = v80;
      v124 = v78;
      if ( v80 > v79 )
      {
        v57 = v117;
        v52 = v114;
        goto LABEL_99;
      }
    }
    v81 = *(_QWORD *)(((unsigned __int64)(unsigned int)(v114 + v116 * *(_DWORD *)(*(_QWORD *)(v21 + 1184) + 4LL)) << 6)
                    + *(_QWORD *)(v21 + 1184)
                    + *(_DWORD *)(*(_QWORD *)(v21 + 1184) + 4LL)
                    * ((8 * *(_DWORD *)(*(_QWORD *)(v21 + 1184) + 8LL) + 191) & 0xFFFFFFF8)
                    + 48);
    if ( ((*(_DWORD *)(v81 + 32) >> 2) & 0x3F) != v118 )
    {
      ++v116;
      v78 = v124;
      v77 = v126;
      v80 = v123;
      v79 = v118;
      goto LABEL_171;
    }
    v82 = *(_QWORD *)(v81 + 96);
    v57 = v117;
    v52 = v114;
    if ( !*(_QWORD *)(v82 + 24) )
    {
      v83 = *(_QWORD *)(v82 + 16);
      if ( v83 )
        _InterlockedIncrement((volatile signed __int32 *)(v83 + 8));
    }
LABEL_99:
    if ( v55 < (unsigned int)v57 )
    {
      v53 &= ~(1 << v55);
      v17 = !_BitScanForward((unsigned int *)&v84, v53);
      v135 = v84;
      if ( v17 )
        LOBYTE(v84) = -1;
      v55 = (char)v84;
      goto LABEL_103;
    }
LABEL_173:
    v104 = -1;
    v51 &= ~(1 << v57);
    v17 = !_BitScanForward((unsigned int *)&v105, v51);
    v136 = v105;
    if ( !v17 )
      v104 = v105;
    v57 = (unsigned int)v104;
    v117 = v104;
LABEL_103:
    v114 = ++v52;
  }
  if ( *(_DWORD *)(v21 + 1088) > *(_DWORD *)(v21 + 1092) )
  {
    *(_DWORD *)(v21 + 1052) = 8;
  }
  else
  {
    if ( !(_DWORD)v125 )
    {
      v58 = v122;
      while ( 1 )
      {
        *(_DWORD *)(v19 + 32) = ((_BYTE)v6 + 1) & 0x3F;
        ++*v137;
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 728));
        v59 = v121;
        _InterlockedIncrement((volatile signed __int32 *)(v121 + 2336));
        if ( *(_DWORD *)(v21 + 1052) == 7 )
          *(_QWORD *)(v21 + 1064) = ++*(_QWORD *)(v19 + 64);
        v60 = *(_QWORD *)(v21 + 1040);
        if ( !*(_BYTE *)(v60 + 204) && !_InterlockedCompareExchange((volatile signed __int32 *)(v60 + 200), 0, 0) )
        {
          v57 = *(unsigned int *)(v21 + 1092);
          if ( (*(_DWORD *)(v21 + 1136) & 0x2000) != 0 )
          {
            v106 = 0;
            if ( (_DWORD)v57 )
            {
              do
              {
                v57 = *(_QWORD *)(v21 + 8LL * v106);
                v107 = *(_QWORD *)(v21 + 8LL * v106 + 512);
                if ( !*(_BYTE *)(v57 + 28) )
                {
                  v108 = *(unsigned __int64 **)(v57 + 64);
                  if ( *(_BYTE *)(v57 + 29) )
                  {
                    if ( *v108 < v107 )
                      goto LABEL_78;
                  }
                  else if ( *(_DWORD *)v108 - (int)v107 < 0 )
                  {
                    goto LABEL_78;
                  }
                }
                ++v106;
              }
              while ( v106 < *(_DWORD *)(v21 + 1092) );
            }
          }
          else
          {
            if ( (_DWORD)v57 )
              v61 = *(_QWORD *)(v21 + 8LL * (unsigned int)(v57 - 1));
            else
              v61 = 0LL;
            v62 = 0;
            if ( (_DWORD)v57 )
            {
              while ( 1 )
              {
                v63 = *(_QWORD *)(v21 + 8LL * v62);
                if ( v63 )
                {
                  v64 = *(_DWORD *)(v21 + 8LL * v62 + 524);
                  v65 = *(_DWORD *)(v63 + 164);
                  v66 = v64 <= v65;
                  if ( v64 == v65 )
                  {
                    if ( *(_DWORD *)(v21 + 8LL * v62 + 520) > *(_DWORD *)(v63 + 160) )
                      break;
                    v66 = v64 <= v65;
                  }
                  if ( !v66 )
                    break;
                }
                if ( ++v62 >= (unsigned int)v57 )
                  goto LABEL_110;
              }
LABEL_77:
              v58 = v122;
LABEL_78:
              v67 = v128;
              *(_DWORD *)(v21 + 1052) = 1;
              v68 = *v67;
              if ( (*(_DWORD *)(v58 + 1216) & 0x10) != 0 )
                v69 = ((unsigned __int16)**(_DWORD **)(v58 + 1264) | (unsigned __int16)(**(_DWORD **)(v58 + 1264) >> 10)) & 0x3FF;
              else
                v69 = (1 << *(_DWORD *)(v8 + 140)) - 1;
              v70 = (LARGE_INTEGER *)(*(_QWORD *)(v68 + 120) + 72LL * *(unsigned int *)(v68 + 128));
              memset(v70, 0, 0x48uLL);
              *(_DWORD *)(v68 + 128) = (*(_DWORD *)(v68 + 128) + 1) & (*(_DWORD *)(v68 + 112) - 1);
              v70->LowPart = 0;
              v70[2].LowPart = v69;
              BYTE4(v70[2].QuadPart) = *(_BYTE *)(v19 + 56);
              v70[3].LowPart = v142;
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
              v57 = v122;
              v70[1] = PerformanceCounter;
              LOBYTE(v70[4].LowPart) = (*(_DWORD *)(v57 + 1216) & 0x20) != 0;
              v70[4].HighPart = *(_DWORD *)(v57 + 1132);
              v70[3].HighPart = *(_DWORD *)(v57 + 1136);
              v70[5].HighPart = *(_DWORD *)(v68 + 2348);
              v70[5].LowPart = *(_DWORD *)(v68 + 2344);
              v70[6].LowPart = *(_DWORD *)(v19 + 32);
              v70[6].HighPart = *(_DWORD *)(v19 + 36);
              v70[7].LowPart = *(_DWORD *)(v19 + 40);
              v70[7].HighPart = *(_DWORD *)(v19 + 44);
              v70[8].LowPart = *(_DWORD *)(v19 + 48);
              v70[8].HighPart = *(_DWORD *)(v19 + 52);
              goto LABEL_81;
            }
LABEL_110:
            if ( v61 )
            {
              LOBYTE(v57) = 1;
              VidSchiUpdateLastCompletedPresentTimestamp(v61, v57, 0);
            }
            v59 = v121;
          }
        }
        if ( !*(_BYTE *)(v59 + 66436) )
          goto LABEL_77;
        v17 = v127 == 0;
        v86 = 1;
        *(_DWORD *)(v21 + 1052) = 2;
        v87 = *(_DWORD *)(v19 + 40);
        if ( v17 )
          break;
        if ( (_DWORD)v6 != v87 )
          goto LABEL_128;
        if ( *(_BYTE *)(v8 + 144) )
        {
          v57 = *(unsigned int *)(v19 + 48);
          v109 = ((unsigned __int8)*(_DWORD *)(v19 + 44) - 1) & 0x3F;
          if ( (_DWORD)v57 != v109 )
          {
            while ( *(_DWORD *)(1312LL * (unsigned int)v57 + v19 + 1132) != 14 )
            {
              v57 = ((_BYTE)v57 - 1) & 0x3F;
              if ( (_DWORD)v57 == v109 )
                goto LABEL_193;
            }
LABEL_204:
            *(_QWORD *)(v21 + 1104) = MEMORY[0xFFFFF78000000320];
LABEL_128:
            v89 = v141;
            goto LABEL_124;
          }
LABEL_193:
          v110 = *(_DWORD *)(v21 + 1136);
          if ( (v110 & 0x10) != 0 )
            v57 = ((unsigned __int16)**(_DWORD **)(v21 + 1184) | (unsigned __int16)(**(_DWORD **)(v21 + 1184) >> 10)) & 0x3FF;
          else
            v57 = (unsigned int)((1 << *(_DWORD *)(v8 + 140)) - 1);
          if ( ((unsigned int)v57 & *(_DWORD *)(v59 + 2348)) != 0 )
            goto LABEL_204;
          if ( *(_DWORD *)(v8 + 148) <= 1u || *(_DWORD *)(v59 + 4) == 3 || (v110 & 0x180) != 0x80 )
          {
            v57 = (*(_DWORD *)(v21 + 1136) & 0x10) != 0
                ? ((unsigned __int16)**(_DWORD **)(v21 + 1184) | (unsigned __int16)(**(_DWORD **)(v21 + 1184) >> 10)) & 0x3FF
                : (unsigned int)((1 << *(_DWORD *)(v8 + 140)) - 1);
            if ( ((unsigned int)v57 & *(_DWORD *)(v59 + 2344)) != 0 )
              goto LABEL_204;
          }
        }
LABEL_123:
        *(_DWORD *)(v21 + 1052) = 4;
        v89 = v141;
        v86 = 0;
        VidSchiUpdateFlipQueueHistory(0, v8, v141, v19, v6);
        VidSchiExecuteMmIoFlip(
          (__int64)v119,
          v8,
          v89,
          (struct VIDSCH_FLIP_QUEUE *)v19,
          v6,
          (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)&v139);
LABEL_124:
        if ( *(_DWORD *)(1312LL * *(unsigned int *)(v19 + 36) + v19 + 1132) != 1 )
          *(_DWORD *)(v19 + 36) = *(_DWORD *)(v19 + 32);
        if ( v86 )
          VidSchiUpdateFlipQueueHistory(0, v8, v89, v19, v6);
LABEL_81:
        v142 = *(_DWORD *)(v19 + 32);
        LODWORD(v6) = v142;
        v58 = v19 + 1312LL * v142;
        v122 = v58;
        v21 = v58 + 80;
        if ( *(_DWORD *)(v58 + 1132) != 7 )
        {
          v72 = v141;
          goto LABEL_83;
        }
      }
      if ( (_DWORD)v6 != v87 && !*(_BYTE *)(v21 + 1076) )
      {
        v21 = ((_BYTE)v6 - 1) & 0x3F;
        v111 = *(unsigned int *)(1312 * v21 + v19 + 1216);
        if ( (v111 & 0x20) == 0 )
          goto LABEL_128;
        v112 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v111, v57);
        v112[3] = 281LL;
        v112[4] = 0x100000LL;
        v112[5] = v21;
        v112[6] = v19;
        v112[7] = v8;
        WdLogEvent5_WdCriticalError(v112);
        __debugbreak();
LABEL_208:
        v57 = *(unsigned int *)(v19 + 48);
        v113 = ((unsigned __int8)*(_DWORD *)(v19 + 44) - 1) & 0x3F;
        if ( (_DWORD)v57 != v113 )
        {
          while ( *(_DWORD *)(1312LL * (unsigned int)v57 + v19 + 1132) != 14 )
          {
            v57 = ((_BYTE)v57 - 1) & 0x3F;
            if ( (_DWORD)v57 == v113 )
              goto LABEL_211;
          }
          goto LABEL_128;
        }
LABEL_211:
        if ( (*(_DWORD *)(v21 + 1136) & 0x10) != 0 )
          v57 = ((unsigned __int16)**(_DWORD **)(v21 + 1184) | (unsigned __int16)(**(_DWORD **)(v21 + 1184) >> 10)) & 0x3FF;
        else
          v57 = (unsigned int)((1 << *(_DWORD *)(v8 + 140)) - 1);
        if ( ((unsigned int)v57 & *(_DWORD *)(v59 + 2348)) != 0 )
          goto LABEL_128;
        if ( *(_DWORD *)(v8 + 148) <= 1u || *(_DWORD *)(v59 + 4) == 3 || (*(_DWORD *)(v21 + 1136) & 0x180) != 0x80 )
        {
LABEL_117:
          if ( (*(_DWORD *)(v21 + 1136) & 0x10) != 0 )
            v57 = ((unsigned __int16)**(_DWORD **)(v21 + 1184) | (unsigned __int16)(**(_DWORD **)(v21 + 1184) >> 10)) & 0x3FF;
          else
            v57 = (unsigned int)((1 << *(_DWORD *)(v8 + 140)) - 1);
          if ( ((unsigned int)v57 & *(_DWORD *)(v59 + 2344)) != 0 )
            goto LABEL_128;
        }
        if ( *(_BYTE *)(v21 + 1076) )
          VidSchiRestartQueuedFlip((unsigned int)v119, v7, v141, v19, v6);
        v88 = *(_DWORD *)(v21 + 1072);
        if ( v88 )
        {
          *(_DWORD *)(v21 + 1052) = 3;
          *(_DWORD *)(v21 + 1072) = v88 - 1;
          goto LABEL_128;
        }
        goto LABEL_123;
      }
      *(_QWORD *)(v21 + 1104) = MEMORY[0xFFFFF78000000320];
      if ( *(_BYTE *)(v8 + 144) )
        goto LABEL_208;
      goto LABEL_117;
    }
    *(_DWORD *)(v21 + 1052) = 7;
  }
  v72 = v141;
  VidSchiUpdateFlipQueueHistory(0, v8, v141, v19, v6);
LABEL_83:
  *((_DWORD *)v4 + 16) |= 2u;
  if ( v139 )
    VidSchiCompletePendingFlipOnPlane((unsigned int)v119, v8, v72, v19, 9);
  while ( 1 )
  {
    v73 = (_QWORD *)v119[0];
    if ( *(_QWORD **)(v119[0] + 8LL) != v119
      || (v74 = *(_QWORD *)v119[0], *(_QWORD *)(*(_QWORD *)v119[0] + 8LL) != v119[0]) )
    {
      __fastfail(3u);
    }
    v119[0] = *(_QWORD *)v119[0];
    *(_QWORD *)(v74 + 8) = v119;
    if ( v73 == v119 )
      break;
    *v73 = 0LL;
    v73[1] = 0LL;
    HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v119, (struct VIDSCH_HW_QUEUE *)(v73 - 19));
  }
  v120 = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  do
    v4 = VidSchiProcessCompletedQueuePacketInternal(v4, v75, v76);
  while ( v4 );
  KeLowerIrql(v140);
  if ( !v120 )
    goto LABEL_140;
}
