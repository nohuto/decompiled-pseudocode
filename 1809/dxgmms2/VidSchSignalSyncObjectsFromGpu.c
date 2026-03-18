/*
 * XREFs of VidSchSignalSyncObjectsFromGpu @ 0x1C0003AA0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066E20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067ED0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0071660 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AD464 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     VidSchSignalPagingFences @ 0x1C00C98C4 (VidSchSignalPagingFences.c)
 * Callees:
 *     VidSchiSignalSyncObject @ 0x1C00045B0 (VidSchiSignalSyncObject.c)
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C0004B20 (VidSchiInsertCommandToSoftwareQueue.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0007350 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0007960 (VidSchiProfilePerformanceTick.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C0008CD0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0008D60 (VidSchiCompleteSignalSyncObject.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C00117B4 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiFreeQueuePacket @ 0x1C0012140 (VidSchiFreeQueuePacket.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034D64 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C003907C (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0069330 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiAllocateQueuePacket @ 0x1C0069440 (VidSchiAllocateQueuePacket.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1C0069580 (VidSchiEnsureVSyncEnabled.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00CA558 (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromGpu(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 *a4,
        unsigned int a5,
        void **a6,
        int a7,
        unsigned __int64 *a8)
{
  int v8; // r12d
  unsigned int v9; // edx
  __int64 v10; // r14
  unsigned int v11; // r13d
  unsigned int v12; // r15d
  _QWORD *v13; // rcx
  unsigned int v14; // esi
  unsigned __int64 *v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rcx
  int v18; // edx
  unsigned __int64 v19; // rax
  int v20; // eax
  __int64 v21; // r12
  struct _VIDSCH_QUEUE_PACKET **v22; // rdi
  unsigned int v23; // esi
  unsigned __int64 v24; // rax
  unsigned __int64 *v25; // rcx
  struct _VIDSCH_QUEUE_PACKET **v26; // r14
  __int64 HwQueuePacket; // rax
  struct _VIDSCH_QUEUE_PACKET **v28; // rdx
  struct _VIDSCH_QUEUE_PACKET *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r11
  struct _VIDSCH_QUEUE_PACKET *v32; // rax
  KSPIN_LOCK *v33; // rcx
  struct _VIDSCH_QUEUE_PACKET **v34; // rax
  unsigned int v35; // r12d
  unsigned int v36; // r14d
  unsigned int v37; // r12d
  __int64 v38; // r12
  __int64 v39; // rsi
  __int64 v40; // r14
  unsigned __int64 *v41; // rax
  unsigned __int64 v42; // r13
  __int64 v43; // rbx
  ULONG TimeIncrement; // eax
  int v45; // r9d
  _QWORD *v46; // rcx
  __int64 v47; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v49; // esi
  __int64 v50; // rax
  VIDMM_DEVICE *v51; // rcx
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned int v55; // r14d
  void **v56; // r12
  void *v57; // rdi
  int v58; // r8d
  bool v59; // zf
  struct _KLOCK_QUEUE_HANDLE *v60; // rcx
  char v61; // r13
  int v62; // eax
  unsigned __int64 *v63; // r8
  __int64 v64; // rax
  int v65; // ecx
  unsigned int v66; // eax
  CCHAR MostSignificantBit; // al
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  struct _VIDSCH_QUEUE_PACKET **PoolWithTag; // rax
  struct VIDSCH_HW_QUEUE *v73; // rsi
  __int64 v74; // rax
  __int64 v75; // rbx
  struct _VIDSCH_QUEUE_PACKET *v76; // rdx
  struct _VIDSCH_QUEUE_PACKET *v77; // [rsp+40h] [rbp-C0h]
  struct _VIDSCH_QUEUE_PACKET **v78; // [rsp+40h] [rbp-C0h]
  __int64 v79; // [rsp+40h] [rbp-C0h]
  unsigned __int64 *v80; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v81; // [rsp+48h] [rbp-B8h]
  unsigned int v82; // [rsp+48h] [rbp-B8h]
  unsigned int v83; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v84; // [rsp+50h] [rbp-B0h]
  __int64 v85; // [rsp+50h] [rbp-B0h]
  struct _VIDSCH_QUEUE_PACKET **v86; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v87; // [rsp+58h] [rbp-A8h]
  int v88; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v89; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v90; // [rsp+70h] [rbp-90h]
  struct VIDSCH_HW_QUEUE *v91; // [rsp+78h] [rbp-88h]
  unsigned __int64 v92; // [rsp+80h] [rbp-80h]
  unsigned __int64 v93; // [rsp+88h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE v94; // [rsp+90h] [rbp-70h] BYREF
  __int16 v95; // [rsp+A8h] [rbp-58h]
  _QWORD *v96; // [rsp+B0h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE v97; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v98; // [rsp+D0h] [rbp-30h]
  __int64 v99; // [rsp+D8h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE v100; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 *v101; // [rsp+F8h] [rbp-8h]
  struct _KLOCK_QUEUE_HANDLE v102; // [rsp+100h] [rbp+0h] BYREF
  __int16 v103; // [rsp+118h] [rbp+18h]
  PVOID P; // [rsp+120h] [rbp+20h]
  _BYTE v105[16]; // [rsp+128h] [rbp+28h] BYREF
  int v106; // [rsp+138h] [rbp+38h]
  struct _KLOCK_QUEUE_HANDLE v107; // [rsp+140h] [rbp+40h]
  _QWORD *v108; // [rsp+158h] [rbp+58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+160h] [rbp+60h] BYREF
  __int16 v110; // [rsp+178h] [rbp+78h]
  __int64 v111; // [rsp+180h] [rbp+80h] BYREF
  struct _KLOCK_QUEUE_HANDLE v112; // [rsp+188h] [rbp+88h] BYREF
  __int16 v113; // [rsp+1A0h] [rbp+A0h]
  _QWORD *v114; // [rsp+1A8h] [rbp+A8h]
  struct _KLOCK_QUEUE_HANDLE v115; // [rsp+1B0h] [rbp+B0h] BYREF
  __int16 v116; // [rsp+1C8h] [rbp+C8h]
  struct _KLOCK_QUEUE_HANDLE v117; // [rsp+1D0h] [rbp+D0h]
  _BYTE v118[48]; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned int v119; // [rsp+260h] [rbp+160h]
  KPRIORITY Priority; // [rsp+270h] [rbp+170h]
  char Prioritya; // [rsp+270h] [rbp+170h]
  KPRIORITY Priorityb; // [rsp+270h] [rbp+170h]

  v119 = a1;
  v99 = 0LL;
  v8 = a3;
  v9 = a1;
  if ( (_DWORD)a3 || (_DWORD)a1 )
  {
    v10 = (__int64)a6;
    if ( a6 )
    {
      v11 = a5;
      if ( a5 )
        goto LABEL_4;
    }
LABEL_128:
    v68 = WdLogNewEntry5_WdAssertion(a1, (unsigned int)a1);
    *(_QWORD *)(v68 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v68);
    return 3221225485LL;
  }
  v10 = (__int64)a6;
  if ( !a6 )
    goto LABEL_128;
  v11 = a5;
  if ( !a5 )
    goto LABEL_128;
  v8 = 1;
  v99 = *(_QWORD *)(*((_QWORD *)*a6 + 1) + 232LL);
  a4 = &v99;
LABEL_4:
  v12 = 0;
  v13 = *(_QWORD **)(*(_QWORD *)v10 + 8LL);
  v89 = v13;
  if ( (a7 & 0x80000004) != 0 )
    goto LABEL_21;
  v100 = LockHandle;
  v108 = v13 + 206;
  v110 = 0;
  KeAcquireInStackQueuedSpinLock(v13 + 206, &LockHandle);
  LOBYTE(v110) = 1;
  v14 = 0;
  if ( !v11 )
    goto LABEL_17;
  v15 = a8;
  v16 = v10 - (_QWORD)a8;
  do
  {
    v17 = *(unsigned __int64 *)((char *)v15 + v16);
    v18 = *(_DWORD *)(v17 + 44);
    if ( (unsigned int)(v18 - 4) <= 1 && !*(_BYTE *)(v17 + 28) )
    {
      a3 = *v15;
      v84 = *v15;
      if ( *(_BYTE *)(v17 + 27) )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(v17 + 208) + 40LL);
      }
      else if ( v18 == 2 )
      {
        v19 = *(_QWORD *)(v17 + 64);
      }
      else
      {
        v19 = *(_QWORD *)(v17 + 88);
      }
      v81 = v19;
      if ( *(_BYTE *)(v17 + 29) )
      {
        if ( a3 < v19 )
        {
          v69 = WdLogNewEntry5_WdWarning();
          *(_QWORD *)(v69 + 24) = v84;
          v70 = v81;
          goto LABEL_134;
        }
        if ( a3 == v19 )
        {
          v53 = WdLogNewEntry5_WdWarning();
          v54 = v84;
LABEL_96:
          *(_QWORD *)(v53 + 24) = v54;
          WdLogEvent5_WdWarning(v53);
        }
      }
      else
      {
        v20 = v19 - a3;
        if ( v20 > 0 )
        {
          v69 = WdLogNewEntry5_WdWarning();
          *(_QWORD *)(v69 + 24) = (unsigned int)v84;
          v70 = (unsigned int)v81;
LABEL_134:
          *(_QWORD *)(v69 + 32) = v70;
          WdLogEvent5_WdWarning(v69);
          v71 = WdLogNewEntry5_WdError();
          *(_QWORD *)(v71 + 24) = a8[v14];
          *(_QWORD *)(v71 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v71);
          AcquireSpinLock::Release((AcquireSpinLock *)&v108);
          return 3221225485LL;
        }
        if ( !v20 )
        {
          v53 = WdLogNewEntry5_WdWarning();
          v54 = (unsigned int)v84;
          goto LABEL_96;
        }
      }
    }
    ++v14;
    ++v15;
  }
  while ( v14 < v11 );
  if ( (_BYTE)v110 )
  {
LABEL_17:
    if ( HIBYTE(v110) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    LOBYTE(v110) = 0;
  }
  v9 = v119;
LABEL_21:
  v21 = v9 + v8;
  P = 0LL;
  v106 = 0;
  v22 = 0LL;
  if ( (unsigned int)v21 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v21 < 8 )
      goto LABEL_152;
    PoolWithTag = (struct _VIDSCH_QUEUE_PACKET **)ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v21, 0x38616956u);
    v9 = v119;
    v22 = PoolWithTag;
    P = PoolWithTag;
  }
  else
  {
    v22 = (struct _VIDSCH_QUEUE_PACKET **)v105;
    P = v105;
  }
  v106 = v21;
  if ( !v22 )
    goto LABEL_152;
  if ( (_DWORD)v21 )
  {
    memset(v22, 0, 8 * v21);
    v9 = v119;
    v22 = (struct _VIDSCH_QUEUE_PACKET **)P;
  }
  if ( v22 )
  {
    Priority = 0;
    v23 = 0;
    v77 = 0LL;
    v82 = 0;
    if ( (_DWORD)v21 )
    {
      v24 = 0LL;
      v25 = v89 + 206;
      v92 = 0LL;
      v90 = v89 + 206;
      v26 = v22;
      v86 = v22;
      do
      {
        v85 = 0LL;
        v91 = 0LL;
        if ( v23 < v9 )
        {
          v91 = *(struct VIDSCH_HW_QUEUE **)(v24 + a2);
          AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v118, v25, a3, 0);
          v73 = (struct VIDSCH_HW_QUEUE *)*((_QWORD *)v91 + 17);
          AcquireSpinLock::Release((AcquireSpinLock *)v118);
          if ( v73 == (struct VIDSCH_HW_QUEUE *)((char *)v91 + 136) )
          {
            v23 = v82;
            v26 = v86;
            goto LABEL_50;
          }
          HwQueuePacket = VidSchiAllocateHwQueuePacket(v91, 0LL);
          v23 = v82;
          v26 = v86;
        }
        else
        {
          _mm_lfence();
          v101 = v25;
          v107 = v102;
          v103 = 0;
          v85 = a4[v23 - v9];
          KeAcquireInStackQueuedSpinLock(v25, &v102);
          LOBYTE(v103) = 1;
          if ( *(_QWORD *)(v85 + 656) == v85 + 656 )
          {
            if ( HIBYTE(v103) )
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v102);
            else
              KeReleaseInStackQueuedSpinLock(&v102);
            LOBYTE(v103) = 0;
            goto LABEL_50;
          }
          if ( HIBYTE(v103) )
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v102);
          else
            KeReleaseInStackQueuedSpinLock(&v102);
          LOBYTE(v103) = 0;
          HwQueuePacket = VidSchiAllocateQueuePacket(v85, *(_DWORD *)(v85 + 788) == 0);
        }
        v28 = &v22[v92 / 8];
        v22[v92 / 8] = (struct _VIDSCH_QUEUE_PACKET *)HwQueuePacket;
        if ( !HwQueuePacket )
        {
          v74 = WdLogNewEntry5_WdWarning();
          *(_QWORD *)(v74 + 24) = -1073741801LL;
          *(_QWORD *)(v74 + 32) = 10446LL;
          WdLogEvent5_WdWarning(v74);
          if ( v23 )
          {
            v75 = v23;
            do
            {
              v76 = *v22;
              if ( *v22 )
              {
                if ( *((_QWORD *)v76 + 12) )
                  VidSchiFreeQueuePacket(v91, v76);
                else
                  VidSchiFreeQueuePacket(v85);
              }
              ++v22;
              --v75;
            }
            while ( v75 );
          }
          v22 = (struct _VIDSCH_QUEUE_PACKET **)P;
          goto LABEL_152;
        }
        Priority = v23;
        *(_DWORD *)*v26 = 895576406;
        *((_DWORD *)*v26 + 12) = 5;
        *((_QWORD *)*v26 + 7) = MEMORY[0xFFFFF78000000320];
        *((_DWORD *)*v26 + 13) = 2;
        v29 = *v28;
        if ( v91 )
          *((_QWORD *)v29 + 12) = v91;
        else
          *((_QWORD *)v29 + 11) = v85;
        *((_QWORD *)*v26 + 13) = KeGetCurrentThread();
        *((_QWORD *)*v26 + 9) = 0LL;
        *((_DWORD *)*v26 + 68) ^= ((unsigned __int8)a7 ^ (unsigned __int8)*((_DWORD *)*v26 + 68)) & 1;
        if ( (a7 & 4) != 0 )
          *((_DWORD *)*v26 + 68) |= 4u;
        v30 = (__int64)a6;
        if ( *((_DWORD *)*a6 + 11) == 2 )
        {
          *((_QWORD *)*v26 + 67) = *a8;
          v30 = (__int64)a6;
        }
        if ( v11 )
        {
          v31 = v11;
          a3 = v30;
          do
          {
            *(_QWORD *)((char *)*v26 + 280 - v30 + a3) = *(_QWORD *)a3;
            if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a3 + 44LL) - 4) <= 1 )
              *(_QWORD *)((char *)*v26 + 536 - v30 + a3) = *(unsigned __int64 *)((char *)a8 + a3 - v30);
            a3 += 8LL;
            --v31;
          }
          while ( v31 );
          v23 = v82;
        }
        *((_DWORD *)*v26 + 69) = v11;
        *((_QWORD *)*v26 + 99) = 0LL;
        v32 = *v28;
        if ( v77 )
        {
          *((_QWORD *)v32 + 100) = v77;
          *((_QWORD *)v77 + 99) = *v26;
        }
        else
        {
          *((_QWORD *)v32 + 100) = 0LL;
        }
        v77 = *v26;
LABEL_50:
        ++v23;
        v9 = v119;
        v24 = v92 + 8;
        v25 = v90;
        ++v26;
        v82 = v23;
        v92 += 8LL;
        v86 = v26;
      }
      while ( v23 < (unsigned int)v21 );
    }
    v33 = v89 + 206;
    if ( v77 )
    {
      v96 = v89 + 206;
      v107 = v97;
      v98 = 0;
      KeAcquireInStackQueuedSpinLock(v33, &v97);
      v34 = v22;
      v35 = Priority;
      v36 = 0;
      v78 = v22;
      LOBYTE(v98) = 1;
      v83 = 0;
      do
      {
        if ( *v34 )
        {
          v37 = 0;
          if ( v11 )
          {
            if ( v36 == Priority )
            {
              do
                VidSchiSignalSyncObject(v37++, (_DWORD)a6, a7, (_DWORD)a8, 1);
              while ( v37 < v11 );
              v36 = v83;
            }
            else
            {
              do
                VidSchiSignalSyncObject(v37++, (_DWORD)a6, a7, (_DWORD)a8, 0);
              while ( v37 < v11 );
              v12 = 0;
            }
            v34 = v78;
          }
          v35 = Priority;
        }
        ++v36;
        ++v34;
        v83 = v36;
        v78 = v34;
      }
      while ( v36 <= v35 );
      if ( (_BYTE)v98 )
      {
        if ( HIBYTE(v98) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v97);
        else
          KeReleaseInStackQueuedSpinLock(&v97);
        LOBYTE(v98) = 0;
      }
      v38 = v35 + 1;
      v79 = (unsigned int)v38;
      while ( 1 )
      {
        v39 = (__int64)*v22;
        if ( *v22 )
        {
          if ( !*(_QWORD *)(v39 + 96) )
          {
            v40 = *(_QWORD *)(v39 + 88);
            v41 = *(unsigned __int64 **)(v40 + 96);
            v89 = *(_QWORD **)(v40 + 104);
            v90 = v41;
            v42 = v41[3];
            v87 = v42;
            VidSchiEnsureVSyncEnabled(v39, v89);
            v95 = 0;
            v107 = v94;
            v93 = v42 + 1648;
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v42 + 1648), &v94);
            LOBYTE(v95) = 1;
            *(_QWORD *)(v39 + 112) = (*(_QWORD *)(v40 + 144))++;
            v43 = MEMORY[0xFFFFF78000000320];
            TimeIncrement = KeQueryTimeIncrement();
            v46 = v89;
            v89[24] = v43 * TimeIncrement;
            if ( !*(_DWORD *)(v39 + 48) )
            {
              *(_QWORD *)(v40 + 176) = *(_QWORD *)(v39 + 112);
              ++v46[161];
            }
            VidSchiProfilePerformanceTick(4, v42, (_DWORD)v90, v45, 0LL, v39, 0LL, 0LL);
            v88 = 0;
            VidSchiInsertCommandToSoftwareQueue(v39, &v88);
            if ( (_BYTE)v95 )
            {
              if ( HIBYTE(v95) )
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v94);
              else
                KeReleaseInStackQueuedSpinLock(&v94);
              LOBYTE(v95) = 0;
            }
            v47 = *(_QWORD *)(*(_QWORD *)(v40 + 96) + 24LL);
            if ( (*(_DWORD *)(v47 + 1936) & 0x20) == 0 )
              goto LABEL_79;
            CurrentThread = KeGetCurrentThread();
            if ( CurrentThread == *(struct _KTHREAD **)(v47 + 152) || CurrentThread == *(struct _KTHREAD **)(v47 + 160) )
            {
              Prioritya = 1;
              if ( *(_DWORD *)(v40 + 772) )
                goto LABEL_79;
              v49 = 16;
            }
            else
            {
              Prioritya = 0;
              if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 >= 31 )
              {
                v49 = 31;
              }
              else
              {
                v49 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
                if ( v49 <= 16 )
                {
LABEL_79:
                  if ( v88 )
                  {
                    *(_QWORD *)(v42 + 1144) = MEMORY[0xFFFFF78000000320];
                    KeSetEvent((PRKEVENT)(v42 + 1112), 0, 0);
                  }
                  v50 = v89[1];
                  if ( v50 )
                  {
                    v51 = *(VIDMM_DEVICE **)(v50 + 648);
                    if ( v51 )
                      VIDMM_DEVICE::EnsureSchedulable(v51, 1);
                  }
                  if ( (_BYTE)v95 )
                  {
                    if ( HIBYTE(v95) )
                      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v94);
                    else
                      KeReleaseInStackQueuedSpinLock(&v94);
                  }
                  goto LABEL_85;
                }
              }
            }
            v113 = 0;
            v117 = v112;
            v111 = v47 + 1864;
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v47 + 1864), &v112);
            v61 = Prioritya;
            LOBYTE(v113) = 1;
            while ( 1 )
            {
              v62 = *(_DWORD *)(v40 + 772);
              if ( v61 )
              {
                if ( v62 )
                  break;
              }
              else if ( !v62 )
              {
                break;
              }
              v63 = *(unsigned __int64 **)(*(_QWORD *)(v40 + 96) + 24LL);
              v90 = v63;
              v64 = *(int *)(v40 + 392);
              if ( (_DWORD)v64 != v49 )
              {
                v65 = 0;
                if ( (int)v64 > 16 )
                {
                  v59 = (*((_DWORD *)v63 + v64 + 452))-- == 1;
                  if ( v59 )
                  {
                    v65 = 1;
                    *((_DWORD *)v63 + 468) &= ~(1 << *(_DWORD *)(v40 + 392));
                  }
                }
                if ( v49 > 16 && ++*((_DWORD *)v63 + v49 + 452) == 1 )
                {
                  v65 = 1;
                  *((_DWORD *)v63 + 468) |= 1 << v49;
                }
                *(_DWORD *)(v40 + 392) = v49;
                if ( v65 )
                {
                  v66 = *((_DWORD *)v63 + 468);
                  if ( v66 )
                  {
                    MostSignificantBit = RtlFindMostSignificantBit(v66);
                    v63 = v90;
                    *((_DWORD *)v90 + 51) = MostSignificantBit;
                  }
                  else
                  {
                    *((_DWORD *)v63 + 51) = 16;
                  }
                }
              }
              Priorityb = *((_DWORD *)v63 + 51);
              if ( Priorityb == KeQueryPriorityThread(*(PKTHREAD *)(v47 + 152)) )
                break;
              AcquireSpinLock::Release((AcquireSpinLock *)&v111);
              KeSetPriorityThread(*(PKTHREAD *)(v47 + 152), Priorityb);
              AcquireSpinLock::Acquire((AcquireSpinLock *)&v111);
            }
            v42 = v87;
            v38 = v79;
            if ( (_BYTE)v113 )
            {
              if ( HIBYTE(v113) )
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v112);
              else
                KeReleaseInStackQueuedSpinLock(&v112);
            }
            goto LABEL_79;
          }
          VidSchiSubmitCommandPacketToHwQueue(*v22);
        }
LABEL_85:
        ++v22;
        v79 = --v38;
        if ( !v38 )
        {
          if ( !(_BYTE)v98 )
            goto LABEL_87;
          v59 = HIBYTE(v98) == 0;
          v60 = &v97;
LABEL_103:
          if ( v59 )
            KeReleaseInStackQueuedSpinLock(v60);
          else
            KeReleaseInStackQueuedSpinLockFromDpcLevel(v60);
          goto LABEL_87;
        }
      }
    }
    v114 = v89 + 206;
    v107 = v115;
    v116 = 0;
    KeAcquireInStackQueuedSpinLock(v33, &v115);
    LOBYTE(v116) = 1;
    v100.LockQueue.Lock = (volatile PKSPIN_LOCK)&v100;
    v100.LockQueue.Next = (struct _KSPIN_LOCK_QUEUE *volatile)&v100;
    v55 = 0;
    v100.OldIrql = 0;
    if ( v11 )
    {
      v56 = a6;
      v80 = a8;
      do
      {
        v57 = *v56;
        VidSchiSignalSyncObject(v55, (_DWORD)a6, a7, (_DWORD)a8, 1);
        VidSchiCompleteSignalSyncObject((unsigned int)&v100, (_DWORD)v57, v58, (_DWORD)v80, 1);
        VidSchiReleaseSyncObjectReference(v57);
        ++v80;
        ++v56;
        ++v55;
      }
      while ( v55 < v11 );
      v12 = 0;
    }
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v100);
    if ( (_BYTE)v116 )
    {
      v59 = HIBYTE(v116) == 0;
      v60 = &v115;
      goto LABEL_103;
    }
LABEL_87:
    v22 = (struct _VIDSCH_QUEUE_PACKET **)P;
  }
  else
  {
LABEL_152:
    v12 = -1073741801;
  }
  if ( v22 != (struct _VIDSCH_QUEUE_PACKET **)v105 )
  {
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
  }
  return v12;
}
