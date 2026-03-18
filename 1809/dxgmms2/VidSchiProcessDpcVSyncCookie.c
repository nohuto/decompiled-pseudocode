/*
 * XREFs of VidSchiProcessDpcVSyncCookie @ 0x1C000AEB0
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C00033B0 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002D5AC (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00070E0 (VidSchiCheckPendingDeviceCommand.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0007350 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C00073A0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C000BAAC (-VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_V.c)
 *     VidSchiCompleteFlipEntry @ 0x1C000BB50 (VidSchiCompleteFlipEntry.c)
 *     VidSchiSignalFlipEvents @ 0x1C000C960 (VidSchiSignalFlipEvents.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C000CCE0 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C000F1C4 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     VidSchiUnwaitContext @ 0x1C0012350 (VidSchiUnwaitContext.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0013D8C (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0029AA4 (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C002AC24 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_VSYNC_COMPLETED_E.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002AE80 (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     McTemplateK0pqXR1qqqXR5 @ 0x1C002C038 (McTemplateK0pqXR1qqqXR5.c)
 *     McTemplateK0pqxqqipqx @ 0x1C002CD34 (McTemplateK0pqxqqipqx.c)
 *     McTemplateK0qqqq @ 0x1C002D394 (McTemplateK0qqqq.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1C00315C0 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C0039AB4 (VidSchiCompletePendingFlipOnPlane.c)
 */

void __fastcall VidSchiProcessDpcVSyncCookie(struct _VIDSCH_VSYNC_COOKIE *a1)
{
  __int64 v1; // r15
  struct _VIDSCH_VSYNC_COOKIE *v2; // rdi
  __int64 v3; // r12
  __int64 v4; // r14
  char v5; // si
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned int v12; // r13d
  __int64 v13; // rbx
  unsigned int v14; // esi
  char v15; // al
  unsigned int v16; // eax
  int v17; // eax
  _QWORD *v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // r13
  unsigned int v22; // esi
  __int64 v23; // rax
  __int64 v24; // rbx
  int v25; // edx
  int v26; // r8d
  __int64 v27; // rdx
  __int64 v28; // rcx
  void (__fastcall *v29)(_QWORD, _QWORD); // rax
  bool v30; // zf
  unsigned __int64 v31; // rbx
  unsigned int v32; // r11d
  __int64 v33; // rax
  __int64 v34; // r10
  __int64 v35; // rax
  __int64 v36; // r8
  unsigned int v37; // eax
  __int64 v38; // r9
  int v39; // eax
  int v40; // edx
  __int64 v41; // rbx
  int v42; // edx
  int v43; // eax
  __int64 v44; // rcx
  unsigned int v45; // edx
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int16 v52; // dx
  __int64 v53; // rdx
  unsigned __int64 v54; // rax
  const unsigned __int64 *v55; // rcx
  __int64 v56; // r8
  unsigned __int64 v57; // r14
  int v58; // edx
  int v59; // ecx
  _QWORD **v60; // rax
  _QWORD *v61; // rdx
  unsigned int v62; // ecx
  int v63; // r9d
  unsigned int v64; // r8d
  unsigned int v65; // eax
  int v66; // edx
  __int64 v67; // rcx
  unsigned int v68; // edi
  __int64 v69; // r14
  unsigned int v70; // r15d
  _QWORD *v71; // r12
  LARGE_INTEGER *v72; // rsi
  _DWORD *v73; // rbx
  __int64 v74; // rax
  unsigned int v75; // r8d
  __int64 v76; // rdx
  int v77; // eax
  int v78; // eax
  unsigned int v79; // ecx
  unsigned int v80; // eax
  int v81; // ecx
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rcx
  _QWORD *v84; // rcx
  int updated; // eax
  unsigned __int8 v86; // al
  int v87; // eax
  _DWORD *v88; // rax
  const unsigned __int64 *v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rax
  unsigned int v93; // eax
  int v94; // ecx
  unsigned int v95; // eax
  __int64 *v96; // rdx
  __int64 v97; // rax
  int v98; // eax
  char j; // r9
  int v100; // eax
  void *v101; // rdx
  _QWORD *v102; // rax
  char v103; // [rsp+60h] [rbp-A0h]
  bool v104; // [rsp+61h] [rbp-9Fh] BYREF
  char v105; // [rsp+62h] [rbp-9Eh]
  bool v106; // [rsp+63h] [rbp-9Dh] BYREF
  unsigned int v107; // [rsp+64h] [rbp-9Ch]
  unsigned int v108; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v109; // [rsp+6Ch] [rbp-94h]
  unsigned int v110; // [rsp+70h] [rbp-90h] BYREF
  int v111; // [rsp+74h] [rbp-8Ch]
  _QWORD *v112; // [rsp+78h] [rbp-88h]
  int v113; // [rsp+80h] [rbp-80h]
  int v114; // [rsp+84h] [rbp-7Ch]
  unsigned int v115; // [rsp+88h] [rbp-78h]
  int v116; // [rsp+8Ch] [rbp-74h]
  _QWORD **i; // [rsp+90h] [rbp-70h]
  struct VIDSCH_FLIP_QUEUE_ENTRY *v118; // [rsp+98h] [rbp-68h]
  __int64 v119; // [rsp+A0h] [rbp-60h]
  _QWORD v120[2]; // [rsp+A8h] [rbp-58h] BYREF
  char v121; // [rsp+B8h] [rbp-48h]
  int v122; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v123; // [rsp+C8h] [rbp-38h]
  const unsigned __int64 *v124; // [rsp+D0h] [rbp-30h]
  __int64 v125; // [rsp+D8h] [rbp-28h]
  struct _VIDSCH_VSYNC_COOKIE *v126; // [rsp+E0h] [rbp-20h]
  __int64 v127; // [rsp+E8h] [rbp-18h]
  _BYTE v128[56]; // [rsp+F0h] [rbp-10h] BYREF
  int v129; // [rsp+128h] [rbp+28h]
  int v130; // [rsp+12Ch] [rbp+2Ch]
  int v131; // [rsp+130h] [rbp+30h]
  int v132; // [rsp+134h] [rbp+34h]
  __int64 v133; // [rsp+138h] [rbp+38h]
  __int64 v134; // [rsp+140h] [rbp+40h]
  _QWORD *v135; // [rsp+148h] [rbp+48h]
  __int64 v136; // [rsp+150h] [rbp+50h]
  struct _KLOCK_QUEUE_HANDLE v137; // [rsp+158h] [rbp+58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v139[10]; // [rsp+190h] [rbp+90h] BYREF
  unsigned __int64 v140[10]; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v141[10]; // [rsp+230h] [rbp+130h] BYREF

  v1 = *((_QWORD *)a1 + 6);
  v2 = a1;
  v126 = a1;
  v136 = v1;
  v108 = 0;
  memset(v140, 0, sizeof(v140));
  v3 = *((unsigned int *)v2 + 22);
  v116 = v3;
  if ( (_DWORD)v3 == -1 || (unsigned int)v3 >= *(_DWORD *)(v1 + 40) )
    return;
  _mm_lfence();
  v4 = *(_QWORD *)(v1 + 8 * v3 + 2576);
  v5 = 0;
  v127 = v4;
  v103 = 0;
  v104 = 0;
  v6 = (unsigned int)v3;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 1648), &LockHandle);
  v121 = 0;
  v120[1] = v120;
  v120[0] = v120;
  if ( (*((_BYTE *)v2 + 104) & 1) == 0 )
  {
    v7 = *(_QWORD **)(v4 + 33224);
    if ( !v7 )
    {
      *(_QWORD *)(v4 + 33240) = 0LL;
      *(_QWORD *)(v4 + 33224) = 1LL;
      _InterlockedExchange((volatile __int32 *)(v1 + 1796), 1);
      goto LABEL_12;
    }
    v9 = *((_QWORD *)v2 + 10) - *(_QWORD *)(v4 + 33176);
    v8 = *((_QWORD *)v2 + 7) - *(_QWORD *)(v4 + 33184);
    if ( *((_QWORD *)v2 + 10) != *(_QWORD *)(v4 + 33176) )
    {
      if ( (unsigned __int64)v7 <= 3 )
      {
        v7 = (_QWORD *)((char *)v7 + v9);
        v82 = v8 + *(_QWORD *)(v4 + 33240);
        *(_QWORD *)(v4 + 33224) = v7;
        *(_QWORD *)(v4 + 33240) = v82;
        if ( (unsigned __int64)v7 <= 3 )
          goto LABEL_126;
        v83 = v82 / ((unsigned __int64)v7 - 1);
        *(_QWORD *)(v4 + 33248) = v83 / 0xA;
        _m_prefetchw((const void *)(v4 + 33232));
        while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 33232), v83, *(_QWORD *)(v4 + 33232)) != v83 )
          ;
        v7 = *(_QWORD **)(v4 + 33224);
      }
      else
      {
        if ( v9 != 1 )
          v8 /= v9;
        v10 = *(_QWORD *)(v4 + 33248);
        v11 = *(_QWORD *)(v4 + 33232);
        *(_QWORD *)(v4 + 33264) = v8;
        if ( v8 > v11 + v10 || v8 < v11 - v10 )
        {
          ++*(_QWORD *)(v4 + 33256);
          LODWORD(v7) = 0;
          *(_QWORD *)(v4 + 33224) = 0LL;
          goto LABEL_126;
        }
      }
    }
    if ( (unsigned __int64)v7 > 3 )
    {
LABEL_12:
      *(_QWORD *)(v4 + 33176) = *((_QWORD *)v2 + 10);
      *(_QWORD *)(v4 + 33184) = *((_QWORD *)v2 + 7);
      *(_QWORD *)(v4 + 33192) = *((_QWORD *)v2 + 8);
      *(_QWORD *)(v4 + 33200) = *((_QWORD *)v2 + 9);
      goto LABEL_13;
    }
LABEL_126:
    _InterlockedExchange((volatile __int32 *)(v1 + 1796), 1);
    goto LABEL_12;
  }
LABEL_13:
  if ( *(int *)(v4 + 4) >= 4 || *(_BYTE *)(v1 + 144) )
  {
    v12 = 0;
    if ( *(_DWORD *)(v1 + 140) )
    {
      LODWORD(v8) = 4673;
LABEL_16:
      v106 = 0;
      v13 = *(_QWORD *)(v4 + 8LL * v12 + 24);
      if ( !v13 )
        goto LABEL_28;
      v14 = *(_DWORD *)(v13 + 48);
      v7 = 0LL;
      v15 = *(_DWORD *)(v13 + 44) - 1;
      v109 = 0;
      v110 = 0;
      v112 = 0LL;
      v115 = v14;
      if ( v14 == (v15 & 0x3F) )
      {
LABEL_22:
        if ( *(_DWORD *)(v4 + 2324) && *(_BYTE *)(v4 + 66420) )
        {
          VidSchiExecuteNextFlipQueueEntry(
            (struct HwQueueStagingList *)v120,
            (struct _VIDSCH_GLOBAL *)v1,
            &v106,
            v3,
            v12);
          v7 = v112;
        }
        if ( v7 )
        {
          VidSchiCheckPendingDeviceCommand(v7);
          v75 = -v109;
          v76 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v112[5] + 24LL) + 8LL * *(unsigned int *)(v112[4] + 4LL))
                          + 8LL * (unsigned int)v3
                          + 88);
          _InterlockedExchangeAdd(
            (volatile signed __int32 *)(*(_QWORD *)(v1 + 8LL * (unsigned int)v3 + 5792) + 8LL),
            -v109);
          v7 = *(_QWORD **)(v1 + 8LL * (unsigned int)v3 + 5792);
          *(_DWORD *)v7 += v110;
          _InterlockedExchangeAdd((volatile signed __int32 *)(v76 + 8), v75);
          *(_DWORD *)v76 += v110;
        }
        if ( v106 )
          VidSchiCompletePendingFlipOnPlane((unsigned int)v120, v1, v3, 9, v12);
        LODWORD(v8) = 4673;
LABEL_28:
        v5 = v103;
        goto LABEL_29;
      }
      while ( 1 )
      {
        v118 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)(1296LL * v14 + v13 + 56);
        v16 = *((_DWORD *)v118 + 263);
        if ( v16 > 0xC || !_bittest((const int *)&v8, v16) )
        {
          if ( v16 != 5 && v16 != 15 )
            goto LABEL_21;
          if ( !*(_BYTE *)(v1 + 144) && !*((_QWORD *)v2 + 14) )
            VidSchiQueueDeferredVisibilityWorkItem((struct _VIDSCH_PRESENT_INFO *)v4, (struct _VIDSCH_GLOBAL *)v1);
          if ( VidSchiIsExpectedVSyncCookie((struct _VIDSCH_GLOBAL *)v1, v118, v2) )
          {
            v112 = (_QWORD *)*((_QWORD *)v118 + 130);
            memset(v128, 0, sizeof(v128));
            v30 = *((_DWORD *)v2 + 4) == 10;
            *(_OWORD *)&v128[32] = *(_OWORD *)(v4 + 33176);
            *(_QWORD *)&v128[48] = *(_QWORD *)(v4 + 33192);
            *(_QWORD *)v128 = v1;
            *(_QWORD *)&v128[8] = v112;
            *(_DWORD *)&v128[16] = v3;
            *(_DWORD *)&v128[20] = v12;
            *(_DWORD *)&v128[24] = v14;
            if ( !v30 || (*((_DWORD *)v2 + 4 * v12 + 30) & 1) == 0 )
            {
              v31 = 0LL;
              v32 = ((_BYTE)v14 + 1) & 0x3F;
              v123 = 0LL;
              LODWORD(v118) = v32;
              v33 = v12 + 3LL;
              v125 = *(_QWORD *)(v1 + 8LL * (unsigned int)v3 + 2576);
              v34 = *(_QWORD *)(v125 + 8 * v33);
              v135 = (_QWORD *)(v125 + 8 * v33);
              v134 = v34;
              v35 = *(unsigned int *)(v34 + 44);
              v109 = v35;
              if ( (_DWORD)v35 != v32 )
              {
                do
                {
                  v36 = 1296 * v35 + v34 + 56;
                  v133 = v36;
                  v37 = *(_DWORD *)(v36 + 1052);
                  if ( v37 > 0xC || (v81 = 4673, !_bittest(&v81, v37)) )
                  {
                    v38 = 1023LL;
                    *(_QWORD *)(v36 + 1112) = *(_QWORD *)&v128[32];
                    *(_QWORD *)(v36 + 1096) = *(_QWORD *)&v128[40];
                    *(_QWORD *)(v36 + 1104) = *(_QWORD *)&v128[48];
                    v39 = *(_DWORD *)(v36 + 1120);
                    *(_DWORD *)(v36 + 1052) = 11;
                    if ( (v39 & 0x10) != 0 )
                      v40 = (**(_DWORD **)(v36 + 1168) | (**(_DWORD **)(v36 + 1168) >> 10)) & 0x3FF;
                    else
                      v40 = (1 << *(_DWORD *)(v1 + 140)) - 1;
                    v41 = v125;
                    LODWORD(v123) = v40;
                    *(_DWORD *)(v125 + 2336) &= ~v40;
                    HIDWORD(v123) = *(_DWORD *)(v36 + 1048);
                    if ( (*(_DWORD *)(v36 + 1120) & 0x10) != 0 )
                    {
                      v88 = *(_DWORD **)(v36 + 1168);
                      v42 = *v88 >> 10;
                      LOWORD(v42) = *(_WORD *)(v41 + 33144) & (*v88 | v42) & 0x3FF;
                    }
                    else
                    {
                      v42 = *(unsigned __int16 *)(v41 + 33144);
                    }
                    v114 = v42;
                    v105 = 0;
                    v113 = 0;
                    LOWORD(v43) = v42;
                    if ( (_WORD)v42 )
                    {
                      do
                      {
                        v30 = !_BitScanForward((unsigned int *)&v44, (unsigned __int16)v43);
                        v122 = (unsigned __int16)v43;
                        v129 = v44;
                        if ( v30 )
                          LOBYTE(v44) = -1;
                        v45 = 0;
                        v44 = (char)v44;
                        v111 = (char)v44;
                        v107 = 0;
                        if ( *(_WORD *)(v41 + 33146) )
                        {
                          v105 = 1;
                          v46 = v44 << 6;
                          do
                          {
                            i = (_QWORD **)v45;
                            v47 = v41 + 48 * (v46 + v45);
                            v119 = v47;
                            v48 = *(_QWORD *)(v47 + 2432);
                            v49 = *(_QWORD *)(v48 + 24);
                            if ( v49 )
                            {
                              v89 = (const unsigned __int64 *)(v47 + 2464);
                              v124 = v89;
                              if ( *v89 )
                              {
                                v130 = 0;
                                if ( (int)VidSchiSignalSyncObjectsFromCpu(
                                            (struct HwQueueStagingList *)v120,
                                            1u,
                                            (struct _VIDSCH_SYNC_OBJECT **)(v49 + 8),
                                            0,
                                            v89) < 0 )
                                {
                                  v92 = WdLogNewEntry5_WdAssertion(v91, v90);
                                  *(_QWORD *)(v92 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v119 + 2432) + 24LL) + 8LL);
                                  *(_QWORD *)(v92 + 32) = *v124;
                                  WdLogEvent5_WdAssertion(v92);
                                }
                              }
                            }
                            else
                            {
                              v50 = *(_QWORD *)(v48 + 16);
                              if ( v50 )
                                _InterlockedDecrement((volatile signed __int32 *)(v50 + 8));
                            }
                            VidSchiCheckPendingDeviceCommand(*(_QWORD **)(v41 + 16));
                            v51 = v119;
                            v45 = ++v107;
                            *(_QWORD *)(v119 + 2424) = 0LL;
                            *(_QWORD *)(v51 + 2432) = 0LL;
                            *(_WORD *)(v51 + 2456) = 0;
                            *(_QWORD *)(v41 + 48 * ((_QWORD)i + v46 + 51)) = 0LL;
                          }
                          while ( v45 < *(unsigned __int16 *)(v41 + 33146) );
                          LOBYTE(v44) = v111;
                        }
                        v52 = v113;
                        *(_WORD *)(v41 + 33144) &= ~(1 << v44);
                        v43 = v122 & ~(1 << v44);
                        v113 = v52 | (1 << v44);
                      }
                      while ( (_WORD)v43 );
                      v2 = v126;
                      LODWORD(v3) = v116;
                      if ( v105 )
                      {
                        v53 = *(_QWORD *)(v41 + 16);
                        v119 = v53;
                        if ( v53 )
                        {
                          v54 = *(_QWORD *)(v53 + 72);
                          v55 = (const unsigned __int64 *)(v53 + 72);
                          v107 = 0;
                          v56 = 0LL;
                          v124 = (const unsigned __int64 *)(v53 + 72);
                          if ( v54 != v53 + 72 )
                          {
                            v57 = v54;
                            do
                            {
                              v58 = 0;
                              if ( (*(_DWORD *)(v57 + 160) & 0x10) != 0 )
                              {
                                *(_DWORD *)(v57 + 160) &= ~0x10u;
                                v86 = VidSchiUnwaitContext(v57 - 24, 20776LL, v56, v38);
                                v55 = v124;
                                LODWORD(v56) = v107;
                                v58 = v86;
                              }
                              v57 = *(_QWORD *)v57;
                              v56 = v58 | (unsigned int)v56;
                              v107 = v56;
                            }
                            while ( (const unsigned __int64 *)v57 != v55 );
                            v4 = v127;
                            v53 = v119;
                          }
                          v59 = 0;
                          v60 = (_QWORD **)(*(_QWORD *)(v53 + 32) + 2872LL);
                          for ( i = v60; ; v60 = i )
                          {
                            v61 = *v60;
                            v111 = v59;
                            if ( v61 == v60 )
                              break;
                            if ( (_QWORD **)v61[1] != v60 || (v84 = (_QWORD *)*v61, *(_QWORD **)(*v61 + 8LL) != v61) )
                              __fastfail(3u);
                            *v60 = v84;
                            v84[1] = v60;
                            v61[1] = 0LL;
                            *v61 = 0LL;
                            updated = VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v61 - 5));
                            v59 = updated | v111;
                          }
                          v62 = v107 | v59;
                        }
                        else
                        {
                          v62 = 0;
                        }
                        VidSchiSignalFlipEvents(v41, v62, (unsigned __int16)v114, v38);
                        *(_WORD *)(v41 + 33148) &= ~(_WORD)v113;
                      }
                    }
                    VidSchiReferenceDisplayingAllocationsForThisEntry(v120, v1, v41, v133);
                    v34 = v134;
                    v32 = (unsigned int)v118;
                  }
                  v35 = ((_BYTE)v109 + 1) & 0x3F;
                  v109 = v35;
                }
                while ( (_DWORD)v35 != v32 );
                v31 = v123;
              }
              v63 = *(_DWORD *)(v34 + 48);
              v64 = v32;
              v65 = *(_DWORD *)(v34 + 44);
              v107 = v65;
              v66 = ((_BYTE)v63 + 1) & 0x3F;
              if ( v32 != v66 )
              {
                while ( 1 )
                {
                  v93 = *(_DWORD *)(1296LL * v32 + v34 + 1108);
                  if ( v93 > 0xC )
                    break;
                  v94 = 4673;
                  if ( !_bittest(&v94, v93) )
                    break;
                  v32 = ((_BYTE)v32 + 1) & 0x3F;
                  if ( v32 == v66 )
                    goto LABEL_158;
                }
                v64 = v32;
LABEL_158:
                v65 = v107;
              }
              *(_DWORD *)(v34 + 44) = v64;
              if ( v63 == v14 )
                *(_DWORD *)(v34 + 48) = v64;
              v109 = VidSchiCompleteFlipEntry((unsigned int)v120, v1, v3, v12, v65, v14, 0, 0LL);
              v110 = v109;
              if ( v109 )
              {
                v67 = v108++;
                v104 = 1;
                v140[v67] = v31;
              }
              if ( v107 <= v14 )
              {
                v68 = v115;
                v69 = v125;
                v70 = v107;
                v71 = v135;
                do
                {
                  v72 = (LARGE_INTEGER *)(*(_QWORD *)(v69 + 112) + 72LL * *(unsigned int *)(v69 + 120));
                  memset(v72, 0, 0x48uLL);
                  *(_DWORD *)(v69 + 120) = (*(_DWORD *)(v69 + 120) + 1) & (*(_DWORD *)(v69 + 104) - 1);
                  v73 = (_DWORD *)*v71;
                  v72->LowPart = 3;
                  v72[2].LowPart = v12;
                  v72[2].HighPart = v70;
                  v72[1] = KeQueryPerformanceCounter(0LL);
                  v74 = v70++;
                  BYTE4(v72[3].QuadPart) = (v73[324 * v74 + 294] & 0x20) != 0;
                  v72[4].LowPart = v73[324 * v74 + 277];
                  v72[3].LowPart = v73[324 * v74 + 278];
                  v72[5].LowPart = *(_DWORD *)(v69 + 2340);
                  v72[4].HighPart = *(_DWORD *)(v69 + 2336);
                  v72[5].HighPart = v73[8];
                  v72[6].LowPart = v73[9];
                  v72[6].HighPart = v73[10];
                  v72[7].LowPart = v73[11];
                  v72[7].HighPart = v73[12];
                  v72[8].LowPart = v73[13];
                }
                while ( v70 <= v68 );
                v2 = v126;
                v4 = v127;
                v1 = v136;
                LODWORD(v3) = v116;
              }
LABEL_21:
              v7 = v112;
              goto LABEL_22;
            }
            v5 = 1;
            *((_DWORD *)v118 + 263) = 14;
            v103 = 1;
            VidSchiProcessVsyncCompletedFlipEntry(
              (struct HwQueueStagingList *)v120,
              (struct _VIDSCH_VSYNC_COMPLETED_ENTRY_INFO *)v128,
              v140,
              &v108,
              &v110,
              &v104,
              1);
            memset(v139, 0, sizeof(v139));
            LODWORD(v139[1]) = v12;
            *(_OWORD *)&v139[3] = *(_OWORD *)v128;
            v139[2] = *((_QWORD *)v2 + 2 * v12 + 14);
            v87 = *((_DWORD *)v2 + 24);
            *(_OWORD *)&v139[5] = *(_OWORD *)&v128[16];
            HIDWORD(v139[0]) = v87;
            LODWORD(v139[0]) = *((_DWORD *)v2 + 23);
            *(_OWORD *)&v139[7] = *(_OWORD *)&v128[32];
            v139[9] = *(_QWORD *)&v128[48];
            VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc(v139, 6LL);
            LODWORD(v8) = 4673;
LABEL_29:
            if ( ++v12 >= *(_DWORD *)(v1 + 140) )
            {
              v6 = (unsigned int)v3;
              break;
            }
            goto LABEL_16;
          }
          LODWORD(v8) = 4673;
        }
        v14 = ((_BYTE)v14 - 1) & 0x3F;
        v17 = ((unsigned __int8)*(_DWORD *)(v13 + 44) - 1) & 0x3F;
        v115 = v14;
        if ( v14 == v17 )
          goto LABEL_21;
      }
    }
  }
  if ( !bTracingEnabled )
    goto LABEL_40;
  if ( (*((_BYTE *)v2 + 104) & 1) == 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqxqqipqx(
      (_DWORD)v7,
      0,
      v8,
      *(_QWORD *)(v1 + 16),
      *((_DWORD *)v2 + 23),
      *((_QWORD *)v2 + 14),
      *((_DWORD *)v2 + 22),
      *((_DWORD *)v2 + 20),
      *((_QWORD *)v2 + 7),
      0,
      0,
      v140[0]);
  memset(v141, 0, sizeof(v141));
  v20 = *((_DWORD *)v2 + 4);
  switch ( v20 )
  {
    case 10:
      v95 = *(_DWORD *)(v1 + 140);
      if ( v95 )
      {
        v18 = v141;
        v19 = v95;
        v96 = (__int64 *)((char *)v2 + 112);
        do
        {
          v97 = *v96;
          v96 += 2;
          *v18++ = v97;
          --v19;
        }
        while ( v19 );
      }
      break;
    case 3:
      v141[0] = *((_QWORD *)v2 + 14);
      break;
    case 7:
      LODWORD(v18) = -1;
      LODWORD(v19) = *((_DWORD *)v2 + 25) & 0x3FF;
      v30 = !_BitScanForward((unsigned int *)&v98, v19);
      v131 = v98;
      if ( !v30 )
        LODWORD(v18) = (unsigned __int8)v98;
      for ( j = 0; (_DWORD)v19; ++j )
      {
        v141[(char)v18] = *((_QWORD *)v2 + 5 * j + 14);
        v100 = 1 << (char)v18;
        LODWORD(v18) = -1;
        LODWORD(v19) = ~v100 & v19;
        v30 = !_BitScanForward((unsigned int *)&v100, v19);
        v132 = v100;
        if ( !v30 )
          LODWORD(v18) = (unsigned __int8)v100;
      }
      break;
  }
  if ( (*((_BYTE *)v2 + 104) & 1) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
      goto LABEL_40;
    v101 = &EventHSyncDPCMultiPlane;
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
      goto LABEL_40;
    v101 = &EventVSyncDPCMultiPlane;
  }
  McTemplateK0pqXR1qqqXR5(
    (_DWORD)v18,
    (_DWORD)v101,
    v19,
    *(_QWORD *)(v1 + 16),
    *(_DWORD *)(v1 + 140),
    (__int64)v141,
    *((_DWORD *)v2 + 22),
    *((_DWORD *)v2 + 20),
    v108,
    (__int64)v140);
LABEL_40:
  if ( v104 || v5 )
    goto LABEL_45;
  if ( *(_BYTE *)(v1 + 45) != 1 || !*(_DWORD *)(v1 + 1808) )
    goto LABEL_46;
  if ( _InterlockedExchange((volatile __int32 *)(v1 + 1796), 0)
    || *(_DWORD *)(*(_QWORD *)(v1 + 16) + 2552LL)
    || *(_DWORD *)(v1 + 720)
    || *(_DWORD *)(v1 + 732)
    || *(_DWORD *)(v1 + 1748) )
  {
LABEL_45:
    *(_DWORD *)(v1 + 1804) = -1;
    *(_DWORD *)(v1 + 1800) = 0;
    goto LABEL_46;
  }
  if ( (*((_BYTE *)v2 + 104) & 1) == 0 )
  {
    v77 = *(_DWORD *)(v1 + 1804);
    if ( v77 == -1 )
    {
      *(_DWORD *)(v1 + 1804) = v3;
LABEL_119:
      v78 = *(_DWORD *)(v1 + 1800);
      if ( v78 != -1 )
      {
        v79 = *(_DWORD *)(v1 + 1808);
        v80 = v78 + 1;
        *(_DWORD *)(v1 + 1800) = v80;
        if ( v80 == v79 )
        {
          if ( !_InterlockedExchange((volatile __int32 *)(v1 + 1792), 1) )
            ExQueueWorkItem((PWORK_QUEUE_ITEM)(v1 + 1760), CriticalWorkQueue);
        }
        else if ( v80 > v79 )
        {
          *(_DWORD *)(v1 + 1800) = v79 + 1;
        }
      }
      goto LABEL_46;
    }
    if ( v77 == (_DWORD)v3 )
      goto LABEL_119;
LABEL_46:
    if ( (*((_BYTE *)v2 + 104) & 1) == 0 )
    {
      v21 = *(_QWORD *)(v1 + 16);
      v22 = *(_DWORD *)(v4 + 33176);
      v23 = *(_QWORD *)(v21 + 2520);
      if ( (unsigned int)v3 < *(_DWORD *)(v23 + 80) )
      {
        v24 = *(_QWORD *)(v23 + 112) + 3760 * v6;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v24 + 960), &v137);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qqqq(
            *(unsigned __int8 *)(v24 + 952),
            v25,
            v26,
            *(_DWORD *)(v24 + 944),
            v22,
            *(_BYTE *)(v24 + 952),
            *(_DWORD *)(v21 + 2552));
        KePulseEvent((PRKEVENT)(v24 + 912), 0, 0);
        if ( *(_QWORD *)(v24 + 936) )
        {
          *(_DWORD *)(v24 + 948) = v22;
          if ( *(_DWORD *)(v24 + 944) <= v22 )
          {
            if ( *(_BYTE *)(v24 + 952) )
            {
              *(_BYTE *)(v24 + 952) = 0;
              if ( *(_QWORD *)(v21 + 2528) )
              {
                if ( _InterlockedDecrement((volatile signed __int32 *)(v21 + 2552)) < 0 )
                {
                  v102 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27);
                  v102[3] = 275LL;
                  v102[4] = 37LL;
                  v102[5] = v21;
                  v102[6] = *(unsigned int *)(v21 + 2552);
                  v102[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v102);
                }
              }
            }
            KeSetEvent(*(PRKEVENT *)(v24 + 936), 0, 0);
          }
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v137);
      }
    }
  }
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v120);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (*((_BYTE *)v2 + 104) & 1) == 0 )
  {
    v29 = *(void (__fastcall **)(_QWORD, _QWORD))(v1 + 2480);
    if ( v29 )
      v29(*(_QWORD *)(v1 + 2496), (unsigned int)v3);
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v120);
}
