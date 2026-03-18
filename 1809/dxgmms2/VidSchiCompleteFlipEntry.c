/*
 * XREFs of VidSchiCompleteFlipEntry @ 0x1C000BB50
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000AEB0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000CFC0 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C000F1C4 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     VidSchiCancelIndependentFlips @ 0x1C0017678 (VidSchiCancelIndependentFlips.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C002AC24 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_VSYNC_COMPLETED_E.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAKPEAPEAUVIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C002AED8 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAKPEAPEAUVIDSCH_.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002DC20 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchiExecutePostPresentAtPassiveLevel @ 0x1C002DFD0 (VidSchiExecutePostPresentAtPassiveLevel.c)
 *     VidSchiRestartQueuedFlip @ 0x1C002FB4C (VidSchiRestartQueuedFlip.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C0039AB4 (VidSchiCompletePendingFlipOnPlane.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C0002948 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00070E0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C0008CD0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiSignalFlipEvents @ 0x1C000C960 (VidSchiSignalFlipEvents.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C000F368 (VidSchiPropagatePresentHistoryToken.c)
 *     VidSchiUnwaitContext @ 0x1C0012350 (VidSchiUnwaitContext.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0013D8C (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0017520 (VidSchiTryEnterIndependentFlip.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0018394 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pxqqpqx @ 0x1C002D0FC (McTemplateK0pxqqpqx.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1C00315C0 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

__int64 __fastcall VidSchiCompleteFlipEntry(
        struct HwQueueStagingList *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        _BYTE *a8)
{
  __int64 v8; // rax
  __int64 v9; // r13
  _BYTE *v10; // r8
  __int64 v11; // r11
  __int64 v12; // r10
  __int64 v13; // rbx
  unsigned int v14; // edx
  unsigned int v15; // r12d
  int v16; // edi
  __int64 v17; // r9
  __int64 v18; // r15
  unsigned int v19; // ecx
  int v20; // edi
  int v21; // esi
  unsigned int v22; // r15d
  int v23; // r8d
  int v24; // eax
  __int64 v25; // rcx
  volatile signed __int32 *v26; // rbx
  __int64 v27; // rdi
  CRefCountedBuffer *v28; // rcx
  CRefCountedBuffer *v29; // rcx
  int v30; // ecx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v31; // rdx
  bool v32; // bl
  volatile signed __int32 *v33; // rsi
  __int64 v34; // rdx
  int v35; // r9d
  __int64 v36; // r8
  __int64 v37; // rcx
  _DWORD *v38; // r11
  unsigned int v39; // eax
  unsigned int v40; // edi
  int v41; // esi
  unsigned int v42; // ecx
  bool v43; // r9
  unsigned int v44; // edx
  unsigned int v45; // r8d
  unsigned int v46; // edx
  char v47; // cl
  int v48; // r10d
  bool v49; // zf
  int v50; // eax
  unsigned int v51; // r15d
  char v52; // cl
  int v53; // eax
  unsigned int v54; // ebx
  int v55; // ecx
  char *v56; // rax
  unsigned __int64 v57; // rcx
  __int64 v58; // r11
  __int64 v59; // r8
  __int64 v60; // r10
  __int64 v61; // rdx
  unsigned int v62; // r10d
  __int64 v63; // r15
  unsigned int v64; // ebx
  __int64 v65; // rsi
  int v66; // eax
  unsigned int *v67; // rax
  unsigned int v68; // edx
  unsigned int v69; // r8d
  unsigned int v70; // edx
  int v71; // eax
  char v72; // cl
  int v73; // r14d
  int v74; // eax
  unsigned int v75; // r9d
  char v76; // cl
  unsigned int v77; // eax
  unsigned int v78; // edx
  int v79; // ecx
  __int64 v80; // rdi
  __int64 v81; // r9
  int v82; // r10d
  __int64 v83; // r11
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r14
  __int64 v88; // rbx
  __int64 v89; // rdi
  __int64 v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  _QWORD *v94; // rax
  char v95; // cl
  int v96; // eax
  __int64 v97; // r8
  char v98; // cl
  int v99; // eax
  unsigned int i; // ebx
  __int64 v101; // rcx
  __int64 v102; // r8
  int v103; // eax
  char v104; // cl
  int v105; // eax
  __int64 v106; // rdx
  void (__fastcall *v107)(_QWORD, __int64, __int64, __int64); // rax
  unsigned int v108; // esi
  int v109; // eax
  char v110; // cl
  char v111; // bl
  __int64 v112; // rdx
  int v113; // eax
  __int64 v114; // r14
  _QWORD *v115; // rbx
  int j; // esi
  _QWORD *v117; // rcx
  int v118; // edx
  int v119; // edi
  _QWORD **v120; // rbx
  _QWORD *v121; // rax
  _QWORD *v122; // rcx
  int v123; // edi
  unsigned int v125; // [rsp+54h] [rbp-ACh]
  bool v126; // [rsp+58h] [rbp-A8h]
  unsigned int v127; // [rsp+5Ch] [rbp-A4h]
  unsigned int v128; // [rsp+60h] [rbp-A0h]
  unsigned int v129; // [rsp+64h] [rbp-9Ch]
  unsigned int v130; // [rsp+68h] [rbp-98h]
  int v131; // [rsp+6Ch] [rbp-94h]
  unsigned int v132; // [rsp+70h] [rbp-90h]
  int v133; // [rsp+74h] [rbp-8Ch]
  volatile signed __int32 *v134; // [rsp+78h] [rbp-88h]
  int v135; // [rsp+80h] [rbp-80h]
  unsigned int v136; // [rsp+84h] [rbp-7Ch]
  unsigned int v137; // [rsp+88h] [rbp-78h]
  __int64 v138; // [rsp+90h] [rbp-70h]
  __int64 v139; // [rsp+98h] [rbp-68h]
  __int64 v140; // [rsp+A0h] [rbp-60h]
  unsigned int v141; // [rsp+A8h] [rbp-58h]
  __int64 v142; // [rsp+B0h] [rbp-50h]
  __int64 v143; // [rsp+B8h] [rbp-48h]
  _DWORD *v144; // [rsp+C0h] [rbp-40h]
  __int64 v145; // [rsp+D0h] [rbp-30h]
  _QWORD v146[2]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v147; // [rsp+E8h] [rbp-18h]
  unsigned int v148; // [rsp+ECh] [rbp-14h]
  int v149; // [rsp+F0h] [rbp-10h]
  unsigned int v150; // [rsp+F4h] [rbp-Ch]
  unsigned int v151; // [rsp+F8h] [rbp-8h]
  int v152; // [rsp+100h] [rbp+0h]
  int v153; // [rsp+104h] [rbp+4h]
  int v154; // [rsp+108h] [rbp+8h]
  int v155; // [rsp+10Ch] [rbp+Ch]
  int v156; // [rsp+110h] [rbp+10h]
  int v157; // [rsp+114h] [rbp+14h]
  int v158; // [rsp+118h] [rbp+18h]
  int v159; // [rsp+11Ch] [rbp+1Ch]
  int v160; // [rsp+120h] [rbp+20h]
  int v161; // [rsp+124h] [rbp+24h]
  __int64 v162; // [rsp+128h] [rbp+28h]
  __int64 v163; // [rsp+130h] [rbp+30h]
  _QWORD v164[2]; // [rsp+138h] [rbp+38h] BYREF
  int v165; // [rsp+148h] [rbp+48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+150h] [rbp+50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v167; // [rsp+168h] [rbp+68h] BYREF
  char v171; // [rsp+1E8h] [rbp+E8h]

  v171 = a4;
  v8 = a3;
  v9 = a2;
  v10 = a8;
  if ( a8 )
    *a8 = 0;
  if ( !*(_DWORD *)(a2 + 724) )
    return 0LL;
  v11 = *(_QWORD *)(a2 + 8 * v8 + 2576);
  v12 = v8;
  v138 = v8;
  v140 = v11;
  v13 = *(_QWORD *)(v11 + 8LL * a4 + 24);
  v163 = v13;
  if ( !v13 )
    return 0LL;
  v14 = a5;
  v15 = 0;
  v132 = 0;
  v125 = 0;
  while ( 1 )
  {
    v16 = 4673;
    v17 = 0LL;
    v134 = 0LL;
    v18 = v13 + 1296LL * v14;
    v162 = v18;
    v19 = *(_DWORD *)(v18 + 1108);
    if ( v19 > 0xC || !_bittest(&v16, v19) )
    {
      v17 = *(_QWORD *)(v18 + 1096);
      v134 = (volatile signed __int32 *)v17;
    }
    v20 = a7;
    v21 = 1;
    if ( !a7 )
    {
      if ( v19 - 10 > 1 )
        goto LABEL_166;
LABEL_41:
      v26 = *(volatile signed __int32 **)(v18 + 1200);
      *(_DWORD *)(v18 + 1108) = a7;
      if ( v26 )
      {
        v27 = *(_QWORD *)(v18 + 1208);
        if ( v27 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v27 + 16), &LockHandle);
          _InterlockedIncrement(v26 + 1);
          v28 = *(CRefCountedBuffer **)(v27 + 8);
          if ( v28 )
            CRefCountedBuffer::RefCountedBufferRelease(v28);
          *(_QWORD *)(v27 + 8) = v26;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v26 = *(volatile signed __int32 **)(v18 + 1200);
          *(_QWORD *)(v18 + 1208) = 0LL;
        }
        if ( _InterlockedExchangeAdd(v26 + 1, 0xFFFFFFFF) == 1 )
          ExFreePoolWithTag((PVOID)v26, 0);
        v20 = a7;
        *(_QWORD *)(v18 + 1200) = 0LL;
      }
      v29 = *(CRefCountedBuffer **)(v18 + 1216);
      if ( v29 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v29);
        *(_QWORD *)(v18 + 1216) = 0LL;
      }
      if ( !v20 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 1656), &v167);
        if ( (*(_DWORD *)(v18 + 1176) & 0x20) == 0 )
          *(_DWORD *)(*(_QWORD *)(v140 + 16) + 4 * v138 + 508) = *(_DWORD *)(v18 + 1112);
        *(_QWORD *)(*(_QWORD *)(v140 + 16) + 8 * v138 + 576) = *(_QWORD *)(v18 + 1168);
        *(_QWORD *)(*(_QWORD *)(v140 + 16) + 8 * v138 + 704) = *(_QWORD *)(v18 + 1152);
        *(_QWORD *)(*(_QWORD *)(v140 + 16) + 8 * v138 + 832) = *(_QWORD *)(v18 + 1160);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v167);
      }
      v30 = *(_DWORD *)(v18 + 1176);
      if ( (v30 & 0x20) == 0 )
        goto LABEL_72;
      v31 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v18 + 1192);
      if ( !v31 )
        goto LABEL_72;
      v32 = 1;
      if ( v20 )
      {
        if ( v20 == 9 )
        {
          v32 = v21 != 0;
        }
        else if ( v20 == 6 )
        {
          VidSchiPropagatePresentHistoryToken(
            *(PKSPIN_LOCK *)(v18 + 1184),
            v31,
            1,
            (*(_DWORD *)(v18 + 1176) & 0x40) != 0,
            0,
            0,
            *(_QWORD *)(v18 + 1208),
            *(_QWORD *)(v18 + 1200),
            0LL);
          v30 = *(_DWORD *)(v18 + 1176);
          v31 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v18 + 1192);
        }
        else
        {
          v32 = 0;
        }
      }
      VidSchiPropagatePresentHistoryToken(
        *(PKSPIN_LOCK *)(v18 + 1184),
        v31,
        v32,
        (v30 & 0x40) != 0,
        0,
        0,
        *(_QWORD *)(v18 + 1208),
        *(_QWORD *)(v18 + 1200),
        0LL);
      if ( bTracingEnabled )
      {
        v33 = v134;
        if ( v20 )
        {
          if ( v134 )
          {
            v34 = *((_QWORD *)v134 + 1);
            v35 = *(_DWORD *)(v9 + 1944);
            if ( !v34 )
              LODWORD(v34) = (_DWORD)v134;
          }
          else
          {
            LOBYTE(v35) = 0;
            LODWORD(v34) = 0;
          }
          v36 = *(_QWORD *)(v18 + 1224);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            v37 = *(_DWORD *)(v36 + 4) * ((8 * *(_DWORD *)(v36 + 8) + 191) & 0xFFFFFFF8);
            McTemplateK0pxqqpqx(
              v37,
              v34,
              v36,
              *(_QWORD *)(v9 + 16),
              *(_QWORD *)(v37 + v36 + 40),
              a3,
              *(_DWORD *)(v18 + 1112),
              v34,
              v35,
              v171);
          }
        }
      }
      else
      {
LABEL_72:
        v33 = v134;
      }
      v38 = *(_DWORD **)(v18 + 1224);
      v144 = v38;
      if ( (*v38 & 0x3FF) != 0 )
      {
        v39 = *(_DWORD *)(v18 + 1124);
        v40 = 0;
        v41 = a7;
        v42 = *(_DWORD *)(v18 + 1128);
        v43 = a7 != 0;
        v137 = v42;
        v136 = v39;
        v135 = 0;
        if ( v39 )
        {
          do
          {
            v141 = v39;
            v44 = v39;
            if ( (v39 & 1) != 0 )
            {
              if ( (v42 & 1) != 0 )
              {
                v45 = 0;
                v131 = 0;
                v46 = *v38 & 0x3FF;
                v127 = v46;
                v47 = -1;
                v48 = 0;
                if ( *(_BYTE *)(v9 + 144) )
                  v45 = (*v38 >> 10) & 0x3FF;
                v49 = !_BitScanForward((unsigned int *)&v50, v46);
                v129 = v45;
                v158 = v50;
                if ( !v49 )
                  v47 = v50;
                v51 = v47;
                v52 = -1;
                v49 = !_BitScanForward((unsigned int *)&v53, v45);
                v128 = v51;
                v157 = v53;
                if ( !v49 )
                  v52 = v53;
                v54 = v52;
                v130 = v52;
                while ( v46 || v45 )
                {
                  if ( v51 >= v54 )
                    goto LABEL_136;
                  v55 = v38[1];
                  v126 = v43;
                  v56 = (char *)v38 + v55 * ((8 * v38[2] + 191) & 0xFFFFFFF8);
                  v57 = (unsigned __int64)(v48 + v40 * v55) << 6;
                  v58 = *(_QWORD *)&v56[v57 + 48];
                  v59 = *(_QWORD *)&v56[v57 + 72];
                  v60 = *(_QWORD *)&v56[v57 + 64];
                  v139 = v58;
                  v143 = v59;
                  v142 = v60;
                  if ( v41 )
                  {
                    if ( v59 )
                    {
                      if ( a3 != -1 )
                      {
                        v61 = *(_QWORD *)(v9 + 8 * v138 + 2576);
                        v145 = v61;
                        if ( v61 )
                        {
                          if ( *(_QWORD *)(v61 + 48 * (v40 + ((unsigned __int64)v51 << 6)) + 2432) == *(_QWORD *)(v58 + 96) )
                          {
                            *(_QWORD *)(v61 + 48 * (v40 + ((unsigned __int64)v51 << 6)) + 2464) = v59;
                            v43 = 0;
                          }
                          else if ( (v51 & *(_DWORD *)(v61 + 2336)) != 0 )
                          {
                            v62 = 0;
                            v133 = 0;
                            if ( *(_DWORD *)(v9 + 140) )
                            {
                              do
                              {
                                v63 = *(_QWORD *)(v61 + 8LL * v62 + 24);
                                v64 = *(_DWORD *)(v63 + 44);
                                if ( v64 != (((unsigned __int8)*(_DWORD *)(v63 + 48) + 1) & 0x3F) )
                                {
                                  while ( 2 )
                                  {
                                    v65 = v63 + 1296LL * v64;
                                    v66 = *(_DWORD *)(v65 + 1108);
                                    if ( v66 == 5 || v66 == 15 )
                                    {
                                      v67 = *(unsigned int **)(v65 + 1224);
                                      v146[0] = v9;
                                      v146[1] = v67;
                                      v68 = *v67;
                                      v69 = *v67 & 0x3FF;
                                      v147 = v69;
                                      if ( *(_BYTE *)(v9 + 144) )
                                        v70 = (v68 >> 10) & 0x3FF;
                                      else
                                        v70 = 0;
                                      v49 = !_BitScanForward((unsigned int *)&v71, v69);
                                      v72 = -1;
                                      v148 = v70;
                                      v156 = v71;
                                      v73 = 0;
                                      if ( !v49 )
                                        v72 = v71;
                                      v149 = 0;
                                      v49 = !_BitScanForward((unsigned int *)&v74, v70);
                                      v75 = v72;
                                      v76 = -1;
                                      v155 = v74;
                                      if ( !v49 )
                                        v76 = v74;
                                      v150 = v75;
                                      v77 = v76;
                                      v151 = v76;
                                      while ( v69 || v70 )
                                      {
                                        if ( v75 < v77 )
                                        {
                                          v78 = *(_DWORD *)(v65 + 1140);
                                          v79 = 0;
                                          if ( v78 )
                                          {
                                            v80 = *(_QWORD *)(v58 + 96);
                                            v81 = *(_QWORD *)(v65 + 1224);
                                            v82 = *(_DWORD *)(v81 + 4);
                                            v83 = v82 * ((8 * *(_DWORD *)(v81 + 8) + 191) & 0xFFFFFFF8);
                                            while ( v80 != *(_QWORD *)(*(_QWORD *)(v83
                                                                                 + ((unsigned __int64)(unsigned int)(v73 + v79 * v82) << 6)
                                                                                 + v81
                                                                                 + 48)
                                                                     + 96LL) )
                                            {
                                              if ( ++v79 >= v78 )
                                                goto LABEL_113;
                                            }
                                            v97 = v83 + ((unsigned __int64)(unsigned int)(v73 + v79 * v82) << 6);
                                            v58 = v139;
                                            *(_QWORD *)(v97 + v81 + 72) = v143;
                                            v43 = 0;
                                            v59 = v143;
                                            goto LABEL_118;
                                          }
                                        }
LABEL_113:
                                        VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)v146);
                                        v77 = v151;
                                        v70 = v148;
                                        v69 = v147;
                                        v75 = v150;
                                        v73 = v149;
                                      }
                                      v64 = ((_BYTE)v64 + 1) & 0x3F;
                                      if ( v64 != (((unsigned __int8)*(_DWORD *)(v63 + 48) + 1) & 0x3F) )
                                        continue;
                                    }
                                    break;
                                  }
                                  v61 = v145;
                                  v62 = v133;
                                }
                                v133 = ++v62;
                              }
                              while ( v62 < *(_DWORD *)(v9 + 140) );
                              v59 = v143;
                              v43 = v126;
LABEL_118:
                              v54 = v130;
                              v51 = v128;
                            }
                            v60 = v142;
                          }
                        }
                      }
                    }
                  }
                  v84 = *(_QWORD *)(v58 + 96);
                  v85 = *(_QWORD *)(v84 + 24);
                  _InterlockedDecrement((volatile signed __int32 *)(v58 + 104));
                  v86 = *(_QWORD *)(v84 + 16);
                  if ( v86 )
                    _InterlockedDecrement((volatile signed __int32 *)(v86 + 8));
                  if ( v43 && v85 )
                  {
                    v87 = 2LL;
                    v164[0] = v60;
                    v88 = 0LL;
                    v164[1] = v59;
                    v89 = 0LL;
                    do
                    {
                      v90 = v164[v88];
                      if ( v90 )
                      {
                        v91 = *(_QWORD *)(v58 + 96);
                        v154 = 0;
                        if ( (int)VidSchiSignalSyncObjectsFromCpu(
                                    a1,
                                    1u,
                                    (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(v91 + 24) + 8 * v89),
                                    0,
                                    &v164[v89]) < 0 )
                        {
                          v94 = (_QWORD *)WdLogNewEntry5_WdAssertion(v93, v92);
                          v94[3] = v89;
                          v94[4] = *(_QWORD *)(v88 * 8 + *(_QWORD *)(*(_QWORD *)(v139 + 96) + 24LL));
                          v94[5] = v90;
                          WdLogEvent5_WdAssertion(v94);
                        }
                        v58 = v139;
                      }
                      ++v89;
                      ++v88;
                      --v87;
                    }
                    while ( v87 );
                    v9 = a2;
                    v51 = v128;
                    v54 = v130;
                  }
                  v46 = v127;
                  v45 = v129;
                  v48 = v131;
                  v38 = v144;
                  v43 = a7 != 0;
                  if ( v51 >= v54 )
                  {
LABEL_136:
                    v40 = v135;
                    v41 = a7;
                    v98 = -1;
                    v45 &= ~(1 << v54);
                    v49 = !_BitScanForward((unsigned int *)&v99, v45);
                    v129 = v45;
                    v165 = v99;
                    if ( !v49 )
                      v98 = v99;
                    ++v48;
                    v54 = v98;
                    v130 = v98;
                    v131 = v48;
                  }
                  else
                  {
                    v40 = v135;
                    v41 = a7;
                    v95 = -1;
                    v46 = ~(1 << v51) & v127;
                    v49 = !_BitScanForward((unsigned int *)&v96, v46);
                    v127 = v46;
                    v153 = v96;
                    if ( !v49 )
                      v95 = v96;
                    v48 = v131 + 1;
                    v51 = v95;
                    v128 = v95;
                    ++v131;
                  }
                }
                v39 = v136;
                v42 = v137;
                v44 = v141;
              }
              v135 = ++v40;
            }
            v39 >>= 1;
            v42 >>= 1;
            v136 = v39;
            v137 = v42;
          }
          while ( v44 >= 2 );
          v18 = v162;
        }
        v33 = v134;
        if ( v134 )
          VidSchiCheckPendingDeviceCommand(v134);
      }
      for ( i = 0; i < *(_DWORD *)(v18 + 1136); ++i )
      {
        v101 = *(_QWORD *)(v18 + 8LL * i + 56);
        if ( (*(_DWORD *)(v18 + 1176) & 0x2000) != 0 )
        {
          if ( v101 )
          {
            VidSchiReleaseSyncObjectReference((char *)v101);
            *(_QWORD *)(v18 + 8LL * i + 56) = 0LL;
          }
        }
        else if ( v101 )
        {
          --*(_DWORD *)(v101 + 784);
        }
      }
      ++v132;
      _InterlockedExchangeAdd(v33 + 317, 0xFFFFFFFF);
      _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 720), 0xFFFFFFFF);
      v12 = v138;
      _InterlockedExchangeAdd(&v33[v138 + 301], 0xFFFFFFFF);
      if ( (*(_DWORD *)(v18 + 1176) & 0x10) != 0 )
        v102 = ((unsigned __int16)**(_DWORD **)(v18 + 1224) | (unsigned __int16)(**(_DWORD **)(v18 + 1224) >> 10)) & 0x3FF;
      else
        v102 = (unsigned int)((1 << *(_DWORD *)(v9 + 140)) - 1);
      v49 = !_BitScanForward((unsigned int *)&v103, v102);
      v104 = -1;
      v17 = (unsigned int)v102;
      v159 = v103;
      if ( !v49 )
        v104 = v103;
      if ( (_DWORD)v102 )
      {
        do
        {
          --*(_DWORD *)(216LL * v104 + *(_QWORD *)(v9 + 8 * v138 + 2576) + 172);
          v105 = 1 << v104;
          v104 = -1;
          v17 = ~v105 & (unsigned int)v17;
          v49 = !_BitScanForward((unsigned int *)&v105, v17);
          v160 = v105;
          if ( !v49 )
            v104 = v105;
        }
        while ( (_DWORD)v17 );
      }
      v22 = v102 | v125;
      v125 |= v102;
      _InterlockedExchangeAdd(&v33[v138 + 285], 0xFFFFFFFF);
      --*((_DWORD *)v33 + 318);
      v106 = *(unsigned int *)(*(_QWORD *)(v9 + 8 * v138 + 2576) + 33272LL);
      if ( (_DWORD)v106 != -1 )
      {
        v107 = *(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v9 + 2448);
        if ( v107 )
        {
          v107(*(_QWORD *)(v9 + 2496), v106, v102, v17);
          v12 = v138;
        }
      }
      v13 = v163;
      v14 = a5;
      v20 = a7;
      v11 = v140;
      v10 = a8;
      *(_DWORD *)(v163 + 52) = a5;
      goto LABEL_167;
    }
    if ( a7 == 9 || a7 == 6 )
    {
      if ( v19 > 0xC || (v24 = 4673, v23 = 0, !_bittest(&v24, v19)) )
        v23 = 1;
      if ( a7 == 9 )
      {
        if ( v19 != 5 && v19 != 15 )
          v21 = 0;
      }
      else if ( v19 == 5 || v19 == 15 || v19 == 13 )
      {
        v23 = 0;
      }
      if ( v19 - 7 <= 1 )
      {
        if ( *(_BYTE *)(v18 + 1121) )
          ++*(_QWORD *)(v17 + 8 * v12 + 376);
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 728));
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 2328));
        if ( *(_DWORD *)(v18 + 1108) == 8 && !*(_BYTE *)(v18 + 1121) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v17 + 4 * v12 + 1140));
          v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 40) + 24LL)
                                      + 8LL * *(unsigned int *)(*(_QWORD *)(v17 + 32) + 4LL))
                          + 8 * v12
                          + 88);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 8 * v12 + 5792) + 8LL));
          _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 720));
          _InterlockedIncrement((volatile signed __int32 *)(v17 + 1268));
          _InterlockedIncrement((volatile signed __int32 *)(v17 + 4 * v12 + 1204));
          v14 = a5;
        }
      }
      goto LABEL_40;
    }
    if ( a7 != 12 )
      goto LABEL_166;
    if ( v19 - 2 <= 1 )
    {
      v23 = (*(_DWORD *)(v18 + 1176) >> 5) & 1;
      if ( !v23 )
        goto LABEL_165;
      *(_DWORD *)(v13 + 40) = ((_BYTE)v14 + 1) & 0x3F;
LABEL_40:
      if ( !v23 )
      {
LABEL_165:
        v10 = a8;
LABEL_166:
        v22 = v125;
        goto LABEL_167;
      }
      goto LABEL_41;
    }
    if ( v19 != 5 && v19 != 15 || (*(_DWORD *)(v18 + 1176) & 0x20) == 0 )
      goto LABEL_166;
    v22 = v125;
    if ( v10 )
      *v10 = 1;
LABEL_167:
    if ( v14 == a6 )
      break;
    v14 = ((_BYTE)v14 + 1) & 0x3F;
    a5 = v14;
  }
  v108 = v132;
  if ( v132 )
  {
    v49 = !_BitScanForward((unsigned int *)&v109, v22);
    v110 = -1;
    v161 = v109;
    if ( !v49 )
      v110 = v109;
    if ( v22 )
    {
      do
      {
        v111 = v110;
        v112 = *(int *)(216LL * (unsigned int)v110 + *(_QWORD *)(v9 + 8 * v12 + 2576) + 164);
        if ( (int)v112 > -1 && *(_DWORD *)(136 * v112 + *(_QWORD *)(v9 + 2704) + 112) == 1 )
        {
          VidSchiTryEnterIndependentFlip(a1, (struct _VIDSCH_GLOBAL *)v9, a3, v110);
          v12 = a3;
        }
        v110 = -1;
        v22 &= ~(1 << v111);
        v49 = !_BitScanForward((unsigned int *)&v113, v22);
        v152 = v113;
        if ( !v49 )
          v110 = v113;
      }
      while ( v22 );
      v20 = a7;
      v15 = 0;
    }
  }
  *(_DWORD *)(v9 + 724) -= v132;
  *(_DWORD *)(v140 + 2324) -= v132;
  _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 728), -v132);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v140 + 2328), -v132);
  if ( !v20
    && _InterlockedCompareExchange((volatile signed __int32 *)(v140 + 66416), 3, 2) == 2
    && !_InterlockedExchange((volatile __int32 *)(v9 + 1856), 1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v9 + 16) + 24LL));
    *(_QWORD *)(v9 + 1816) = -1LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v9 + 1824), CriticalWorkQueue);
  }
  v114 = *(_QWORD *)(v140 + 16);
  if ( v114 )
  {
    v115 = *(_QWORD **)(v114 + 72);
    for ( j = 0; v115 != (_QWORD *)(v114 + 72); j |= v118 )
    {
      v117 = v115 - 3;
      v118 = 0;
      if ( (v115[20] & 0x10) != 0 )
      {
        *((_DWORD *)v117 + 46) &= ~0x10u;
        v118 = (unsigned __int8)VidSchiUnwaitContext(v117, 20776LL, v10, v17);
      }
      v115 = (_QWORD *)*v115;
    }
    v119 = 0;
    v120 = (_QWORD **)(*(_QWORD *)(v114 + 32) + 2872LL);
    while ( 1 )
    {
      v121 = *v120;
      if ( *v120 == v120 )
        break;
      if ( (_QWORD **)v121[1] != v120 || (v122 = (_QWORD *)*v121, *(_QWORD **)(*v121 + 8LL) != v121) )
        __fastfail(3u);
      *v120 = v122;
      v122[1] = v120;
      v121[1] = 0LL;
      *v121 = 0LL;
      v119 |= VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v121 - 5));
    }
    v123 = j | v119;
    v108 = v132;
    v15 = v123;
  }
  VidSchiSignalFlipEvents(v140, v15, 0LL, v17);
  return v108;
}
