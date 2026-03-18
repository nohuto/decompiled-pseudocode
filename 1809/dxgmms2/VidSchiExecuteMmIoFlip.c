/*
 * XREFs of VidSchiExecuteMmIoFlip @ 0x1C000CFC0
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x1C0009980 (VidSchUnwaitFlipQueue.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000E4E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C000F1C4 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002B418 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035780 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C000BB50 (VidSchiCompleteFlipEntry.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C000CCE0 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_PRESENT_INFO@@KK@Z @ 0x1C000F06C (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_PRESENT_INFO@.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C000F368 (VidSchiPropagatePresentHistoryToken.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C0016678 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0018394 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x1C00299D8 (-VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z.c)
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0029C98 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLI.c)
 *     McTemplateK0pqqpxqqqq @ 0x1C002C454 (McTemplateK0pqqpxqqqq.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtqq @ 0x1C002C90C (McTemplateK0pqqxpxqqqddddddddddddqqtqq.c)
 */

__int64 __fastcall VidSchiExecuteMmIoFlip(
        struct HwQueueStagingList *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        _BYTE *a6)
{
  __int64 v6; // r12
  __int64 v8; // r15
  __int64 v9; // r13
  struct VIDSCH_FLIP_QUEUE **v10; // r14
  bool v11; // zf
  struct VIDSCH_FLIP_QUEUE *v12; // rcx
  char *v13; // rbx
  _DWORD *v14; // rdi
  char v15; // cl
  int v16; // eax
  __int64 v17; // r8
  unsigned int v18; // edx
  int v19; // r8d
  int v20; // edx
  int v21; // edx
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rcx
  int v25; // edx
  size_t v26; // r8
  char v27; // cl
  __int64 v28; // r15
  unsigned int v29; // edx
  _DWORD *v30; // rax
  int v31; // eax
  char v32; // cl
  unsigned int v33; // r13d
  __int64 v34; // rdi
  __int64 v35; // rax
  unsigned int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // r8
  unsigned int v40; // r9d
  unsigned __int64 v41; // rdx
  int v42; // ecx
  int v43; // ecx
  char v44; // cl
  int v45; // eax
  char v46; // cl
  int v47; // eax
  unsigned int v48; // r8d
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rdx
  int v57; // eax
  int v58; // r9d
  __int64 v59; // rdx
  __int64 v60; // r8
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rax
  unsigned __int8 (__fastcall *v64)(void *); // rdx
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // rcx
  _DWORD *v68; // rdi
  __int64 v69; // rcx
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // r9
  __int64 v73; // r8
  unsigned __int64 v74; // rdx
  __int64 v75; // rcx
  _QWORD *v76; // rax
  char v77; // cl
  int v78; // ecx
  _DWORD *v79; // rax
  __int64 v80; // r15
  __int64 v81; // rax
  CRefCountedBuffer *v82; // rcx
  unsigned int v83; // r15d
  int v84; // edx
  __int64 v85; // rax
  _QWORD *v86; // rdi
  int v87; // ecx
  __int64 v88; // r9
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rdx
  int v92; // eax
  int v93; // ecx
  struct HwQueueStagingList *v94; // rcx
  __int64 v95; // rdi
  int v96; // r10d
  __int64 v97; // r9
  _DWORD *v98; // rax
  int v99; // eax
  struct VIDSCH_FLIP_QUEUE *v100; // rdx
  __int64 v101; // rcx
  int v102; // eax
  __int64 v103; // rbx
  int v104; // ecx
  unsigned int v105; // ecx
  __int64 v106; // rcx
  REGHANDLE EtwHandle; // rax
  struct VIDSCH_FLIP_QUEUE **v108; // rbx
  __int64 v109; // rdi
  unsigned int v110; // eax
  struct VIDSCH_FLIP_QUEUE *v111; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v113; // rcx
  __int64 v115; // rcx
  char v116; // [rsp+F0h] [rbp-80h] BYREF
  char v117; // [rsp+F1h] [rbp-7Fh]
  char v118[2]; // [rsp+F2h] [rbp-7Eh] BYREF
  unsigned int v119; // [rsp+F4h] [rbp-7Ch]
  unsigned int v120; // [rsp+F8h] [rbp-78h]
  _BYTE *v121; // [rsp+100h] [rbp-70h]
  unsigned int v122; // [rsp+108h] [rbp-68h]
  unsigned int v123; // [rsp+10Ch] [rbp-64h]
  int v124; // [rsp+110h] [rbp-60h] BYREF
  __int64 v125; // [rsp+118h] [rbp-58h]
  _DWORD *v126; // [rsp+120h] [rbp-50h]
  struct HwQueueStagingList *v127; // [rsp+128h] [rbp-48h]
  struct VIDSCH_FLIP_QUEUE *v128; // [rsp+130h] [rbp-40h]
  int v129; // [rsp+138h] [rbp-38h]
  int v130; // [rsp+13Ch] [rbp-34h]
  int v131; // [rsp+140h] [rbp-30h]
  int v132; // [rsp+144h] [rbp-2Ch]
  __int64 v133; // [rsp+148h] [rbp-28h]
  __int64 v134; // [rsp+150h] [rbp-20h]
  struct VIDSCH_FLIP_QUEUE **v135; // [rsp+158h] [rbp-18h]
  __int64 v136; // [rsp+160h] [rbp-10h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+168h] [rbp-8h] BYREF
  _QWORD v138[268]; // [rsp+180h] [rbp+10h] BYREF

  LODWORD(v6) = a5;
  LODWORD(v8) = a3;
  v127 = a1;
  v120 = a4;
  v9 = *(_QWORD *)(a2 + 8LL * a3 + 2576);
  v10 = (struct VIDSCH_FLIP_QUEUE **)(v9 + 8LL * a4 + 24);
  v121 = a6;
  v11 = *(_DWORD *)(v9 + 4) == 3;
  v119 = a3;
  LODWORD(v125) = a5;
  v12 = *v10;
  v134 = v9;
  v135 = v10;
  v128 = v12;
  v13 = (char *)v12 + 1296 * a5;
  v136 = 1296LL * a5;
  v14 = v13 + 1176;
  v126 = v13 + 1176;
  if ( v11 || (*v14 & 0x100) != 0 )
  {
    v15 = 1;
    v126 = v13 + 1176;
  }
  else
  {
    v15 = 0;
  }
  v117 = v15;
  v16 = 11;
  if ( !v15 )
    v16 = 5;
  v124 = v16;
  memset(v138, 0, 0x858uLL);
  if ( !*(_BYTE *)(a2 + 144) )
    goto LABEL_19;
  v18 = *((_DWORD *)*v10 + 12);
  v19 = ((unsigned __int8)*((_DWORD *)*v10 + 11) - 1) & 0x3F;
  if ( v18 != v19 )
  {
    while ( *((_DWORD *)*v10 + 324 * v18 + 277) != 14 )
    {
      v18 = ((_BYTE)v18 - 1) & 0x3F;
      if ( v18 == v19 )
        goto LABEL_11;
    }
    goto LABEL_138;
  }
LABEL_11:
  v17 = *((unsigned int *)v13 + 294);
  if ( (v17 & 0x10) != 0 )
    v20 = ((unsigned __int16)**((_DWORD **)v13 + 153) | (unsigned __int16)(**((_DWORD **)v13 + 153) >> 10)) & 0x3FF;
  else
    v20 = (1 << *(_DWORD *)(a2 + 140)) - 1;
  if ( (v20 & *(_DWORD *)(v9 + 2340)) != 0 )
    goto LABEL_138;
  if ( *(_DWORD *)(a2 + 148) <= 1u || *(_DWORD *)(v9 + 4) == 3 || (v17 & 0x100) != 0 || (v17 & 0x80u) == 0LL )
  {
LABEL_19:
    if ( (*v14 & 0x10) != 0 )
      v21 = ((unsigned __int16)**((_DWORD **)v13 + 153) | (unsigned __int16)(**((_DWORD **)v13 + 153) >> 10)) & 0x3FF;
    else
      v21 = (1 << *(_DWORD *)(a2 + 140)) - 1;
    if ( (v21 & *(_DWORD *)(v9 + 2336)) != 0 )
      goto LABEL_138;
  }
  v22 = *(unsigned int *)(a2 + 2404);
  if ( (_DWORD)v22
    || (v23 = *((_QWORD *)v13 + 137), *(_BYTE *)(v23 + 204))
    || _InterlockedCompareExchange((volatile signed __int32 *)(v23 + 200), 0, 0) )
  {
    *v121 = 1;
    goto LABEL_109;
  }
  if ( *(_BYTE *)(a2 + 144) )
  {
    VidSchiExecuteMmIoFlipMultiPlaneOverlay3(
      (struct _VIDSCH_GLOBAL *)a2,
      v8,
      v120,
      (struct _VIDSCH_CALL_EXECUTE_FLIP *)v138,
      (enum _VIDSCH_FLIP_STATUS *)&v124,
      v128,
      a5);
    goto LABEL_103;
  }
  v24 = v138;
  v25 = 0;
  v26 = 2136LL;
  if ( (*v14 & 0x10) != 0 )
  {
    memset(v138, 0, 0x858uLL);
    v30 = (_DWORD *)*((_QWORD *)v13 + 153);
    v27 = -1;
    v28 = 0LL;
    v122 = 0;
    v29 = *v30 & 0x3FF;
    LODWORD(v6) = (*v30 >> 10) & 0x3FF;
    LODWORD(v121) = v29;
    v11 = !_BitScanForward((unsigned int *)&v30, v29);
    v129 = (int)v30;
    if ( !v11 )
      v27 = (char)v30;
    v11 = !_BitScanForward((unsigned int *)&v31, v6);
    v123 = v27;
    v32 = -1;
    v130 = v31;
    if ( !v11 )
      v32 = v31;
    v33 = v32;
    while ( v29 || (_DWORD)v6 )
    {
      v34 = 120LL * (unsigned int)v28;
      v133 = v34 + a2;
      memset((void *)(v34 + a2 + 2888), 0, 0x78uLL);
      v35 = v34 + a2;
      if ( v123 >= v33 )
      {
        v29 = (unsigned int)v121;
        *(_DWORD *)(v35 + 2888) = v33;
        *(_DWORD *)(v35 + 2892) = 0;
        v46 = -1;
        LODWORD(v6) = ~(1 << v33) & v6;
        v11 = !_BitScanForward((unsigned int *)&v35, v6);
        v132 = v47;
        if ( !v11 )
          v46 = v35;
        v28 = (unsigned int)(v28 + 1);
        v33 = v46;
      }
      else
      {
        v36 = v122;
        *(_DWORD *)(v35 + 2888) = v123;
        *(_DWORD *)(v35 + 2892) = 1;
        v37 = *((_QWORD *)v13 + 153);
        v38 = v37 + v36 * ((8 * *(_DWORD *)(v37 + 8) + 191) & 0xFFFFFFF8) + 160LL;
        VidSchiBindFlipPhysicalAddress((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)v37, v36, 0);
        v39 = v133;
        v40 = v122;
        v41 = (unsigned __int64)v122 << 6;
        *(_DWORD *)(v133 + 2896) = *(unsigned __int16 *)(v41
                                                       + *(_DWORD *)(*((_QWORD *)v13 + 153) + 4LL)
                                                       * ((8 * *(_DWORD *)(*((_QWORD *)v13 + 153) + 8LL) + 191) & 0xFFFFFFF8)
                                                       + *((_QWORD *)v13 + 153)
                                                       + 32);
        *(_QWORD *)(v39 + 2904) = *(_QWORD *)(v41
                                            + *(_DWORD *)(*((_QWORD *)v13 + 153) + 4LL)
                                            * ((8 * *(_DWORD *)(*((_QWORD *)v13 + 153) + 8LL) + 191) & 0xFFFFFFF8)
                                            + *((_QWORD *)v13 + 153)
                                            + 40);
        v42 = *(_DWORD *)(v39 + 2920);
        *(_QWORD *)(v39 + 2912) = *(_QWORD *)(v41
                                            + *(_DWORD *)(*((_QWORD *)v13 + 153) + 4LL)
                                            * ((8 * *(_DWORD *)(*((_QWORD *)v13 + 153) + 8LL) + 191) & 0xFFFFFFF8)
                                            + *((_QWORD *)v13 + 153)
                                            + 24);
        *(_DWORD *)(v39 + 2920) ^= (*(_DWORD *)(v38 + 28) ^ v42) & 1;
        *(_DWORD *)(v39 + 2920) ^= (*(_DWORD *)(v38 + 28) ^ *(_DWORD *)(v39 + 2920)) & 2;
        *(_DWORD *)(v39 + 2924) = (unsigned __int16)*(_DWORD *)v38;
        *(_DWORD *)(v39 + 2928) = (unsigned __int16)*(_DWORD *)(v38 + 4);
        *(_DWORD *)(v39 + 2932) = *(unsigned __int16 *)(v38 + 2);
        *(_DWORD *)(v39 + 2936) = *(unsigned __int16 *)(v38 + 6);
        *(_DWORD *)(v39 + 2940) = *(__int16 *)(v38 + 8);
        *(_DWORD *)(v39 + 2944) = *(__int16 *)(v38 + 12);
        *(_DWORD *)(v39 + 2948) = *(unsigned __int16 *)(v38 + 10);
        *(_DWORD *)(v39 + 2952) = *(unsigned __int16 *)(v38 + 14);
        *(_DWORD *)(v39 + 2956) = (unsigned __int16)*(_DWORD *)(v38 + 16);
        *(_DWORD *)(v39 + 2960) = (unsigned __int16)*(_DWORD *)(v38 + 20);
        *(_DWORD *)(v39 + 2964) = *(unsigned __int16 *)(v38 + 18);
        *(_DWORD *)(v39 + 2968) = *(unsigned __int16 *)(v38 + 22);
        *(_DWORD *)(v39 + 2972) = ((*(_DWORD *)(v38 + 28) >> 3) & 3) + 1;
        v45 = (*(_DWORD *)(v39 + 2976) ^ (*(_DWORD *)(v38 + 28) >> 2)) & 1;
        v122 = v40 + 1;
        *(_DWORD *)(v39 + 2976) ^= v45;
        *(_DWORD *)(v39 + 2980) = (*(_DWORD *)(v38 + 28) >> 5) & 3;
        *(_DWORD *)(v39 + 2984) ^= (*(_DWORD *)(v39 + 2984) ^ (*(_DWORD *)(v38 + 28) >> 7)) & 1;
        v43 = *(_DWORD *)(v39 + 2984) ^ ((unsigned __int8)*(_DWORD *)(v39 + 2984) ^ (unsigned __int8)(*(_DWORD *)(v38 + 28) >> 7)) & 2;
        *(_DWORD *)(v39 + 2984) = v43;
        *(_DWORD *)(v39 + 2984) = v43 ^ ((unsigned __int8)v43 ^ (unsigned __int8)(*(_DWORD *)(v38 + 28) >> 7)) & 4;
        *(_DWORD *)(v39 + 2988) = (*(_DWORD *)(v38 + 28) >> 10) & 7;
        *(_DWORD *)(v39 + 2992) = (*(_DWORD *)(v38 + 28) >> 13) & 1;
        *(_DWORD *)(v39 + 2996) = (*(_DWORD *)(v38 + 28) >> 14) & 1;
        *(_DWORD *)(120 * ((unsigned int)v28 + 25LL) + a2) = (*(_DWORD *)(v38 + 28) >> 15) & 3;
        v44 = -1;
        v29 = ~(1 << v123) & (unsigned int)v121;
        v11 = !_BitScanForward((unsigned int *)&v45, v29);
        LODWORD(v121) = v29;
        v131 = v45;
        if ( !v11 )
          v44 = v45;
        v28 = (unsigned int)(v28 + 1);
        v123 = v44;
      }
    }
    v48 = 0;
    v14 = v126;
    v9 = v119;
    LODWORD(v138[67]) |= 4u;
    v138[0] = a2;
    HIDWORD(v138[67]) = v119;
    LODWORD(v138[67]) ^= (LOBYTE(v138[67]) ^ (unsigned __int8)(8 * *v126)) & 8;
    LODWORD(v138[67]) ^= (LOBYTE(v138[67]) ^ (unsigned __int8)(8 * *v126)) & 0x10;
    LODWORD(v138[67]) ^= (LOBYTE(v138[67]) ^ (unsigned __int8)(8 * *v126)) & 0x20;
    LODWORD(v138[70]) = *((_DWORD *)v13 + 295);
    LODWORD(v138[265]) = -1073741823;
    LODWORD(v138[1]) = *((_DWORD *)v13 + 283);
    if ( *((_DWORD *)v13 + 283) )
    {
      do
      {
        v49 = v48++;
        v138[v49 + 2] = *(_QWORD *)(*(_QWORD *)&v13[8 * v49 + 56] + 64LL);
      }
      while ( v48 < *((_DWORD *)v13 + 283) );
    }
    v50 = *(_QWORD *)(a2 + 16);
    v116 = 0;
    if ( *(_BYTE *)(v50 + 2430) )
    {
      v6 = (unsigned int)v28;
      memset((void *)(a2 + 4088), 0, 112LL * (unsigned int)v28);
      if ( (_DWORD)v28 )
      {
        v51 = a2 + 4092;
        v52 = a2 + 2892;
        do
        {
          *(_DWORD *)(v51 - 4) = *(_DWORD *)(v52 - 4);
          v53 = *(_DWORD *)v52;
          *(_DWORD *)v51 = *(_DWORD *)v52;
          if ( v53 )
          {
            *(_DWORD *)(v51 + 4) = *(_DWORD *)(v52 + 4);
            *(_QWORD *)(v51 + 12) = *(_QWORD *)(v52 + 12);
            *(_QWORD *)(v51 + 20) = *(_QWORD *)(v52 + 20);
            *(_DWORD *)(v51 + 28) = *(_DWORD *)(v52 + 28);
            *(_OWORD *)(v51 + 32) = *(_OWORD *)(v52 + 32);
            *(_OWORD *)(v51 + 48) = *(_OWORD *)(v52 + 48);
            *(_DWORD *)(v51 + 64) = *(_DWORD *)(v52 + 80);
            *(_DWORD *)(v51 + 68) = *(_DWORD *)(v52 + 84);
            *(_DWORD *)(v51 + 72) = 0;
            *(_QWORD *)(v51 + 76) = 0LL;
            *(_DWORD *)(v51 + 84) = *(_DWORD *)(v52 + 88);
            *(_DWORD *)(v51 + 88) = *(_DWORD *)(v52 + 92);
            *(_DWORD *)(v51 + 92) = *(_DWORD *)(v52 + 96);
            *(_DWORD *)(v51 + 96) = *(_DWORD *)(v52 + 100);
            *(_DWORD *)(v51 + 100) = *(_DWORD *)(v52 + 104);
            *(_DWORD *)(v51 + 104) = *(_DWORD *)(v52 + 108);
          }
          v52 += 120LL;
          v51 += 112LL;
          --v6;
        }
        while ( v6 );
      }
    }
    else
    {
      if ( !*(_BYTE *)(v50 + 2431) )
      {
        if ( *(_BYTE *)(v50 + 2432) && *(_QWORD *)(v50 + 880) )
        {
          v6 = (unsigned int)v28;
          memset((void *)(a2 + 4088), 0, (unsigned __int64)(unsigned int)v28 << 7);
          v58 = 0;
          if ( (_DWORD)v28 )
          {
            v59 = a2 + 4092;
            v60 = a2 + 2892;
            do
            {
              *(_DWORD *)(v59 - 4) = *(_DWORD *)(v60 - 4);
              v61 = *(_DWORD *)v60;
              *(_DWORD *)v59 = *(_DWORD *)v60;
              if ( v61 )
              {
                *(_DWORD *)(v59 + 4) = *(_DWORD *)(v60 + 4);
                *(_QWORD *)(v59 + 12) = *(_QWORD *)(v60 + 12);
                *(_QWORD *)(v59 + 20) = *(_QWORD *)(v60 + 20);
                *(_DWORD *)(v59 + 28) = *(_DWORD *)(v60 + 28);
                *(_OWORD *)(v59 + 32) = *(_OWORD *)(v60 + 32);
                *(_OWORD *)(v59 + 48) = *(_OWORD *)(v60 + 48);
                *(_OWORD *)(v59 + 64) = *(_OWORD *)(v60 + 64);
                *(_DWORD *)(v59 + 80) = *(_DWORD *)(v60 + 80);
                *(_DWORD *)(v59 + 84) = *(_DWORD *)(v60 + 84);
                *(_DWORD *)(v59 + 88) = *(_DWORD *)(v60 + 88);
                *(_DWORD *)(v59 + 96) = *(_DWORD *)(v60 + 96);
                *(_DWORD *)(v59 + 100) = *(_DWORD *)(v60 + 100);
                *(_DWORD *)(v59 + 104) = *(_DWORD *)(v60 + 104);
                *(_DWORD *)(v59 + 108) = *(_DWORD *)(v60 + 108);
                *(_DWORD *)(v59 + 112) = *(_DWORD *)(v60 + 112);
                *(_DWORD *)(v59 + 116) = 0;
                v62 = *((_QWORD *)v13 + 153);
                v63 = v58 * ((8 * *(_DWORD *)(v62 + 8) + 191) & 0xFFFFFFF8);
                ++v58;
                *(_DWORD *)(v59 + 92) = *(_DWORD *)(v63 + v62 + 184);
              }
              v60 += 120LL;
              v59 += 128LL;
              --v6;
            }
            while ( v6 );
          }
          v54 = a2 + 4088;
          v64 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR2;
          goto LABEL_70;
        }
        v54 = a2 + 2888;
LABEL_69:
        v64 = VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR;
LABEL_70:
        v65 = *(unsigned int *)(a2 + 32);
        v66 = *(_QWORD *)(a2 + 24);
        v138[69] = v54;
        LODWORD(v138[68]) = v28;
        DpSynchronizeExecution(v66, v64, v138, v65, &v116);
        if ( bTracingEnabled )
        {
          LODWORD(v6) = 0;
          if ( (_DWORD)v28 )
          {
            v68 = (_DWORD *)(a2 + 2960);
            LODWORD(v121) = v120;
            do
            {
              v22 = (unsigned int)*(v68 - 17);
              v17 = 0LL;
              v67 = 0LL;
              if ( (_DWORD)v22 )
              {
                v69 = *((_QWORD *)v13 + 153);
                v70 = (unsigned int)v6 * ((8 * *(_DWORD *)(v69 + 8) + 191) & 0xFFFFFFF8);
                LODWORD(v6) = v6 + 1;
                v17 = *(unsigned int *)(v70 + v69 + 184);
                v67 = *(unsigned int *)(v70 + v69 + 192);
              }
              HIDWORD(v121) = *((_DWORD *)v13 + 276);
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0pqqxpxqqqddddddddddddqqtqq(
                  v67,
                  v22,
                  v17,
                  *(_QWORD *)(a2 + 16),
                  v9,
                  *(v68 - 18),
                  (char)v121,
                  *((_QWORD *)v68 - 6),
                  *((_QWORD *)v68 - 7),
                  *(v68 - 16),
                  *((_DWORD *)v13 + 278),
                  *((_DWORD *)v13 + 281),
                  *(v68 - 9),
                  *(v68 - 7),
                  *(v68 - 8),
                  *(v68 - 6),
                  *(v68 - 5),
                  *(v68 - 3),
                  *(v68 - 4),
                  *(v68 - 2),
                  *(v68 - 1),
                  v68[1],
                  *v68,
                  v68[2],
                  v17,
                  5,
                  v22,
                  v67,
                  0);
              v68 += 30;
              --v28;
            }
            while ( v28 );
            v14 = v126;
          }
        }
        v8 = SLODWORD(v138[265]);
        if ( !LODWORD(v138[265]) )
        {
          v9 = v134;
          LODWORD(v6) = v125;
          LODWORD(v8) = v119;
          goto LABEL_109;
        }
        v71 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v67, v22);
        v71[6] = v138;
        v71[3] = 281LL;
        v71[4] = 11LL;
        v71[5] = v8;
        v71[7] = *(_QWORD *)(a2 + 16);
        WdLogEvent5_WdCriticalError(v71);
        __debugbreak();
        goto LABEL_81;
      }
      v6 = (unsigned int)v28;
      memset((void *)(a2 + 4088), 0, (unsigned __int64)(unsigned int)v28 << 7);
      if ( (_DWORD)v28 )
      {
        v55 = a2 + 4092;
        v56 = a2 + 2892;
        do
        {
          *(_DWORD *)(v55 - 4) = *(_DWORD *)(v56 - 4);
          v57 = *(_DWORD *)v56;
          *(_DWORD *)v55 = *(_DWORD *)v56;
          if ( v57 )
          {
            *(_DWORD *)(v55 + 4) = *(_DWORD *)(v56 + 4);
            *(_QWORD *)(v55 + 12) = *(_QWORD *)(v56 + 12);
            *(_QWORD *)(v55 + 20) = *(_QWORD *)(v56 + 20);
            *(_DWORD *)(v55 + 28) = *(_DWORD *)(v56 + 28);
            *(_OWORD *)(v55 + 32) = *(_OWORD *)(v56 + 32);
            *(_OWORD *)(v55 + 48) = *(_OWORD *)(v56 + 48);
            *(_OWORD *)(v55 + 64) = *(_OWORD *)(v56 + 64);
            *(_DWORD *)(v55 + 80) = *(_DWORD *)(v56 + 80);
            *(_DWORD *)(v55 + 84) = *(_DWORD *)(v56 + 84);
            *(_DWORD *)(v55 + 88) = 0;
            *(_QWORD *)(v55 + 92) = 0LL;
            *(_DWORD *)(v55 + 100) = *(_DWORD *)(v56 + 88);
            *(_DWORD *)(v55 + 104) = *(_DWORD *)(v56 + 92);
            *(_DWORD *)(v55 + 108) = *(_DWORD *)(v56 + 96);
            *(_DWORD *)(v55 + 112) = *(_DWORD *)(v56 + 100);
            *(_DWORD *)(v55 + 116) = *(_DWORD *)(v56 + 104);
            *(_DWORD *)(v55 + 120) = *(_DWORD *)(v56 + 108);
          }
          v56 += 120LL;
          v55 += 128LL;
          --v6;
        }
        while ( v6 );
        v54 = a2 + 4088;
        goto LABEL_69;
      }
    }
    v54 = a2 + 4088;
    goto LABEL_69;
  }
LABEL_81:
  memset(v24, v25, v26);
  v138[0] = a2;
  LODWORD(v138[1]) = v8;
  v72 = *((_QWORD *)v13 + 153);
  v73 = *(_QWORD *)(*(_DWORD *)(v72 + 4) * ((8 * *(_DWORD *)(v72 + 8) + 191) & 0xFFFFFFF8) + v72 + 48);
  *(_QWORD *)(*(_DWORD *)(v72 + 4) * ((8 * *(_DWORD *)(v72 + 8) + 191) & 0xFFFFFFF8) + v72 + 40) = *(_QWORD *)(*(_QWORD *)(v73 + 96) + 32LL);
  v74 = *(_QWORD *)(v73 + 96);
  *(_WORD *)(*(_DWORD *)(v72 + 4) * ((8 * *(_DWORD *)(v72 + 8) + 191) & 0xFFFFFFF8) + v72 + 32) = *(_WORD *)(v74 + 6);
  v75 = *(unsigned int *)(*(_QWORD *)(v73 + 96) + 12LL);
  if ( !(_DWORD)v75 )
  {
    v76 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v75, v74);
    v76[3] = 281LL;
    v76[4] = 0x4000LL;
    v76[5] = 0LL;
    v76[6] = 0LL;
    v76[7] = 0LL;
    WdLogEvent5_WdCriticalError(v76);
    __debugbreak();
  }
  HIDWORD(v138[1]) = *(unsigned __int16 *)(*(_DWORD *)(*((_QWORD *)v13 + 153) + 4LL)
                                         * ((8 * *(_DWORD *)(*((_QWORD *)v13 + 153) + 8LL) + 191) & 0xFFFFFFF8)
                                         + *((_QWORD *)v13 + 153)
                                         + 32LL);
  v138[2] = *(_QWORD *)(*(_DWORD *)(*((_QWORD *)v13 + 153) + 4LL)
                      * ((8 * *(_DWORD *)(*((_QWORD *)v13 + 153) + 8LL) + 191) & 0xFFFFFFF8)
                      + *((_QWORD *)v13 + 153)
                      + 40LL);
  v138[3] = *(_QWORD *)(*(_DWORD *)(*((_QWORD *)v13 + 153) + 4LL)
                      * ((8 * *(_DWORD *)(*((_QWORD *)v13 + 153) + 8LL) + 191) & 0xFFFFFFF8)
                      + *((_QWORD *)v13 + 153)
                      + 24LL);
  LODWORD(v138[70]) ^= (LOBYTE(v138[70]) ^ (unsigned __int8)(8 * *v14)) & 8;
  LODWORD(v138[70]) ^= (LOBYTE(v138[70]) ^ (unsigned __int8)(8 * *v14)) & 0x10;
  LODWORD(v138[70]) ^= (LOBYTE(v138[70]) ^ (unsigned __int8)(8 * *v14)) & 0x20;
  HIDWORD(v138[70]) = *((_DWORD *)v13 + 295);
  LODWORD(v138[70]) ^= (LOBYTE(v138[70]) ^ (unsigned __int8)(8 * *v14)) & 0x40;
  v77 = LOBYTE(v138[70]) ^ (4 * *v14);
  LODWORD(v138[265]) = -1073741823;
  v78 = LODWORD(v138[70]) ^ v77 & 0x80;
  LODWORD(v138[70]) = v78;
  v79 = (_DWORD *)*((_QWORD *)v13 + 150);
  if ( v79 )
  {
    LODWORD(v138[263]) = *v79;
    v138[264] = *((_QWORD *)v13 + 150) + 8LL;
  }
  v80 = *((_QWORD *)v13 + 151);
  if ( v80 )
  {
    v125 = *((_QWORD *)v13 + 150);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v80 + 16), &LockHandle);
    v81 = v125;
    if ( v125 )
      _InterlockedIncrement((volatile signed __int32 *)(v125 + 4));
    v82 = *(CRefCountedBuffer **)(v80 + 8);
    if ( v82 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(v82);
      v81 = v125;
    }
    *(_QWORD *)(v80 + 8) = v81;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v78 = v138[70];
  }
  v83 = 0;
  LODWORD(v138[4]) = *((_DWORD *)v13 + 283);
  if ( *((_DWORD *)v13 + 283) )
  {
    do
    {
      v73 = *((_QWORD *)v13 + 153);
      v84 = *(_DWORD *)(v73 + 4);
      v85 = v84 * ((8 * *(_DWORD *)(v73 + 8) + 191) & 0xFFFFFFF8);
      v74 = (unsigned __int64)(v83 * v84) << 6;
      v138[v83 + 5] = *(_QWORD *)(v74 + v73 + v85 + 16);
      if ( v83 )
      {
        v86 = &v138[3 * v83 + 68];
        *v86 = *(_QWORD *)(((unsigned __int64)(v83 * *(_DWORD *)(*((_QWORD *)v13 + 153) + 4LL)) << 6)
                         + *((_QWORD *)v13 + 153)
                         + *(_DWORD *)(*((_QWORD *)v13 + 153) + 4LL)
                         * ((8 * *(_DWORD *)(*((_QWORD *)v13 + 153) + 8LL) + 191) & 0xFFFFFFF8)
                         + 24);
        VidSchiBindFlipPhysicalAddress(*((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)v13 + 153), 0, v83);
        *((_WORD *)v86 + 4) = *(_WORD *)(((unsigned __int64)(v83 * *(_DWORD *)(*((_QWORD *)v13 + 153) + 4LL)) << 6)
                                       + *((_QWORD *)v13 + 153)
                                       + *(_DWORD *)(*((_QWORD *)v13 + 153) + 4LL)
                                       * ((8 * *(_DWORD *)(*((_QWORD *)v13 + 153) + 8LL) + 191) & 0xFFFFFFF8)
                                       + 32);
        v73 = *((_QWORD *)v13 + 153);
        v86[2] = *(_QWORD *)(((unsigned __int64)(v83 * *(_DWORD *)(v73 + 4)) << 6)
                           + v73
                           + *(_DWORD *)(v73 + 4) * ((8 * *(_DWORD *)(v73 + 8) + 191) & 0xFFFFFFF8)
                           + 40);
      }
      ++v83;
    }
    while ( v83 < *((_DWORD *)v13 + 283) );
    v78 = v138[70];
    v14 = v126;
  }
  if ( v117 )
    v87 = v78 | 2;
  else
    v87 = v78 | 4;
  LODWORD(v8) = v119;
  LODWORD(v138[70]) = v87;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqqpxqqqq(
      v87,
      v74,
      v73,
      *(_QWORD *)(a2 + 16),
      v119,
      *((_DWORD *)v13 + 276),
      v138[3],
      v138[2],
      SBYTE4(v138[1]),
      *((_DWORD *)v13 + 278),
      *((_DWORD *)v13 + 281),
      v87);
  v88 = *(unsigned int *)(a2 + 32);
  v89 = *(_QWORD *)(a2 + 24);
  v118[0] = 0;
  DpSynchronizeExecution(v89, VidSchiExecuteMmIoFlipAtISR, v138, v88, v118);
LABEL_103:
  if ( SLODWORD(v138[265]) < 0 )
  {
    if ( LODWORD(v138[265]) == -1073741811 )
    {
      if ( (*v14 & 0x10) != 0 || (v138[70] & 0x40) == 0 )
      {
        v90 = WdLogNewEntry5_WdAssertion(LODWORD(v138[265]), v22);
      }
      else
      {
        v90 = WdLogNewEntry5_WdAssertion(LODWORD(v138[265]), v22);
        v91 = *(_QWORD *)(*(_DWORD *)(*((_QWORD *)v13 + 153) + 4LL)
                        * ((8 * *(_DWORD *)(*((_QWORD *)v13 + 153) + 8LL) + 191) & 0xFFFFFFF8)
                        + *((_QWORD *)v13 + 153)
                        + 24LL);
        *(_QWORD *)(v90 + 32) = (unsigned int)v8;
        *(_QWORD *)(v90 + 24) = v91;
      }
      WdLogEvent5_WdAssertion(v90);
      VidSchiUpdateFlipQueueHistory(2LL, v9, v120, (unsigned int)v6);
      return 3221225485LL;
    }
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 2466LL) && LODWORD(v138[265]) == -1073741267 )
    {
      *((_DWORD *)v13 + 277) = 13;
      v115 = 1LL;
LABEL_139:
      VidSchiUpdateFlipQueueHistory(v115, v9, v120, (unsigned int)v6);
      return 259LL;
    }
LABEL_138:
    v115 = 2LL;
    goto LABEL_139;
  }
LABEL_109:
  if ( (*v14 & 0x20) != 0 )
  {
    v22 = *((_QWORD *)v13 + 149);
    if ( v22 )
      VidSchiPropagatePresentHistoryToken(
        *((PKSPIN_LOCK *)v13 + 148),
        (struct _D3DKMT_PRESENTHISTORYTOKEN *)v22,
        1,
        (*v14 & 0x40) != 0,
        0,
        0,
        *((_QWORD *)v13 + 151),
        *((_QWORD *)v13 + 150),
        0LL);
  }
  v92 = v124;
  v93 = *v14 & 0x10;
  *((_DWORD *)v13 + 277) = v124;
  if ( v92 == 11 )
  {
    v94 = v127;
    *((_QWORD *)v13 + 146) = HIDWORD(v138[265]);
    *((_QWORD *)v13 + 144) = v138[266];
    VidSchiUnreferenceDisplayingAllocationsForThisEntry(v94, v22, v9, v13 + 56);
    VidSchiReferenceDisplayingAllocationsForThisEntry(v127, a2, (_WORD *)v9, (__int64)(v13 + 56));
    v95 = *((_QWORD *)v13 + 137);
    v96 = VidSchiCompleteFlipEntry(v127, a2, v8, v120, v6, v6, 0, 0LL);
    v97 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v95 + 40) + 24LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(v95 + 32) + 4LL))
                    + 8LL * (unsigned int)v8
                    + 88);
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 8LL * (unsigned int)v8 + 5792) + 8LL), -v96);
    v98 = *(_DWORD **)(a2 + 8LL * (unsigned int)v8 + 5792);
    *v98 += v96;
    v17 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v97 + 8), -v96);
    *(_DWORD *)v97 += v96;
  }
  else
  {
    if ( v93 )
      v99 = ((unsigned __int16)**((_DWORD **)v13 + 153) | (unsigned __int16)(**((_DWORD **)v13 + 153) >> 10)) & 0x3FF;
    else
      v99 = (1 << *(_DWORD *)(a2 + 140)) - 1;
    *(_DWORD *)(v9 + 2336) |= v99;
  }
  v100 = v128;
  *((_QWORD *)v13 + 143) = MEMORY[0xFFFFF78000000320];
  v101 = 1296LL * *((unsigned int *)v100 + 11);
  *((_DWORD *)v100 + 12) = v6;
  v102 = *(_DWORD *)((char *)v100 + v101 + 1108);
  if ( v102 != 5 && v102 != 15 )
    *((_DWORD *)v100 + 11) = v6;
  *((_DWORD *)v100 + 10) = ((_BYTE)v6 + 1) & 0x3F;
  v103 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 552LL);
  v104 = *(_DWORD *)(v103 + 7888);
  if ( *(_QWORD *)(v103 + 7880) <= (unsigned __int64)qword_1C004D2A0 )
  {
    if ( v104 )
      *(_DWORD *)(v103 + 7888) = v104 - 1;
  }
  else
  {
    v105 = dword_1C004D2AC + v104;
    *(_DWORD *)(v103 + 7888) = v105;
    if ( v105 > dword_1C004D2A8
      && MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v103 + 7896) > (unsigned __int64)qword_1C004D2B0 )
    {
      if ( (unsigned __int8)WdDiagIsTracingEnabled(&Dxgk_ExcessiveMemoryTransfer, v100, v17) )
      {
        EtwHandle = WdDiagGetEtwHandle();
        if ( EtwHandle )
          EtwWrite(EtwHandle, &Dxgk_ExcessiveMemoryTransfer, 0LL, 0, 0LL);
      }
      v11 = bTracingEnabled == 0;
      *(_QWORD *)(v103 + 7896) = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(v103 + 7888) = 0;
      if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v106, &EventPerformanceWarning);
    }
  }
  _InterlockedExchange64((volatile __int64 *)(v103 + 7880), 0LL);
  v108 = v135;
  v109 = *(_QWORD *)(v9 + 112) + 72LL * *(unsigned int *)(v9 + 120);
  *(_QWORD *)v109 = 0LL;
  *(_QWORD *)(v109 + 8) = 0LL;
  *(_QWORD *)(v109 + 16) = 0LL;
  *(_QWORD *)(v109 + 24) = 0LL;
  *(_QWORD *)(v109 + 32) = 0LL;
  *(_QWORD *)(v109 + 40) = 0LL;
  *(_QWORD *)(v109 + 48) = 0LL;
  *(_QWORD *)(v109 + 56) = 0LL;
  *(_QWORD *)(v109 + 64) = 0LL;
  v110 = v120;
  *(_DWORD *)(v9 + 120) = (*(_DWORD *)(v9 + 120) + 1) & (*(_DWORD *)(v9 + 104) - 1);
  v111 = *v108;
  *(_DWORD *)v109 = 1;
  *(_DWORD *)(v109 + 16) = v110;
  *(_DWORD *)(v109 + 20) = v6;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v113 = v136;
  *(LARGE_INTEGER *)(v109 + 8) = PerformanceCounter;
  *(_BYTE *)(v109 + 28) = (*(_DWORD *)((_BYTE *)v111 + v113 + 1176) & 0x20) != 0;
  *(_DWORD *)(v109 + 32) = *(_DWORD *)((char *)v111 + v113 + 1108);
  *(_DWORD *)(v109 + 24) = *(_DWORD *)((char *)v111 + v113 + 1112);
  *(_DWORD *)(v109 + 40) = *(_DWORD *)(v9 + 2340);
  *(_DWORD *)(v109 + 36) = *(_DWORD *)(v9 + 2336);
  *(_DWORD *)(v109 + 44) = *((_DWORD *)v111 + 8);
  *(_DWORD *)(v109 + 48) = *((_DWORD *)v111 + 9);
  *(_DWORD *)(v109 + 52) = *((_DWORD *)v111 + 10);
  *(_DWORD *)(v109 + 56) = *((_DWORD *)v111 + 11);
  *(_DWORD *)(v109 + 60) = *((_DWORD *)v111 + 12);
  *(_DWORD *)(v109 + 64) = *((_DWORD *)v111 + 13);
  return 0LL;
}
