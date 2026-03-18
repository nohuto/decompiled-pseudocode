/*
 * XREFs of VidSchiSubmitMmIoFlipCommand @ 0x1C000E4E0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C0086990 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00C7240 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0006430 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C00073A0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiUpdateContextStatus @ 0x1C0009350 (VidSchiUpdateContextStatus.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000CFC0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x1C000EE78 (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_PRESENT_INFO@@KK@Z @ 0x1C000F06C (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_PRESENT_INFO@.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001A680 (memmove.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     VidSchiRestartQueuedFlip @ 0x1C002FB4C (VidSchiRestartQueuedFlip.c)
 *     VidSchiRewindPacket @ 0x1C002FC24 (VidSchiRewindPacket.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0032FDC (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C0039AB4 (VidSchiCompletePendingFlipOnPlane.c)
 *     VidSchIsVSyncEnabled @ 0x1C0069EB0 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitMmIoFlipCommand(struct _VIDSCH_QUEUE_PACKET *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  struct _VIDSCH_QUEUE_PACKET *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rsi
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // rsi
  unsigned int v16; // r11d
  int v17; // eax
  unsigned int v18; // r8d
  __int64 v19; // r10
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // esi
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned __int16 v29; // dx
  unsigned int v30; // r8d
  int v31; // ecx
  _QWORD *v32; // r9
  int v33; // ecx
  _DWORD *v34; // rdi
  int v35; // ecx
  int v36; // ecx
  int v37; // edx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  __int64 v41; // rax
  int v42; // eax
  _DWORD *v43; // r11
  int v44; // eax
  int v45; // ecx
  _DWORD *v46; // rax
  unsigned int v47; // edi
  int v48; // edx
  unsigned int v49; // r9d
  int v50; // eax
  unsigned int v51; // r10d
  int v52; // eax
  unsigned int v53; // r8d
  unsigned int v54; // ecx
  struct _VIDSCH_QUEUE_PACKET *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r12
  __int64 v59; // rdx
  LARGE_INTEGER *v60; // rsi
  _QWORD *v61; // rax
  _DWORD *v62; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v64; // rcx
  unsigned int v65; // edi
  _QWORD *v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r8
  int v70; // eax
  int v71; // r12d
  unsigned int v72; // ecx
  __int64 v73; // r8
  int v74; // ecx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rax
  int v79; // eax
  char v80; // si
  __int64 v81; // rdi
  int v82; // eax
  int v83; // edx
  int v84; // eax
  __int64 v85; // r8
  __int64 v86; // rdx
  void (__fastcall *v87)(_QWORD, _QWORD); // rax
  __int64 v88; // rdx
  __int64 v89; // r8
  void (__fastcall *v90)(_QWORD, _QWORD); // rax
  void (__fastcall *v91)(_QWORD, _QWORD); // rax
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // rax
  _QWORD *v95; // rax
  _QWORD *v96; // rax
  __int64 v97; // rax
  int v98; // ecx
  int v99; // ecx
  int v100; // ecx
  int v101; // ecx
  int v102; // ecx
  int v103; // eax
  unsigned int v104; // edx
  int v105; // r8d
  int v106; // r8d
  int v107; // edx
  int v108; // edx
  __int64 v109; // rcx
  _QWORD *v110; // rax
  unsigned int v111; // edx
  int v112; // r8d
  int v113; // edx
  unsigned int v114; // [rsp+30h] [rbp-A9h]
  unsigned int v115; // [rsp+34h] [rbp-A5h]
  unsigned int v116; // [rsp+38h] [rbp-A1h]
  int v117; // [rsp+3Ch] [rbp-9Dh]
  int v118; // [rsp+40h] [rbp-99h]
  int v119; // [rsp+40h] [rbp-99h]
  __int64 v120; // [rsp+48h] [rbp-91h]
  unsigned int v121; // [rsp+50h] [rbp-89h]
  _QWORD v122[2]; // [rsp+58h] [rbp-81h] BYREF
  char v123; // [rsp+68h] [rbp-71h]
  unsigned int v124; // [rsp+70h] [rbp-69h]
  __int64 v125; // [rsp+78h] [rbp-61h]
  _QWORD *v126; // [rsp+80h] [rbp-59h]
  int v127; // [rsp+88h] [rbp-51h]
  _QWORD *v128; // [rsp+90h] [rbp-49h]
  _QWORD *v129; // [rsp+98h] [rbp-41h]
  __int64 v130; // [rsp+A0h] [rbp-39h]
  __int64 v131; // [rsp+A8h] [rbp-31h]
  int v132; // [rsp+B0h] [rbp-29h]
  int v133; // [rsp+B4h] [rbp-25h]
  int v134; // [rsp+B8h] [rbp-21h]
  int v135; // [rsp+BCh] [rbp-1Dh]
  int v136; // [rsp+C0h] [rbp-19h]
  int v137; // [rsp+C4h] [rbp-15h]
  int v138; // [rsp+C8h] [rbp-11h]
  int v139; // [rsp+CCh] [rbp-Dh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-9h] BYREF
  struct _VIDSCH_QUEUE_PACKET *v142; // [rsp+140h] [rbp+67h]
  char v143; // [rsp+148h] [rbp+6Fh] BYREF
  KIRQL v144; // [rsp+150h] [rbp+77h]
  DWORD v145; // [rsp+158h] [rbp+7Fh]

  v3 = *((_QWORD *)a1 + 11);
  v4 = a1;
  v5 = *((unsigned int *)a1 + 40);
  v121 = v5;
  v6 = (unsigned int)v5;
  v7 = *(_QWORD *)(v3 + 104);
  v8 = *(_QWORD *)(v7 + 32);
  v9 = *(_QWORD *)(v8 + 8 * (v5 + 322));
  v10 = v8 + 8 * (v5 + 322);
  v126 = (_QWORD *)v10;
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
  v11 = *(_DWORD *)(*(_QWORD *)v10 + 33272LL);
  if ( v11 != -1 )
  {
    v87 = *(void (__fastcall **)(_QWORD, _QWORD))(v8 + 2432);
    if ( v87 )
      v87(*(_QWORD *)(v8 + 2496), v11);
  }
  v144 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1648), &LockHandle);
  v12 = *((unsigned int *)v4 + 16);
  v122[1] = v122;
  v122[0] = v122;
  v123 = 0;
  if ( (v12 & 0x20) != 0 )
  {
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v122);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v144);
    do
      v4 = VidSchiProcessCompletedQueuePacketInternal(v4, v88, v89);
    while ( v4 );
    if ( v11 != -1 )
    {
      v90 = *(void (__fastcall **)(_QWORD, _QWORD))(v8 + 2448);
      if ( v90 )
        v90(*(_QWORD *)(v8 + 2496), v11);
    }
    if ( v123 )
      return;
LABEL_115:
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v122);
    return;
  }
  v13 = *((_QWORD *)v4 + 51);
  v129 = (_QWORD *)(v7 + 8 * v6 + 376);
  if ( v13 - *v129 > (unsigned __int64)(unsigned int)(64 - *(_DWORD *)(v9 + 2324)) )
  {
    VidSchiRewindPacket(v4, 1LL, 1LL, 1LL);
    VidSchiUpdateContextStatus(v3, (_QWORD *)3, 2941LL);
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v122);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v144);
    if ( v11 != -1 )
    {
      v91 = *(void (__fastcall **)(_QWORD, _QWORD))(v8 + 2448);
      if ( v91 )
        v91(*(_QWORD *)(v8 + 2496), v11);
    }
    if ( v123 )
      return;
    goto LABEL_115;
  }
  v14 = *(_DWORD *)(v9 + 4) == 3;
  v143 = 0;
  if ( v14 || !*((_DWORD *)v4 + 101) && (*((_DWORD *)v4 + 68) & 0x10000000) != 0 )
  {
    v118 = 1;
    v15 = 0LL;
    v130 = 1LL;
  }
  else
  {
    v15 = 0LL;
    v118 = 0;
    v130 = 0LL;
  }
  v16 = -1;
  v17 = *((_DWORD *)v4 + 18) >> 23;
  v145 = -1;
  if ( (v17 & 1) != 0 )
  {
    v18 = ((unsigned __int16)*((_DWORD *)v4 + 208) | (unsigned __int16)(*((_DWORD *)v4 + 208) >> 10)) & 0x3FF;
  }
  else
  {
    v12 = *(unsigned int *)(v8 + 140);
    v18 = (1 << v12) - 1;
  }
  if ( v18 )
  {
    v14 = !_BitScanForward((unsigned int *)&v15, v18);
    v132 = v15;
    if ( !v14 )
      goto LABEL_17;
    goto LABEL_132;
  }
  v92 = *(unsigned int *)(v8 + 140);
  v16 = 0;
  v145 = 0;
  if ( !(_DWORD)v92 )
    goto LABEL_131;
  v93 = *(_QWORD *)(v8 + 8LL * *((unsigned int *)v4 + 40) + 2576);
  while ( 1 )
  {
    v12 = 216LL * v16;
    v94 = *(int *)(v12 + v93 + 164);
    if ( (int)v94 <= -1 )
      break;
    v12 = *(unsigned int *)(136 * v94 + *(_QWORD *)(v8 + 2704) + 112);
    if ( (_DWORD)v12 != 2 )
      break;
    v145 = ++v16;
    if ( v16 >= (unsigned int)v92 )
      goto LABEL_131;
  }
  if ( v16 == -1 )
  {
LABEL_131:
    v95 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v92);
    v95[3] = 281LL;
    v95[4] = 0x100000LL;
    v95[5] = 0LL;
    v95[6] = *((unsigned int *)v4 + 99);
    v95[7] = v8;
    WdLogEvent5_WdCriticalError(v95);
    __debugbreak();
LABEL_132:
    LOBYTE(v15) = -1;
LABEL_17:
    v19 = *(_QWORD *)(v8 + 8 * v6 + 2576);
    while ( 1 )
    {
      v20 = 216LL * (unsigned int)(char)v15;
      v21 = *(int *)(v20 + v19 + 164);
      if ( (int)v21 > -1 )
      {
        v86 = *(unsigned int *)(136 * v21 + *(_QWORD *)(v8 + 2704) + 112);
        if ( (_DWORD)v86 == 2 )
          break;
      }
      if ( v16 == -1 )
      {
        v16 = (char)v15;
        v145 = (char)v15;
      }
      v18 &= ~(1 << v15);
      v14 = !_BitScanForward((unsigned int *)&v15, v18);
      v133 = v22;
      if ( v14 )
        LOBYTE(v15) = -1;
      if ( !v18 )
        goto LABEL_24;
    }
    v96 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v86);
    v96[5] = (char)v15;
    v96[3] = 281LL;
    v96[4] = 0x100000LL;
    v96[6] = *((unsigned int *)v4 + 99);
    v96[7] = v8;
    WdLogEvent5_WdCriticalError(v96);
    __debugbreak();
    goto LABEL_133;
  }
LABEL_24:
  v23 = *((_DWORD *)v4 + 102);
  v24 = v16 + 3LL;
  v25 = *(_QWORD *)(v9 + 8 * v24);
  v128 = (_QWORD *)(v9 + 8 * v24);
  v120 = v25;
  v127 = v23 - *(_DWORD *)v129;
  v115 = (*(_DWORD *)(v25 + 32) + v127) & 0x3F;
  v131 = 1296LL * v115;
  v15 = v131 + v25;
  v26 = *(unsigned int *)(v3 + 88);
  v27 = v15 + 56;
  v28 = *(_QWORD *)(v8 + 616);
  v125 = v15 + 56;
  if ( (unsigned int)v26 < *(_DWORD *)(v8 + 688) )
    v28 += 8 * v26;
  v29 = *(_WORD *)(*(_QWORD *)v28 + 6LL);
  v114 = v29;
  if ( *(_DWORD *)(v15 + 1108) == 8 )
  {
LABEL_133:
    v43 = (_DWORD *)(v27 + 1080);
    *(_QWORD *)(v15 + 8LL * *(unsigned int *)(v27 + 1080) + 56) = v3;
    *(_QWORD *)(v15 + 8LL * *(unsigned int *)(v27 + 1080) + 576) = *(_QWORD *)(v3 + 152);
    v97 = *(_QWORD *)(v3 + 104);
    ++*(_DWORD *)(v27 + 1080);
    *(_QWORD *)(v15 + 1096) = v97;
    ++*(_DWORD *)(v3 + 784);
    *(_DWORD *)(v15 + 1128) |= 1 << v29;
    goto LABEL_48;
  }
  ++*(_DWORD *)(v8 + 724);
  ++*(_DWORD *)(v7 + 1272);
  ++*(_DWORD *)(v3 + 784);
  ++*(_DWORD *)(v9 + 2324);
  if ( (*((_DWORD *)v4 + 68) & 0x800000) != 0 )
    v30 = ((unsigned __int16)*((_DWORD *)v4 + 208) | (unsigned __int16)(*((_DWORD *)v4 + 208) >> 10)) & 0x3FF;
  else
    v30 = (1 << *(_DWORD *)(v8 + 140)) - 1;
  v14 = !_BitScanForward((unsigned int *)&v31, v30);
  v134 = v31;
  if ( v14 )
    LOBYTE(v31) = -1;
  if ( v30 )
  {
    v32 = v126;
    do
    {
      ++*(_DWORD *)(216LL * (char)v31 + *v32 + 172);
      v30 &= ~(1 << v31);
      v14 = !_BitScanForward((unsigned int *)&v31, v30);
      v135 = v33;
      if ( v14 )
        LOBYTE(v31) = -1;
    }
    while ( v30 );
  }
  v34 = *(_DWORD **)(v15 + 1224);
  memset((void *)(v15 + 56), 0, 0x510uLL);
  *(_QWORD *)(v15 + 1224) = v34;
  memset(v34 + 4, 0, v34[1] * ((v34[2] << 6) + ((8 * v34[2] + 191) & 0xFFFFFFF8)));
  *(_QWORD *)(v15 + 56) = v3;
  *(_QWORD *)(v15 + 1096) = *(_QWORD *)(v3 + 104);
  *(_DWORD *)(v15 + 1104) = *((_DWORD *)v4 + 28);
  *(_DWORD *)(v15 + 1112) = *((_DWORD *)v4 + 98);
  *(_QWORD *)(v15 + 576) = *(_QWORD *)(v3 + 152);
  *(_BYTE *)(v15 + 1120) = (*((_DWORD *)v4 + 68) & 0x10) != 0;
  v35 = *(_DWORD *)(v15 + 1176) ^ (*(_DWORD *)(v15 + 1176) ^ (*((_DWORD *)v4 + 18) >> 19)) & 0x10;
  *(_DWORD *)(v15 + 1176) = v35;
  v36 = ((unsigned __int16)v35 ^ (*((_DWORD *)v4 + 68) >> 21)) & 0x200 ^ v35;
  *(_DWORD *)(v15 + 1176) = v36;
  v37 = v36 ^ ((unsigned __int16)v36 ^ (*((_DWORD *)v4 + 68) >> 21)) & 0x400;
  *(_DWORD *)(v15 + 1176) = v37;
  if ( (v37 & 0x200) != 0 )
  {
    v98 = *((_DWORD *)v4 + 158);
    *(_DWORD *)(v15 + 1232) = v98;
    v99 = v98 - 1;
    if ( v99 )
    {
      if ( v99 == 1 )
      {
        *(_OWORD *)(v15 + 1236) = *(_OWORD *)((char *)v4 + 636);
        *(_OWORD *)(v15 + 1252) = *(_OWORD *)((char *)v4 + 652);
        *(_OWORD *)(v15 + 1268) = *(_OWORD *)((char *)v4 + 668);
        *(_OWORD *)(v15 + 1284) = *(_OWORD *)((char *)v4 + 684);
        *(_QWORD *)(v15 + 1300) = *(_QWORD *)((char *)v4 + 700);
      }
    }
    else
    {
      *(_OWORD *)(v15 + 1236) = *(_OWORD *)((char *)v4 + 636);
      *(_QWORD *)(v15 + 1252) = *(_QWORD *)((char *)v4 + 652);
      *(_DWORD *)(v15 + 1260) = *((_DWORD *)v4 + 165);
    }
  }
  else
  {
    *(_DWORD *)(v15 + 1232) = 0;
  }
  if ( (v37 & 0x400) != 0 )
  {
    *(_OWORD *)(v15 + 1308) = *(_OWORD *)((char *)v4 + 708);
    *(_OWORD *)(v15 + 1324) = *(_OWORD *)((char *)v4 + 724);
  }
  memmove(*(void **)(v15 + 1224), (char *)v4 + 832, *((unsigned int *)v4 + 211));
  *(_DWORD *)(v15 + 1124) = *((_DWORD *)v4 + 104);
  *(_DWORD *)(v15 + 1128) = 1 << v114;
  v38 = *(_DWORD *)(v15 + 1176) ^ (*(_DWORD *)(v15 + 1176) ^ (*((_DWORD *)v4 + 68) >> 19)) & 1;
  *(_DWORD *)(v15 + 1176) = v38;
  v39 = ((unsigned __int8)v38 ^ (unsigned __int8)(*((_DWORD *)v4 + 68) >> 19)) & 2 ^ v38;
  *(_DWORD *)(v15 + 1176) = v39;
  v40 = ((unsigned __int8)v39 ^ (unsigned __int8)(*((_DWORD *)v4 + 68) >> 19)) & 4 ^ v39;
  *(_DWORD *)(v15 + 1176) = v40;
  *(_DWORD *)(v15 + 1176) = v40 ^ ((unsigned __int8)v40 ^ (unsigned __int8)(*((_DWORD *)v4 + 68) >> 19)) & 8;
  *(_DWORD *)(v15 + 1180) = *((_DWORD *)v4 + 106);
  *(_QWORD *)(v15 + 1200) = *((_QWORD *)v4 + 37);
  *(_QWORD *)(v15 + 1208) = *((_QWORD *)v4 + 38);
  v41 = *((_QWORD *)v4 + 39);
  *((_QWORD *)v4 + 37) = 0LL;
  *(_QWORD *)(v15 + 1216) = v41;
  if ( v41 )
    _InterlockedIncrement((volatile signed __int32 *)(v41 + 4));
  v42 = *((_DWORD *)v4 + 68);
  v43 = (_DWORD *)(v15 + 1136);
  *(_DWORD *)(v15 + 1136) = 1;
  if ( (v42 & 0x400) != 0 )
  {
    *(_DWORD *)(v15 + 1132) = *((_DWORD *)v4 + 105);
    v44 = *((_DWORD *)v4 + 105);
  }
  else
  {
    *(_DWORD *)(v15 + 1132) = 1;
    v44 = 1;
  }
  *(_DWORD *)(v15 + 1140) = v44;
  if ( *(_BYTE *)(v15 + 1120) || v118 )
  {
    *(_DWORD *)(v15 + 1116) = 0;
    v102 = *(_DWORD *)(v15 + 1176) ^ (*(_DWORD *)(v15 + 1176) ^ (*((_DWORD *)v4 + 68) >> 21)) & 0x80;
    *(_DWORD *)(v15 + 1176) = v102;
    *(_DWORD *)(v15 + 1176) = v102 ^ ((unsigned __int16)v102 ^ (*((_DWORD *)v4 + 68) >> 20)) & 0x100;
    goto LABEL_48;
  }
  v45 = *((_DWORD *)v4 + 101);
  if ( v45 == 1 )
    goto LABEL_47;
  v100 = v45 - 2;
  if ( !v100 )
  {
    *(_DWORD *)(v15 + 1116) = 1;
    goto LABEL_48;
  }
  v101 = v100 - 1;
  if ( !v101 )
  {
    *(_DWORD *)(v15 + 1116) = 2;
    goto LABEL_48;
  }
  if ( v101 != 1 )
LABEL_47:
    *(_DWORD *)(v15 + 1116) = 0;
  else
    *(_DWORD *)(v15 + 1116) = 3;
LABEL_48:
  if ( (*((_DWORD *)v4 + 68) & 0x800) != 0 )
    *(_BYTE *)(v15 + 1121) = 1;
  v46 = *(_DWORD **)(v15 + 1224);
  v47 = 0;
  v117 = 0;
  v48 = 0;
  v49 = *v46 & 0x3FF;
  if ( *(_BYTE *)(v8 + 144) )
    v47 = (*v46 >> 10) & 0x3FF;
  v14 = !_BitScanForward((unsigned int *)&v50, v49);
  v136 = v50;
  if ( v14 )
    LOBYTE(v50) = -1;
  v51 = (char)v50;
  v14 = !_BitScanForward((unsigned int *)&v50, v47);
  v137 = v52;
  if ( v14 )
    LOBYTE(v50) = -1;
  v53 = v114;
  v54 = (char)v50;
  v116 = (char)v50;
  while ( v49 || v47 )
  {
    if ( v51 >= v54 )
      goto LABEL_150;
    v70 = *(_DWORD *)(v15 + 1124);
    v71 = 1;
    LODWORD(v126) = v70;
    v72 = 0;
    v119 = 0;
    v124 = 0;
    while ( (v70 & v71) == 0 )
    {
LABEL_148:
      ++v72;
      v71 *= 2;
      v124 = v72;
      if ( v72 > v53 )
      {
        v54 = v116;
        v48 = v117;
        goto LABEL_81;
      }
    }
    v73 = *(_QWORD *)(v15 + 1224);
    v74 = *(_DWORD *)(v73 + 4);
    v75 = v73 + v74 * ((8 * *(_DWORD *)(v73 + 8) + 191) & 0xFFFFFFF8);
    v53 = v114;
    v76 = *(_QWORD *)(((unsigned __int64)(unsigned int)(v117 + v119 * v74) << 6) + v75 + 48);
    if ( ((*(_DWORD *)(v76 + 32) >> 2) & 0x3F) != v114 )
    {
      ++v119;
      v70 = (int)v126;
      v72 = v124;
      goto LABEL_148;
    }
    v77 = *(_QWORD *)(v76 + 96);
    v54 = v116;
    v48 = v117;
    if ( !*(_QWORD *)(v77 + 24) )
    {
      v78 = *(_QWORD *)(v77 + 16);
      if ( v78 )
        _InterlockedIncrement((volatile signed __int32 *)(v78 + 8));
    }
LABEL_81:
    if ( v51 < v54 )
    {
      v49 &= ~(1 << v51);
      v14 = !_BitScanForward((unsigned int *)&v79, v49);
      v138 = v79;
      if ( v14 )
        LOBYTE(v79) = -1;
      v54 = v116;
      v51 = (char)v79;
      goto LABEL_85;
    }
LABEL_150:
    v103 = 1 << v54;
    LOBYTE(v54) = -1;
    v47 &= ~v103;
    v14 = !_BitScanForward((unsigned int *)&v103, v47);
    v139 = v103;
    if ( !v14 )
      LOBYTE(v54) = v103;
    v54 = (char)v54;
    v116 = (char)v54;
LABEL_85:
    v117 = ++v48;
  }
  v55 = a1;
  if ( *(_DWORD *)(v15 + 1132) > *v43 )
  {
    *(_DWORD *)(v15 + 1108) = 8;
  }
  else
  {
    if ( !v127 )
    {
      LOBYTE(v56) = v115;
      v57 = v125;
      v58 = v120;
      while ( 1 )
      {
        *(_DWORD *)(v58 + 32) = ((_BYTE)v56 + 1) & 0x3F;
        ++*v129;
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 728));
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 2328));
        if ( (unsigned int)VidSchiIsHardwareCompletedDependingCommandForFlip(v57) )
        {
          if ( *(_BYTE *)(v9 + 66420) )
            break;
        }
        *(_DWORD *)(v125 + 1052) = 1;
        v60 = (LARGE_INTEGER *)(*(_QWORD *)(v9 + 112) + 72LL * *(unsigned int *)(v9 + 120));
        memset(v60, 0, 0x48uLL);
        v61 = v128;
        *(_DWORD *)(v9 + 120) = (*(_DWORD *)(v9 + 120) + 1) & (*(_DWORD *)(v9 + 104) - 1);
        v62 = (_DWORD *)*v61;
        v60[2].LowPart = v145;
        v60->LowPart = 0;
        v60[2].HighPart = v115;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v64 = v131;
        v60[1] = PerformanceCounter;
        BYTE4(v60[3].QuadPart) = (*(_DWORD *)((char *)v62 + v64 + 1176) & 0x20) != 0;
        v60[4].LowPart = *(_DWORD *)((char *)v62 + v64 + 1108);
        v60[3].LowPart = *(_DWORD *)((char *)v62 + v64 + 1112);
        v60[5].LowPart = *(_DWORD *)(v9 + 2340);
        v60[4].HighPart = *(_DWORD *)(v9 + 2336);
        v60[5].HighPart = v62[8];
        v60[6].LowPart = v62[9];
        v60[6].HighPart = v62[10];
        v60[7].LowPart = v62[11];
        v60[7].HighPart = v62[12];
        PerformanceCounter.LowPart = v62[13];
        v65 = v145;
        v60[8].LowPart = PerformanceCounter.LowPart;
LABEL_64:
        v58 = v120;
        v56 = *(unsigned int *)(v120 + 32);
        v115 = *(_DWORD *)(v120 + 32);
        v57 = 1296 * v56 + v120 + 56;
        v131 = 1296 * v56;
        v125 = v57;
        if ( *(_DWORD *)(v57 + 1052) != 7 )
          goto LABEL_65;
      }
      v14 = v130 == 0;
      v80 = 1;
      v81 = v125;
      *(_DWORD *)(v125 + 1052) = 2;
      v82 = *(_DWORD *)(v58 + 40);
      if ( v14 )
      {
        if ( v115 == v82 || *(_BYTE *)(v81 + 1064) )
        {
          *(_QWORD *)(v81 + 1088) = MEMORY[0xFFFFF78000000320];
          if ( *(_BYTE *)(v8 + 144) )
            goto LABEL_176;
          goto LABEL_90;
        }
        v81 = v120;
        v142 = (struct _VIDSCH_QUEUE_PACKET *)(((_BYTE)v115 - 1) & 0x3F);
        v109 = *(unsigned int *)(1296LL * (_QWORD)v142 + v120 + 1176);
        if ( (v109 & 0x20) == 0 )
          goto LABEL_98;
        v110 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v109, v59);
        v110[5] = v142;
        v110[3] = 281LL;
        v110[4] = 0x100000LL;
        v110[6] = v120;
        v110[7] = v8;
        WdLogEvent5_WdCriticalError(v110);
        __debugbreak();
LABEL_176:
        v111 = *(_DWORD *)(*v128 + 48LL);
        v112 = ((unsigned __int8)*(_DWORD *)(*v128 + 44LL) - 1) & 0x3F;
        if ( v111 != v112 )
        {
          while ( *(_DWORD *)(1296LL * v111 + *v128 + 1108) != 14 )
          {
            v111 = ((_BYTE)v111 - 1) & 0x3F;
            if ( v111 == v112 )
              goto LABEL_179;
          }
LABEL_97:
          v81 = v120;
LABEL_98:
          if ( *(_DWORD *)(1296LL * *(unsigned int *)(v81 + 36) + v81 + 1108) != 1 )
            *(_DWORD *)(v81 + 36) = *(_DWORD *)(v81 + 32);
          v65 = v145;
          if ( v80 )
            VidSchiUpdateFlipQueueHistory(0LL, v9, v145, v115);
          goto LABEL_64;
        }
LABEL_179:
        if ( (*(_DWORD *)(v81 + 1120) & 0x10) != 0 )
          v113 = ((unsigned __int16)**(_DWORD **)(v81 + 1168) | (unsigned __int16)(**(_DWORD **)(v81 + 1168) >> 10)) & 0x3FF;
        else
          v113 = (1 << *(_DWORD *)(v8 + 140)) - 1;
        if ( (v113 & *(_DWORD *)(v9 + 2340)) != 0 )
          goto LABEL_97;
        if ( *(_DWORD *)(v8 + 148) <= 1u || *(_DWORD *)(v9 + 4) == 3 || (*(_DWORD *)(v81 + 1120) & 0x180) != 0x80 )
        {
LABEL_90:
          if ( (*(_DWORD *)(v81 + 1120) & 0x10) != 0 )
            v83 = ((unsigned __int16)**(_DWORD **)(v81 + 1168) | (unsigned __int16)(**(_DWORD **)(v81 + 1168) >> 10)) & 0x3FF;
          else
            v83 = (1 << *(_DWORD *)(v8 + 140)) - 1;
          if ( (v83 & *(_DWORD *)(v9 + 2336)) != 0 )
            goto LABEL_97;
        }
        if ( *(_BYTE *)(v81 + 1064) )
          VidSchiRestartQueuedFlip((unsigned int)v122, v7, v121, v145, v115);
        v84 = *(_DWORD *)(v81 + 1060);
        if ( v84 )
        {
          *(_DWORD *)(v81 + 1052) = 3;
          *(_DWORD *)(v81 + 1060) = v84 - 1;
          goto LABEL_97;
        }
      }
      else
      {
        if ( v115 != v82 )
          goto LABEL_97;
        if ( *(_BYTE *)(v8 + 144) )
        {
          v104 = *(_DWORD *)(*v128 + 48LL);
          v105 = ((unsigned __int8)*(_DWORD *)(*v128 + 44LL) - 1) & 0x3F;
          if ( v104 == v105 )
          {
LABEL_161:
            v106 = *(_DWORD *)(v81 + 1120);
            if ( (v106 & 0x10) != 0 )
              v107 = ((unsigned __int16)**(_DWORD **)(v81 + 1168) | (unsigned __int16)(**(_DWORD **)(v81 + 1168) >> 10)) & 0x3FF;
            else
              v107 = (1 << *(_DWORD *)(v8 + 140)) - 1;
            if ( (v107 & *(_DWORD *)(v9 + 2340)) == 0 )
            {
              if ( *(_DWORD *)(v8 + 148) > 1u && *(_DWORD *)(v9 + 4) != 3 && (v106 & 0x180) == 0x80 )
                goto LABEL_96;
              v108 = (*(_DWORD *)(v81 + 1120) & 0x10) != 0
                   ? ((unsigned __int16)**(_DWORD **)(v81 + 1168) | (unsigned __int16)(**(_DWORD **)(v81 + 1168) >> 10)) & 0x3FF
                   : (1 << *(_DWORD *)(v8 + 140)) - 1;
              if ( (v108 & *(_DWORD *)(v9 + 2336)) == 0 )
                goto LABEL_96;
            }
          }
          else
          {
            while ( *(_DWORD *)(1296LL * v104 + *v128 + 1108) != 14 )
            {
              v104 = ((_BYTE)v104 - 1) & 0x3F;
              if ( v104 == v105 )
                goto LABEL_161;
            }
          }
          *(_QWORD *)(v81 + 1088) = MEMORY[0xFFFFF78000000320];
          goto LABEL_97;
        }
      }
LABEL_96:
      v85 = v145;
      *(_DWORD *)(v81 + 1052) = 4;
      v80 = 0;
      VidSchiUpdateFlipQueueHistory(0LL, v9, v85, v115);
      VidSchiExecuteMmIoFlip((struct HwQueueStagingList *)v122, v8, v121, v145, v115, &v143);
      goto LABEL_97;
    }
    *(_DWORD *)(v15 + 1108) = 7;
  }
  v65 = v145;
  VidSchiUpdateFlipQueueHistory(0LL, v9, v145, v115);
LABEL_65:
  *((_DWORD *)v55 + 16) |= 2u;
  if ( v143 )
    VidSchiCompletePendingFlipOnPlane((unsigned int)v122, v8, v121, 9, v65);
  while ( 1 )
  {
    v66 = (_QWORD *)v122[0];
    if ( *(_QWORD **)(v122[0] + 8LL) != v122
      || (v67 = *(_QWORD *)v122[0], *(_QWORD *)(*(_QWORD *)v122[0] + 8LL) != v122[0]) )
    {
      __fastfail(3u);
    }
    v122[0] = *(_QWORD *)v122[0];
    *(_QWORD *)(v67 + 8) = v122;
    if ( v66 == v122 )
      break;
    *v66 = 0LL;
    v66[1] = 0LL;
    HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v122, (struct VIDSCH_HW_QUEUE *)(v66 - 19));
  }
  v123 = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  do
    v55 = VidSchiProcessCompletedQueuePacketInternal(v55, v68, v69);
  while ( v55 );
  KeLowerIrql(v144);
  if ( !v123 )
    goto LABEL_115;
}
