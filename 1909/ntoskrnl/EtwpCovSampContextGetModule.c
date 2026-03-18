/*
 * XREFs of EtwpCovSampContextGetModule @ 0x140901A04
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x140901A04 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampImageNotify @ 0x140903870 (EtwpCovSampImageNotify.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwCovSampHash @ 0x140334538 (EtwCovSampHash.c)
 *     EtwpCheckDebugInfoEqual @ 0x1403345F0 (EtwpCheckDebugInfoEqual.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsReferenceProcessFilePointer @ 0x14061B380 (PsReferenceProcessFilePointer.c)
 *     EtwpFindDebugId @ 0x1406DB62C (EtwpFindDebugId.c)
 *     EtwpCovSampCheckForSegments @ 0x140901204 (EtwpCovSampCheckForSegments.c)
 *     EtwpCovSampContextFastFindModule @ 0x1409018B0 (EtwpCovSampContextFastFindModule.c)
 *     EtwpCovSampContextGetModule @ 0x140901A04 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampContextPruneModules @ 0x140902B00 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampModuleCleanup @ 0x140903AA4 (EtwpCovSampModuleCleanup.c)
 *     EtwpCovSampModuleGetName @ 0x140903B34 (EtwpCovSampModuleGetName.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x140903C48 (EtwpCovSampModuleNameInfoCleanup.c)
 */

__int64 __fastcall EtwpCovSampContextGetModule(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 *a7)
{
  __int64 v8; // r12
  char *v9; // r13
  char *v10; // r14
  PIMAGE_NT_HEADERS v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v15; // rdi
  PIMAGE_NT_HEADERS v16; // rax
  int Module; // edi
  _DWORD *v18; // rcx
  struct _KTHREAD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // ecx
  char *PoolWithTag; // rax
  SIZE_T v25; // rdx
  int v27; // eax
  unsigned __int8 v28; // cl
  unsigned int v29; // r8d
  __int64 v30; // rax
  unsigned int v31; // r8d
  unsigned int v32; // edi
  __int64 v33; // rax
  __int64 v34; // rax
  __m128i v35; // xmm6
  __int64 v36; // rax
  int v37; // eax
  unsigned int v38; // ecx
  struct _KTHREAD *v39; // rcx
  char *v40; // r10
  __int64 v41; // r8
  unsigned int v42; // eax
  char i; // cl
  __int64 v44; // r11
  unsigned __int64 v45; // rcx
  unsigned int v46; // edi
  __int64 v47; // rdx
  _QWORD *v48; // r11
  __int64 v49; // rcx
  char k; // cl
  unsigned __int64 v51; // rcx
  __int64 v52; // r11
  unsigned int v53; // edi
  __int64 v54; // rdx
  _QWORD *v55; // r10
  __int64 v56; // rcx
  char *v57; // rcx
  int v58; // eax
  __int64 v59; // r12
  __int64 v60; // rax
  _QWORD *n; // rdx
  _QWORD *v62; // r8
  _QWORD *ii; // rdx
  __int64 v64; // rdx
  __int64 v65; // rcx
  _QWORD *v66; // rax
  __int64 v67; // rcx
  int v68; // r10d
  __int64 v69; // rdx
  unsigned int v70; // edi
  __int64 v71; // r8
  __int64 v72; // rcx
  unsigned int v73; // r10d
  void *v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  volatile signed __int64 *v77; // rdi
  signed __int64 v78; // rax
  char v79; // bl
  int Name; // [rsp+40h] [rbp-188h]
  char *v81; // [rsp+48h] [rbp-180h]
  unsigned int v82; // [rsp+50h] [rbp-178h]
  unsigned __int64 v83; // [rsp+58h] [rbp-170h]
  __int64 v84; // [rsp+58h] [rbp-170h]
  __int64 v85; // [rsp+60h] [rbp-168h]
  __int64 v86; // [rsp+68h] [rbp-160h]
  __int64 v87; // [rsp+70h] [rbp-158h]
  __int64 v88; // [rsp+78h] [rbp-150h]
  __m128i *v89; // [rsp+80h] [rbp-148h]
  __int64 j; // [rsp+80h] [rbp-148h]
  __int64 v91; // [rsp+88h] [rbp-140h]
  __int64 v92; // [rsp+88h] [rbp-140h]
  int v93; // [rsp+90h] [rbp-138h]
  unsigned int v94; // [rsp+98h] [rbp-130h]
  _DWORD *v95; // [rsp+A0h] [rbp-128h] BYREF
  __int64 v96; // [rsp+A8h] [rbp-120h] BYREF
  SIZE_T v97; // [rsp+B0h] [rbp-118h]
  __int128 v98; // [rsp+B8h] [rbp-110h]
  PVOID Object; // [rsp+C8h] [rbp-100h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+D0h] [rbp-F8h]
  unsigned __int64 v101; // [rsp+D8h] [rbp-F0h] BYREF
  __int64 v102; // [rsp+E0h] [rbp-E8h]
  PIMAGE_NT_HEADERS v103; // [rsp+E8h] [rbp-E0h]
  _QWORD v104[2]; // [rsp+F0h] [rbp-D8h] BYREF
  signed __int64 v105; // [rsp+100h] [rbp-C8h]
  signed __int64 v106; // [rsp+108h] [rbp-C0h]
  signed __int64 v107; // [rsp+110h] [rbp-B8h]
  __int64 v108; // [rsp+118h] [rbp-B0h]
  __int64 v109; // [rsp+120h] [rbp-A8h]
  signed __int64 v110; // [rsp+128h] [rbp-A0h]
  PVOID v111[7]; // [rsp+130h] [rbp-98h] BYREF
  __m128i v112; // [rsp+168h] [rbp-60h]
  int v116; // [rsp+1F0h] [rbp+28h]
  int v117; // [rsp+1F0h] [rbp+28h]
  __int64 m; // [rsp+1F0h] [rbp+28h]
  __int64 v119; // [rsp+1F0h] [rbp+28h]
  __int64 v120; // [rsp+1F0h] [rbp+28h]

  v8 = 0LL;
  v9 = 0LL;
  v81 = 0LL;
  v10 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  *a7 = 0LL;
  v98 = 0LL;
  v97 = *(_QWORD *)(a5 + 32);
  v11 = RtlImageNtHeader(*(PVOID *)(a5 + 16));
  v103 = v11;
  if ( v11 )
  {
    LODWORD(v98) = v11->OptionalHeader.CheckSum;
    DWORD1(v98) = v11->FileHeader.TimeDateStamp;
    if ( (*(_DWORD *)(a5 + 8) & 0x100) != 0 )
    {
      v12 = *(_QWORD *)(a5 + 16);
    }
    else
    {
      v13 = *(_QWORD *)(a5 + 48);
      if ( !v13 )
      {
        Name = -1073741637;
        goto LABEL_141;
      }
      v12 = *(_QWORD *)(v13 + 24);
    }
    v96 = v12;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    BugCheckParameter2 = a1 + 664;
    v15 = (volatile signed __int64 *)(a1 + 664);
    ExAcquirePushLockSharedEx(a1 + 664, 0LL);
    if ( (*(_DWORD *)(a1 + 8) & 0x400) != 0 )
    {
      if ( *(_DWORD *)(a3 + 44) == -1 )
      {
        *(_DWORD *)(a3 + 40) = 1515870810;
        *(_DWORD *)(a3 + 44) = -1515870811;
        memset(v111, 0, sizeof(v111));
        v111[2] = *(PVOID *)(a2 + 968);
        v16 = RtlImageNtHeader(v111[2]);
        v103 = v16;
        if ( v16 )
          v111[4] = (PVOID)v16->OptionalHeader.SizeOfImage;
        if ( v111[4] )
        {
          v91 = *(_QWORD *)(a2 + 1128);
          if ( (int)PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)a2, (ULONG_PTR *)&Object) >= 0 )
          {
            v111[6] = Object;
            v105 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 664), 0LL, 17LL);
            if ( v105 != 17 )
              ExfReleasePushLockShared((signed __int64 *)(a1 + 664));
            KeAbPostRelease(a1 + 664);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            Module = EtwpCovSampContextGetModule(a1, a2, a3, v91, (__int64)v111, 1, (__int64)&v95);
            ObfDereferenceObject(Object);
            if ( Module >= 0 )
            {
              v18 = v95;
              *(_DWORD *)(a3 + 40) = v95[31];
              *(_DWORD *)(a3 + 44) = v18[32];
              v18[40] = v18[31];
              v95[41] = v95[32];
              if ( *(_QWORD *)(a5 + 16) == *(_QWORD *)(a2 + 968) )
              {
                *a7 = (__int64)v95;
                return 0LL;
              }
            }
            v20 = KeGetCurrentThread();
            --v20->KernelApcDisable;
            v15 = (volatile signed __int64 *)(a1 + 664);
            ExAcquirePushLockSharedEx(a1 + 664, 0LL);
          }
        }
      }
      if ( *(_QWORD *)(a5 + 16) != *(_QWORD *)(a2 + 968) )
      {
        v21 = *(unsigned int *)(a3 + 40);
        v96 ^= v21;
        DWORD2(v98) = v21;
      }
    }
    v22 = EtwpCovSampContextFastFindModule(a1, (__int64)&v96, a7);
    if ( v22 && v22 == *a7 )
    {
      v106 = _InterlockedCompareExchange64(v15, 0LL, 17LL);
      if ( v106 != 17 )
        ExfReleasePushLockShared((signed __int64 *)v15);
      KeAbPostRelease((ULONG_PTR)v15);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_27;
    }
    v93 = *(_DWORD *)(a1 + 684) >> 5;
    v23 = *(_DWORD *)(a1 + 680);
    if ( v23 <= *(_DWORD *)(a1 + 696) )
      v23 = *(_DWORD *)(a1 + 696);
    v94 = v23;
    v107 = _InterlockedCompareExchange64(v15, 0LL, 17LL);
    if ( v107 != 17 )
      ExfReleasePushLockShared((signed __int64 *)v15);
    KeAbPostRelease((ULONG_PTR)v15);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0xB0uLL, 0x56777445u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_34:
      Name = -1073741670;
      goto LABEL_28;
    }
    memset(PoolWithTag, 0, 0xB0uLL);
    *((_QWORD *)v10 + 10) = v10 + 72;
    *((_QWORD *)v10 + 9) = v10 + 72;
    *((_QWORD *)v10 + 12) = v10 + 88;
    *((_QWORD *)v10 + 11) = v10 + 88;
    *(_QWORD *)v10 = 0LL;
    *((_QWORD *)v10 + 2) = 0LL;
    *((_QWORD *)v10 + 8) = 1LL;
    *((_QWORD *)v10 + 1) = v96;
    v25 = v97;
    *((_QWORD *)v10 + 5) = v97;
    *((_QWORD *)v10 + 4) = v98;
    *((_DWORD *)v10 + 30) ^= (*((_DWORD *)v10 + 30) ^ (*(_DWORD *)(a5 + 8) << 9)) & 0x20000;
    v104[0] = 0LL;
    v104[1] = 0LL;
    v82 = 0;
    v89 = (__m128i *)v104;
    v116 = 1;
    if ( (int)EtwpFindDebugId(*(char **)(a5 + 16), v25, (void **)v10 + 6, (_DWORD *)v10 + 14) >= 0 )
    {
      if ( *((_DWORD *)v10 + 14) <= 0x400u )
      {
        v30 = *((_QWORD *)v10 + 6);
        v82 = *(_DWORD *)(v30 + 20);
        v89 = (__m128i *)(v30 + 4);
LABEL_39:
        Name = EtwpCovSampModuleGetName(v10, a5, a4);
        if ( Name < 0 )
          goto LABEL_28;
        v101 = *((_QWORD *)v10 + 14);
        v102 = (unsigned __int16)*((_DWORD *)v10 + 30);
        v29 = *(_DWORD *)(a1 + 1104);
        if ( v29 )
          v27 = EtwpCovSampCheckForSegments(&v101, (unsigned __int64 *)(a1 + 784), v29);
        else
          v27 = v116;
        if ( v27 )
        {
          v31 = *(_DWORD *)(a1 + 1108);
          if ( v31 )
          {
            if ( !(unsigned int)EtwpCovSampCheckForSegments(&v101, (unsigned __int64 *)(a1 + 944), v31) )
            {
              v27 = 1;
LABEL_52:
              *((_DWORD *)v10 + 30) ^= (*((_DWORD *)v10 + 30) ^ (v27 << 16)) & 0x10000;
              v32 = *((_DWORD *)v10 + 10);
              LODWORD(v83) = *((_DWORD *)v10 + 9);
              HIDWORD(v83) = *((_DWORD *)v10 + 8);
              v33 = EtwCovSampHash(v83, *(unsigned int *)(a1 + 12));
              v34 = EtwCovSampHash(__PAIR64__(v82, v32), v33);
              v35 = *v89;
              v112 = v35;
              v36 = EtwCovSampHash(v35.m128i_u64[0], v34);
              v84 = EtwCovSampHash(_mm_srli_si128(v35, 8).m128i_u64[0], v36);
              v37 = v84 ^ HIDWORD(v84);
              if ( (unsigned int)v84 == HIDWORD(v84) )
                v37 = 1;
              if ( !a6 )
                v37 ^= *(_DWORD *)(a3 + 40);
              *((_DWORD *)v10 + 31) = v37;
LABEL_57:
              v38 = 2 * v93;
              if ( v94 + 1 > 2 * v93 )
              {
                v8 = v38;
                if ( !v38 )
                  v8 = 128LL;
                v81 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)(2 * v8), 0x56777445u);
              }
              v39 = KeGetCurrentThread();
              --v39->KernelApcDisable;
              ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
              *(_QWORD *)(a1 + 672) = KeGetCurrentThread();
              if ( v81 && (unsigned int)v8 > *(_DWORD *)(a1 + 684) >> 5 )
              {
                v40 = &v81[8 * (unsigned int)v8];
                v41 = (unsigned int)v8;
                v117 = v8 & (v8 - 1);
                if ( v117 )
                {
                  v42 = v8;
                  for ( i = -1; v42; v42 >>= 1 )
                    ++i;
                  v41 = (unsigned int)(1 << i);
                }
                if ( (unsigned int)v41 > 0x4000000 )
                  v41 = 0x4000000LL;
                v44 = a1 + 696;
                v108 = (a1 + 696) | 1;
                v45 = (unsigned __int64)(8 * v41 + 7) >> 3;
                if ( v40 > &v40[8 * v41] )
                  v45 = 0LL;
                if ( v45 )
                  memset64(v40, (a1 + 696) | 1, v45);
                v92 = -1LL << (*(_BYTE *)(a1 + 700) & 0x1F);
                v46 = 0;
                if ( (*(_DWORD *)(a1 + 700) & 0xFFFFFFE0) != 0 )
                {
                  do
                  {
                    v47 = *(_QWORD *)(v44 + 8);
                    for ( j = v47; ; v47 = j )
                    {
                      v48 = *(_QWORD **)(v47 + 8LL * v46);
                      if ( ((unsigned __int8)v48 & 1) != 0 )
                        break;
                      *(_QWORD *)(v47 + 8LL * v46) = *v48;
                      v85 = v92 & v48[1];
                      v49 = (37
                           * (BYTE6(v85)
                            + 37
                            * (BYTE5(v85)
                             + 37
                             * (BYTE4(v85)
                              + 37
                              * (BYTE3(v85)
                               + 37 * (BYTE2(v85) + 37 * (BYTE1(v85) + 37 * ((unsigned __int8)v85 + 11623883)))))))
                           + HIBYTE(v85)) & (unsigned int)(v41 - 1);
                      *v48 = *(_QWORD *)&v40[8 * v49];
                      *(_QWORD *)&v40[8 * v49] = v48;
                    }
                    ++v46;
                    v44 = a1 + 696;
                  }
                  while ( v46 < *(_DWORD *)(a1 + 700) >> 5 );
                }
                *(_QWORD *)(v44 + 8) = v40;
                *(_DWORD *)(v44 + 4) = (32 * v41) | *(_DWORD *)(v44 + 4) & 0x1F;
                if ( v117 )
                {
                  for ( k = -1; (_DWORD)v8; LODWORD(v8) = (unsigned int)v8 >> 1 )
                    ++k;
                  v8 = (unsigned int)(1 << k);
                }
                if ( (unsigned int)v8 > 0x4000000 )
                  v8 = 0x4000000LL;
                v109 = (a1 + 680) | 1;
                v51 = (unsigned __int64)(8 * v8 + 7) >> 3;
                if ( v81 > &v81[8 * v8] )
                  v51 = 0LL;
                if ( v51 )
                  memset64(v81, (a1 + 680) | 1, v51);
                v52 = -1LL << (*(_BYTE *)(a1 + 684) & 0x1F);
                v53 = 0;
                if ( (*(_DWORD *)(a1 + 684) & 0xFFFFFFE0) != 0 )
                {
                  do
                  {
                    v54 = *(_QWORD *)(a1 + 688);
                    for ( m = v54; ; v54 = m )
                    {
                      v55 = *(_QWORD **)(v54 + 8LL * v53);
                      if ( ((unsigned __int8)v55 & 1) != 0 )
                        break;
                      *(_QWORD *)(v54 + 8LL * v53) = *v55;
                      v86 = v52 & v55[1];
                      v56 = (37
                           * (BYTE6(v86)
                            + 37
                            * (BYTE5(v86)
                             + 37
                             * (BYTE4(v86)
                              + 37
                              * (BYTE3(v86)
                               + 37 * (BYTE2(v86) + 37 * (BYTE1(v86) + 37 * ((unsigned __int8)v86 + 11623883)))))))
                           + HIBYTE(v86)) & (unsigned int)(v8 - 1);
                      *v55 = *(_QWORD *)&v81[8 * v56];
                      *(_QWORD *)&v81[8 * v56] = v55;
                    }
                    ++v53;
                  }
                  while ( v53 < *(_DWORD *)(a1 + 684) >> 5 );
                }
                v57 = *(char **)(a1 + 688);
                *(_QWORD *)(a1 + 688) = v81;
                v58 = (32 * v8) | *(_DWORD *)(a1 + 684) & 0x1F;
                v59 = a1 + 680;
                *(_DWORD *)(a1 + 684) = v58;
                v81 = v57;
              }
              else
              {
                v59 = a1 + 680;
              }
              if ( *(_DWORD *)(a1 + 684) >= 0x20u )
              {
                v60 = EtwpCovSampContextFastFindModule(a1, (__int64)&v96, a7);
                if ( v60 )
                {
                  if ( v60 == *a7 )
                  {
LABEL_27:
                    Name = 0;
LABEL_28:
                    v9 = v81;
                    goto LABEL_141;
                  }
                  *(_DWORD *)(v60 + 120) |= 0x40000u;
                  v119 = *(_QWORD *)(v60 + 8) & (-1LL << (*(_DWORD *)(v59 + 4) & 0x1F));
                  for ( n = (_QWORD *)(*(_QWORD *)(v59 + 8)
                                     + 8LL
                                     * ((37
                                       * (BYTE6(v119)
                                        + 37
                                        * (BYTE5(v119)
                                         + 37
                                         * (BYTE4(v119)
                                          + 37
                                          * (BYTE3(v119)
                                           + 37
                                           * (BYTE2(v119) + 37 * (BYTE1(v119) + 37 * ((unsigned __int8)v119 + 11623883)))))))
                                       + HIBYTE(v119)) & (unsigned int)((*(_DWORD *)(v59 + 4) >> 5) - 1)));
                        (*n & 1) == 0;
                        n = (_QWORD *)*n )
                  {
                    if ( *n == v60 )
                    {
                      *n = *(_QWORD *)v60;
                      --*(_DWORD *)v59;
                      break;
                    }
                  }
                  *(_QWORD *)v60 = 0LL;
                  v62 = (_QWORD *)(v60 + 16);
                  if ( *(_QWORD *)(v60 + 16) )
                  {
                    v120 = *(_QWORD *)(v60 + 24) & (-1LL << (*(_DWORD *)(a1 + 700) & 0x1F));
                    for ( ii = (_QWORD *)(*(_QWORD *)(a1 + 704)
                                        + 8LL
                                        * ((37
                                          * (BYTE6(v120)
                                           + 37
                                           * (BYTE5(v120)
                                            + 37
                                            * (BYTE4(v120)
                                             + 37
                                             * (BYTE3(v120)
                                              + 37
                                              * (BYTE2(v120)
                                               + 37 * (BYTE1(v120) + 37 * ((unsigned __int8)v120 + 11623883)))))))
                                          + HIBYTE(v120)) & (unsigned int)((*(_DWORD *)(a1 + 700) >> 5) - 1)));
                          (*ii & 1) == 0;
                          ii = (_QWORD *)*ii )
                    {
                      if ( (_QWORD *)*ii == v62 )
                      {
                        *ii = *v62;
                        --*(_DWORD *)(a1 + 696);
                        break;
                      }
                    }
                    *v62 = 0LL;
                  }
                }
                if ( (*(_DWORD *)(a1 + 8) & 0x400) != 0 )
                  *((_DWORD *)v10 + 30) ^= (*((_DWORD *)v10 + 30) ^ (a6 << 20)) & 0x100000;
                *((_DWORD *)v10 + 32) = (*(_DWORD *)(a1 + 1112))++;
                v87 = *((_QWORD *)v10 + 1) & (-1LL << (*(_DWORD *)(v59 + 4) & 0x1F));
                v64 = (37
                     * (BYTE6(v87)
                      + 37
                      * (BYTE5(v87)
                       + 37
                       * (BYTE4(v87)
                        + 37
                        * (BYTE3(v87) + 37 * (BYTE2(v87) + 37 * (BYTE1(v87) + 37 * ((unsigned __int8)v87 + 11623883)))))))
                     + HIBYTE(v87)) & (unsigned int)((*(_DWORD *)(v59 + 4) >> 5) - 1);
                v65 = *(_QWORD *)(v59 + 8);
                *(_QWORD *)v10 = *(_QWORD *)(v65 + 8 * v64);
                *(_QWORD *)(v65 + 8 * v64) = v10;
                ++*(_DWORD *)v59;
                v66 = (_QWORD *)(a1 + 712);
                v67 = *(_QWORD *)(a1 + 712);
                if ( *(_QWORD *)(v67 + 8) != a1 + 712 )
                  __fastfail(3u);
                *((_QWORD *)v10 + 9) = v67;
                *((_QWORD *)v10 + 10) = v66;
                *(_QWORD *)(v67 + 8) = v10 + 72;
                *v66 = v10 + 72;
                *((_DWORD *)v10 + 34) = MEMORY[0xFFFFF78000000320];
                ++*(_DWORD *)(a1 + 728);
                ++*(_DWORD *)(a1 + 732);
                v68 = *((_DWORD *)v10 + 30);
                if ( (v68 & 0x10000) != 0 || a6 )
                {
                  v69 = *((unsigned int *)v10 + 31);
                  *((_QWORD *)v10 + 3) = v69;
                  v70 = *(_DWORD *)(a1 + 700);
                  v71 = v69 & (-1LL << (*(_BYTE *)(a1 + 700) & 0x1F));
                  if ( v70 < 0x20 )
                    goto LABEL_132;
                  v72 = *(_QWORD *)(a1 + 704)
                      + 8LL
                      * ((37
                        * (BYTE6(v71)
                         + 37
                         * (BYTE5(v71)
                          + 37
                          * (BYTE4(v71)
                           + 37
                           * (BYTE3(v71) + 37
                                         * (BYTE2(v71) + 37 * (BYTE1(v71) + 37 * ((unsigned __int8)v71 + 11623883)))))))
                        + HIBYTE(v71)) & ((v70 >> 5) - 1));
                  while ( 1 )
                  {
                    v72 = *(_QWORD *)v72;
                    if ( (v72 & 1) != 0 )
                      break;
                    if ( v71 == ((-1LL << (*(_BYTE *)(a1 + 700) & 0x1F)) & *(_QWORD *)(v72 + 8)) )
                      goto LABEL_122;
                  }
                  v72 = 0LL;
LABEL_122:
                  if ( v72 )
                  {
                    if ( *(_DWORD *)(v72 + 16) == *((_DWORD *)v10 + 8)
                      && *(_DWORD *)(v72 + 20) == *((_DWORD *)v10 + 9)
                      && *(_QWORD *)(v72 + 24) == *((_QWORD *)v10 + 5)
                      && EtwpCheckDebugInfoEqual(*(_QWORD *)(v72 + 32), *((_QWORD *)v10 + 6)) )
                    {
                      v73 = *((_DWORD *)v10 + 30);
                    }
                    else
                    {
                      *((_DWORD *)v10 + 31) = 0;
                      v73 = v68 & 0xFFFEFFFF;
                    }
                    *((_DWORD *)v10 + 30) = v73 | 0x80000;
                    EtwpCovSampModuleNameInfoCleanup(v10 + 104);
                    *((_QWORD *)v10 + 14) = 0LL;
                    *((_WORD *)v10 + 60) = 0;
                    v74 = (void *)*((_QWORD *)v10 + 6);
                    if ( v74 )
                      ExFreePoolWithTag(v74, 0);
                    *((_QWORD *)v10 + 6) = 0LL;
                    *((_DWORD *)v10 + 14) = 0;
                  }
                  else
                  {
LABEL_132:
                    v88 = *((_QWORD *)v10 + 3) & (-1LL << (*(_DWORD *)(a1 + 700) & 0x1F));
                    v75 = (37
                         * (BYTE6(v88)
                          + 37
                          * (BYTE5(v88)
                           + 37
                           * (BYTE4(v88)
                            + 37
                            * (BYTE3(v88)
                             + 37 * (BYTE2(v88) + 37 * (BYTE1(v88) + 37 * ((unsigned __int8)v88 + 11623883)))))))
                         + HIBYTE(v88)) & (unsigned int)((*(_DWORD *)(a1 + 700) >> 5) - 1);
                    v76 = *(_QWORD *)(a1 + 704);
                    *((_QWORD *)v10 + 2) = *(_QWORD *)(v76 + 8 * v75);
                    *(_QWORD *)(v76 + 8 * v75) = v10 + 16;
                    ++*(_DWORD *)(a1 + 696);
                  }
                  *((_DWORD *)v10 + 42) = *(_DWORD *)(a2 + 744);
                  if ( !a6 )
                  {
                    *((_DWORD *)v10 + 40) = *(_DWORD *)(a3 + 40);
                    *((_DWORD *)v10 + 41) = *(_DWORD *)(a3 + 44);
                  }
                }
                if ( _InterlockedIncrement64((volatile signed __int64 *)v10 + 8) <= 1 )
                  __fastfail(0xEu);
                *a7 = (__int64)v10;
                v10 = 0LL;
                *(_QWORD *)(a1 + 672) = 0LL;
                v77 = (volatile signed __int64 *)BugCheckParameter2;
                v78 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
                v110 = v78;
                if ( (v78 & 2) != 0 && (v78 & 4) == 0 )
                  ExfTryToWakePushLock(v77);
                KeAbPostRelease((ULONG_PTR)v77);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                EtwpCovSampContextPruneModules(a1);
                goto LABEL_27;
              }
              goto LABEL_34;
            }
            v27 = 0;
          }
        }
        v28 = a6;
LABEL_50:
        if ( !v27 && !v28 )
          goto LABEL_57;
        goto LABEL_52;
      }
      ExFreePoolWithTag(*((PVOID *)v10 + 6), 0);
      *((_QWORD *)v10 + 6) = 0LL;
      *((_DWORD *)v10 + 14) = 0;
    }
    v27 = 0;
    v116 = 0;
    v28 = a6;
    if ( !a6 )
      goto LABEL_50;
    goto LABEL_39;
  }
  Name = -1073741637;
LABEL_141:
  if ( *(struct _KTHREAD **)(a1 + 672) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 672) = 0LL;
    v79 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 664), 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v79 & 2) != 0 && (v79 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 664));
    KeAbPostRelease(a1 + 664);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v10 )
  {
    *((_QWORD *)v10 + 8) = 0LL;
    EtwpCovSampModuleCleanup(v10);
    ExFreePoolWithTag(v10, 0x56777445u);
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0x56777445u);
  return (unsigned int)Name;
}
