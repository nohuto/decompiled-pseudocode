/*
 * XREFs of VidSchiCompleteFlipEntry @ 0x1C000D570
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000BDD0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000CD30 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000EAAC (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     VidSchiCancelIndependentFlips @ 0x1C0016B40 (VidSchiCancelIndependentFlips.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAUVIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C002B6E8 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002E490 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C002F47C (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiRestartQueuedFlip @ 0x1C0030520 (VidSchiRestartQueuedFlip.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C003A4F4 (VidSchiCompletePendingFlipOnPlane.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0007F50 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C0009BC0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiUnwaitContext @ 0x1C000E554 (VidSchiUnwaitContext.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C00101C4 (VidSchiPropagatePresentHistoryToken.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0013434 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0015CD8 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0016904 (VidSchiTryEnterIndependentFlip.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C00174BC (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pxqqpqx @ 0x1C002D810 (McTemplateK0pxqqpqx.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1C0031E10 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

__int64 __fastcall VidSchiCompleteFlipEntry(
        struct HwQueueStagingList *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        _BYTE *a8)
{
  __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // r9
  __int64 v12; // r11
  unsigned int v13; // r10d
  unsigned int v14; // r13d
  int v15; // edx
  __int64 v16; // rbx
  __int64 v17; // r8
  unsigned int v18; // ecx
  int v19; // r15d
  int v20; // edx
  __int64 v21; // r10
  int v22; // eax
  unsigned int v23; // r12d
  volatile signed __int32 *v24; // r15
  CRefCountedBuffer *v25; // rcx
  int v26; // ecx
  __int64 v27; // r12
  unsigned int v28; // eax
  bool v29; // r8
  unsigned int v30; // ecx
  _DWORD *v31; // r12
  unsigned int v32; // r13d
  unsigned int v33; // edx
  unsigned int v34; // edx
  int v35; // ebx
  unsigned int v36; // r15d
  bool v37; // zf
  int v38; // eax
  unsigned int v39; // r9d
  int v40; // eax
  unsigned int v41; // r11d
  unsigned int v42; // r15d
  __int64 v43; // r13
  __int64 v44; // rcx
  int v45; // eax
  char v46; // cl
  unsigned int v47; // r9d
  int v48; // eax
  __int64 v49; // rdx
  unsigned int v50; // eax
  int v51; // eax
  char v52; // bl
  __int64 v53; // rdx
  __int64 v54; // rbx
  _QWORD *v55; // rdi
  int i; // r12d
  _QWORD *v57; // rcx
  int v58; // edx
  __int64 v59; // rdi
  int v60; // ebx
  _QWORD **v61; // rdi
  _QWORD *v62; // rax
  int v63; // r14d
  _QWORD *v64; // rbx
  __int64 v65; // rdi
  struct _KEVENT *v66; // r15
  KSPIN_LOCK *v67; // rsi
  KIRQL v68; // r13
  struct _KEVENT *v69; // r12
  struct _KEVENT **v70; // rbx
  KIRQL v71; // r15
  struct _KEVENT *v72; // r12
  struct _KEVENT *v73; // rbx
  KIRQL v74; // r12
  struct _KEVENT *v75; // r15
  struct _KEVENT *v76; // rbx
  KIRQL v77; // r12
  struct _KEVENT *v78; // r15
  struct _KEVENT **v79; // rdi
  KIRQL v80; // bl
  struct _KEVENT *v81; // rsi
  int v83; // ecx
  bool v84; // r10
  char *v85; // rax
  unsigned __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // rdx
  __int64 v89; // rsi
  __int64 v90; // rax
  bool v91; // cl
  __int64 v92; // rax
  int v93; // eax
  __int64 v94; // rax
  struct _D3DKMT_PRESENTHISTORYTOKEN *v95; // rdx
  bool v96; // r8
  int v97; // ecx
  int v98; // r9d
  int v99; // eax
  __int64 v100; // rcx
  __int64 v101; // rax
  CRefCountedBuffer *v102; // rcx
  int v103; // eax
  char v104; // cl
  __int64 v105; // rdx
  int v106; // r9d
  __int64 v107; // r8
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rsi
  __int64 v111; // rcx
  unsigned int v112; // eax
  __int64 v113; // rdx
  unsigned int v114; // esi
  __int64 v115; // rcx
  int v116; // eax
  unsigned int v117; // edx
  unsigned int v118; // eax
  __int64 v119; // rdx
  char v120; // cl
  unsigned int v121; // esi
  unsigned int v122; // ecx
  int v123; // eax
  unsigned int v124; // eax
  __int64 v125; // rsi
  int v126; // ecx
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // r12
  __int64 v130; // rsi
  __int64 v131; // rdx
  __int64 v132; // rcx
  _QWORD *v133; // rax
  char v134; // cl
  int v135; // eax
  void (__fastcall *v136)(_QWORD, __int64, __int64, __int64); // rax
  _QWORD *v137; // rcx
  int v138; // ecx
  int v139; // ecx
  int v140; // ecx
  int Flink; // ecx
  int v142; // [rsp+54h] [rbp-ACh]
  unsigned int v143; // [rsp+54h] [rbp-ACh]
  unsigned int v144; // [rsp+58h] [rbp-A8h]
  __int64 v145; // [rsp+60h] [rbp-A0h]
  __int64 v146; // [rsp+60h] [rbp-A0h]
  unsigned int v147; // [rsp+68h] [rbp-98h]
  int v148; // [rsp+6Ch] [rbp-94h]
  unsigned int v149; // [rsp+70h] [rbp-90h]
  unsigned int v150; // [rsp+74h] [rbp-8Ch]
  unsigned int v151; // [rsp+74h] [rbp-8Ch]
  __int64 v152; // [rsp+78h] [rbp-88h]
  __int64 v153; // [rsp+80h] [rbp-80h]
  __int64 v154; // [rsp+80h] [rbp-80h]
  unsigned __int8 v155; // [rsp+88h] [rbp-78h]
  unsigned int v156; // [rsp+8Ch] [rbp-74h]
  unsigned int v157; // [rsp+90h] [rbp-70h]
  unsigned int v158; // [rsp+94h] [rbp-6Ch]
  __int64 v159; // [rsp+98h] [rbp-68h]
  __int64 v160; // [rsp+A0h] [rbp-60h]
  int v161; // [rsp+A8h] [rbp-58h]
  unsigned int v162; // [rsp+ACh] [rbp-54h]
  unsigned int v163; // [rsp+B0h] [rbp-50h]
  __int64 *v164; // [rsp+B8h] [rbp-48h]
  __int64 v165; // [rsp+C0h] [rbp-40h]
  __int64 v166; // [rsp+C8h] [rbp-38h]
  __int64 v167; // [rsp+C8h] [rbp-38h]
  __int64 v168; // [rsp+D0h] [rbp-30h]
  __int64 *v169; // [rsp+D0h] [rbp-30h]
  char v170; // [rsp+D8h] [rbp-28h]
  __int64 v171; // [rsp+E0h] [rbp-20h]
  __int64 v172; // [rsp+E8h] [rbp-18h]
  _DWORD *v173; // [rsp+F0h] [rbp-10h]
  __int64 v174; // [rsp+F8h] [rbp-8h] BYREF
  unsigned int *v175; // [rsp+100h] [rbp+0h]
  unsigned int v176; // [rsp+108h] [rbp+8h]
  unsigned int v177; // [rsp+10Ch] [rbp+Ch]
  int v178; // [rsp+110h] [rbp+10h]
  unsigned int v179; // [rsp+114h] [rbp+14h]
  unsigned int v180; // [rsp+118h] [rbp+18h]
  unsigned int v181; // [rsp+120h] [rbp+20h]
  int v182; // [rsp+124h] [rbp+24h]
  int v183; // [rsp+128h] [rbp+28h]
  int v184; // [rsp+12Ch] [rbp+2Ch]
  int v185; // [rsp+130h] [rbp+30h]
  int v186; // [rsp+134h] [rbp+34h]
  int v187; // [rsp+138h] [rbp+38h]
  int v188; // [rsp+13Ch] [rbp+3Ch]
  int v189; // [rsp+140h] [rbp+40h]
  __int64 v190; // [rsp+148h] [rbp+48h]
  int v191; // [rsp+150h] [rbp+50h]
  int v192; // [rsp+154h] [rbp+54h]
  _QWORD v193[2]; // [rsp+158h] [rbp+58h] BYREF
  __int64 v194; // [rsp+168h] [rbp+68h]
  struct _KLOCK_QUEUE_HANDLE v195; // [rsp+170h] [rbp+70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v196; // [rsp+188h] [rbp+88h] BYREF
  struct _KLOCK_QUEUE_HANDLE v197; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v198; // [rsp+1B8h] [rbp+B8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v199; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v200; // [rsp+1E8h] [rbp+E8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+200h] [rbp+100h] BYREF

  v8 = a2;
  v9 = a4;
  if ( a8 )
    *a8 = 0;
  if ( !*(_DWORD *)(a2 + 724) )
    return 0LL;
  v160 = a3;
  v10 = *(_QWORD *)(a2 + 2576 + 8LL * a3);
  v11 = a2 + 2576 + 8LL * a3;
  v165 = v10;
  v12 = a3;
  v164 = (__int64 *)v11;
  if ( !v9 )
    return 0LL;
  v13 = 0;
  v144 = 0;
  v14 = 0;
  v149 = 0;
  while ( 1 )
  {
    v15 = 4673;
    v16 = 1312LL * a5;
    v17 = 0LL;
    v152 = 0LL;
    v168 = v16;
    v18 = *(_DWORD *)(v16 + v9 + 1132);
    if ( v18 > 0xC || !_bittest(&v15, v18) )
    {
      v17 = *(_QWORD *)(v16 + v9 + 1120);
      v152 = v17;
    }
    v19 = a7;
    v20 = 1;
    v142 = 1;
    if ( !a7 )
    {
      if ( v18 - 10 > 1 )
        goto LABEL_155;
      goto LABEL_11;
    }
    if ( a7 == 9 || a7 == 6 )
    {
      if ( v18 > 0xC || (v99 = 4673, v98 = 0, !_bittest(&v99, v18)) )
        v98 = 1;
      if ( a7 == 9 )
      {
        if ( v18 != 5 && v18 != 15 )
          v20 = 0;
        v142 = v20;
      }
      else if ( v18 == 5 || v18 == 15 || v18 == 13 )
      {
        v98 = 0;
      }
      if ( v18 - 7 <= 1 )
      {
        if ( *(_BYTE *)(v16 + a4 + 1157) )
          ++*(_QWORD *)(v17 + 8 * v12 + 376);
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 728));
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 2336));
        if ( *(_DWORD *)(v16 + a4 + 1132) == 8 && !*(_BYTE *)(v16 + a4 + 1157) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v17 + 4 * v12 + 1144));
          v100 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 40) + 24LL)
                                       + 8LL * *(unsigned int *)(*(_QWORD *)(v17 + 32) + 4LL))
                           + 8 * v12
                           + 88);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 8 * v12 + 5792) + 8LL));
          _InterlockedIncrement((volatile signed __int32 *)(v100 + 8));
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 720));
          _InterlockedIncrement((volatile signed __int32 *)(v17 + 1272));
          _InterlockedIncrement((volatile signed __int32 *)(v17 + 4 * v12 + 1208));
          v20 = v142;
        }
      }
LABEL_153:
      if ( !v98 )
      {
        v11 = v8 + 8 * (v12 + 322);
LABEL_155:
        v50 = a5;
        goto LABEL_61;
      }
LABEL_11:
      v21 = a4;
      v22 = *(_DWORD *)(v16 + a4 + 1216);
      *(_DWORD *)(v16 + a4 + 1132) = a7;
      if ( (v22 & 0x10) != 0 )
        v23 = ((unsigned __int16)**(_DWORD **)(v16 + a4 + 1264) | (unsigned __int16)(**(_DWORD **)(v16 + a4 + 1264) >> 10)) & 0x3FF;
      else
        v23 = (1 << *(_DWORD *)(v8 + 140)) - 1;
      if ( a7 == 9 && v20 )
        *(_DWORD *)(v10 + 2344) &= ~v23;
      v24 = *(volatile signed __int32 **)(v16 + a4 + 1240);
      if ( v24 )
      {
        v94 = *(_QWORD *)(v16 + a4 + 1248);
        v154 = v94;
        if ( v94 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v94 + 16), &v195);
          v101 = v154;
          v102 = *(CRefCountedBuffer **)(v154 + 8);
          if ( v102 )
          {
            CRefCountedBuffer::RefCountedBufferRelease(v102);
            v101 = v154;
          }
          *(_QWORD *)(v101 + 8) = v24;
          _InterlockedIncrement(v24 + 1);
          KeReleaseInStackQueuedSpinLock(&v195);
          v21 = a4;
          v24 = *(volatile signed __int32 **)(v16 + a4 + 1240);
          *(_QWORD *)(v16 + a4 + 1248) = 0LL;
        }
        if ( _InterlockedExchangeAdd(v24 + 1, 0xFFFFFFFF) == 1 )
        {
          ExFreePoolWithTag((PVOID)v24, 0);
          v21 = a4;
        }
        *(_QWORD *)(v16 + v21 + 1240) = 0LL;
      }
      v25 = *(CRefCountedBuffer **)(v16 + v21 + 1256);
      if ( v25 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v25);
        v21 = a4;
        *(_QWORD *)(v16 + a4 + 1256) = 0LL;
      }
      if ( !a7 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1656), &LockHandle);
        if ( (*(_DWORD *)(v16 + a4 + 1216) & 0x20) == 0 )
          *(_DWORD *)(*(_QWORD *)(v10 + 16) + 4 * v160 + 508) = *(_DWORD *)(v16 + a4 + 1136);
        *(_QWORD *)(*(_QWORD *)(v10 + 16) + 8 * v160 + 576) = *(_QWORD *)(v16 + a4 + 1208);
        *(_QWORD *)(*(_QWORD *)(v10 + 16) + 8 * v160 + 704) = *(_QWORD *)(v16 + a4 + 1192);
        *(_QWORD *)(*(_QWORD *)(v10 + 16) + 8 * v160 + 832) = *(_QWORD *)(v16 + a4 + 1200);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v21 = a4;
      }
      v26 = *(_DWORD *)(v16 + v21 + 1216);
      if ( (v26 & 0x20) != 0 )
      {
        v95 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v16 + v21 + 1232);
        if ( v95 )
        {
          if ( a7 )
          {
            if ( a7 == 9 )
            {
              v96 = v142 != 0;
            }
            else if ( a7 == 6 )
            {
              VidSchiPropagatePresentHistoryToken(
                *(PKSPIN_LOCK *)(v16 + v21 + 1224),
                v95,
                1,
                (*(_DWORD *)(v16 + v21 + 1216) & 0x40) != 0,
                0,
                0,
                *(_QWORD *)(v16 + v21 + 1248),
                *(_QWORD *)(v16 + v21 + 1240),
                0LL);
              v21 = a4;
              v96 = 1;
              v26 = *(_DWORD *)(v16 + a4 + 1216);
              v95 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v16 + a4 + 1232);
            }
            else
            {
              v96 = 0;
            }
          }
          else
          {
            v96 = 1;
          }
          VidSchiPropagatePresentHistoryToken(
            *(PKSPIN_LOCK *)(v16 + v21 + 1224),
            v95,
            v96,
            (v26 & 0x40) != 0,
            0,
            0,
            *(_QWORD *)(v16 + v21 + 1248),
            *(_QWORD *)(v16 + v21 + 1240),
            0LL);
          if ( !bTracingEnabled )
          {
            v27 = v152;
LABEL_177:
            v21 = a4;
            goto LABEL_23;
          }
          v21 = a4;
          if ( a7 )
          {
            v37 = !_BitScanForward((unsigned int *)&v103, v23);
            v27 = v152;
            v104 = -1;
            v189 = v103;
            if ( !v37 )
              v104 = v103;
            v170 = v104;
            if ( v152 )
            {
              v105 = *(_QWORD *)(v152 + 8);
              v106 = *(_DWORD *)(v8 + 1944);
              if ( !v105 )
                LODWORD(v105) = v152;
            }
            else
            {
              LOBYTE(v106) = 0;
              LODWORD(v105) = 0;
            }
            v107 = *(_QWORD *)(v16 + a4 + 1264);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_23;
            v108 = *(_DWORD *)(v107 + 4) * ((8 * *(_DWORD *)(v107 + 8) + 191) & 0xFFFFFFF8);
            McTemplateK0pxqqpqx(
              v108,
              v105,
              v107,
              *(_QWORD *)(v8 + 16),
              *(_QWORD *)(v108 + v107 + 40),
              a3,
              *(_DWORD *)(v16 + a4 + 1136),
              v105,
              v106,
              v170);
            goto LABEL_177;
          }
        }
      }
      v27 = v152;
LABEL_23:
      v173 = *(_DWORD **)(v16 + v21 + 1264);
      if ( (*v173 & 0x3FF) != 0 )
      {
        v28 = *(_DWORD *)(v16 + v21 + 1160);
        v157 = v28;
        v29 = a7 != 0;
        v30 = *(_DWORD *)(v16 + v21 + 1164);
        v158 = v30;
        v148 = 0;
        if ( v28 )
        {
          v31 = *(_DWORD **)(v16 + v21 + 1264);
          v32 = 0;
          do
          {
            v163 = v28;
            v33 = v28;
            if ( (v28 & 1) != 0 )
            {
              if ( (v30 & 1) != 0 )
              {
                v34 = 0;
                v35 = 0;
                v36 = *v31 & 0x3FF;
                if ( *(_BYTE *)(v8 + 144) )
                  v34 = (*v31 >> 10) & 0x3FF;
                v37 = !_BitScanForward((unsigned int *)&v38, v36);
                v143 = v34;
                v191 = v38;
                if ( v37 )
                  LOBYTE(v38) = -1;
                v39 = (char)v38;
                v37 = !_BitScanForward((unsigned int *)&v38, v34);
                v156 = v39;
                v192 = v40;
                if ( v37 )
                  LOBYTE(v38) = -1;
                v41 = (char)v38;
                v147 = (char)v38;
                while ( v36 || v34 )
                {
                  if ( v39 >= v41 )
                    goto LABEL_222;
                  v83 = v31[1];
                  v84 = v29;
                  v85 = (char *)v31 + v83 * ((8 * v31[2] + 191) & 0xFFFFFFF8);
                  v86 = (unsigned __int64)(v35 + v32 * v83) << 6;
                  v87 = *(_QWORD *)&v85[v86 + 48];
                  v88 = *(_QWORD *)&v85[v86 + 72];
                  v89 = *(_QWORD *)&v85[v86 + 64];
                  v153 = v87;
                  v159 = v88;
                  v145 = v89;
                  if ( a7 && v88 && a3 != -1 )
                  {
                    v109 = *v164;
                    v166 = *v164;
                    if ( *v164 )
                    {
                      v110 = v39;
                      v111 = v109 + 48 * (v32 + ((unsigned __int64)v39 << 6));
                      if ( *(_QWORD *)(v111 + 2440) == *(_QWORD *)(v87 + 96) )
                      {
                        v88 = v159;
                        v84 = 0;
                        *(_QWORD *)(v111 + 2472) = v159;
                      }
                      else
                      {
                        if ( (v39 & *(_DWORD *)(v109 + 2344)) != 0 )
                        {
                          v112 = 0;
                          while ( 1 )
                          {
                            if ( v112 )
                              v113 = *(_QWORD *)(v109 + 8 * v110 + 32);
                            else
                              v113 = *(_QWORD *)(v109 + 24);
                            v114 = *(_DWORD *)(v113 + 44);
                            v162 = v112 + 1;
                            v171 = v113;
                            v155 = v114;
                            if ( v114 != (((unsigned __int8)*(_DWORD *)(v113 + 48) + 1) & 0x3F) )
                            {
                              while ( 2 )
                              {
                                v115 = v113 + 1312LL * v114;
                                v194 = v115;
                                v116 = *(_DWORD *)(v115 + 1132);
                                if ( v116 == 5 || v116 == 15 )
                                {
                                  v175 = *(unsigned int **)(v115 + 1264);
                                  v174 = v8;
                                  v117 = *v175;
                                  v118 = *v175 & 0x3FF;
                                  v150 = v118;
                                  v176 = v118;
                                  if ( *(_BYTE *)(v8 + 144) )
                                    v119 = (v117 >> 10) & 0x3FF;
                                  else
                                    v119 = 0LL;
                                  v37 = !_BitScanForward(&v118, v118);
                                  v120 = -1;
                                  v177 = v119;
                                  v181 = v118;
                                  if ( !v37 )
                                    v120 = v118;
                                  v178 = 0;
                                  v121 = v120;
                                  LOBYTE(v122) = -1;
                                  v37 = !_BitScanForward((unsigned int *)&v123, v119);
                                  v179 = v121;
                                  v188 = v123;
                                  if ( !v37 )
                                    LOBYTE(v122) = v123;
                                  v124 = v150;
                                  v122 = (char)v122;
                                  v180 = (char)v122;
                                  while ( v124 || (_DWORD)v119 )
                                  {
                                    if ( v121 < v122 )
                                    {
                                      v119 = 0LL;
                                      v151 = *(_DWORD *)(v194 + 1176);
                                      if ( v151 )
                                      {
                                        v125 = *(_QWORD *)(v194 + 1264);
                                        v190 = *(_QWORD *)(v87 + 96);
                                        v126 = *(_DWORD *)(v125 + 4);
                                        v161 = v126;
                                        v172 = v126 * ((8 * *(_DWORD *)(v125 + 8) + 191) & 0xFFFFFFF8);
                                        while ( 1 )
                                        {
                                          v127 = (unsigned int)(v178 + v126 * v119);
                                          v41 = v147;
                                          if ( v190 == *(_QWORD *)(*(_QWORD *)(v125 + (v127 << 6) + v172 + 48) + 96LL) )
                                            break;
                                          v126 = v161;
                                          v119 = (unsigned int)(v119 + 1);
                                          if ( (unsigned int)v119 >= v151 )
                                            goto LABEL_209;
                                        }
                                        v88 = v159;
                                        v84 = 0;
                                        *(_QWORD *)(v125 + (v127 << 6) + v172 + 72) = v159;
                                        goto LABEL_213;
                                      }
                                    }
LABEL_209:
                                    VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(&v174, v119);
                                    v122 = v180;
                                    v119 = v177;
                                    v124 = v176;
                                    v87 = v153;
                                    v121 = v179;
                                  }
                                  v113 = v171;
                                  v155 = (v155 + 1) & 0x3F;
                                  v114 = v155;
                                  if ( v155 != (((unsigned __int8)*(_DWORD *)(v171 + 48) + 1) & 0x3F) )
                                    continue;
                                }
                                break;
                              }
                            }
                            v112 = v162;
                            if ( v162 >= 2 )
                              break;
                            v109 = v166;
                            v110 = v39;
                          }
                        }
                        v88 = v159;
                      }
LABEL_213:
                      v89 = v145;
                    }
                    else
                    {
                      v88 = *(_QWORD *)&v85[v86 + 72];
                    }
                  }
                  v90 = *(_QWORD *)(v87 + 96);
                  v91 = *(_QWORD *)(v90 + 24) == 0LL;
                  _InterlockedDecrement((volatile signed __int32 *)(v87 + 104));
                  v92 = *(_QWORD *)(v90 + 16);
                  if ( v92 )
                    _InterlockedDecrement((volatile signed __int32 *)(v92 + 8));
                  if ( v84 && !v91 )
                  {
                    v128 = 0LL;
                    v193[0] = v89;
                    v129 = 0LL;
                    v146 = 0LL;
                    v130 = 2LL;
                    v193[1] = v88;
                    do
                    {
                      v167 = *(_QWORD *)((char *)v193 + v128);
                      if ( v167 )
                      {
                        if ( (int)VidSchiSignalSyncObjectsFromCpu(
                                    a1,
                                    1u,
                                    (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*(_QWORD *)(v87 + 96) + 24LL) + 8 * v129),
                                    0,
                                    &v193[v129]) < 0 )
                        {
                          v133 = (_QWORD *)WdLogNewEntry5_WdAssertion(v132, v131);
                          v133[3] = v129;
                          v133[4] = *(_QWORD *)(v146 + *(_QWORD *)(*(_QWORD *)(v153 + 96) + 24LL));
                          v133[5] = v167;
                          WdLogEvent5_WdAssertion(v133);
                        }
                        v128 = v146;
                        v87 = v153;
                      }
                      v128 += 8LL;
                      ++v129;
                      v146 = v128;
                      --v130;
                    }
                    while ( v130 );
                    v8 = a2;
                    v39 = v156;
                    v31 = v173;
                    v41 = v147;
                    v32 = v148;
                  }
                  v34 = v143;
                  if ( v39 >= v41 )
                  {
LABEL_222:
                    v134 = -1;
                    v34 &= ~(1 << v41);
                    v37 = !_BitScanForward((unsigned int *)&v135, v34);
                    v143 = v34;
                    v184 = v135;
                    if ( !v37 )
                      v134 = v135;
                    v41 = v134;
                    v147 = v134;
                  }
                  else
                  {
                    v36 &= ~(1 << v39);
                    v37 = !_BitScanForward((unsigned int *)&v93, v36);
                    v182 = v93;
                    if ( v37 )
                      LOBYTE(v93) = -1;
                    v39 = (char)v93;
                    v156 = (char)v93;
                  }
                  v29 = a7 != 0;
                  ++v35;
                }
                v28 = v157;
                v30 = v158;
                v33 = v163;
              }
              v148 = ++v32;
            }
            v28 >>= 1;
            v30 >>= 1;
            v157 = v28;
            v158 = v30;
          }
          while ( v33 >= 2 );
          v16 = v168;
          v10 = v165;
          v14 = v149;
          v27 = v152;
          v21 = a4;
        }
        if ( v27 )
        {
          VidSchiCheckPendingDeviceCommand((_QWORD *)v27);
          v21 = a4;
        }
      }
      v42 = 0;
      if ( *(_DWORD *)(v16 + v21 + 1172) )
      {
        v43 = v16 + v21 + 80;
        do
        {
          v169 = (__int64 *)(v43 + 8LL * v42);
          v44 = *v169;
          if ( (*(_DWORD *)(v16 + v21 + 1216) & 0x2000) != 0 )
          {
            if ( v44 )
            {
              VidSchiReleaseSyncObjectReference((char *)v44);
              v21 = a4;
              *v169 = 0LL;
            }
          }
          else if ( v44 )
          {
            --*(_DWORD *)(v44 + 784);
          }
          ++v42;
        }
        while ( v42 < *(_DWORD *)(v16 + v21 + 1172) );
        v14 = v149;
      }
      v13 = ++v144;
      _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 1272), 0xFFFFFFFF);
      _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 720), 0xFFFFFFFF);
      v12 = v160;
      _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 4 * v160 + 1208), 0xFFFFFFFF);
      if ( (*(_DWORD *)(v16 + a4 + 1216) & 0x10) != 0 )
        v17 = ((unsigned __int16)**(_DWORD **)(v16 + a4 + 1264) | (unsigned __int16)(**(_DWORD **)(v16 + a4 + 1264) >> 10)) & 0x3FF;
      else
        v17 = (unsigned int)((1 << *(_DWORD *)(v8 + 140)) - 1);
      v37 = !_BitScanForward((unsigned int *)&v45, v17);
      v46 = -1;
      v47 = v17;
      v185 = v45;
      if ( !v37 )
        v46 = v45;
      if ( (_DWORD)v17 )
      {
        do
        {
          --*(_DWORD *)(216LL * v46 + *(_QWORD *)(v8 + 8 * v160 + 2576) + 180);
          v48 = 1 << v46;
          v46 = -1;
          v47 &= ~v48;
          v37 = !_BitScanForward((unsigned int *)&v48, v47);
          v186 = v48;
          if ( !v37 )
            v46 = v48;
        }
        while ( v47 );
        v10 = v165;
      }
      v14 |= v17;
      v149 = v14;
      _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 4 * v160 + 1144), 0xFFFFFFFF);
      --*(_DWORD *)(v27 + 1276);
      v11 = v8 + 8 * (v160 + 322);
      v49 = *(unsigned int *)(*(_QWORD *)v11 + 33280LL);
      if ( (_DWORD)v49 != -1 )
      {
        v136 = *(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(v8 + 2448);
        if ( v136 )
        {
          v136(*(_QWORD *)(v8 + 2496), v49, v17, v11);
          v13 = v144;
          v12 = v160;
          v11 = (__int64)v164;
        }
      }
      v50 = a5;
      *(_DWORD *)(a4 + 52) = a5;
      v19 = a7;
      goto LABEL_61;
    }
    if ( a7 != 12 )
      goto LABEL_155;
    if ( v18 - 2 <= 1 )
    {
      v50 = a5;
      v98 = (*(_DWORD *)(v16 + a4 + 1216) >> 5) & 1;
      if ( !v98 )
      {
        v11 = v8 + 8 * (v12 + 322);
        goto LABEL_61;
      }
      *(_DWORD *)(a4 + 40) = ((_BYTE)a5 + 1) & 0x3F;
      goto LABEL_153;
    }
    if ( v18 != 5 && v18 != 15 || (*(_DWORD *)(v16 + a4 + 1216) & 0x20) == 0 )
      goto LABEL_155;
    v50 = a5;
    if ( a8 )
      *a8 = 1;
LABEL_61:
    if ( v50 == a6 )
      break;
    a5 = ((_BYTE)a5 + 1) & 0x3F;
    v9 = a4;
  }
  if ( v13 )
  {
    v37 = !_BitScanForward((unsigned int *)&v51, v14);
    v187 = v51;
    if ( v37 )
      LOBYTE(v51) = -1;
    if ( v14 )
    {
      do
      {
        v52 = v51;
        v53 = *(int *)(216LL * (unsigned int)(char)v51 + *(_QWORD *)v11 + 172);
        if ( (int)v53 > -1 && *(_DWORD *)(136 * v53 + *(_QWORD *)(v8 + 2704) + 112) == 1 )
        {
          VidSchiTryEnterIndependentFlip(a1, (struct _VIDSCH_GLOBAL *)v8, a3, (char)v51);
          v11 = (__int64)v164;
        }
        v14 &= ~(1 << v52);
        v37 = !_BitScanForward((unsigned int *)&v51, v14);
        v183 = v51;
        if ( v37 )
          LOBYTE(v51) = -1;
      }
      while ( v14 );
      v10 = v165;
      v13 = v144;
      v19 = a7;
    }
  }
  *(_DWORD *)(v8 + 724) -= v13;
  *(_DWORD *)(v10 + 2332) -= v13;
  _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 728), -v13);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 2336), -v13);
  if ( !v19
    && _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 66432), 3, 2) == 2
    && !_InterlockedExchange((volatile __int32 *)(v8 + 1856), 1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v8 + 16) + 24LL));
    *(_QWORD *)(v8 + 1816) = -1LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v8 + 1824), CriticalWorkQueue);
    v13 = v144;
  }
  v54 = *(_QWORD *)(v10 + 16);
  if ( v54 )
  {
    v55 = *(_QWORD **)(v54 + 72);
    for ( i = 0; v55 != (_QWORD *)(v54 + 72); i |= v58 )
    {
      v57 = v55 - 3;
      v58 = 0;
      if ( (v55[20] & 0x10) != 0 )
      {
        *((_DWORD *)v57 + 46) &= ~0x10u;
        v58 = (unsigned __int8)VidSchiUnwaitContext(v57, 20946LL, v17, v11);
      }
      v55 = (_QWORD *)*v55;
    }
    v59 = *(_QWORD *)(v54 + 32);
    v60 = 0;
    v61 = (_QWORD **)(v59 + 2872);
    while ( 1 )
    {
      v62 = *v61;
      if ( *v61 == v61 )
        break;
      if ( (_QWORD **)v62[1] != v61 || (v137 = (_QWORD *)*v62, *(_QWORD **)(*v62 + 8LL) != v62) )
        __fastfail(3u);
      *v61 = v137;
      v137[1] = v61;
      v62[1] = 0LL;
      *v62 = 0LL;
      v60 |= VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v62 - 5));
    }
    v13 = v144;
    v63 = i | v60;
    v64 = *(_QWORD **)(v10 + 16);
    if ( v64 )
    {
      v65 = v64[4];
      v66 = (struct _KEVENT *)(v64 + 15);
      v67 = (KSPIN_LOCK *)(v65 + 1664);
      v68 = KfRaiseIrql(2u);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v65 + 1664), &v196);
      v69 = (struct _KEVENT *)v64[15];
      if ( *(struct _KEVENT **)&v66->Header.Lock == v66 )
      {
LABEL_82:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v196);
        KeLowerIrql(v68);
        v70 = (struct _KEVENT **)(v64 + 17);
        v71 = KfRaiseIrql(2u);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v65 + 1664), &v197);
        v72 = *v70;
        if ( *v70 == (struct _KEVENT *)v70 )
        {
LABEL_83:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v197);
          KeLowerIrql(v71);
          v73 = (struct _KEVENT *)(v65 + 1592);
          v74 = KfRaiseIrql(2u);
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v65 + 1664), &v198);
          v75 = *(struct _KEVENT **)(v65 + 1592);
          if ( *(struct _KEVENT **)&v73->Header.Lock == v73 )
          {
LABEL_84:
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v198);
            KeLowerIrql(v74);
            v76 = (struct _KEVENT *)(v65 + 1576);
            v77 = KfRaiseIrql(2u);
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v65 + 1664), &v199);
            v78 = *(struct _KEVENT **)(v65 + 1576);
            if ( *(struct _KEVENT **)&v76->Header.Lock == v76 )
            {
LABEL_85:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v199);
              KeLowerIrql(v77);
              *(_QWORD *)(v65 + 1424) = MEMORY[0xFFFFF78000000320];
              KeSetEvent((PRKEVENT)(v65 + 1392), 0, 0);
              *(_QWORD *)(v65 + 1536) = MEMORY[0xFFFFF78000000320];
              KeSetEvent((PRKEVENT)(v65 + 1504), 0, 0);
              if ( v63 )
              {
                *(_QWORD *)(v65 + 1144) = MEMORY[0xFFFFF78000000320];
                KeSetEvent((PRKEVENT)(v65 + 1112), 0, 0);
              }
              v79 = (struct _KEVENT **)(v65 + 1608);
              v80 = KfRaiseIrql(2u);
              KeAcquireInStackQueuedSpinLockAtDpcLevel(v67, &v200);
              v81 = *v79;
              if ( *v79 == (struct _KEVENT *)v79 )
              {
LABEL_88:
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v200);
                KeLowerIrql(v80);
                return v144;
              }
              while ( 2 )
              {
                if ( LODWORD(v81->Header.WaitListHead.Blink) == 4 )
                {
                  if ( *(_DWORD *)(*(_QWORD *)&v81[1].Header.Lock
                                 + 4LL * LODWORD(v81[1].Header.WaitListHead.Blink)
                                 + 1144) < *(_DWORD *)(*(_QWORD *)&v81[1].Header.Lock + 244LL) )
                    goto LABEL_120;
                }
                else if ( ((__int64)v81[1].Header.WaitListHead.Flink & 0x10) == 0
                       || (Flink = (int)v81[1].Header.WaitListHead.Blink->Flink,
                           (HIDWORD(v81[5].Header.WaitListHead.Blink) = Flink) == 0) )
                {
LABEL_120:
                  ++v81[5].Header.LockNV;
                  KeSetEvent(v81 + 4, 0, 0);
                }
                v81 = *(struct _KEVENT **)&v81->Header.Lock;
                if ( v81 == (struct _KEVENT *)v79 )
                  goto LABEL_88;
                continue;
              }
            }
            while ( 2 )
            {
              if ( LODWORD(v78->Header.WaitListHead.Blink) == 4 )
              {
                if ( *(_DWORD *)(*(_QWORD *)&v78[1].Header.Lock + 4LL * LODWORD(v78[1].Header.WaitListHead.Blink) + 1144) >= *(_DWORD *)(*(_QWORD *)&v78[1].Header.Lock + 244LL) )
                  goto LABEL_115;
              }
              else if ( ((__int64)v78[1].Header.WaitListHead.Flink & 0x10) != 0 )
              {
                v97 = (int)v78[1].Header.WaitListHead.Blink->Flink;
                HIDWORD(v78[5].Header.WaitListHead.Blink) = v97;
                if ( v97 )
                {
LABEL_115:
                  v78 = *(struct _KEVENT **)&v78->Header.Lock;
                  if ( v78 == v76 )
                    goto LABEL_85;
                  continue;
                }
              }
              break;
            }
            ++v78[5].Header.LockNV;
            KeSetEvent(v78 + 4, 0, 0);
            goto LABEL_115;
          }
          while ( 2 )
          {
            if ( LODWORD(v75->Header.WaitListHead.Blink) == 4 )
            {
              if ( *(_DWORD *)(*(_QWORD *)&v75[1].Header.Lock + 4LL * LODWORD(v75[1].Header.WaitListHead.Blink) + 1144) >= *(_DWORD *)(*(_QWORD *)&v75[1].Header.Lock + 244LL) )
                goto LABEL_260;
            }
            else if ( ((__int64)v75[1].Header.WaitListHead.Flink & 0x10) != 0 )
            {
              v140 = (int)v75[1].Header.WaitListHead.Blink->Flink;
              HIDWORD(v75[5].Header.WaitListHead.Blink) = v140;
              if ( v140 )
              {
LABEL_260:
                v75 = *(struct _KEVENT **)&v75->Header.Lock;
                if ( v75 == v73 )
                  goto LABEL_84;
                continue;
              }
            }
            break;
          }
          ++v75[5].Header.LockNV;
          KeSetEvent(v75 + 4, 0, 0);
          goto LABEL_260;
        }
        while ( 2 )
        {
          if ( LODWORD(v72->Header.WaitListHead.Blink) == 4 )
          {
            if ( *(_DWORD *)(*(_QWORD *)&v72[1].Header.Lock + 4LL * LODWORD(v72[1].Header.WaitListHead.Blink) + 1144) >= *(_DWORD *)(*(_QWORD *)&v72[1].Header.Lock + 244LL) )
              goto LABEL_252;
          }
          else if ( ((__int64)v72[1].Header.WaitListHead.Flink & 0x10) != 0 )
          {
            v139 = (int)v72[1].Header.WaitListHead.Blink->Flink;
            HIDWORD(v72[5].Header.WaitListHead.Blink) = v139;
            if ( v139 )
            {
LABEL_252:
              v72 = *(struct _KEVENT **)&v72->Header.Lock;
              if ( v72 == (struct _KEVENT *)v70 )
                goto LABEL_83;
              continue;
            }
          }
          break;
        }
        ++v72[5].Header.LockNV;
        KeSetEvent(v72 + 4, 0, 0);
        goto LABEL_252;
      }
      while ( 2 )
      {
        if ( LODWORD(v69->Header.WaitListHead.Blink) == 4 )
        {
          if ( *(_DWORD *)(*(_QWORD *)&v69[1].Header.Lock + 4LL * LODWORD(v69[1].Header.WaitListHead.Blink) + 1144) >= *(_DWORD *)(*(_QWORD *)&v69[1].Header.Lock + 244LL) )
            goto LABEL_244;
        }
        else if ( ((__int64)v69[1].Header.WaitListHead.Flink & 0x10) != 0 )
        {
          v138 = (int)v69[1].Header.WaitListHead.Blink->Flink;
          HIDWORD(v69[5].Header.WaitListHead.Blink) = v138;
          if ( v138 )
          {
LABEL_244:
            v69 = *(struct _KEVENT **)&v69->Header.Lock;
            if ( v69 == v66 )
              goto LABEL_82;
            continue;
          }
        }
        break;
      }
      ++v69[5].Header.LockNV;
      KeSetEvent(v69 + 4, 0, 0);
      goto LABEL_244;
    }
  }
  return v13;
}
