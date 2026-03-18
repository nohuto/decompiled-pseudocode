/*
 * XREFs of VidSchiProcessDpcVSyncCookie @ 0x1C000C010
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0004570 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002DCC0 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0008190 (VidSchiCheckPendingDeviceCommand.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0008420 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0008470 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C000D710 (-VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_V.c)
 *     VidSchiCompleteFlipEntry @ 0x1C000D7B0 (VidSchiCompleteFlipEntry.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C000E260 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiUnwaitContext @ 0x1C000E794 (VidSchiUnwaitContext.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000ECEC (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0015CE8 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002B690 (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     McTemplateK0pqXR1qqqXR5 @ 0x1C002C714 (McTemplateK0pqXR1qqqXR5.c)
 *     McTemplateK0pqxqqipqx @ 0x1C002D448 (McTemplateK0pqxqqipqx.c)
 *     McTemplateK0qqqq @ 0x1C002DAA8 (McTemplateK0qqqq.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1C0031E10 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C003A4F4 (VidSchiCompletePendingFlipOnPlane.c)
 */

void __fastcall VidSchiProcessDpcVSyncCookie(struct _VIDSCH_VSYNC_COOKIE *a1)
{
  __int64 v1; // rbx
  struct _VIDSCH_VSYNC_COOKIE *v2; // rsi
  __int64 v3; // rdi
  char v4; // r15
  __int64 v5; // r14
  __int64 v6; // r13
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // r9
  int v12; // r15d
  __int64 v13; // r13
  __int64 v14; // r13
  unsigned int v15; // r12d
  unsigned int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // r15
  unsigned int v22; // r14d
  __int64 v23; // rax
  __int64 v24; // rdi
  int v25; // edx
  int v26; // r8d
  __int64 v27; // rdx
  __int64 v28; // rcx
  void (__fastcall *v29)(_QWORD, _QWORD); // rax
  unsigned int v30; // r10d
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r9
  unsigned int v35; // eax
  int v36; // eax
  int v37; // r8d
  int v38; // r8d
  int v39; // r10d
  unsigned int v40; // eax
  __int64 v41; // rdi
  bool v42; // zf
  int v43; // ecx
  __int64 v44; // rdx
  unsigned int v45; // ecx
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rcx
  _QWORD *v53; // rax
  _QWORD *v54; // rdx
  __int64 v55; // r8
  _QWORD *v56; // rdi
  _QWORD *v57; // rcx
  int v58; // r9d
  int v59; // r8d
  _QWORD **v60; // rax
  _QWORD *v61; // rdx
  unsigned int v62; // r8d
  struct _KEVENT *v63; // rcx
  _QWORD *v64; // rcx
  int v65; // r9d
  unsigned int v66; // r8d
  unsigned int v67; // eax
  int v68; // edx
  int v69; // eax
  unsigned int v70; // esi
  __int64 v71; // r14
  __int64 v72; // rdx
  __int64 v73; // rcx
  int v74; // eax
  LARGE_INTEGER *v75; // rdi
  DWORD v76; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  _DWORD *v78; // rcx
  int v79; // r10d
  unsigned int v80; // edx
  _DWORD *v81; // rax
  int v82; // eax
  int v83; // eax
  unsigned int v84; // ecx
  unsigned int v85; // eax
  int v86; // ecx
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rcx
  struct _KEVENT *v89; // rdi
  int v90; // ecx
  _QWORD *v91; // rcx
  int updated; // eax
  _QWORD *v93; // rcx
  struct _KEVENT *v94; // rsi
  _DWORD *v95; // rax
  const unsigned __int64 *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rax
  unsigned __int8 v100; // al
  struct _KEVENT *v101; // rdi
  int Flink; // ecx
  struct _KEVENT *v103; // rsi
  int v104; // ecx
  struct _KEVENT *v105; // rsi
  int v106; // ecx
  int v107; // ecx
  _QWORD *v108; // rdi
  int v109; // r8d
  __int64 v110; // rcx
  int v111; // eax
  unsigned int v112; // esi
  __int64 v113; // rcx
  __int64 v114; // rax
  _QWORD *v115; // rax
  struct _KEVENT *v116; // rdx
  _QWORD *v117; // rsi
  struct _KEVENT *v118; // rcx
  unsigned int v119; // eax
  unsigned int v120; // eax
  int v121; // ecx
  unsigned int v122; // eax
  __int64 *v123; // rdx
  __int64 v124; // rax
  int v125; // eax
  char i; // r9
  int v127; // eax
  void *v128; // rdx
  _QWORD *v129; // rax
  char v130; // [rsp+60h] [rbp-A0h]
  KIRQL v131; // [rsp+60h] [rbp-A0h]
  KIRQL v132; // [rsp+60h] [rbp-A0h]
  KIRQL v133; // [rsp+60h] [rbp-A0h]
  KIRQL v134; // [rsp+60h] [rbp-A0h]
  KIRQL v135; // [rsp+60h] [rbp-A0h]
  _QWORD **v136; // [rsp+68h] [rbp-98h]
  struct _KEVENT *v137; // [rsp+68h] [rbp-98h]
  struct _KEVENT *v138; // [rsp+68h] [rbp-98h]
  struct _KEVENT *v139; // [rsp+68h] [rbp-98h]
  struct _KEVENT *v140; // [rsp+68h] [rbp-98h]
  struct _KEVENT *v141; // [rsp+68h] [rbp-98h]
  _DWORD *v142; // [rsp+68h] [rbp-98h]
  const unsigned __int64 *v143; // [rsp+68h] [rbp-98h]
  _QWORD *v144; // [rsp+68h] [rbp-98h]
  bool v145; // [rsp+70h] [rbp-90h] BYREF
  char v146; // [rsp+71h] [rbp-8Fh]
  unsigned int v147; // [rsp+74h] [rbp-8Ch]
  int v148; // [rsp+78h] [rbp-88h]
  int v149; // [rsp+7Ch] [rbp-84h]
  _QWORD *v150; // [rsp+80h] [rbp-80h]
  PKSPIN_LOCK SpinLock; // [rsp+88h] [rbp-78h]
  __int64 v152; // [rsp+90h] [rbp-70h]
  int v153; // [rsp+98h] [rbp-68h]
  __int64 v154; // [rsp+A0h] [rbp-60h]
  int v155; // [rsp+A8h] [rbp-58h]
  _QWORD *v156; // [rsp+B0h] [rbp-50h]
  int v157; // [rsp+B8h] [rbp-48h]
  __int64 v158; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v159; // [rsp+C8h] [rbp-38h]
  struct VIDSCH_FLIP_QUEUE_ENTRY *v160; // [rsp+D0h] [rbp-30h]
  struct _VIDSCH_VSYNC_COOKIE *v161; // [rsp+D8h] [rbp-28h]
  unsigned int v162; // [rsp+E0h] [rbp-20h]
  __int64 v163; // [rsp+E8h] [rbp-18h]
  __int64 v164; // [rsp+F0h] [rbp-10h]
  _QWORD v165[2]; // [rsp+F8h] [rbp-8h] BYREF
  char v166; // [rsp+108h] [rbp+8h]
  int v167; // [rsp+110h] [rbp+10h]
  int v168; // [rsp+114h] [rbp+14h]
  int v169; // [rsp+118h] [rbp+18h]
  int v170; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v171; // [rsp+120h] [rbp+20h]
  __int64 v172; // [rsp+128h] [rbp+28h]
  __int64 v173; // [rsp+130h] [rbp+30h]
  unsigned __int64 v174; // [rsp+138h] [rbp+38h]
  int v175; // [rsp+140h] [rbp+40h]
  int v176; // [rsp+144h] [rbp+44h]
  __int64 v177; // [rsp+148h] [rbp+48h]
  unsigned int v178; // [rsp+150h] [rbp+50h]
  int v179; // [rsp+154h] [rbp+54h]
  __int64 v180; // [rsp+158h] [rbp+58h]
  __int64 v181; // [rsp+160h] [rbp+60h]
  __int64 v182; // [rsp+168h] [rbp+68h]
  struct _KLOCK_QUEUE_HANDLE v183; // [rsp+170h] [rbp+70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v184; // [rsp+188h] [rbp+88h] BYREF
  struct _KLOCK_QUEUE_HANDLE v185; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v186; // [rsp+1B8h] [rbp+B8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v187; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v188; // [rsp+1E8h] [rbp+E8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v189; // [rsp+200h] [rbp+100h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+218h] [rbp+118h] BYREF
  _QWORD v191[10]; // [rsp+230h] [rbp+130h] BYREF
  _QWORD v192[10]; // [rsp+280h] [rbp+180h] BYREF

  v1 = *((_QWORD *)a1 + 6);
  v2 = a1;
  v161 = a1;
  v155 = 0;
  memset(v192, 0, sizeof(v192));
  v3 = *((unsigned int *)v2 + 22);
  v149 = v3;
  if ( (_DWORD)v3 == -1 || (unsigned int)v3 >= *(_DWORD *)(v1 + 40) )
    return;
  _mm_lfence();
  v4 = 0;
  v5 = *(_QWORD *)(v1 + 2576 + 8 * v3);
  v163 = v5;
  v146 = 0;
  v6 = (unsigned int)v3;
  v171 = (__int64 *)(v1 + 2576 + 8 * v3);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 1648), &LockHandle);
  v166 = 0;
  v165[1] = v165;
  v165[0] = v165;
  if ( (*((_BYTE *)v2 + 104) & 1) == 0 )
  {
    v8 = *(_QWORD *)(v5 + 33232);
    if ( !v8 )
    {
      *(_QWORD *)(v5 + 33248) = 0LL;
      *(_QWORD *)(v5 + 33232) = 1LL;
      _InterlockedExchange((volatile __int32 *)(v1 + 1796), 1);
      goto LABEL_12;
    }
    v10 = *((_QWORD *)v2 + 10) - *(_QWORD *)(v5 + 33184);
    v9 = *((_QWORD *)v2 + 7) - *(_QWORD *)(v5 + 33192);
    if ( *((_QWORD *)v2 + 10) != *(_QWORD *)(v5 + 33184) )
    {
      if ( v8 <= 3 )
      {
        v8 += v10;
        v87 = v9 + *(_QWORD *)(v5 + 33248);
        *(_QWORD *)(v5 + 33232) = v8;
        *(_QWORD *)(v5 + 33248) = v87;
        if ( v8 <= 3 )
          goto LABEL_138;
        v88 = v87 / (v8 - 1);
        v7 = v88 / 0xA;
        *(_QWORD *)(v5 + 33256) = v88 / 0xA;
        _m_prefetchw((const void *)(v5 + 33240));
        while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 33240), v88, *(_QWORD *)(v5 + 33240)) != v88 )
          ;
        v8 = *(_QWORD *)(v5 + 33232);
      }
      else
      {
        if ( v10 != 1 )
          v9 /= v10;
        v11 = *(_QWORD *)(v5 + 33256);
        v7 = *(_QWORD *)(v5 + 33240);
        *(_QWORD *)(v5 + 33272) = v9;
        if ( v9 > v7 + v11 || (v7 -= v11, v9 < v7) )
        {
          ++*(_QWORD *)(v5 + 33264);
          *(_QWORD *)(v5 + 33232) = 0LL;
          goto LABEL_138;
        }
      }
    }
    if ( v8 > 3 )
    {
LABEL_12:
      *(_QWORD *)(v5 + 33184) = *((_QWORD *)v2 + 10);
      *(_QWORD *)(v5 + 33192) = *((_QWORD *)v2 + 7);
      *(_QWORD *)(v5 + 33200) = *((_QWORD *)v2 + 8);
      *(_QWORD *)(v5 + 33208) = *((_QWORD *)v2 + 9);
      goto LABEL_13;
    }
LABEL_138:
    _InterlockedExchange((volatile __int32 *)(v1 + 1796), 1);
    goto LABEL_12;
  }
LABEL_13:
  if ( *(int *)(v5 + 4) >= 4 || *(_BYTE *)(v1 + 144) )
  {
    v12 = -1;
    v157 = -1;
    LODWORD(v7) = 4673;
    while ( v12 != *(_DWORD *)(v1 + 140) )
    {
      v145 = 0;
      v13 = *v171;
      if ( v12 == -1 )
        v14 = *(_QWORD *)(v13 + 24);
      else
        v14 = *(_QWORD *)(v13 + 8LL * v12 + 32);
      if ( v14 )
      {
        v15 = *(_DWORD *)(v14 + 48);
        v148 = 0;
        v8 = 0LL;
        v159 = 0LL;
        if ( v15 != (((unsigned __int8)*(_DWORD *)(v14 + 44) - 1) & 0x3F) )
        {
          while ( 1 )
          {
            v160 = (struct VIDSCH_FLIP_QUEUE_ENTRY *)(1312LL * v15 + v14 + 80);
            v16 = *((_DWORD *)v160 + 263);
            if ( v16 <= 0xC && _bittest((const int *)&v7, v16) )
              goto LABEL_22;
            if ( v16 != 5 && v16 != 15 )
              goto LABEL_23;
            if ( !*(_BYTE *)(v1 + 144) && !*((_QWORD *)v2 + 14) )
              VidSchiQueueDeferredVisibilityWorkItem((struct _VIDSCH_PRESENT_INFO *)v5, (struct _VIDSCH_GLOBAL *)v1);
            if ( VidSchiIsExpectedVSyncCookie((struct _VIDSCH_GLOBAL *)v1, v160, v2) )
              break;
            LODWORD(v7) = 4673;
LABEL_22:
            v15 = ((_BYTE)v15 - 1) & 0x3F;
            if ( v15 == (((unsigned __int8)*(_DWORD *)(v14 + 44) - 1) & 0x3F) )
              goto LABEL_23;
          }
          v173 = v1;
          v30 = ((_BYTE)v15 + 1) & 0x3F;
          v176 = 0;
          v179 = 0;
          v31 = *((_QWORD *)v160 + 130);
          v180 = *(_QWORD *)(v5 + 33184);
          v181 = *(_QWORD *)(v5 + 33192);
          v182 = *(_QWORD *)(v5 + 33200);
          v159 = v31;
          v174 = v31;
          v175 = v3;
          v177 = v14;
          v32 = *(_QWORD *)(8LL * (unsigned int)v3 + 2576 + v1);
          v164 = 8LL * (unsigned int)v3 + 2576;
          v33 = *(unsigned int *)(v14 + 44);
          v178 = v15;
          v158 = v32;
          v160 = 0LL;
          v153 = v33;
          v162 = v30;
          while ( (_DWORD)v33 != v30 )
          {
            v34 = 1312 * v33 + v14 + 80;
            v172 = v34;
            v35 = *(_DWORD *)(v34 + 1052);
            if ( v35 <= 0xC )
            {
              v86 = 4673;
              if ( _bittest(&v86, v35) )
                goto LABEL_112;
            }
            *(_QWORD *)(v34 + 1128) = v180;
            *(_QWORD *)(v34 + 1112) = v181;
            *(_QWORD *)(v34 + 1120) = v182;
            v36 = *(_DWORD *)(v34 + 1136);
            *(_DWORD *)(v34 + 1052) = 11;
            if ( (v36 & 0x10) != 0 )
              v37 = (**(_DWORD **)(v34 + 1184) | (**(_DWORD **)(v34 + 1184) >> 10)) & 0x3FF;
            else
              v37 = (1 << *(_DWORD *)(v1 + 140)) - 1;
            LODWORD(v160) = v37;
            *(_DWORD *)(v32 + 2344) &= ~v37;
            HIDWORD(v160) = *(_DWORD *)(v34 + 1048);
            if ( (*(_DWORD *)(v34 + 1136) & 0x10) != 0 )
            {
              v95 = *(_DWORD **)(v34 + 1184);
              v38 = *v95 >> 10;
              LOWORD(v38) = *(_WORD *)(v32 + 33152) & (*v95 | v38) & 0x3FF;
            }
            else
            {
              v38 = *(unsigned __int16 *)(v32 + 33152);
            }
            v148 = v38;
            LOWORD(v39) = 0;
            v147 = 0;
            LOWORD(v40) = v38;
            v130 = 0;
            if ( (_WORD)v38 )
            {
              v41 = v158;
              do
              {
                v42 = !_BitScanForward((unsigned int *)&v43, (unsigned __int16)v40);
                LODWORD(v150) = (unsigned __int16)v40;
                v167 = v43;
                if ( v42 )
                  LOBYTE(v43) = -1;
                v44 = (char)v43;
                v45 = 0;
                LODWORD(SpinLock) = 0;
                LODWORD(v154) = v44;
                if ( *(_WORD *)(v41 + 33154) )
                {
                  v130 = 1;
                  v46 = v44 << 6;
                  do
                  {
                    v47 = v41 + 48 * (v46 + v45);
                    v156 = (_QWORD *)v47;
                    v48 = *(_QWORD *)(v47 + 2440);
                    v49 = *(_QWORD *)(v48 + 24);
                    if ( v49 )
                    {
                      v96 = (const unsigned __int64 *)(v47 + 2472);
                      v143 = v96;
                      if ( *v96
                        && (int)VidSchiSignalSyncObjectsFromCpu(
                                  (struct HwQueueStagingList *)v165,
                                  1u,
                                  (struct _VIDSCH_SYNC_OBJECT **)(v49 + 8),
                                  0,
                                  v96) < 0 )
                      {
                        v99 = WdLogNewEntry5_WdAssertion(v98, v97);
                        *(_QWORD *)(v99 + 24) = *(_QWORD *)(*(_QWORD *)(v156[305] + 24LL) + 8LL);
                        *(_QWORD *)(v99 + 32) = *v143;
                        WdLogEvent5_WdAssertion(v99);
                      }
                    }
                    else
                    {
                      v50 = *(_QWORD *)(v48 + 16);
                      if ( v50 )
                        _InterlockedDecrement((volatile signed __int32 *)(v50 + 8));
                    }
                    VidSchiCheckPendingDeviceCommand(*(_QWORD **)(v41 + 16));
                    v51 = v156;
                    LODWORD(SpinLock) = (_DWORD)SpinLock + 1;
                    v45 = (unsigned int)SpinLock;
                    v156[304] = 0LL;
                    v51[305] = 0LL;
                    *((_WORD *)v51 + 1232) = 0;
                    v51[307] = 0LL;
                  }
                  while ( v45 < *(unsigned __int16 *)(v41 + 33154) );
                  LOBYTE(v44) = v154;
                  LOWORD(v39) = v147;
                }
                *(_WORD *)(v41 + 33152) &= ~(1 << v44);
                v39 = (unsigned __int16)v39 | (1 << v44);
                v40 = (unsigned int)v150 & ~(1 << v44);
                v147 = v39;
              }
              while ( (_WORD)v40 );
              v2 = v161;
              v5 = v163;
              v12 = v157;
              LODWORD(v3) = v149;
              v32 = v158;
              if ( v130 )
              {
                v52 = *(_QWORD **)(v158 + 16);
                v156 = v52;
                if ( v52 )
                {
                  v53 = (_QWORD *)v52[9];
                  v54 = v52 + 9;
                  v150 = v52 + 9;
                  LODWORD(SpinLock) = 0;
                  v55 = 0LL;
                  if ( v53 != v52 + 9 )
                  {
                    v56 = v53;
                    do
                    {
                      v57 = v56 - 3;
                      v58 = 0;
                      if ( (v56[20] & 0x10) != 0 )
                      {
                        *((_DWORD *)v57 + 46) &= ~0x10u;
                        v100 = VidSchiUnwaitContext(v57, 20946LL, v55, 0LL);
                        v54 = v150;
                        LODWORD(v55) = (_DWORD)SpinLock;
                        v58 = v100;
                      }
                      v56 = (_QWORD *)*v56;
                      v55 = v58 | (unsigned int)v55;
                      LODWORD(SpinLock) = v55;
                    }
                    while ( v56 != v54 );
                    LODWORD(v3) = v149;
                    v52 = v156;
                  }
                  v59 = 0;
                  v60 = (_QWORD **)(v52[4] + 2872LL);
                  LODWORD(v154) = 0;
                  v136 = v60;
                  while ( 1 )
                  {
                    v61 = *v60;
                    if ( *v60 == v60 )
                      break;
                    if ( (_QWORD **)v61[1] != v60 || (v91 = (_QWORD *)*v61, *(_QWORD **)(*v61 + 8LL) != v61) )
                      __fastfail(3u);
                    *v60 = v91;
                    v91[1] = v60;
                    v61[1] = 0LL;
                    *v61 = 0LL;
                    updated = VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v61 - 5));
                    v59 = updated | v154;
                    v60 = v136;
                    LODWORD(v154) = v59;
                  }
                  v32 = v158;
                  v62 = (unsigned int)SpinLock | v59;
                  LOWORD(v39) = v147;
                  v52 = *(_QWORD **)(v158 + 16);
                  v156 = v52;
                }
                else
                {
                  v62 = 0;
                }
                LODWORD(v154) = v62;
                if ( v52 )
                {
                  v150 = (_QWORD *)v52[4];
                  v137 = (struct _KEVENT *)(v52 + 15);
                  v131 = KfRaiseIrql(2u);
                  SpinLock = v150 + 208;
                  KeAcquireInStackQueuedSpinLockAtDpcLevel(v150 + 208, &v183);
                  if ( *(struct _KEVENT **)&v137->Header.Lock == v137 )
                    goto LABEL_102;
                  v101 = *(struct _KEVENT **)&v137->Header.Lock;
                  while ( 1 )
                  {
                    if ( LODWORD(v101->Header.WaitListHead.Blink) == 4 )
                    {
                      if ( *(_DWORD *)(*(_QWORD *)&v101[1].Header.Lock
                                     + 4LL * LODWORD(v101[1].Header.WaitListHead.Blink)
                                     + 1144) >= *(_DWORD *)(*(_QWORD *)&v101[1].Header.Lock + 244LL) )
                        goto LABEL_183;
                    }
                    else if ( ((__int64)v101[1].Header.WaitListHead.Flink & 0x10) != 0 )
                    {
                      Flink = (int)v101[1].Header.WaitListHead.Blink->Flink;
                      HIDWORD(v101[5].Header.WaitListHead.Blink) = Flink;
                      if ( Flink )
                        goto LABEL_183;
                    }
                    ++v101[5].Header.LockNV;
                    KeSetEvent(v101 + 4, 0, 0);
LABEL_183:
                    v101 = *(struct _KEVENT **)&v101->Header.Lock;
                    if ( v101 == v137 )
                    {
                      LODWORD(v3) = v149;
LABEL_102:
                      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v183);
                      KeLowerIrql(v131);
                      v138 = (struct _KEVENT *)(v156 + 17);
                      v132 = KfRaiseIrql(2u);
                      KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &v184);
                      if ( *(struct _KEVENT **)&v138->Header.Lock == v138 )
                        goto LABEL_103;
                      v103 = *(struct _KEVENT **)&v138->Header.Lock;
LABEL_186:
                      if ( LODWORD(v103->Header.WaitListHead.Blink) == 4 )
                      {
                        if ( *(_DWORD *)(*(_QWORD *)&v103[1].Header.Lock
                                       + 4LL * LODWORD(v103[1].Header.WaitListHead.Blink)
                                       + 1144) >= *(_DWORD *)(*(_QWORD *)&v103[1].Header.Lock + 244LL) )
                          goto LABEL_192;
                      }
                      else if ( ((__int64)v103[1].Header.WaitListHead.Flink & 0x10) != 0 )
                      {
                        v104 = (int)v103[1].Header.WaitListHead.Blink->Flink;
                        HIDWORD(v103[5].Header.WaitListHead.Blink) = v104;
                        if ( v104 )
                        {
LABEL_192:
                          v103 = *(struct _KEVENT **)&v103->Header.Lock;
                          if ( v103 == v138 )
                          {
                            v2 = v161;
LABEL_103:
                            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v184);
                            KeLowerIrql(v132);
                            v139 = (struct _KEVENT *)(v150 + 199);
                            v133 = KfRaiseIrql(2u);
                            KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &v185);
                            if ( *(struct _KEVENT **)&v139->Header.Lock == v139 )
                              goto LABEL_104;
                            v105 = *(struct _KEVENT **)&v139->Header.Lock;
LABEL_195:
                            if ( LODWORD(v105->Header.WaitListHead.Blink) == 4 )
                            {
                              if ( *(_DWORD *)(*(_QWORD *)&v105[1].Header.Lock
                                             + 4LL * LODWORD(v105[1].Header.WaitListHead.Blink)
                                             + 1144) >= *(_DWORD *)(*(_QWORD *)&v105[1].Header.Lock + 244LL) )
                                goto LABEL_201;
                            }
                            else if ( ((__int64)v105[1].Header.WaitListHead.Flink & 0x10) != 0 )
                            {
                              v106 = (int)v105[1].Header.WaitListHead.Blink->Flink;
                              HIDWORD(v105[5].Header.WaitListHead.Blink) = v106;
                              if ( v106 )
                              {
LABEL_201:
                                v105 = *(struct _KEVENT **)&v105->Header.Lock;
                                if ( v105 == v139 )
                                {
                                  v2 = v161;
LABEL_104:
                                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v185);
                                  KeLowerIrql(v133);
                                  v140 = (struct _KEVENT *)(v150 + 197);
                                  v134 = KfRaiseIrql(2u);
                                  KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &v186);
                                  if ( *(struct _KEVENT **)&v140->Header.Lock == v140 )
                                    goto LABEL_105;
                                  v89 = *(struct _KEVENT **)&v140->Header.Lock;
LABEL_151:
                                  if ( LODWORD(v89->Header.WaitListHead.Blink) == 4 )
                                  {
                                    if ( *(_DWORD *)(*(_QWORD *)&v89[1].Header.Lock
                                                   + 4LL * LODWORD(v89[1].Header.WaitListHead.Blink)
                                                   + 1144) >= *(_DWORD *)(*(_QWORD *)&v89[1].Header.Lock + 244LL) )
                                      goto LABEL_154;
                                  }
                                  else if ( ((__int64)v89[1].Header.WaitListHead.Flink & 0x10) != 0 )
                                  {
                                    v90 = (int)v89[1].Header.WaitListHead.Blink->Flink;
                                    HIDWORD(v89[5].Header.WaitListHead.Blink) = v90;
                                    if ( v90 )
                                    {
LABEL_154:
                                      v89 = *(struct _KEVENT **)&v89->Header.Lock;
                                      if ( v89 == v140 )
                                      {
                                        LODWORD(v3) = v149;
LABEL_105:
                                        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v186);
                                        KeLowerIrql(v134);
                                        v63 = (struct _KEVENT *)v150;
                                        v150[178] = MEMORY[0xFFFFF78000000320];
                                        KeSetEvent(v63 + 58, 0, 0);
                                        v64 = v150;
                                        v150[192] = MEMORY[0xFFFFF78000000320];
                                        KeSetEvent((PRKEVENT)(v64 + 188), 0, 0);
                                        if ( (_DWORD)v154 )
                                        {
                                          v93 = v150;
                                          v150[143] = MEMORY[0xFFFFF78000000320];
                                          KeSetEvent((PRKEVENT)(v93 + 139), 0, 0);
                                        }
                                        v141 = (struct _KEVENT *)(v150 + 201);
                                        v135 = KfRaiseIrql(2u);
                                        KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &v187);
                                        if ( *(struct _KEVENT **)&v141->Header.Lock == v141 )
                                        {
LABEL_108:
                                          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v187);
                                          KeLowerIrql(v135);
                                          v32 = v158;
                                          if ( *(_WORD *)(v158 + 33156) )
                                          {
                                            v108 = v150;
                                            LOWORD(v109) = v148;
                                            do
                                            {
                                              v109 = (unsigned __int16)v109;
                                              LOBYTE(v110) = -1;
                                              v42 = !_BitScanForward((unsigned int *)&v111, (unsigned __int16)v109);
                                              LODWORD(v150) = (unsigned __int16)v109;
                                              v112 = 0;
                                              v168 = v111;
                                              if ( !v42 )
                                                LOBYTE(v110) = v111;
                                              v148 = 0;
                                              v110 = (char)v110;
                                              LODWORD(SpinLock) = (char)v110;
                                              if ( *(_WORD *)(v32 + 33154) )
                                              {
                                                v113 = (v110 << 6) + 51;
                                                v154 = v113;
                                                do
                                                {
                                                  v156 = (_QWORD *)(v32 + 48 * (v113 + v112));
                                                  v114 = *v156;
                                                  v152 = v114;
                                                  if ( v114 )
                                                  {
                                                    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v114 + 32), &v188);
                                                    v115 = *(_QWORD **)(v152 + 16);
                                                    v144 = v115;
                                                    if ( v115 != (_QWORD *)(v152 + 16) )
                                                    {
                                                      v116 = (struct _KEVENT *)(v108 + 139);
                                                      v117 = (_QWORD *)(v152 + 16);
                                                      do
                                                      {
                                                        v118 = (struct _KEVENT *)v115[2];
                                                        if ( v118 != v116 )
                                                        {
                                                          KeSetEvent(v118, 0, 0);
                                                          v115 = v144;
                                                          v116 = (struct _KEVENT *)(v108 + 139);
                                                        }
                                                        v115 = (_QWORD *)*v115;
                                                        v144 = v115;
                                                      }
                                                      while ( v115 != v117 );
                                                      v112 = v148;
                                                    }
                                                    KeReleaseInStackQueuedSpinLock(&v188);
                                                    v32 = v158;
                                                    v113 = v154;
                                                    *v156 = 0LL;
                                                  }
                                                  v119 = *(unsigned __int16 *)(v32 + 33154);
                                                  v148 = ++v112;
                                                }
                                                while ( v112 < v119 );
                                                v109 = (int)v150;
                                                LOBYTE(v110) = (_BYTE)SpinLock;
                                              }
                                              v109 &= ~(1 << v110);
                                            }
                                            while ( (_WORD)v109 );
                                            v2 = v161;
                                            v5 = v163;
                                            LODWORD(v3) = v149;
                                          }
                                          LOWORD(v39) = v147;
                                          break;
                                        }
                                        v94 = *(struct _KEVENT **)&v141->Header.Lock;
                                        while ( 2 )
                                        {
                                          if ( LODWORD(v94->Header.WaitListHead.Blink) == 4 )
                                          {
                                            if ( *(_DWORD *)(*(_QWORD *)&v94[1].Header.Lock
                                                           + 4LL * LODWORD(v94[1].Header.WaitListHead.Blink)
                                                           + 1144) < *(_DWORD *)(*(_QWORD *)&v94[1].Header.Lock + 244LL) )
                                              goto LABEL_164;
                                          }
                                          else if ( ((__int64)v94[1].Header.WaitListHead.Flink & 0x10) == 0
                                                 || (v107 = (int)v94[1].Header.WaitListHead.Blink->Flink,
                                                     (HIDWORD(v94[5].Header.WaitListHead.Blink) = v107) == 0) )
                                          {
LABEL_164:
                                            ++v94[5].Header.LockNV;
                                            KeSetEvent(v94 + 4, 0, 0);
                                          }
                                          v94 = *(struct _KEVENT **)&v94->Header.Lock;
                                          if ( v94 == v141 )
                                          {
                                            v2 = v161;
                                            goto LABEL_108;
                                          }
                                          continue;
                                        }
                                      }
                                      goto LABEL_151;
                                    }
                                  }
                                  ++v89[5].Header.LockNV;
                                  KeSetEvent(v89 + 4, 0, 0);
                                  goto LABEL_154;
                                }
                                goto LABEL_195;
                              }
                            }
                            ++v105[5].Header.LockNV;
                            KeSetEvent(v105 + 4, 0, 0);
                            goto LABEL_201;
                          }
                          goto LABEL_186;
                        }
                      }
                      ++v103[5].Header.LockNV;
                      KeSetEvent(v103 + 4, 0, 0);
                      goto LABEL_192;
                    }
                  }
                }
                *(_WORD *)(v32 + 33156) &= ~(_WORD)v39;
              }
            }
            VidSchiReferenceDisplayingAllocationsForThisEntry(v165, v1, v32, v172);
            v32 = v158;
            v30 = v162;
LABEL_112:
            v33 = ((_BYTE)v153 + 1) & 0x3F;
            v153 = v33;
          }
          v65 = *(_DWORD *)(v14 + 48);
          v66 = v30;
          v67 = *(_DWORD *)(v14 + 44);
          v147 = v67;
          v68 = ((_BYTE)v65 + 1) & 0x3F;
          if ( v30 != v68 )
          {
            while ( 1 )
            {
              v120 = *(_DWORD *)(1312LL * v30 + v14 + 1132);
              if ( v120 > 0xC )
                break;
              v121 = 4673;
              if ( !_bittest(&v121, v120) )
                break;
              v30 = ((_BYTE)v30 + 1) & 0x3F;
              if ( v30 == v68 )
                goto LABEL_231;
            }
            v66 = v30;
LABEL_231:
            v67 = v147;
          }
          *(_DWORD *)(v14 + 44) = v66;
          if ( v65 == v15 )
            *(_DWORD *)(v14 + 48) = v66;
          v148 = VidSchiCompleteFlipEntry((unsigned int)v165, v1, v3, v14, v67, v15, 0, 0LL);
          if ( v148 )
          {
            v69 = v155;
            v146 = 1;
            v192[v155] = v160;
            v155 = v69 + 1;
          }
          if ( v147 <= v15 )
          {
            v70 = v147;
            v71 = v164;
            do
            {
              v72 = *(_QWORD *)(v71 + v1);
              v142 = (_DWORD *)v72;
              v73 = v14 + 1312LL * v70;
              v164 = v73;
              if ( (*(_DWORD *)(v73 + 1216) & 0x10) != 0 )
                v74 = (**(_DWORD **)(v73 + 1264) | (**(_DWORD **)(v73 + 1264) >> 10)) & 0x3FF;
              else
                v74 = (1 << *(_DWORD *)(v1 + 140)) - 1;
              v153 = v74;
              v75 = (LARGE_INTEGER *)(*(_QWORD *)(v72 + 120) + 72LL * *(unsigned int *)(v72 + 128));
              memset(v75, 0, 0x48uLL);
              v76 = v153;
              v142[32] = (v142[32] + 1) & (v142[28] - 1);
              v75->LowPart = 3;
              v75[2].LowPart = v76;
              BYTE4(v75[2].QuadPart) = *(_BYTE *)(v14 + 56);
              v75[3].LowPart = v70;
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
              v78 = (_DWORD *)v164;
              ++v70;
              v75[1] = PerformanceCounter;
              LOBYTE(v75[4].LowPart) = (v78[304] & 0x20) != 0;
              v75[4].HighPart = v78[283];
              v75[3].HighPart = v78[284];
              v75[5].HighPart = v142[587];
              v75[5].LowPart = v142[586];
              v75[6].LowPart = *(_DWORD *)(v14 + 32);
              v75[6].HighPart = *(_DWORD *)(v14 + 36);
              v75[7].LowPart = *(_DWORD *)(v14 + 40);
              v75[7].HighPart = *(_DWORD *)(v14 + 44);
              v75[8].LowPart = *(_DWORD *)(v14 + 48);
              v75[8].HighPart = *(_DWORD *)(v14 + 52);
            }
            while ( v70 <= v15 );
            v2 = v161;
            v5 = v163;
            v12 = v157;
            LODWORD(v3) = v149;
          }
LABEL_23:
          v8 = v159;
        }
        if ( *(_DWORD *)(v5 + 2332) && *(_BYTE *)(v5 + 66436) )
        {
          VidSchiExecuteNextFlipQueueEntry(
            (struct HwQueueStagingList *)v165,
            (struct _VIDSCH_GLOBAL *)v1,
            &v145,
            v3,
            (struct VIDSCH_FLIP_QUEUE *)v14);
          v8 = v159;
        }
        if ( v8 )
        {
          VidSchiCheckPendingDeviceCommand((_QWORD *)v8);
          v79 = v148;
          v8 = *(_QWORD *)(v1 + 8LL * (unsigned int)v3 + 5792);
          v80 = -v148;
          v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v159 + 40) + 24LL)
                                     + 8LL * *(unsigned int *)(*(_QWORD *)(v159 + 32) + 4LL))
                         + 8LL * (unsigned int)v3
                         + 88);
          _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), -v148);
          v81 = *(_DWORD **)(v1 + 8LL * (unsigned int)v3 + 5792);
          *v81 += v79;
          _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), v80);
          *(_DWORD *)v9 += v79;
        }
        if ( v145 )
          VidSchiCompletePendingFlipOnPlane((unsigned int)v165, v1, v3, v14, 9);
        LODWORD(v7) = 4673;
      }
      v157 = ++v12;
    }
    v4 = v146;
    v6 = (unsigned int)v3;
  }
  if ( !bTracingEnabled )
    goto LABEL_42;
  if ( (*((_BYTE *)v2 + 104) & 1) == 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqxqqipqx(
      v8,
      v7,
      v9,
      *(_QWORD *)(v1 + 16),
      *((_DWORD *)v2 + 23),
      *((_QWORD *)v2 + 14),
      *((_DWORD *)v2 + 22),
      *((_DWORD *)v2 + 20),
      *((_QWORD *)v2 + 7),
      0,
      0,
      v192[0]);
  memset(v191, 0, sizeof(v191));
  v19 = *((_DWORD *)v2 + 4);
  switch ( v19 )
  {
    case 10:
      v122 = *(_DWORD *)(v1 + 140);
      if ( v122 )
      {
        v17 = v191;
        v18 = v122;
        v123 = (__int64 *)((char *)v2 + 112);
        do
        {
          v124 = *v123;
          v123 += 2;
          *v17++ = v124;
          --v18;
        }
        while ( v18 );
      }
      break;
    case 3:
      v191[0] = *((_QWORD *)v2 + 14);
      break;
    case 7:
      LODWORD(v18) = *((_DWORD *)v2 + 25) & 0x3FF;
      LODWORD(v17) = -1;
      v42 = !_BitScanForward((unsigned int *)&v125, v18);
      v169 = v125;
      if ( !v42 )
        LODWORD(v17) = (unsigned __int8)v125;
      for ( i = 0; (_DWORD)v18; ++i )
      {
        v191[(char)v17] = *((_QWORD *)v2 + 5 * i + 14);
        v127 = 1 << (char)v17;
        LODWORD(v17) = -1;
        LODWORD(v18) = ~v127 & v18;
        v42 = !_BitScanForward((unsigned int *)&v127, v18);
        v170 = v127;
        if ( !v42 )
          LODWORD(v17) = (unsigned __int8)v127;
      }
      break;
  }
  if ( (*((_BYTE *)v2 + 104) & 1) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
      goto LABEL_42;
    v128 = &EventHSyncDPCMultiPlane;
LABEL_249:
    McTemplateK0pqXR1qqqXR5(
      (_DWORD)v17,
      (_DWORD)v128,
      v18,
      *(_QWORD *)(v1 + 16),
      *(_DWORD *)(v1 + 140),
      (__int64)v191,
      *((_DWORD *)v2 + 22),
      *((_DWORD *)v2 + 20),
      v155,
      (__int64)v192);
    goto LABEL_42;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v128 = &EventVSyncDPCMultiPlane;
    goto LABEL_249;
  }
LABEL_42:
  if ( v4 )
    goto LABEL_46;
  if ( *(_BYTE *)(v1 + 45) != 1 || !*(_DWORD *)(v1 + 1808) )
    goto LABEL_48;
  if ( _InterlockedExchange((volatile __int32 *)(v1 + 1796), 0)
    || *(_DWORD *)(*(_QWORD *)(v1 + 16) + 2584LL)
    || *(_DWORD *)(v1 + 720)
    || *(_DWORD *)(v1 + 732)
    || *(_DWORD *)(v1 + 1748) )
  {
LABEL_46:
    *(_DWORD *)(v1 + 1804) = -1;
    v20 = 0;
LABEL_47:
    *(_DWORD *)(v1 + 1800) = v20;
    goto LABEL_48;
  }
  if ( (*((_BYTE *)v2 + 104) & 1) == 0 )
  {
    v82 = *(_DWORD *)(v1 + 1804);
    if ( v82 == -1 )
    {
      *(_DWORD *)(v1 + 1804) = v3;
    }
    else if ( v82 != (_DWORD)v3 )
    {
      goto LABEL_48;
    }
    v83 = *(_DWORD *)(v1 + 1800);
    if ( v83 != -1 )
    {
      v84 = *(_DWORD *)(v1 + 1808);
      v85 = v83 + 1;
      *(_DWORD *)(v1 + 1800) = v85;
      if ( v85 == v84 )
      {
        if ( !_InterlockedExchange((volatile __int32 *)(v1 + 1792), 1) )
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(v1 + 1760), CriticalWorkQueue);
        goto LABEL_48;
      }
      if ( v85 > v84 )
      {
        v20 = v84 + 1;
        goto LABEL_47;
      }
    }
LABEL_48:
    if ( (*((_BYTE *)v2 + 104) & 1) == 0 )
    {
      v21 = *(_QWORD *)(v1 + 16);
      v22 = *(_DWORD *)(v5 + 33184);
      v23 = *(_QWORD *)(v21 + 2552);
      if ( (unsigned int)v3 < *(_DWORD *)(v23 + 80) )
      {
        v24 = *(_QWORD *)(v23 + 112) + 3968 * v6;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v24 + 960), &v189);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qqqq(
            *(unsigned __int8 *)(v24 + 952),
            v25,
            v26,
            *(_DWORD *)(v24 + 944),
            v22,
            *(_BYTE *)(v24 + 952),
            *(_DWORD *)(v21 + 2584));
        KePulseEvent((PRKEVENT)(v24 + 912), 0, 0);
        if ( *(_QWORD *)(v24 + 936) )
        {
          *(_DWORD *)(v24 + 948) = v22;
          if ( *(_DWORD *)(v24 + 944) <= v22 )
          {
            if ( *(_BYTE *)(v24 + 952) )
            {
              *(_BYTE *)(v24 + 952) = 0;
              if ( *(_QWORD *)(v21 + 2560) )
              {
                if ( _InterlockedDecrement((volatile signed __int32 *)(v21 + 2584)) < 0 )
                {
                  v129 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27);
                  v129[3] = 275LL;
                  v129[4] = 37LL;
                  v129[5] = v21;
                  v129[6] = *(unsigned int *)(v21 + 2584);
                  v129[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v129);
                }
              }
            }
            KeSetEvent(*(PRKEVENT *)(v24 + 936), 0, 0);
          }
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v189);
        LODWORD(v3) = v149;
      }
    }
  }
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v165);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (*((_BYTE *)v2 + 104) & 1) == 0 )
  {
    v29 = *(void (__fastcall **)(_QWORD, _QWORD))(v1 + 2480);
    if ( v29 )
      v29(*(_QWORD *)(v1 + 2496), (unsigned int)v3);
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v165);
}
