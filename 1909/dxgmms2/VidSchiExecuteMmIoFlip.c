/*
 * XREFs of VidSchiExecuteMmIoFlip @ 0x1C000CD30
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x1C000A240 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000EAAC (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000EFA0 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002BAFC (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0036220 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C0009290 (VidSchIsTDRPending.c)
 *     VidSchiIsWaitingOnAsyncCompletion @ 0x1C000D25C (VidSchiIsWaitingOnAsyncCompletion.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C000D280 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C000D3B4 (-NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x1C000D438 (-VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z.c)
 *     VidSchiCompleteFlipEntry @ 0x1C000D570 (VidSchiCompleteFlipEntry.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C000E020 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C00101C4 (VidSchiPropagatePresentHistoryToken.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0013434 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C00159B8 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?IsWDDM2OverlayDDISupported@DXGADAPTER@@QEBAEXZ @ 0x1C002A198 (-IsWDDM2OverlayDDISupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x1C002A6D4 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 *     McTemplateK0pqqpxqqqq @ 0x1C002CCE4 (McTemplateK0pqqpxqqqq.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtqq @ 0x1C002D020 (McTemplateK0pqqxpxqqqddddddddddddqqtqq.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C002F47C (VidSchiProcessVsyncCompletedFlipEntry.c)
 */

__int64 __fastcall VidSchiExecuteMmIoFlip(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        unsigned int a5,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a6)
{
  __int64 v6; // r14
  struct VIDSCH_FLIP_QUEUE *v7; // r15
  unsigned int v8; // edi
  _DWORD *v10; // r13
  __int64 v11; // rbx
  bool v12; // zf
  int *v13; // r12
  bool v14; // cl
  int v15; // eax
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned int v20; // eax
  int v21; // ecx
  struct VIDSCH_FLIP_QUEUE *v22; // rcx
  unsigned int v23; // edx
  __int64 v24; // r14
  __int64 v25; // r9
  int v26; // edx
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // eax
  int v31; // eax
  __int64 v32; // rcx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v34; // r10
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rcx
  unsigned int v39; // edx
  int v40; // r8d
  int v41; // edx
  unsigned int v42; // r13d
  unsigned int v43; // r8d
  unsigned int v44; // edx
  int v45; // eax
  char v46; // cl
  int v47; // eax
  unsigned int v48; // r15d
  char v49; // cl
  unsigned int v50; // r14d
  int v51; // ecx
  unsigned int v52; // eax
  _QWORD *v53; // rdx
  __int64 v54; // r9
  __int64 v55; // rax
  DXGADAPTER *v56; // rcx
  unsigned int v57; // r8d
  __int64 v58; // rcx
  __int64 v59; // r9
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rax
  unsigned int v65; // edx
  __int64 v66; // rcx
  __int64 v67; // rdi
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v68; // r8
  unsigned int v69; // r9d
  unsigned __int64 v70; // rdx
  int v71; // ecx
  int v72; // ecx
  char v73; // cl
  int v74; // eax
  int v75; // edx
  char v76; // cl
  int v77; // eax
  __int64 v78; // rcx
  __int64 v79; // r9
  __int64 v80; // rdx
  int v81; // eax
  unsigned int v82; // ecx
  int v83; // r10d
  struct VIDSCH_FLIP_QUEUE *v84; // r9
  __int64 v85; // rdx
  __int64 v86; // r8
  int v87; // eax
  __int64 v88; // rcx
  __int64 v89; // rax
  unsigned __int8 (__fastcall *v90)(void *); // rdx
  __int64 v91; // r9
  __int64 v92; // rcx
  __int64 v93; // rcx
  unsigned int v94; // r8d
  _DWORD *v95; // r13
  int v96; // edx
  int v97; // r9d
  int v98; // r10d
  __int64 v99; // rcx
  __int64 v100; // rax
  unsigned int v101; // eax
  _QWORD *v102; // rax
  CRefCountedBuffer *v103; // rcx
  struct VIDSCH_FLIP_QUEUE *v104; // rax
  _QWORD *v105; // rdi
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  int v109; // [rsp+30h] [rbp-140h]
  unsigned int v110; // [rsp+F0h] [rbp-80h] BYREF
  char v111; // [rsp+F4h] [rbp-7Ch] BYREF
  bool v112; // [rsp+F5h] [rbp-7Bh]
  char v113; // [rsp+F6h] [rbp-7Ah] BYREF
  char v114; // [rsp+F7h] [rbp-79h] BYREF
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v115; // [rsp+F8h] [rbp-78h]
  unsigned int v116; // [rsp+100h] [rbp-70h]
  unsigned int v117; // [rsp+104h] [rbp-6Ch]
  unsigned int v118; // [rsp+108h] [rbp-68h]
  __int64 v119; // [rsp+110h] [rbp-60h]
  int v120; // [rsp+118h] [rbp-58h] BYREF
  struct VIDSCH_FLIP_QUEUE *v121; // [rsp+120h] [rbp-50h]
  int v122; // [rsp+128h] [rbp-48h] BYREF
  __int64 v123; // [rsp+130h] [rbp-40h]
  _DWORD *v124; // [rsp+138h] [rbp-38h]
  int v125; // [rsp+140h] [rbp-30h]
  int v126; // [rsp+144h] [rbp-2Ch]
  int v127; // [rsp+148h] [rbp-28h]
  int v128; // [rsp+14Ch] [rbp-24h]
  unsigned int v129; // [rsp+150h] [rbp-20h]
  __int64 v130; // [rsp+158h] [rbp-18h] BYREF
  __int64 v131; // [rsp+160h] [rbp-10h]
  _QWORD v132[2]; // [rsp+170h] [rbp+0h] BYREF
  unsigned int v133; // [rsp+180h] [rbp+10h]
  int v134; // [rsp+184h] [rbp+14h]
  struct VIDSCH_FLIP_QUEUE *v135; // [rsp+188h] [rbp+18h]
  int v136; // [rsp+190h] [rbp+20h]
  int v137; // [rsp+194h] [rbp+24h]
  __int64 v138; // [rsp+198h] [rbp+28h]
  __int64 v139; // [rsp+1A0h] [rbp+30h]
  __int64 v140; // [rsp+1A8h] [rbp+38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+1B0h] [rbp+40h] BYREF
  _QWORD v142[276]; // [rsp+1D0h] [rbp+60h] BYREF

  LODWORD(v6) = a5;
  v7 = a4;
  v8 = a3;
  v123 = a1;
  v10 = *(_DWORD **)(a2 + 8LL * a3 + 2576);
  v11 = (__int64)a4 + 1312 * a5 + 80;
  v121 = a4;
  v117 = a3;
  v118 = a5;
  v12 = v10[1] == 3;
  v13 = (int *)(v11 + 1136);
  v115 = a6;
  v131 = a3;
  v124 = v10;
  v14 = v12 || (*v13 & 0x100) != 0;
  v112 = v14;
  v15 = 11;
  if ( !v14 )
    v15 = 5;
  v120 = v15;
  memset(v142, 0, 0x858uLL);
  if ( !*(_BYTE *)(a2 + 144) )
    goto LABEL_7;
  v39 = *((_DWORD *)v7 + 12);
  v40 = ((unsigned __int8)*((_DWORD *)v7 + 11) - 1) & 0x3F;
  if ( v39 != v40 )
  {
    while ( *((_DWORD *)v7 + 328 * v39 + 283) != 14 )
    {
      v39 = ((_BYTE)v39 - 1) & 0x3F;
      if ( v39 == v40 )
        goto LABEL_50;
    }
    goto LABEL_134;
  }
LABEL_50:
  if ( (*(_DWORD *)(v11 + 1136) & 0x10) != 0 )
    v41 = ((unsigned __int16)**(_DWORD **)(v11 + 1184) | (unsigned __int16)(**(_DWORD **)(v11 + 1184) >> 10)) & 0x3FF;
  else
    v41 = (1 << *(_DWORD *)(a2 + 140)) - 1;
  if ( (v41 & v10[587]) != 0 )
  {
LABEL_134:
    v108 = 2LL;
    goto LABEL_135;
  }
  if ( *(_DWORD *)(a2 + 148) <= 1u || v10[1] == 3 || (*(_DWORD *)(v11 + 1136) & 0x180) != 0x80 )
  {
LABEL_7:
    if ( (*v13 & 0x10) != 0 )
      v16 = ((unsigned __int16)**(_DWORD **)(v11 + 1184) | (unsigned __int16)(**(_DWORD **)(v11 + 1184) >> 10)) & 0x3FF;
    else
      v16 = (1 << *(_DWORD *)(a2 + 140)) - 1;
    if ( (v16 & v10[586]) != 0 )
      goto LABEL_134;
  }
  if ( VidSchIsTDRPending(a2) || (v17 = *(_QWORD *)(v11 + 1040), *(_BYTE *)(v17 + 204)) )
  {
    v18 = 0LL;
  }
  else
  {
    v18 = 0LL;
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v17 + 200), 0, 0) )
    {
      if ( *(_BYTE *)(a2 + 144) )
      {
        VidSchiExecuteMmIoFlipMultiPlaneOverlay3(
          (struct _VIDSCH_GLOBAL *)a2,
          v8,
          v7,
          (struct _VIDSCH_CALL_EXECUTE_FLIP *)v142,
          (enum _VIDSCH_FLIP_STATUS *)&v120,
          a5);
        goto LABEL_30;
      }
      v115 = *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(v11 + 1184);
      if ( (*v13 & 0x10) == 0 )
      {
        memset((char *)&v142[1] + 4, 0, 0x84CuLL);
        v142[0] = a2;
        LODWORD(v142[1]) = v8;
        VidSchiBindFlipPhysicalAddress(v115, 0, 0);
        v19 = *(_QWORD *)(v11 + 1184);
        HIDWORD(v142[1]) = *(unsigned __int16 *)(*(_DWORD *)(v19 + 4) * ((8 * *(_DWORD *)(v19 + 8) + 191) & 0xFFFFFFF8)
                                               + v19
                                               + 32);
        v142[2] = *(_QWORD *)(*(_DWORD *)(v19 + 4) * ((8 * *(_DWORD *)(v19 + 8) + 191) & 0xFFFFFFF8) + v19 + 40);
        v20 = *(_DWORD *)(v11 + 1140);
        v142[3] = *(_QWORD *)(*(_DWORD *)(v19 + 4) * ((8 * *(_DWORD *)(v19 + 8) + 191) & 0xFFFFFFF8) + v19 + 24);
        v21 = *v13;
        LODWORD(v19) = *v13 & 0xF;
        LODWORD(v142[265]) = -1073741823;
        LODWORD(v19) = v21 & 0x20 | (2 * v19);
        v22 = *(struct VIDSCH_FLIP_QUEUE **)(v11 + 1160);
        v23 = v142[70] & 0xFFFFFF07 | (4 * v19);
        v121 = v22;
        v142[70] = __PAIR64__(v20, v23);
        if ( v22 )
        {
          LODWORD(v142[263]) = *(_DWORD *)v22;
          v142[264] = (char *)v22 + 8;
        }
        v6 = *(_QWORD *)(v11 + 1168);
        if ( !v6 )
          goto LABEL_18;
        goto LABEL_118;
      }
      memset(v142, 0, 0x858uLL);
      v42 = 0;
      v110 = 0;
      v43 = *(_DWORD *)v115 & 0x3FF;
      v44 = (*(_DWORD *)v115 >> 10) & 0x3FF;
      v116 = v43;
      v12 = !_BitScanForward((unsigned int *)&v45, v43);
      v46 = -1;
      LODWORD(v119) = v44;
      v125 = v45;
      if ( !v12 )
        v46 = v45;
      v12 = !_BitScanForward((unsigned int *)&v47, v44);
      v48 = v46;
      v49 = -1;
      v126 = v47;
      if ( !v12 )
        v49 = v47;
      v50 = v49;
      while ( v43 || v44 )
      {
        v63 = 120LL * v42;
        v115 = (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(a2 + v63);
        memset((void *)(v63 + a2 + 2896), 0, 0x70uLL);
        v64 = v63 + a2;
        if ( v48 >= v50 )
        {
          v75 = v119;
          v43 = v116;
          *(_DWORD *)(v64 + 2888) = v50;
          *(_DWORD *)(v64 + 2892) = 0;
          v76 = -1;
          v44 = ~(1 << v50) & v75;
          v12 = !_BitScanForward((unsigned int *)&v64, v44);
          LODWORD(v119) = v44;
          v128 = v77;
          if ( !v12 )
            v76 = v64;
          v50 = v76;
        }
        else
        {
          v65 = v110;
          *(_DWORD *)(v64 + 2888) = v48;
          *(_DWORD *)(v64 + 2892) = 1;
          v66 = *(_QWORD *)(v11 + 1184);
          v67 = v65 * ((8 * *(_DWORD *)(v66 + 8) + 191) & 0xFFFFFFF8) + v66 + 160;
          VidSchiBindFlipPhysicalAddress((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)v66, v65, 0);
          v68 = v115;
          v69 = v110;
          v70 = (unsigned __int64)v110 << 6;
          *((_DWORD *)v115 + 724) = *(unsigned __int16 *)(*(_QWORD *)(v11 + 1184)
                                                        + *(_DWORD *)(*(_QWORD *)(v11 + 1184) + 4LL)
                                                        * ((8 * *(_DWORD *)(*(_QWORD *)(v11 + 1184) + 8LL) + 191) & 0xFFFFFFF8)
                                                        + v70
                                                        + 32);
          *((_QWORD *)v68 + 363) = *(_QWORD *)(*(_QWORD *)(v11 + 1184)
                                             + *(_DWORD *)(*(_QWORD *)(v11 + 1184) + 4LL)
                                             * ((8 * *(_DWORD *)(*(_QWORD *)(v11 + 1184) + 8LL) + 191) & 0xFFFFFFF8)
                                             + v70
                                             + 40);
          v71 = *((_DWORD *)v68 + 730);
          *((_QWORD *)v68 + 364) = *(_QWORD *)(*(_QWORD *)(v11 + 1184)
                                             + *(_DWORD *)(*(_QWORD *)(v11 + 1184) + 4LL)
                                             * ((8 * *(_DWORD *)(*(_QWORD *)(v11 + 1184) + 8LL) + 191) & 0xFFFFFFF8)
                                             + v70
                                             + 24);
          *((_DWORD *)v68 + 730) ^= (*(_DWORD *)(v67 + 28) ^ v71) & 1;
          *((_DWORD *)v68 + 730) ^= (*(_DWORD *)(v67 + 28) ^ *((_DWORD *)v68 + 730)) & 2;
          *((_DWORD *)v68 + 731) = (unsigned __int16)*(_DWORD *)v67;
          *((_DWORD *)v68 + 732) = (unsigned __int16)*(_DWORD *)(v67 + 4);
          *((_DWORD *)v68 + 733) = *(unsigned __int16 *)(v67 + 2);
          *((_DWORD *)v68 + 734) = *(unsigned __int16 *)(v67 + 6);
          *((_DWORD *)v68 + 735) = *(__int16 *)(v67 + 8);
          *((_DWORD *)v68 + 736) = *(__int16 *)(v67 + 12);
          *((_DWORD *)v68 + 737) = *(unsigned __int16 *)(v67 + 10);
          *((_DWORD *)v68 + 738) = *(unsigned __int16 *)(v67 + 14);
          *((_DWORD *)v68 + 739) = (unsigned __int16)*(_DWORD *)(v67 + 16);
          *((_DWORD *)v68 + 740) = (unsigned __int16)*(_DWORD *)(v67 + 20);
          *((_DWORD *)v68 + 741) = *(unsigned __int16 *)(v67 + 18);
          *((_DWORD *)v68 + 742) = *(unsigned __int16 *)(v67 + 22);
          *((_DWORD *)v68 + 743) = ((*(_DWORD *)(v67 + 28) >> 3) & 3) + 1;
          v74 = (*((_DWORD *)v68 + 744) ^ (*(_DWORD *)(v67 + 28) >> 2)) & 1;
          v110 = v69 + 1;
          *((_DWORD *)v68 + 744) ^= v74;
          *((_DWORD *)v68 + 745) = (*(_DWORD *)(v67 + 28) >> 5) & 3;
          *((_DWORD *)v68 + 746) ^= (*((_DWORD *)v68 + 746) ^ (*(_DWORD *)(v67 + 28) >> 7)) & 1;
          v72 = *((_DWORD *)v68 + 746) ^ ((unsigned __int8)*((_DWORD *)v68 + 746) ^ (unsigned __int8)(*(_DWORD *)(v67 + 28) >> 7)) & 2;
          *((_DWORD *)v68 + 746) = v72;
          *((_DWORD *)v68 + 746) = v72 ^ ((unsigned __int8)v72 ^ (unsigned __int8)(*(_DWORD *)(v67 + 28) >> 7)) & 4;
          *((_DWORD *)v68 + 747) = (*(_DWORD *)(v67 + 28) >> 10) & 7;
          *((_DWORD *)v68 + 748) = (*(_DWORD *)(v67 + 28) >> 13) & 1;
          *((_DWORD *)v68 + 749) = (*(_DWORD *)(v67 + 28) >> 14) & 1;
          LODWORD(v68) = v116;
          *(_DWORD *)(120 * (v42 + 25LL) + a2) = (*(_DWORD *)(v67 + 28) >> 15) & 3;
          v44 = v119;
          v73 = -1;
          v43 = ~(1 << v48) & (unsigned int)v68;
          v12 = !_BitScanForward((unsigned int *)&v74, v43);
          v116 = v43;
          v127 = v74;
          if ( !v12 )
            v73 = v74;
          v48 = v73;
        }
        ++v42;
      }
      v8 = v117;
      v7 = v121;
      v6 = v118;
      v51 = (LOBYTE(v142[67]) ^ (unsigned __int8)(8 * *v13)) & 0x38;
      LODWORD(v142[70]) = *(_DWORD *)(v11 + 1140);
      v52 = *(_DWORD *)(v11 + 1088);
      v110 = v42;
      v10 = v124;
      v142[0] = a2;
      HIDWORD(v142[67]) = v117;
      LODWORD(v142[67]) = LODWORD(v142[67]) ^ v51 | 4;
      LODWORD(v142[265]) = -1073741823;
      LODWORD(v142[1]) = v52;
      if ( v52 )
      {
        v53 = &v142[2];
        v54 = v52;
        do
        {
          v55 = *(_QWORD *)((char *)v53++ + v11 - (_QWORD)&v142[2]);
          *(v53 - 1) = *(_QWORD *)(v55 + 64);
          --v54;
        }
        while ( v54 );
      }
      v56 = *(DXGADAPTER **)(a2 + 16);
      v111 = 0;
      if ( *((_BYTE *)v56 + 2466) )
      {
        memset((void *)(a2 + 4088), 0, 112LL * v110);
        v57 = v110;
        if ( v110 )
        {
          v58 = a2 + 4092;
          v59 = v110;
          v60 = a2 + 2892;
          do
          {
            *(_DWORD *)(v58 - 4) = *(_DWORD *)(v60 - 4);
            v61 = *(_DWORD *)v60;
            *(_DWORD *)v58 = *(_DWORD *)v60;
            if ( v61 )
            {
              *(_DWORD *)(v58 + 4) = *(_DWORD *)(v60 + 4);
              *(_QWORD *)(v58 + 12) = *(_QWORD *)(v60 + 12);
              *(_QWORD *)(v58 + 20) = *(_QWORD *)(v60 + 20);
              *(_DWORD *)(v58 + 28) = *(_DWORD *)(v60 + 28);
              *(_OWORD *)(v58 + 32) = *(_OWORD *)(v60 + 32);
              *(_OWORD *)(v58 + 48) = *(_OWORD *)(v60 + 48);
              *(_DWORD *)(v58 + 64) = *(_DWORD *)(v60 + 80);
              *(_DWORD *)(v58 + 68) = *(_DWORD *)(v60 + 84);
              *(_DWORD *)(v58 + 72) = 0;
              *(_QWORD *)(v58 + 76) = 0LL;
              *(_DWORD *)(v58 + 84) = *(_DWORD *)(v60 + 88);
              *(_DWORD *)(v58 + 88) = *(_DWORD *)(v60 + 92);
              *(_DWORD *)(v58 + 92) = *(_DWORD *)(v60 + 96);
              *(_DWORD *)(v58 + 96) = *(_DWORD *)(v60 + 100);
              *(_DWORD *)(v58 + 100) = *(_DWORD *)(v60 + 104);
              *(_DWORD *)(v58 + 104) = *(_DWORD *)(v60 + 108);
            }
            v60 += 120LL;
            v58 += 112LL;
            --v59;
          }
          while ( v59 );
        }
      }
      else
      {
        if ( !*((_BYTE *)v56 + 2467) )
        {
          if ( DXGADAPTER::IsWDDM2OverlayDDISupported(v56) )
          {
            v121 = (struct VIDSCH_FLIP_QUEUE *)v110;
            memset((void *)(a2 + 4088), 0, (unsigned __int64)v110 << 7);
            v82 = v110;
            v83 = 0;
            if ( v110 )
            {
              v84 = v121;
              v85 = a2 + 4092;
              v86 = a2 + 2892;
              do
              {
                *(_DWORD *)(v85 - 4) = *(_DWORD *)(v86 - 4);
                v87 = *(_DWORD *)v86;
                *(_DWORD *)v85 = *(_DWORD *)v86;
                if ( v87 )
                {
                  *(_DWORD *)(v85 + 4) = *(_DWORD *)(v86 + 4);
                  *(_QWORD *)(v85 + 12) = *(_QWORD *)(v86 + 12);
                  *(_QWORD *)(v85 + 20) = *(_QWORD *)(v86 + 20);
                  *(_DWORD *)(v85 + 28) = *(_DWORD *)(v86 + 28);
                  *(_OWORD *)(v85 + 32) = *(_OWORD *)(v86 + 32);
                  *(_OWORD *)(v85 + 48) = *(_OWORD *)(v86 + 48);
                  *(_OWORD *)(v85 + 64) = *(_OWORD *)(v86 + 64);
                  *(_DWORD *)(v85 + 80) = *(_DWORD *)(v86 + 80);
                  *(_DWORD *)(v85 + 84) = *(_DWORD *)(v86 + 84);
                  *(_DWORD *)(v85 + 88) = *(_DWORD *)(v86 + 88);
                  *(_DWORD *)(v85 + 96) = *(_DWORD *)(v86 + 96);
                  *(_DWORD *)(v85 + 100) = *(_DWORD *)(v86 + 100);
                  *(_DWORD *)(v85 + 104) = *(_DWORD *)(v86 + 104);
                  *(_DWORD *)(v85 + 108) = *(_DWORD *)(v86 + 108);
                  *(_DWORD *)(v85 + 112) = *(_DWORD *)(v86 + 112);
                  *(_DWORD *)(v85 + 116) = 0;
                  v88 = *(_QWORD *)(v11 + 1184);
                  v89 = v83 * ((8 * *(_DWORD *)(v88 + 8) + 191) & 0xFFFFFFF8);
                  ++v83;
                  *(_DWORD *)(v85 + 92) = *(_DWORD *)(v89 + v88 + 184);
                }
                v86 += 120LL;
                v85 += 128LL;
                v84 = (struct VIDSCH_FLIP_QUEUE *)((char *)v84 - 1);
              }
              while ( v84 );
              v82 = v110;
            }
            LODWORD(v142[68]) = v82;
            v62 = a2 + 4088;
            v90 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2;
            goto LABEL_102;
          }
          LODWORD(v142[68]) = v110;
          v62 = a2 + 2888;
LABEL_101:
          v90 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR;
LABEL_102:
          v91 = *(unsigned int *)(a2 + 32);
          v92 = *(_QWORD *)(a2 + 24);
          v142[69] = v62;
          DpSynchronizeExecution(v92, v90, v142, v91, &v111);
          v18 = 0LL;
          if ( bTracingEnabled )
          {
            v94 = 0;
            v116 = 0;
            if ( v110 )
            {
              v95 = (_DWORD *)(a2 + 2960);
              v119 = v110;
              do
              {
                v96 = *(v95 - 17);
                LOBYTE(v97) = 0;
                LOBYTE(v98) = 0;
                if ( v96 )
                {
                  v99 = *(_QWORD *)(v11 + 1184);
                  v100 = v94 * ((8 * *(_DWORD *)(v99 + 8) + 191) & 0xFFFFFFF8);
                  v116 = ++v94;
                  v97 = *(_DWORD *)(v100 + v99 + 184);
                  v98 = *(_DWORD *)(v100 + v99 + 192);
                }
                if ( (*v13 & 0x10) != 0 )
                  v101 = ((unsigned __int16)**(_DWORD **)(v11 + 1184) | (unsigned __int16)(**(_DWORD **)(v11 + 1184) >> 10)) & 0x3FF;
                else
                  v101 = (1 << *(_DWORD *)(a2 + 140)) - 1;
                v12 = !_BitScanForward(&v101, v101);
                v93 = 0xFFFFFFFFLL;
                v129 = v101;
                if ( !v12 )
                  v93 = v101;
                HIDWORD(v115) = *(_DWORD *)(v11 + 1048);
                LODWORD(v115) = (char)v93;
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                {
                  McTemplateK0pqqxpxqqqddddddddddddqqtqq(
                    (unsigned int)&DxgkControlGuid_Context,
                    (unsigned int)&MMIOFlipMultiPlaneOverlay,
                    0,
                    *(_QWORD *)(a2 + 16),
                    v8,
                    *(v95 - 18),
                    (char)v115,
                    *((_QWORD *)v95 - 6),
                    *((_QWORD *)v95 - 7),
                    *(v95 - 16),
                    *(_DWORD *)(v11 + 1056),
                    *(_DWORD *)(v11 + 1080),
                    *(v95 - 9),
                    *(v95 - 7),
                    *(v95 - 8),
                    *(v95 - 6),
                    *(v95 - 5),
                    *(v95 - 3),
                    *(v95 - 4),
                    *(v95 - 2),
                    *(v95 - 1),
                    v95[1],
                    *v95,
                    v95[2],
                    v97,
                    5,
                    v96,
                    v98,
                    0);
                  v94 = v116;
                }
                v95 += 30;
                --v119;
              }
              while ( v119 );
              v10 = v124;
              v18 = 0LL;
              v6 = v118;
            }
          }
          LODWORD(v115) = v142[265];
          if ( !LODWORD(v142[265]) )
            goto LABEL_32;
          v102 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v93, 0LL);
          v102[5] = (int)v115;
          v102[6] = v142;
          v102[3] = 281LL;
          v102[4] = 11LL;
          v102[7] = *(_QWORD *)(a2 + 16);
          WdLogEvent5_WdCriticalError(v102);
          __debugbreak();
LABEL_118:
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 16), &LockHandle);
          v103 = *(CRefCountedBuffer **)(v6 + 8);
          if ( v103 )
            CRefCountedBuffer::RefCountedBufferRelease(v103);
          v104 = v121;
          *(_QWORD *)(v6 + 8) = v121;
          _InterlockedIncrement((volatile signed __int32 *)v104 + 1);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v23 = v142[70];
LABEL_18:
          v24 = 0LL;
          LODWORD(v142[4]) = *(_DWORD *)(v11 + 1088);
          if ( LODWORD(v142[4]) )
          {
            v25 = *(_QWORD *)(v11 + 1184);
            do
            {
              v142[v24 + 5] = *(_QWORD *)(((unsigned __int64)(unsigned int)(v24 * *(_DWORD *)(v25 + 4)) << 6)
                                        + v25
                                        + *(_DWORD *)(v25 + 4) * ((8 * *(_DWORD *)(v25 + 8) + 191) & 0xFFFFFFF8)
                                        + 16);
              if ( (_DWORD)v24 )
              {
                v105 = &v142[3 * (unsigned int)(v24 - 1) + 71];
                *v105 = *(_QWORD *)(((unsigned __int64)(unsigned int)(v24 * *(_DWORD *)(v25 + 4)) << 6)
                                  + v25
                                  + *(_DWORD *)(v25 + 4) * ((8 * *(_DWORD *)(v25 + 8) + 191) & 0xFFFFFFF8)
                                  + 24);
                VidSchiBindFlipPhysicalAddress((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)v25, 0, v24);
                v25 = *(_QWORD *)(v11 + 1184);
                *((_WORD *)v105 + 4) = *(_WORD *)(((unsigned __int64)(unsigned int)(v24 * *(_DWORD *)(v25 + 4)) << 6)
                                                + v25
                                                + *(_DWORD *)(v25 + 4) * ((8 * *(_DWORD *)(v25 + 8) + 191) & 0xFFFFFFF8)
                                                + 32);
                v105[2] = *(_QWORD *)(((unsigned __int64)(unsigned int)(v24 * *(_DWORD *)(v25 + 4)) << 6)
                                    + v25
                                    + *(_DWORD *)(v25 + 4) * ((8 * *(_DWORD *)(v25 + 8) + 191) & 0xFFFFFFF8)
                                    + 40);
              }
              v24 = (unsigned int)(v24 + 1);
            }
            while ( (unsigned int)v24 < *(_DWORD *)(v11 + 1088) );
            v23 = v142[70];
            v8 = v117;
          }
          if ( v112 )
            v26 = v23 | 2;
          else
            v26 = v23 | 4;
          LODWORD(v142[70]) = v26;
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0pqqpxqqqq(
              (unsigned int)&DxgkControlGuid_Context,
              (unsigned int)&EventMMIOFlip,
              0,
              *(_QWORD *)(a2 + 16),
              v8,
              *(_DWORD *)(v11 + 1048),
              v142[3],
              v142[2],
              SBYTE4(v142[1]),
              *(_DWORD *)(v11 + 1056),
              *(_DWORD *)(v11 + 1080),
              v26);
          v27 = *(unsigned int *)(a2 + 32);
          v28 = *(_QWORD *)(a2 + 24);
          v113 = 0;
          DpSynchronizeExecution(v28, VidSchiExecuteMmIoFlipAtISR, v142, v27, &v113);
          LODWORD(v6) = v118;
LABEL_30:
          if ( SLODWORD(v142[265]) >= 0 )
          {
            v18 = 0LL;
            goto LABEL_32;
          }
          if ( LODWORD(v142[265]) == -1073741811 )
          {
            if ( (*v13 & 0x10) != 0 || (v142[70] & 0x40) == 0 )
            {
              v106 = WdLogNewEntry5_WdAssertion(LODWORD(v142[265]), v29);
            }
            else
            {
              v106 = WdLogNewEntry5_WdAssertion(LODWORD(v142[265]), v29);
              v107 = *(_QWORD *)(*(_DWORD *)(*(_QWORD *)(v11 + 1184) + 4LL)
                               * ((8 * *(_DWORD *)(*(_QWORD *)(v11 + 1184) + 8LL) + 191) & 0xFFFFFFF8)
                               + *(_QWORD *)(v11 + 1184)
                               + 24LL);
              *(_QWORD *)(v106 + 32) = v8;
              *(_QWORD *)(v106 + 24) = v107;
            }
            WdLogEvent5_WdAssertion(v106);
            VidSchiUpdateFlipQueueHistory(2LL, a2, v8, v7, v6);
            return 3221225485LL;
          }
          if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 2498LL) && LODWORD(v142[265]) == -1073741267 )
          {
            *(_DWORD *)(v11 + 1052) = 13;
            v108 = 1LL;
LABEL_135:
            VidSchiUpdateFlipQueueHistory(v108, a2, v8, v7, v6);
            return 259LL;
          }
          goto LABEL_134;
        }
        memset((void *)(a2 + 4088), 0, (unsigned __int64)v110 << 7);
        v57 = v110;
        if ( v110 )
        {
          v78 = a2 + 4092;
          v79 = v110;
          v80 = a2 + 2892;
          do
          {
            *(_DWORD *)(v78 - 4) = *(_DWORD *)(v80 - 4);
            v81 = *(_DWORD *)v80;
            *(_DWORD *)v78 = *(_DWORD *)v80;
            if ( v81 )
            {
              *(_DWORD *)(v78 + 4) = *(_DWORD *)(v80 + 4);
              *(_QWORD *)(v78 + 12) = *(_QWORD *)(v80 + 12);
              *(_QWORD *)(v78 + 20) = *(_QWORD *)(v80 + 20);
              *(_DWORD *)(v78 + 28) = *(_DWORD *)(v80 + 28);
              *(_OWORD *)(v78 + 32) = *(_OWORD *)(v80 + 32);
              *(_OWORD *)(v78 + 48) = *(_OWORD *)(v80 + 48);
              *(_OWORD *)(v78 + 64) = *(_OWORD *)(v80 + 64);
              *(_DWORD *)(v78 + 80) = *(_DWORD *)(v80 + 80);
              *(_DWORD *)(v78 + 84) = *(_DWORD *)(v80 + 84);
              *(_DWORD *)(v78 + 88) = 0;
              *(_QWORD *)(v78 + 92) = 0LL;
              *(_DWORD *)(v78 + 100) = *(_DWORD *)(v80 + 88);
              *(_DWORD *)(v78 + 104) = *(_DWORD *)(v80 + 92);
              *(_DWORD *)(v78 + 108) = *(_DWORD *)(v80 + 96);
              *(_DWORD *)(v78 + 112) = *(_DWORD *)(v80 + 100);
              *(_DWORD *)(v78 + 116) = *(_DWORD *)(v80 + 104);
              *(_DWORD *)(v78 + 120) = *(_DWORD *)(v80 + 108);
            }
            v80 += 120LL;
            v78 += 128LL;
            --v79;
          }
          while ( v79 );
          LODWORD(v142[68]) = v57;
          v62 = a2 + 4088;
          goto LABEL_101;
        }
      }
      LODWORD(v142[68]) = v57;
      v62 = a2 + 4088;
      goto LABEL_101;
    }
  }
  *(_BYTE *)v115 = 1;
LABEL_32:
  if ( (*v13 & 0x20) != 0 )
  {
    v34 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v11 + 1152);
    if ( v34 )
      VidSchiPropagatePresentHistoryToken(
        *(PKSPIN_LOCK *)(v11 + 1144),
        v34,
        1,
        (*v13 & 0x40) != 0,
        0,
        0,
        *(_QWORD *)(v11 + 1168),
        *(_QWORD *)(v11 + 1160),
        0LL);
  }
  v30 = v120;
  *(_DWORD *)(v11 + 1052) = v120;
  if ( v30 == 11 )
  {
    v35 = 1312LL * *((unsigned int *)v7 + 11);
    v110 = 0;
    if ( (unsigned __int8)VidSchiIsWaitingOnAsyncCompletion(*(unsigned int *)((char *)v7 + v35 + 1132), v18) )
    {
      v133 = v8;
      v36 = v123;
      LOBYTE(v109) = 0;
      v136 = ((_BYTE)v6 - 1) & 0x3F;
      v138 = HIDWORD(v142[265]);
      v139 = v142[266];
      v122 = 0;
      v130 = 0LL;
      v114 = 0;
      v132[1] = 0LL;
      v134 = 0;
      v137 = 0;
      v140 = 0LL;
      v132[0] = a2;
      v135 = v7;
      VidSchiProcessVsyncCompletedFlipEntry(
        v123,
        (unsigned int)v132,
        (unsigned int)&v130,
        (unsigned int)&v122,
        (__int64)&v110,
        (__int64)&v114,
        v109);
    }
    else
    {
      v36 = v123;
    }
    *(_QWORD *)(v11 + 1112) = v142[266];
    *(_QWORD *)(v11 + 1128) = HIDWORD(v142[265]);
    VidSchiUnreferenceDisplayingAllocationsForThisEntry(v36, a2, v10, v11);
    VidSchiReferenceDisplayingAllocationsForThisEntry(v36, a2, v10, v11);
    v37 = *(_QWORD *)(v11 + 1040);
    v110 += VidSchiCompleteFlipEntry(v123, a2, v117, (_DWORD)v7, v6, v6, 0, 0LL);
    v38 = v131;
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 40) + 24LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(v37 + 32) + 4LL))
                    + 8 * v131
                    + 88);
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 8 * v131 + 5792) + 8LL), -v110);
    **(_DWORD **)(a2 + 8 * v38 + 5792) += v110;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 8), -v110);
    *(_DWORD *)v18 += v110;
    v8 = v117;
  }
  else
  {
    if ( (*v13 & 0x10) != 0 )
      v31 = ((unsigned __int16)**(_DWORD **)(v11 + 1184) | (unsigned __int16)(**(_DWORD **)(v11 + 1184) >> 10)) & 0x3FF;
    else
      v31 = (1 << *(_DWORD *)(a2 + 140)) - 1;
    v10[586] |= v31;
  }
  *(_QWORD *)(v11 + 1104) = MEMORY[0xFFFFF78000000320];
  v32 = 1312LL * *((unsigned int *)v7 + 11);
  *((_DWORD *)v7 + 12) = v6;
  if ( !(unsigned __int8)VidSchiIsWaitingOnAsyncCompletion(*(unsigned int *)((char *)v7 + v32 + 1132), v18) )
    *((_DWORD *)v7 + 11) = v6;
  *((_DWORD *)v7 + 10) = ((_BYTE)v6 + 1) & 0x3F;
  VIDMM_GLOBAL::NotifyOnFlip(*(VIDMM_GLOBAL **)(*(_QWORD *)(a2 + 8) + 552LL));
  VidSchiUpdateFlipQueueHistory(1LL, a2, v8, v7, v6);
  return 0LL;
}
