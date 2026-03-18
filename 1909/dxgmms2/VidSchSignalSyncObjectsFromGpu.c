/*
 * XREFs of VidSchSignalSyncObjectsFromGpu @ 0x1C0004A20
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006B600 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0077A60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0079770 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0564 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     VidSchSignalPagingFences @ 0x1C00CC364 (VidSchSignalPagingFences.c)
 * Callees:
 *     VidSchiSignalSyncObject @ 0x1C0005420 (VidSchiSignalSyncObject.c)
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C00059A0 (VidSchiInsertCommandToSoftwareQueue.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C00081E0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiProfilePerformanceTick @ 0x1C00088B0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C0009BC0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0009C50 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiFreeQueuePacket @ 0x1C000E874 (VidSchiFreeQueuePacket.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011240 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00113C4 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiComputeWorkerThreadPriority @ 0x1C00151C4 (VidSchiComputeWorkerThreadPriority.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035768 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C0039AC0 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C007ABE0 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiAllocateQueuePacket @ 0x1C007ACF0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1C007AE30 (VidSchiEnsureVSyncEnabled.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00CCFF8 (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromGpu(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4,
        unsigned int a5,
        void **a6,
        int a7,
        unsigned __int64 *a8)
{
  unsigned int v8; // r15d
  int v9; // r12d
  unsigned int v10; // edx
  __int64 v11; // r14
  unsigned int v12; // r13d
  KSPIN_LOCK v13; // rcx
  unsigned int v14; // esi
  unsigned __int64 *v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rcx
  int v18; // edx
  unsigned __int64 v19; // rax
  char v20; // r8
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r12
  _QWORD **v24; // rdi
  __int64 v25; // rsi
  unsigned __int64 v26; // rax
  KSPIN_LOCK *v27; // rcx
  _QWORD **v28; // r14
  __int64 HwQueuePacket; // rax
  __int64 *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r10
  __int64 v34; // r8
  __int64 v35; // rax
  KSPIN_LOCK *v36; // rcx
  _QWORD *v37; // rax
  unsigned int v38; // r12d
  unsigned int v39; // r14d
  unsigned int v40; // r12d
  __int64 v41; // r12
  __int64 v42; // rsi
  struct _VIDSCH_QUEUE_PACKET *v43; // rcx
  __int64 v44; // r14
  _QWORD *v45; // r13
  KSPIN_LOCK v46; // rbx
  __int64 v47; // rbx
  int v48; // r9d
  __int64 v49; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v51; // esi
  __int64 v52; // rax
  VIDMM_DEVICE *v53; // rcx
  unsigned int v55; // r14d
  void **v56; // r12
  void *v57; // rdi
  int v58; // r8d
  bool v59; // zf
  struct _KLOCK_QUEUE_HANDLE *v60; // rcx
  KSPIN_LOCK v61; // rcx
  char v62; // r13
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  _QWORD **PoolWithTag; // rax
  struct VIDSCH_HW_QUEUE *v68; // rsi
  __int64 v69; // rax
  struct _VIDSCH_QUEUE_PACKET *v70; // rdx
  unsigned __int64 v71; // [rsp+40h] [rbp-C0h]
  unsigned int v72; // [rsp+40h] [rbp-C0h]
  unsigned int v73; // [rsp+40h] [rbp-C0h]
  _DWORD *v74; // [rsp+48h] [rbp-B8h]
  _QWORD *v75; // [rsp+48h] [rbp-B8h]
  _QWORD *v76; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v77; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v78; // [rsp+50h] [rbp-B0h]
  __int64 v79; // [rsp+50h] [rbp-B0h]
  _QWORD **v80; // [rsp+58h] [rbp-A8h]
  int v81; // [rsp+60h] [rbp-A0h] BYREF
  KSPIN_LOCK v82; // [rsp+68h] [rbp-98h]
  struct VIDSCH_HW_QUEUE *v83; // [rsp+70h] [rbp-90h]
  unsigned __int64 v84; // [rsp+78h] [rbp-88h]
  KSPIN_LOCK *v85; // [rsp+80h] [rbp-80h]
  _QWORD v86[2]; // [rsp+88h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v87; // [rsp+98h] [rbp-68h] BYREF
  __int16 v88; // [rsp+B0h] [rbp-50h]
  KSPIN_LOCK v89; // [rsp+B8h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE v90; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v91; // [rsp+D8h] [rbp-28h]
  PVOID P; // [rsp+E0h] [rbp-20h]
  _BYTE v93[16]; // [rsp+E8h] [rbp-18h] BYREF
  int v94; // [rsp+F8h] [rbp-8h]
  KSPIN_LOCK *v95; // [rsp+100h] [rbp+0h]
  struct _KLOCK_QUEUE_HANDLE v96; // [rsp+108h] [rbp+8h] BYREF
  __int16 v97; // [rsp+120h] [rbp+20h]
  _QWORD v98[2]; // [rsp+128h] [rbp+28h] BYREF
  char v99; // [rsp+138h] [rbp+38h]
  KSPIN_LOCK v100; // [rsp+140h] [rbp+40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+148h] [rbp+48h] BYREF
  __int16 v102; // [rsp+160h] [rbp+60h]
  __int64 v103; // [rsp+168h] [rbp+68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v104; // [rsp+170h] [rbp+70h] BYREF
  __int16 v105; // [rsp+188h] [rbp+88h]
  KSPIN_LOCK v106; // [rsp+190h] [rbp+90h]
  struct _KLOCK_QUEUE_HANDLE v107; // [rsp+198h] [rbp+98h] BYREF
  __int16 v108; // [rsp+1B0h] [rbp+B0h]
  _QWORD v109[4]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int16 v110; // [rsp+1D8h] [rbp+D8h]
  unsigned int v111; // [rsp+230h] [rbp+130h]
  KPRIORITY Priority; // [rsp+240h] [rbp+140h]
  char Prioritya; // [rsp+240h] [rbp+140h]
  KPRIORITY Priorityb; // [rsp+240h] [rbp+140h]

  v111 = a1;
  v8 = 0;
  v86[0] = 0LL;
  v9 = a3;
  v10 = a1;
  if ( a3 || (_DWORD)a1 )
  {
    v11 = (__int64)a6;
    if ( a6 )
    {
      v12 = a5;
      if ( a5 )
        goto LABEL_4;
    }
LABEL_123:
    v64 = WdLogNewEntry5_WdAssertion(a1, (unsigned int)a1);
    *(_QWORD *)(v64 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v64);
    return 3221225485LL;
  }
  v11 = (__int64)a6;
  if ( !a6 )
    goto LABEL_123;
  v12 = a5;
  if ( !a5 )
    goto LABEL_123;
  v9 = 1;
  v86[0] = *(_QWORD *)(*((_QWORD *)*a6 + 1) + 232LL);
  a4 = v86;
LABEL_4:
  v13 = *(_QWORD *)(*(_QWORD *)v11 + 8LL);
  v82 = v13;
  if ( (a7 & 0x80000004) != 0 )
    goto LABEL_22;
  v102 = 0;
  v100 = v13 + 1648;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 1648), &LockHandle);
  LOBYTE(v102) = 1;
  v14 = 0;
  if ( !v12 )
    goto LABEL_18;
  v15 = a8;
  v16 = v11 - (_QWORD)a8;
  while ( 1 )
  {
    v17 = *(unsigned __int64 *)((char *)v15 + v16);
    v18 = *(_DWORD *)(v17 + 44);
    if ( (unsigned int)(v18 - 4) > 1 || *(_BYTE *)(v17 + 28) )
      goto LABEL_16;
    v19 = *v15;
    v20 = *(_BYTE *)(v17 + 29);
    v71 = *v15;
    if ( *(_BYTE *)(v17 + 27) )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(v17 + 208) + 40LL);
      v19 = *v15;
    }
    else if ( v18 == 2 )
    {
      v21 = *(_QWORD *)(v17 + 64);
    }
    else
    {
      v21 = *(_QWORD *)(v17 + 88);
    }
    v78 = v21;
    if ( v20 )
    {
      if ( v19 < v21 )
      {
        v65 = WdLogNewEntry5_WdWarning();
        *(_QWORD *)(v65 + 24) = v71;
        *(_QWORD *)(v65 + 32) = v78;
        goto LABEL_126;
      }
      if ( v19 != v21 )
        goto LABEL_16;
      v22 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v22 + 24) = v71;
      goto LABEL_15;
    }
    if ( (int)v21 - (int)v19 > 0 )
      break;
    if ( (_DWORD)v21 != (_DWORD)v19 )
      goto LABEL_16;
    v22 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v22 + 24) = (unsigned int)v71;
LABEL_15:
    WdLogEvent5_WdWarning(v22);
LABEL_16:
    ++v14;
    ++v15;
    if ( v14 >= v12 )
    {
      if ( !(_BYTE)v102 )
      {
LABEL_21:
        v10 = v111;
LABEL_22:
        v23 = v10 + v9;
        P = 0LL;
        v94 = 0;
        v24 = 0LL;
        if ( (unsigned int)v23 > 2 )
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v23 < 8 )
            goto LABEL_145;
          PoolWithTag = (_QWORD **)ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v23, 0x38616956u);
          v10 = v111;
          v24 = PoolWithTag;
          P = PoolWithTag;
        }
        else
        {
          v24 = (_QWORD **)v93;
          P = v93;
        }
        v94 = v23;
        if ( !v24 )
          goto LABEL_145;
        if ( (_DWORD)v23 )
        {
          memset(v24, 0, 8 * v23);
          v10 = v111;
          v24 = (_QWORD **)P;
        }
        if ( !v24 )
        {
LABEL_145:
          v8 = -1073741801;
          goto LABEL_89;
        }
        v25 = 0LL;
        v72 = 0;
        Priority = 0;
        v74 = 0LL;
        if ( (_DWORD)v23 )
        {
          v26 = 0LL;
          v27 = (KSPIN_LOCK *)(v82 + 1648);
          v84 = 0LL;
          v85 = (KSPIN_LOCK *)(v82 + 1648);
          v28 = v24;
          v80 = v24;
          do
          {
            v79 = 0LL;
            v83 = 0LL;
            if ( (unsigned int)v25 < v10 )
            {
              v109[0] = v27;
              v110 = 0;
              v83 = *(struct VIDSCH_HW_QUEUE **)(v26 + a2);
              AcquireSpinLock::Acquire((AcquireSpinLock *)v109);
              v68 = (struct VIDSCH_HW_QUEUE *)*((_QWORD *)v83 + 17);
              AcquireSpinLock::Release((AcquireSpinLock *)v109);
              if ( v68 == (struct VIDSCH_HW_QUEUE *)((char *)v83 + 136) )
              {
                LODWORD(v25) = v72;
                v28 = v80;
                goto LABEL_51;
              }
              if ( v83 )
              {
                HwQueuePacket = VidSchiAllocateHwQueuePacket(v83, 0LL);
                v25 = v72;
                v28 = v80;
                goto LABEL_36;
              }
              v25 = v72;
              v28 = v80;
            }
            else
            {
              _mm_lfence();
              v95 = v27;
              v97 = 0;
              v79 = a4[(unsigned int)v25 - v10];
              KeAcquireInStackQueuedSpinLock(v27, &v96);
              LOBYTE(v97) = 1;
              if ( *(_QWORD *)(v79 + 656) == v79 + 656 )
              {
                if ( HIBYTE(v97) )
                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v96);
                else
                  KeReleaseInStackQueuedSpinLock(&v96);
                LOBYTE(v97) = 0;
                goto LABEL_51;
              }
              if ( HIBYTE(v97) )
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v96);
              else
                KeReleaseInStackQueuedSpinLock(&v96);
              LOBYTE(v97) = 0;
            }
            HwQueuePacket = VidSchiAllocateQueuePacket(v79, *(_DWORD *)(v79 + 788) == 0);
LABEL_36:
            v30 = (__int64 *)&v24[v84 / 8];
            v24[v84 / 8] = (_QWORD *)HwQueuePacket;
            if ( !HwQueuePacket )
            {
              v69 = WdLogNewEntry5_WdWarning();
              *(_QWORD *)(v69 + 24) = -1073741801LL;
              *(_QWORD *)(v69 + 32) = 10479LL;
              WdLogEvent5_WdWarning(v69);
              if ( (_DWORD)v25 )
              {
                do
                {
                  v70 = (struct _VIDSCH_QUEUE_PACKET *)*v24;
                  if ( *v24 )
                  {
                    if ( *((_QWORD *)v70 + 12) )
                      VidSchiFreeQueuePacket(v83, v70);
                    else
                      VidSchiFreeQueuePacket(v79);
                  }
                  ++v24;
                  --v25;
                }
                while ( v25 );
              }
              v24 = (_QWORD **)P;
              goto LABEL_145;
            }
            Priority = v25;
            *(_DWORD *)*v28 = 895576406;
            *((_DWORD *)*v28 + 12) = 5;
            (*v28)[7] = MEMORY[0xFFFFF78000000320];
            *((_DWORD *)*v28 + 13) = 2;
            v31 = *v30;
            if ( v83 )
              *(_QWORD *)(v31 + 96) = v83;
            else
              *(_QWORD *)(v31 + 88) = v79;
            (*v28)[13] = KeGetCurrentThread();
            (*v28)[9] = 0LL;
            *((_DWORD *)*v28 + 68) ^= ((unsigned __int8)a7 ^ (unsigned __int8)*((_DWORD *)*v28 + 68)) & 1;
            if ( (a7 & 4) != 0 )
              *((_DWORD *)*v28 + 68) |= 4u;
            v32 = (__int64)a6;
            if ( *((_DWORD *)*a6 + 11) == 2 )
            {
              (*v28)[67] = *a8;
              v32 = (__int64)a6;
            }
            if ( v12 )
            {
              v33 = v12;
              v34 = v32;
              do
              {
                *(_QWORD *)((char *)*v28 + 280 - v32 + v34) = *(_QWORD *)v34;
                if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v34 + 44LL) - 4) <= 1 )
                  *(_QWORD *)((char *)*v28 + 536 - v32 + v34) = *(unsigned __int64 *)((char *)a8 + v34 - v32);
                v34 += 8LL;
                --v33;
              }
              while ( v33 );
            }
            *((_DWORD *)*v28 + 69) = v12;
            (*v28)[99] = 0LL;
            v35 = *v30;
            if ( v74 )
            {
              *(_QWORD *)(v35 + 800) = v74;
              *((_QWORD *)v74 + 99) = *v28;
            }
            else
            {
              *(_QWORD *)(v35 + 800) = 0LL;
            }
            v74 = *v28;
LABEL_51:
            v25 = (unsigned int)(v25 + 1);
            v10 = v111;
            v26 = v84 + 8;
            v27 = v85;
            ++v28;
            v72 = v25;
            v84 += 8LL;
            v80 = v28;
          }
          while ( (unsigned int)v25 < (unsigned int)v23 );
        }
        v36 = (KSPIN_LOCK *)(v82 + 1648);
        if ( v74 )
        {
          v89 = v82 + 1648;
          v91 = 0;
          KeAcquireInStackQueuedSpinLock(v36, &v90);
          v37 = v24;
          v38 = Priority;
          v39 = 0;
          v75 = v24;
          LOBYTE(v91) = 1;
          v73 = 0;
          do
          {
            if ( *v37 )
            {
              v40 = 0;
              if ( v12 )
              {
                if ( v39 == Priority )
                {
                  do
                    VidSchiSignalSyncObject(v40++, (_DWORD)a6, a7, (_DWORD)a8, 1);
                  while ( v40 < v12 );
                  v39 = v73;
                }
                else
                {
                  do
                    VidSchiSignalSyncObject(v40++, (_DWORD)a6, a7, (_DWORD)a8, 0);
                  while ( v40 < v12 );
                  v8 = 0;
                }
                v37 = v75;
              }
              v38 = Priority;
            }
            ++v39;
            ++v37;
            v73 = v39;
            v75 = v37;
          }
          while ( v39 <= v38 );
          if ( (_BYTE)v91 )
          {
            if ( HIBYTE(v91) )
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v90);
            else
              KeReleaseInStackQueuedSpinLock(&v90);
            LOBYTE(v91) = 0;
          }
          v41 = v38 + 1;
          do
          {
            v42 = (__int64)*v24;
            if ( *v24 )
            {
              v43 = (struct _VIDSCH_QUEUE_PACKET *)*v24;
              if ( *(_QWORD *)(v42 + 96) )
              {
                VidSchiSubmitCommandPacketToHwQueue(v43);
              }
              else
              {
                v44 = *(_QWORD *)(v42 + 88);
                v45 = *(_QWORD **)(v44 + 104);
                v76 = v45;
                v85 = *(KSPIN_LOCK **)(v44 + 96);
                v82 = v85[3];
                v46 = v82;
                VidSchiEnsureVSyncEnabled(v43, v45);
                v88 = 0;
                v86[1] = v46 + 1648;
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v46 + 1648), &v87);
                LOBYTE(v88) = 1;
                *(_QWORD *)(v42 + 112) = (*(_QWORD *)(v44 + 144))++;
                v47 = MEMORY[0xFFFFF78000000320];
                v45[24] = v47 * KeQueryTimeIncrement();
                if ( !*(_DWORD *)(v42 + 48) )
                {
                  *(_QWORD *)(v44 + 176) = *(_QWORD *)(v42 + 112);
                  ++v45[162];
                }
                VidSchiProfilePerformanceTick(4, v82, (_DWORD)v85, v48, 0LL, v42, 0LL, 0LL);
                v81 = 0;
                VidSchiInsertCommandToSoftwareQueue(v42, &v81);
                if ( (_BYTE)v88 )
                {
                  if ( HIBYTE(v88) )
                    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v87);
                  else
                    KeReleaseInStackQueuedSpinLock(&v87);
                  LOBYTE(v88) = 0;
                }
                v49 = *(_QWORD *)(*(_QWORD *)(v44 + 96) + 24LL);
                if ( (*(_DWORD *)(v49 + 1936) & 0x20) != 0 )
                {
                  CurrentThread = KeGetCurrentThread();
                  if ( CurrentThread == *(struct _KTHREAD **)(v49 + 152)
                    || CurrentThread == *(struct _KTHREAD **)(v49 + 160) )
                  {
                    Prioritya = 1;
                    if ( *(_DWORD *)(v44 + 772) )
                      goto LABEL_80;
                    v51 = 16;
                  }
                  else
                  {
                    Prioritya = 0;
                    if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 >= 31 )
                    {
                      v51 = 31;
                    }
                    else
                    {
                      v51 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
                      if ( v51 <= 16 )
                        goto LABEL_80;
                    }
                  }
                  v105 = 0;
                  v103 = v49 + 1864;
                  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v49 + 1864), &v104);
                  v62 = Prioritya;
                  LOBYTE(v105) = 1;
                  while ( 1 )
                  {
                    v63 = *(_DWORD *)(v44 + 772);
                    if ( v62 )
                    {
                      if ( v63 )
                      {
LABEL_112:
                        v45 = v76;
                        if ( (_BYTE)v105 )
                        {
                          if ( HIBYTE(v105) )
                            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v104);
                          else
                            KeReleaseInStackQueuedSpinLock(&v104);
                        }
                        break;
                      }
                    }
                    else if ( !v63 )
                    {
                      goto LABEL_112;
                    }
                    Priorityb = VidSchiComputeWorkerThreadPriority(v44, (unsigned int)v51);
                    if ( Priorityb == KeQueryPriorityThread(*(PKTHREAD *)(v49 + 152)) )
                      goto LABEL_112;
                    AcquireSpinLock::Release((AcquireSpinLock *)&v103);
                    KeSetPriorityThread(*(PKTHREAD *)(v49 + 152), Priorityb);
                    AcquireSpinLock::Acquire((AcquireSpinLock *)&v103);
                  }
                }
LABEL_80:
                if ( v81 )
                {
                  v61 = v82;
                  *(_QWORD *)(v82 + 1144) = MEMORY[0xFFFFF78000000320];
                  KeSetEvent((PRKEVENT)(v61 + 1112), 0, 0);
                }
                v52 = v45[1];
                if ( v52 )
                {
                  v53 = *(VIDMM_DEVICE **)(v52 + 648);
                  if ( v53 )
                    VIDMM_DEVICE::EnsureSchedulable(v53, 1);
                }
                if ( (_BYTE)v88 )
                {
                  if ( HIBYTE(v88) )
                    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v87);
                  else
                    KeReleaseInStackQueuedSpinLock(&v87);
                }
              }
            }
            ++v24;
            --v41;
          }
          while ( v41 );
          if ( !(_BYTE)v91 )
            goto LABEL_88;
          v59 = HIBYTE(v91) == 0;
          v60 = &v90;
        }
        else
        {
          v106 = v82 + 1648;
          v108 = 0;
          KeAcquireInStackQueuedSpinLock(v36, &v107);
          LOBYTE(v108) = 1;
          v98[1] = v98;
          v98[0] = v98;
          v55 = 0;
          v99 = 0;
          if ( v12 )
          {
            v56 = a6;
            v77 = a8;
            do
            {
              v57 = *v56;
              VidSchiSignalSyncObject(v55, (_DWORD)a6, a7, (_DWORD)a8, 1);
              VidSchiCompleteSignalSyncObject((unsigned int)v98, (_DWORD)v57, v58, (_DWORD)v77, 1);
              VidSchiReleaseSyncObjectReference(v57);
              ++v77;
              ++v56;
              ++v55;
            }
            while ( v55 < v12 );
            v8 = 0;
          }
          HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v98);
          if ( !(_BYTE)v108 )
            goto LABEL_88;
          v59 = HIBYTE(v108) == 0;
          v60 = &v107;
        }
        if ( v59 )
          KeReleaseInStackQueuedSpinLock(v60);
        else
          KeReleaseInStackQueuedSpinLockFromDpcLevel(v60);
LABEL_88:
        v24 = (_QWORD **)P;
LABEL_89:
        if ( v24 != (_QWORD **)v93 )
        {
          if ( v24 )
            ExFreePoolWithTag(v24, 0);
        }
        return v8;
      }
LABEL_18:
      if ( HIBYTE(v102) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      else
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      LOBYTE(v102) = 0;
      goto LABEL_21;
    }
  }
  v65 = WdLogNewEntry5_WdWarning();
  *(_QWORD *)(v65 + 24) = (unsigned int)v71;
  *(_QWORD *)(v65 + 32) = (unsigned int)v78;
LABEL_126:
  WdLogEvent5_WdWarning(v65);
  v66 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v66 + 24) = a8[v14];
  *(_QWORD *)(v66 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v66);
  AcquireSpinLock::Release((AcquireSpinLock *)&v100);
  return 3221225485LL;
}
