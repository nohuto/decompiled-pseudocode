/*
 * XREFs of EtwpCovSampContextGetModule @ 0x1408C6144
 * Callers:
 *     EtwpCovSampImageNotify @ 0x1408C7D70 (EtwpCovSampImageNotify.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwCovSampHash @ 0x1403162D4 (EtwCovSampHash.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpFindDebugId @ 0x1406BB490 (EtwpFindDebugId.c)
 *     EtwpCovSampCheckForSegments @ 0x1408C5914 (EtwpCovSampCheckForSegments.c)
 *     EtwpCovSampContextFastFindModule @ 0x1408C5FC4 (EtwpCovSampContextFastFindModule.c)
 *     EtwpCovSampContextPruneModules @ 0x1408C6F98 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampModuleCleanup @ 0x1408C7F84 (EtwpCovSampModuleCleanup.c)
 *     EtwpCovSampModuleGetName @ 0x1408C8014 (EtwpCovSampModuleGetName.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x1408C8120 (EtwpCovSampModuleNameInfoCleanup.c)
 */

__int64 __fastcall EtwpCovSampContextGetModule(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rdi
  char *v7; // r14
  char *v8; // r12
  PIMAGE_NT_HEADERS v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v13; // r14
  __int64 Module; // rax
  unsigned int v15; // ecx
  char *PoolWithTag; // rax
  SIZE_T v17; // rdx
  int v18; // eax
  unsigned int v19; // r8d
  int v20; // eax
  unsigned int v21; // r8d
  __int64 v22; // r14
  unsigned int v23; // esi
  unsigned int v24; // edi
  __int64 v25; // rax
  __m128i v26; // xmm6
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // ecx
  unsigned int v31; // ecx
  char *v32; // rsi
  struct _KTHREAD *v33; // rcx
  char *v34; // r11
  __int64 v35; // r8
  unsigned int v36; // eax
  char i; // cl
  unsigned __int64 v38; // rcx
  unsigned int v39; // r9d
  __int64 v40; // rdi
  _QWORD *v41; // rcx
  unsigned __int64 v42; // rcx
  char k; // cl
  unsigned __int64 v44; // rcx
  __int64 v45; // r11
  unsigned int v46; // r9d
  __int64 v47; // rdx
  _QWORD *v48; // r10
  unsigned __int64 v49; // rcx
  char *v50; // rcx
  __int64 v51; // rsi
  __int64 v52; // rax
  unsigned __int64 v53; // rdi
  _QWORD *n; // rdx
  _QWORD *v55; // r9
  __int64 v56; // r10
  unsigned __int64 v57; // rdi
  _QWORD *ii; // rdx
  unsigned __int64 v59; // rdi
  unsigned __int64 v60; // rdx
  __int64 v61; // rcx
  _QWORD *v62; // rax
  __int64 v63; // rcx
  int v64; // r8d
  __int64 v65; // rdx
  unsigned int v66; // edi
  __int64 v67; // r11
  __int64 v68; // r9
  unsigned __int64 v69; // rsi
  unsigned __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rdi
  __int64 v74; // rcx
  unsigned __int64 v75; // rdi
  unsigned __int64 v76; // rdx
  __int64 v77; // rcx
  int Name; // [rsp+20h] [rbp-C8h]
  int v80; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v81; // [rsp+28h] [rbp-C0h]
  __int64 j; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v83; // [rsp+28h] [rbp-C0h]
  char *v84; // [rsp+30h] [rbp-B8h]
  __int64 v85; // [rsp+30h] [rbp-B8h]
  __int64 m; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v87; // [rsp+38h] [rbp-B0h]
  int v88; // [rsp+40h] [rbp-A8h]
  _QWORD *v89; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v90; // [rsp+40h] [rbp-A8h]
  unsigned int v91; // [rsp+48h] [rbp-A0h]
  int v92; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v93; // [rsp+48h] [rbp-A0h]
  __int64 v94; // [rsp+50h] [rbp-98h] BYREF
  SIZE_T v95; // [rsp+58h] [rbp-90h]
  __int64 v96; // [rsp+60h] [rbp-88h]
  unsigned __int64 v97; // [rsp+68h] [rbp-80h]
  unsigned __int64 v98[3]; // [rsp+70h] [rbp-78h] BYREF
  __m128i v99; // [rsp+88h] [rbp-60h]
  unsigned int v101; // [rsp+100h] [rbp+18h]
  int v102; // [rsp+100h] [rbp+18h]

  v6 = 0LL;
  v101 = 0;
  v7 = 0LL;
  v84 = 0LL;
  v8 = 0LL;
  *a4 = 0LL;
  v94 = 0LL;
  v96 = 0LL;
  v95 = *(_QWORD *)(a3 + 32);
  v9 = RtlImageNtHeader(*(PVOID *)(a3 + 16));
  v98[2] = (unsigned __int64)v9;
  if ( !v9 )
  {
    Name = -1073741637;
    goto LABEL_122;
  }
  LODWORD(v96) = v9->OptionalHeader.CheckSum;
  HIDWORD(v96) = v9->FileHeader.TimeDateStamp;
  if ( (*(_DWORD *)(a3 + 8) & 0x100) != 0 )
  {
    v10 = *(_QWORD *)(a3 + 16);
  }
  else
  {
    v11 = *(_QWORD *)(a3 + 48);
    if ( !v11 )
    {
      Name = -1073741637;
      goto LABEL_122;
    }
    v10 = *(_QWORD *)(v11 + 24);
  }
  v94 = v10;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = (volatile signed __int64 *)(a1 + 664);
  ExAcquirePushLockSharedEx(a1 + 664, 0LL);
  Module = EtwpCovSampContextFastFindModule(a1, (__int64)&v94, a4);
  if ( Module && Module == *a4 )
  {
    if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 664));
    KeAbPostRelease(a1 + 664);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    Name = 0;
    goto LABEL_13;
  }
  v88 = *(_DWORD *)(a1 + 684) >> 5;
  v15 = *(_DWORD *)(a1 + 680);
  if ( v15 <= *(_DWORD *)(a1 + 696) )
    v15 = *(_DWORD *)(a1 + 696);
  v91 = v15;
  if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 664));
  KeAbPostRelease(a1 + 664);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0xA0uLL, 0x56777445u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    Name = -1073741670;
LABEL_13:
    v7 = 0LL;
    goto LABEL_122;
  }
  memset(PoolWithTag, 0, 0xA0uLL);
  *((_QWORD *)v8 + 10) = v8 + 72;
  *((_QWORD *)v8 + 9) = v8 + 72;
  *((_QWORD *)v8 + 12) = v8 + 88;
  *((_QWORD *)v8 + 11) = v8 + 88;
  *(_QWORD *)v8 = 0LL;
  *((_QWORD *)v8 + 2) = 0LL;
  *((_QWORD *)v8 + 8) = 1LL;
  *((_QWORD *)v8 + 1) = v94;
  v17 = v95;
  *((_QWORD *)v8 + 5) = v95;
  *((_QWORD *)v8 + 4) = v96;
  *((_DWORD *)v8 + 30) ^= (*((_DWORD *)v8 + 30) ^ (*(_DWORD *)(a3 + 8) << 9)) & 0x20000;
  v80 = 1;
  if ( (int)EtwpFindDebugId(*(char **)(a3 + 16), v17, (void **)v8 + 6, (_DWORD *)v8 + 14) >= 0 )
  {
    if ( *((_DWORD *)v8 + 14) <= 0x400u )
    {
      v18 = 1;
    }
    else
    {
      ExFreePoolWithTag(*((PVOID *)v8 + 6), 0);
      *((_QWORD *)v8 + 6) = 0LL;
      *((_DWORD *)v8 + 14) = 0;
      v18 = 0;
      v80 = 0;
    }
    if ( v18 )
    {
      Name = EtwpCovSampModuleGetName(v8, a3, a2);
      if ( Name < 0 )
        goto LABEL_13;
      v98[0] = *((_QWORD *)v8 + 14);
      v98[1] = (unsigned __int16)*((_DWORD *)v8 + 30);
      v19 = *(_DWORD *)(a1 + 1096);
      v20 = v19 ? EtwpCovSampCheckForSegments(v98, (unsigned __int64 *)(a1 + 776), v19) : v80;
      if ( v20 )
      {
        v21 = *(_DWORD *)(a1 + 1100);
        if ( v21 )
        {
          if ( !(unsigned int)EtwpCovSampCheckForSegments(v98, (unsigned __int64 *)(a1 + 936), v21) )
          {
            v20 = 1;
LABEL_35:
            *((_DWORD *)v8 + 30) ^= (*((_DWORD *)v8 + 30) ^ (v20 << 16)) & 0x10000;
            v22 = *((_QWORD *)v8 + 6);
            v23 = *(_DWORD *)(v22 + 20);
            v24 = *((_DWORD *)v8 + 10);
            LODWORD(v81) = *((_DWORD *)v8 + 9);
            HIDWORD(v81) = *((_DWORD *)v8 + 8);
            v25 = EtwCovSampHash(v81, *(unsigned int *)(a1 + 12));
            v99 = *(__m128i *)(v22 + 4);
            v26 = v99;
            v27 = EtwCovSampHash(__PAIR64__(v23, v24), v25);
            v28 = EtwCovSampHash(v26.m128i_u64[0], v27);
            v29 = EtwCovSampHash(_mm_srli_si128(v26, 8).m128i_u64[0], v28);
            v30 = v29 ^ HIDWORD(v29);
            if ( (unsigned int)v29 == HIDWORD(v29) )
              v30 = 1;
            *((_DWORD *)v8 + 31) = v30;
            v6 = 0LL;
            v13 = (volatile signed __int64 *)(a1 + 664);
            goto LABEL_38;
          }
          v20 = 0;
        }
        if ( !v20 )
          goto LABEL_38;
        goto LABEL_35;
      }
    }
  }
LABEL_38:
  v31 = 2 * v88;
  if ( v91 + 1 <= 2 * v88 )
  {
    v32 = 0LL;
  }
  else
  {
    v6 = v31;
    if ( !v31 )
      v6 = 128LL;
    v101 = v6;
    v32 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)(2 * v6), 0x56777445u);
    v84 = v32;
  }
  v33 = KeGetCurrentThread();
  --v33->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v13, 0LL);
  *(_QWORD *)(a1 + 672) = KeGetCurrentThread();
  if ( v32 && (unsigned int)v6 > *(_DWORD *)(a1 + 684) >> 5 )
  {
    v34 = &v32[8 * (unsigned int)v6];
    v35 = (unsigned int)v6;
    v92 = v6 & (v6 - 1);
    if ( v92 )
    {
      v36 = v6;
      for ( i = -1; v36; v36 >>= 1 )
        ++i;
      v35 = (unsigned int)(1 << i);
    }
    if ( (unsigned int)v35 > 0x4000000 )
      v35 = 0x4000000LL;
    v38 = (unsigned __int64)(8 * v35 + 7) >> 3;
    if ( v34 > &v34[8 * v35] )
      v38 = 0LL;
    if ( v38 )
    {
      memset64(v34, (a1 + 696) | 1, v38);
      v6 = v101;
    }
    v85 = -1LL << (*(_BYTE *)(a1 + 700) & 0x1F);
    v39 = 0;
    if ( (*(_DWORD *)(a1 + 700) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v40 = *(_QWORD *)(a1 + 704);
        for ( j = v40; ; v40 = j )
        {
          v41 = *(_QWORD **)(v40 + 8LL * v39);
          v89 = v41;
          if ( ((unsigned __int8)v41 & 1) != 0 )
            break;
          *(_QWORD *)(v40 + 8LL * v39) = *v41;
          v42 = ((((unsigned __int64)v85 & v41[1]) >> 56)
               + 37
               * ((unsigned __int8)(((unsigned __int64)v85 & v41[1]) >> 48)
                + 37
                * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v85 & v41[1]) >> 32) >> 8)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v85 & v41[1]) >> 32)
                  + 37
                  * ((((unsigned int)v85 & (_DWORD)v41[1]) >> 24)
                   + 37
                   * ((unsigned __int8)(((unsigned int)v85 & (_DWORD)v41[1]) >> 16)
                    + 37
                    * ((unsigned __int8)((unsigned __int16)(v85 & v41[1]) >> 8)
                     + 37 * ((unsigned __int8)(v85 & v41[1]) + 11623883)))))))) & (unsigned int)(v35 - 1);
          *v89 = *(_QWORD *)&v34[8 * v42];
          *(_QWORD *)&v34[8 * v42] = v89;
        }
        ++v39;
      }
      while ( v39 < *(_DWORD *)(a1 + 700) >> 5 );
      v6 = v101;
    }
    *(_QWORD *)(a1 + 704) = v34;
    *(_DWORD *)(a1 + 700) = (32 * v35) | *(_DWORD *)(a1 + 700) & 0x1F;
    if ( v92 )
    {
      for ( k = -1; (_DWORD)v6; LODWORD(v6) = (unsigned int)v6 >> 1 )
        ++k;
      v6 = (unsigned int)(1 << k);
    }
    if ( (unsigned int)v6 > 0x4000000 )
      v6 = 0x4000000LL;
    v102 = v6;
    v44 = (unsigned __int64)(8 * v6 + 7) >> 3;
    if ( v32 > &v32[8 * v6] )
      v44 = 0LL;
    if ( v44 )
      memset64(v32, (a1 + 680) | 1, v44);
    v45 = -1LL << (*(_BYTE *)(a1 + 684) & 0x1F);
    v46 = 0;
    if ( (*(_DWORD *)(a1 + 684) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v47 = *(_QWORD *)(a1 + 688);
        for ( m = v47; ; v47 = m )
        {
          v48 = *(_QWORD **)(v47 + 8LL * v46);
          if ( ((unsigned __int8)v48 & 1) != 0 )
            break;
          *(_QWORD *)(v47 + 8LL * v46) = *v48;
          LODWORD(v6) = v102;
          v49 = ((((unsigned __int64)v45 & v48[1]) >> 56)
               + 37
               * ((unsigned __int8)(((unsigned __int64)v45 & v48[1]) >> 48)
                + 37
                * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v45 & v48[1]) >> 32) >> 8)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v45 & v48[1]) >> 32)
                  + 37
                  * ((((unsigned int)v45 & (_DWORD)v48[1]) >> 24)
                   + 37
                   * ((unsigned __int8)(((unsigned int)v45 & (_DWORD)v48[1]) >> 16)
                    + 37
                    * ((unsigned __int8)((unsigned __int16)(v45 & v48[1]) >> 8)
                     + 37 * ((unsigned __int8)(v45 & v48[1]) + 11623883)))))))) & (unsigned int)(v102 - 1);
          *v48 = *(_QWORD *)&v32[8 * v49];
          *(_QWORD *)&v32[8 * v49] = v48;
        }
        ++v46;
      }
      while ( v46 < *(_DWORD *)(a1 + 684) >> 5 );
    }
    v50 = *(char **)(a1 + 688);
    *(_QWORD *)(a1 + 688) = v32;
    v51 = a1 + 680;
    *(_DWORD *)(a1 + 684) = *(_DWORD *)(a1 + 684) & 0x1F | (32 * v6);
    v84 = v50;
  }
  else
  {
    v51 = a1 + 680;
  }
  if ( *(_DWORD *)(a1 + 684) >= 0x20u )
  {
    v52 = EtwpCovSampContextFastFindModule(a1, (__int64)&v94, a4);
    if ( v52 )
    {
      if ( v52 == *a4 )
      {
LABEL_83:
        Name = 0;
        goto LABEL_80;
      }
      *(_DWORD *)(v52 + 120) |= 0x40000u;
      v53 = *(_QWORD *)(v52 + 8) & (-1LL << (*(_DWORD *)(v51 + 4) & 0x1F));
      for ( n = (_QWORD *)(*(_QWORD *)(v51 + 8)
                         + 8
                         * ((HIBYTE(v53)
                           + 37
                           * (BYTE6(v53)
                            + 37
                            * (BYTE5(v53)
                             + 37
                             * (BYTE4(v53)
                              + 37
                              * (((*(_DWORD *)(v52 + 8) & (unsigned int)(-1 << (*(_DWORD *)(v51 + 4) & 0x1F))) >> 24)
                               + 37
                               * ((unsigned __int8)((*(_DWORD *)(v52 + 8) & (unsigned int)(-1 << (*(_DWORD *)(v51 + 4) & 0x1F))) >> 16)
                                + 37
                                * ((unsigned __int8)((unsigned __int16)(*(_WORD *)(v52 + 8) & (-1 << (*(_DWORD *)(v51 + 4) & 0x1F))) >> 8)
                                 + 37 * ((unsigned __int8)v53 + 11623883)))))))) & ((*(_DWORD *)(v51 + 4) >> 5) - 1)));
            (*n & 1) == 0;
            n = (_QWORD *)*n )
      {
        if ( *n == v52 )
        {
          *n = *(_QWORD *)v52;
          --*(_DWORD *)v51;
          *(_QWORD *)v52 |= 0x8000000000000002uLL;
          break;
        }
      }
      *(_QWORD *)v52 = 0LL;
      v55 = (_QWORD *)(v52 + 16);
      v56 = a1 + 696;
      if ( *(_QWORD *)(v52 + 16) )
      {
        v57 = *(_QWORD *)(v52 + 24) & (-1LL << (*(_DWORD *)(a1 + 700) & 0x1F));
        for ( ii = (_QWORD *)(*(_QWORD *)(a1 + 704)
                            + 8
                            * ((HIBYTE(v57)
                              + 37
                              * ((unsigned __int8)((v55[1] & (unsigned __int64)(-1LL << (*(_DWORD *)(v56 + 4) & 0x1F))) >> 48)
                               + 37
                               * ((unsigned __int8)((unsigned __int16)((v55[1] & (unsigned __int64)(-1LL << (*(_DWORD *)(v56 + 4) & 0x1F))) >> 32) >> 8)
                                + 37
                                * ((unsigned __int8)((v55[1] & (unsigned __int64)(-1LL << (*(_DWORD *)(v56 + 4) & 0x1F))) >> 32)
                                 + 37
                                 * ((((_DWORD)v55[1] & (unsigned int)(-1 << (*(_DWORD *)(v56 + 4) & 0x1F))) >> 24)
                                  + 37
                                  * ((unsigned __int8)(((_DWORD)v55[1] & (unsigned int)(-1 << (*(_DWORD *)(v56 + 4) & 0x1F))) >> 16)
                                   + 37
                                   * ((unsigned __int8)((unsigned __int16)(v55[1] & (-1 << (*(_DWORD *)(v56 + 4) & 0x1F))) >> 8)
                                    + 37 * ((unsigned __int8)v57 + 11623883)))))))) & ((*(_DWORD *)(a1 + 700) >> 5) - 1)));
              (*ii & 1) == 0;
              ii = (_QWORD *)*ii )
        {
          if ( (_QWORD *)*ii == v55 )
          {
            *ii = *v55;
            --*(_DWORD *)v56;
            *v55 |= 0x8000000000000002uLL;
            break;
          }
        }
        *v55 = 0LL;
      }
    }
    else
    {
      v56 = a1 + 696;
    }
    *((_DWORD *)v8 + 32) = (*(_DWORD *)(a1 + 1104))++;
    v59 = *((_QWORD *)v8 + 1) & (-1LL << (*(_DWORD *)(v51 + 4) & 0x1F));
    v60 = (HIBYTE(v59)
         + 37
         * (BYTE6(v59)
          + 37
          * (BYTE5(v59)
           + 37
           * (BYTE4(v59)
            + 37
            * (((*((_DWORD *)v8 + 2) & (unsigned int)(-1 << (*(_DWORD *)(v51 + 4) & 0x1F))) >> 24)
             + 37
             * ((unsigned __int8)((*((_DWORD *)v8 + 2) & (unsigned int)(-1 << (*(_DWORD *)(v51 + 4) & 0x1F))) >> 16)
              + 37
              * ((unsigned __int8)((unsigned __int16)(*((_WORD *)v8 + 4) & (-1 << (*(_DWORD *)(v51 + 4) & 0x1F))) >> 8)
               + 37 * ((unsigned __int8)v59 + 11623883)))))))) & ((*(_DWORD *)(v51 + 4) >> 5) - 1);
    v61 = *(_QWORD *)(v51 + 8);
    *(_QWORD *)v8 = *(_QWORD *)(v61 + 8 * v60);
    *(_QWORD *)(v61 + 8 * v60) = v8;
    ++*(_DWORD *)v51;
    v62 = (_QWORD *)(a1 + 712);
    v63 = *(_QWORD *)(a1 + 712);
    if ( *(_QWORD *)(v63 + 8) != a1 + 712 )
      __fastfail(3u);
    *((_QWORD *)v8 + 9) = v63;
    *((_QWORD *)v8 + 10) = v62;
    *(_QWORD *)(v63 + 8) = v8 + 72;
    *v62 = v8 + 72;
    *((_DWORD *)v8 + 34) = MEMORY[0xFFFFF78000000320];
    ++*(_DWORD *)(a1 + 728);
    ++*(_DWORD *)(a1 + 732);
    v64 = *((_DWORD *)v8 + 30);
    if ( (v64 & 0x10000) != 0 )
    {
      v65 = *((unsigned int *)v8 + 31);
      *((_QWORD *)v8 + 3) = v65;
      v66 = *(_DWORD *)(a1 + 700);
      v67 = -1LL << (*(_BYTE *)(a1 + 700) & 0x1F);
      v68 = v65 & v67;
      v69 = (v65 & (unsigned __int64)v67) >> 56;
      v87 = (v65 & (unsigned __int64)v67) >> 48;
      v97 = (v65 & (unsigned __int64)v67) >> 40;
      v83 = (v65 & (unsigned __int64)v67) >> 32;
      v90 = (v65 & (unsigned __int64)v67) >> 24;
      v93 = (v65 & (unsigned __int64)v67) >> 16;
      v70 = (v65 & (unsigned __int64)v67) >> 8;
      if ( v66 < 0x20 )
        goto LABEL_116;
      v71 = *(_QWORD *)(a1 + 704)
          + 8LL
          * (((_DWORD)v69
            + 37
            * ((_DWORD)v87
             + 37
             * ((_DWORD)v97
              + 37
              * ((_DWORD)v83
               + 37
               * ((_DWORD)v90
                + 37 * ((unsigned __int8)v93 + 37 * ((unsigned __int8)v70 + 37 * ((unsigned __int8)v68 + 11623883)))))))) & ((v66 >> 5) - 1));
      while ( 1 )
      {
        v71 = *(_QWORD *)v71;
        if ( (v71 & 1) != 0 )
          break;
        if ( v68 == (v67 & *(_QWORD *)(v71 + 8)) )
          goto LABEL_106;
      }
      v71 = 0LL;
LABEL_106:
      if ( v71 )
      {
        if ( *(_DWORD *)(v71 + 16) != *((_DWORD *)v8 + 8) )
          goto LABEL_114;
        if ( *(_DWORD *)(v71 + 20) != *((_DWORD *)v8 + 9) )
          goto LABEL_114;
        if ( *(_QWORD *)(v71 + 24) != *((_QWORD *)v8 + 5) )
          goto LABEL_114;
        v72 = *(_QWORD *)(v71 + 32);
        v73 = *((_QWORD *)v8 + 6);
        if ( *(_DWORD *)(v72 + 20) != *(_DWORD *)(v73 + 20) )
          goto LABEL_114;
        v74 = *(_QWORD *)(v72 + 4) - *(_QWORD *)(v73 + 4);
        if ( !v74 )
          v74 = *(_QWORD *)(v72 + 12) - *(_QWORD *)(v73 + 12);
        if ( v74 )
        {
LABEL_114:
          v64 &= ~0x10000u;
          *((_DWORD *)v8 + 30) = v64;
          *((_DWORD *)v8 + 31) = 0;
        }
        *((_DWORD *)v8 + 30) = v64 | 0x80000;
        EtwpCovSampModuleNameInfoCleanup(v8 + 104);
        *((_QWORD *)v8 + 14) = 0LL;
        *((_WORD *)v8 + 60) = 0;
        ExFreePoolWithTag(*((PVOID *)v8 + 6), 0);
        *((_QWORD *)v8 + 6) = 0LL;
        *((_DWORD *)v8 + 14) = 0;
      }
      else
      {
LABEL_116:
        v75 = *((_QWORD *)v8 + 3) & (-1LL << (*(_DWORD *)(v56 + 4) & 0x1F));
        v76 = (HIBYTE(v75)
             + 37
             * (BYTE6(v75)
              + 37
              * (BYTE5(v75)
               + 37
               * (BYTE4(v75)
                + 37
                * (((*((_DWORD *)v8 + 6) & (unsigned int)(-1 << (*(_DWORD *)(v56 + 4) & 0x1F))) >> 24)
                 + 37
                 * ((unsigned __int8)((*((_DWORD *)v8 + 6) & (unsigned int)(-1 << (*(_DWORD *)(v56 + 4) & 0x1F))) >> 16)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(*((_WORD *)v8 + 12) & (-1 << (*(_DWORD *)(v56 + 4) & 0x1F))) >> 8)
                   + 37 * ((unsigned __int8)v75 + 11623883)))))))) & ((*(_DWORD *)(v56 + 4) >> 5) - 1);
        v77 = *(_QWORD *)(v56 + 8);
        *((_QWORD *)v8 + 2) = *(_QWORD *)(v77 + 8 * v76);
        *(_QWORD *)(v77 + 8 * v76) = v8 + 16;
        ++*(_DWORD *)v56;
      }
    }
    if ( _InterlockedIncrement64((volatile signed __int64 *)v8 + 8) <= 1 )
      __fastfail(0xEu);
    *a4 = (__int64)v8;
    v8 = 0LL;
    *(_QWORD *)(a1 + 672) = 0LL;
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    KeAbPostRelease((ULONG_PTR)v13);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    EtwpCovSampContextPruneModules(a1);
    goto LABEL_83;
  }
  Name = -1073741670;
LABEL_80:
  v7 = v84;
LABEL_122:
  if ( *(struct _KTHREAD **)(a1 + 672) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 672) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 664), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 664));
    KeAbPostRelease(a1 + 664);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v8 )
  {
    *((_QWORD *)v8 + 8) = 0LL;
    EtwpCovSampModuleCleanup(v8);
    ExFreePoolWithTag(v8, 0x56777445u);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x56777445u);
  return (unsigned int)Name;
}
