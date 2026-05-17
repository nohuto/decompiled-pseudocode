/*
 * XREFs of RtlpFreeHeapInternal @ 0x180019360
 * Callers:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180018460 (RtlpHpFreeWithExceptionProtection.c)
 * Callees:
 *     RtlpHpSizeHeap @ 0x180017AC0 (RtlpHpSizeHeap.c)
 *     RtlpHpStackLoggingEnabled @ 0x180018410 (RtlpHpStackLoggingEnabled.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180019B90 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 *     RtlpIsSubSegmentReuseable @ 0x18001B588 (RtlpIsSubSegmentReuseable.c)
 *     RtlpFreeUserBlock @ 0x18001B65C (RtlpFreeUserBlock.c)
 *     RtlpHpSegPageRangeShrink @ 0x18001D914 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsContextFree @ 0x18001E0C0 (RtlpHpVsContextFree.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18005AF08 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpExtrasGet @ 0x18005B220 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeapInternal @ 0x18005B290 (RtlpHpSizeHeapInternal.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18005B4B8 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpVsChunkSize @ 0x18005BCDC (RtlpHpVsChunkSize.c)
 *     RtlpGetHeapProtection @ 0x180060908 (RtlpGetHeapProtection.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x180063D68 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpLargeFree @ 0x1800663DC (RtlpHpLargeFree.c)
 *     RtlpHpLargeAllocSize @ 0x180066A0C (RtlpHpLargeAllocSize.c)
 *     RtlpLogHeapFailure @ 0x18009F7AC (RtlpLogHeapFailure.c)
 *     ZwProtectVirtualMemory @ 0x1800A0CE0 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A3DD0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A3E10 (RtlpInterlockedFlushSList.c)
 *     RtlpCallInterceptRoutine @ 0x1800F2E74 (RtlpCallInterceptRoutine.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180105188 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapFreeEvent @ 0x180105E78 (RtlpLogHeapFreeEvent.c)
 *     RtlpGetReservedBlockSize @ 0x18010A39C (RtlpGetReservedBlockSize.c)
 *     RtlpValidateLFHBlock @ 0x18010A7D8 (RtlpValidateLFHBlock.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010D74C (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpFreeHeapInternal(__int64 a1, unsigned __int64 a2, int a3, unsigned __int64 *a4, _WORD *a5)
{
  int v5; // ebp
  unsigned __int64 v8; // rdi
  unsigned __int64 v10; // r12
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  _WORD *v15; // rbx
  unsigned int v16; // r12d
  unsigned __int64 v17; // r15
  int v18; // r10d
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rbx
  unsigned __int64 v22; // rdx
  __int64 DescriptorValidateSafe; // r8
  char v24; // r9
  char v25; // r9
  unsigned __int8 v26; // r9
  char v27; // cl
  unsigned __int64 v28; // r11
  int v29; // esi
  unsigned int v30; // r9d
  unsigned int v31; // edx
  int v32; // r10d
  __int64 v33; // rcx
  unsigned int v34; // r8d
  __int64 v35; // rax
  char v36; // cl
  unsigned __int64 v37; // rdx
  int v38; // r8d
  __int64 v39; // r8
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r8
  __int16 v42; // ax
  int v43; // ecx
  BOOL v44; // r8d
  unsigned __int64 v45; // r15
  __int16 v46; // ax
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rsi
  unsigned __int64 v50; // rdx
  __int64 v51; // rbx
  char v52; // dl
  char v53; // dl
  unsigned __int8 v54; // dl
  char v55; // cl
  __int64 v56; // rax
  bool v57; // zf
  __int64 v58; // rdx
  int v59; // edx
  _DWORD *SharedData; // rcx
  __int64 v61; // rcx
  unsigned int v62; // r15d
  __int64 v64; // rdx
  __int64 v65; // r8
  signed __int64 v66; // rax
  signed __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rcx
  unsigned __int8 v72; // al
  char v73; // cl
  struct _TEB *v74; // rbx
  __int64 v75; // r8
  struct _TEB *v76; // rbx
  int v77; // edx
  __int64 v78; // rax
  unsigned __int16 v79; // dx
  int v80; // eax
  int v81; // eax
  unsigned __int16 v82; // ax
  __int64 v83; // rcx
  __int64 v84; // rcx
  signed __int32 *v85; // rbx
  int v86; // edx
  __int64 v87; // rax
  __int64 v88; // r15
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r9
  int v92; // r8d
  signed __int32 v93; // ebx
  volatile signed __int32 *v94; // rdx
  _WORD *v95; // r8
  _QWORD *v96; // rax
  int v97; // r8d
  unsigned int v98; // edx
  signed __int64 *v99; // rcx
  int v100; // eax
  volatile signed __int32 *v101; // rbx
  int v102; // eax
  unsigned __int64 v103; // r8
  unsigned __int64 v104; // r9
  signed __int64 v105; // rdx
  _DWORD *v106; // r12
  __int64 v107; // rcx
  __int64 v108; // r12
  unsigned __int16 ReservedBlockSize; // ax
  __int64 v110; // rcx
  unsigned int HeapProtection; // eax
  unsigned __int16 *v112; // r8
  int v113; // edx
  signed __int64 v114; // rax
  __int64 v115; // rcx
  signed __int32 v116; // eax
  __int64 v117; // rax
  _QWORD *v118; // rcx
  signed __int32 v119; // eax
  unsigned __int16 *v120; // r9
  int v121; // r8d
  __int64 v122; // rax
  volatile signed __int32 *v123; // rdx
  unsigned __int16 *v124; // rcx
  __int64 v125; // rcx
  signed __int32 v126[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v127; // [rsp+30h] [rbp-78h] BYREF
  volatile signed __int32 *v128; // [rsp+38h] [rbp-70h]
  __int64 v129; // [rsp+40h] [rbp-68h]
  signed __int64 v130; // [rsp+48h] [rbp-60h]
  int v131; // [rsp+50h] [rbp-58h]
  unsigned int v132; // [rsp+58h] [rbp-50h] BYREF
  char v133[4]; // [rsp+5Ch] [rbp-4Ch] BYREF
  unsigned __int64 v134; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v135; // [rsp+68h] [rbp-40h] BYREF
  __int128 v136; // [rsp+70h] [rbp-38h] BYREF
  int v137; // [rsp+B0h] [rbp+8h]
  BOOL v138; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v139; // [rsp+B0h] [rbp+8h]
  unsigned __int16 *v140; // [rsp+B0h] [rbp+8h]
  signed __int64 v141; // [rsp+B0h] [rbp+8h]

  v5 = 0;
  v8 = a2;
  v10 = 0LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      goto LABEL_127;
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v10 = RtlpProbeUserBufferSafe(a1, a2);
    }
    else if ( (a2 & 0xF) != 0 )
    {
      RtlpLogHeapFailure(9, a1, a2, 0, 0LL, 0LL);
    }
    else
    {
      v10 = a2 - 16;
      _m_prefetchw((const void *)(a2 - 16));
      if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
        v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
      if ( (*(_BYTE *)(v10 + 15) & 0x3F) == 0 )
      {
        RtlpLogHeapFailure(8, a1, v10, 0, 0LL, 0LL);
        v10 = 0LL;
      }
    }
    if ( v10 )
    {
      if ( *(_BYTE *)(v8 - 1) != 5 )
        goto LABEL_126;
      if ( *(char *)(v10 + 15) >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v77 = *(_DWORD *)(v10 + 8) ^ *(_DWORD *)(a1 + 136);
          if ( HIBYTE(v77) != ((unsigned __int8)v77 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v10 + 8) ^ *(_WORD *)(a1 + 136)) >> 8) ^ BYTE2(v77))) )
            goto LABEL_203;
        }
      }
      else if ( !(unsigned __int8)RtlpValidateLFHBlock(a1, v10) )
      {
LABEL_203:
        RtlpLogHeapFailure(3, a1, v10, v8, 0LL, 0LL);
        goto LABEL_178;
      }
      if ( *(char *)(v10 + 15) >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v80 = *(_DWORD *)(v10 + 8);
          v131 = v80;
          if ( (v80 & *(_DWORD *)(a1 + 124)) != 0 )
            v131 = *(_DWORD *)(a1 + 136) ^ v80;
          v79 = v131;
        }
        else
        {
          v79 = *(_WORD *)(v10 + 8);
        }
      }
      else
      {
        if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4)) )
          v78 = 0LL;
        else
          v78 = *(_QWORD *)(v10
                          - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12));
        v79 = *(_WORD *)(v78 + 36);
      }
      if ( *(_BYTE *)(v10 + 15) == 4 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v81 = *(_DWORD *)(v10 + 8);
          v131 = v81;
          if ( (v81 & *(_DWORD *)(a1 + 124)) != 0 )
            v131 = *(_DWORD *)(a1 + 136) ^ v81;
          v82 = v131;
        }
        else
        {
          v82 = *(_WORD *)(v10 + 8);
        }
        v83 = v79 + *(_QWORD *)(v10 - 16) - v82;
      }
      else
      {
        v83 = 16LL * v79;
      }
      if ( v83 + v10 < v8 )
        goto LABEL_203;
      if ( (a3 & 0x3C000102) != 0
        || (*(_BYTE *)(v8 - 1) != 5 ? (v84 = 0LL) : (v84 = v8 - 16LL * *(unsigned __int8 *)(v8 - 16 + 14)),
            (int)RtlpCallInterceptRoutine(*(_DWORD *)(v8 - 8), a1, v8, 3, v84) >= 0) )
      {
LABEL_126:
        if ( *(char *)(v10 + 15) < 0 )
        {
          if ( (unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4))
            || (v85 = *(signed __int32 **)(v10
                                         - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12)),
                (v128 = v85) == 0LL) )
          {
            LODWORD(v89) = a1;
          }
          else
          {
            _m_prefetchw(v85);
            v86 = (unsigned __int16)(*(_DWORD *)(v10 + 12) >> 8);
            v87 = *(_QWORD *)v85;
            v130 = *((_QWORD *)v85 + 1);
            LODWORD(v129) = v86;
            v88 = *(_QWORD *)(*(_QWORD *)v87 + 24LL);
            if ( v130
               + v86
               * (((unsigned int)v130 ^ (unsigned int)v88 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v130 + 24)) >> 16)
               + (unsigned __int16)(v130 ^ v88 ^ RtlpLFHKey ^ *(_WORD *)(v130 + 24)) == v10 )
            {
              if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                v90 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v90 = 2147353472LL;
              if ( *(_BYTE *)v90 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapFreeEvent(*(_QWORD *)(v88 + 24), v10 + 16, 2LL);
              v91 = 0LL;
              v92 = 0;
              if ( MEMORY[0x7FFE036A] > 1u )
                v91 = 100LL;
              while ( 1 )
              {
                v93 = v85[8];
                v94 = v128;
                if ( (v93 & 0x80000000) == 0 && v93 == _InterlockedCompareExchange(v128 + 8, v93 | 0x80000000, v93) )
                  break;
                if ( ++v92 > (unsigned int)v91 )
                {
                  v93 = -1;
                  break;
                }
                v85 = (signed __int32 *)v128;
              }
              *(_BYTE *)(v10 + 15) = 0x80;
              v95 = v94 + 4;
              if ( v93 == -1 )
              {
                RtlpInterlockedPushEntrySList(v95);
                goto LABEL_278;
              }
              _bittestandreset64(*(signed __int64 **)(v130 + 40), (unsigned int)v129);
              if ( *v95 )
              {
                v96 = (_QWORD *)RtlpInterlockedFlushSList(v94 + 4, v94, v95, v91);
                v97 = 0;
                while ( v96 )
                {
                  v98 = *((_DWORD *)v96 - 1);
                  ++v97;
                  v96 = (_QWORD *)*v96;
                  v99 = *(signed __int64 **)(v130 + 40);
                  v98 >>= 8;
                  LODWORD(v129) = (unsigned __int16)v98;
                  _bittestandreset64(v99, (unsigned __int16)v98);
                }
              }
              else
              {
                v97 = 0;
              }
              v100 = (unsigned __int16)v93;
              v101 = v128;
              v102 = ((_DWORD)v129 << 16) | (v97 + 1 + v100);
              v103 = *(_QWORD *)v128;
              if ( (_WORD)v102 != *((_WORD *)v128 + 20)
                || (v104 = *(unsigned int *)(v103 + 168),
                    v105 = *(unsigned int *)(*(_QWORD *)v103 + 32LL),
                    *(_DWORD *)(v103 + 164) == 1)
                && (unsigned int)v105 >= (unsigned int)v104
                && (v105 = (unsigned int)(v105 - v104), (unsigned int)v105 < *(_DWORD *)(*(_QWORD *)v103 + 36LL)) )
              {
                *((_DWORD *)v128 + 8) = v102;
                if ( (v101[11] & 2) != 0 || !(unsigned __int8)RtlpIsSubSegmentReuseable(v103, v101) )
                  goto LABEL_278;
                do
                {
                  v119 = *((_DWORD *)v101 + 11);
                  if ( !v119 || (v119 & 2) != 0 )
                    goto LABEL_278;
                }
                while ( v119 != _InterlockedCompareExchange(v101 + 11, v119 | 2, v119) );
                v120 = *(unsigned __int16 **)v101;
                v121 = 0;
                while ( 1 )
                {
                  v122 = ((_BYTE)v121 + (unsigned __int8)v120[87]) & 0xF;
                  v123 = *(volatile signed __int32 **)&v120[4 * v122 + 8];
                  v124 = &v120[4 * v122];
                  if ( v123 )
                  {
                    if ( (v123[11] & 1) == 0
                      && v123 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                              (volatile signed __int64 *)v124 + 2,
                                                              (signed __int64)v101,
                                                              (signed __int64)v123) )
                    {
                      _m_prefetchw((const void *)(v123 + 11));
                      if ( _InterlockedAnd(v123 + 11, 0xFFFFFFFD) == 2 )
                      {
                        v125 = **(_QWORD **)v123;
                        *(_QWORD *)v123 = 0LL;
                        RtlpInterlockedPushEntrySList(v125);
                      }
                      goto LABEL_278;
                    }
                  }
                  else if ( !_InterlockedCompareExchange64(
                               (volatile signed __int64 *)v124 + 2,
                               (signed __int64)v101,
                               0LL) )
                  {
                    goto LABEL_278;
                  }
                  if ( (unsigned int)++v121 >= 0x10 )
                  {
                    RtlpInterlockedPushEntrySList(
                      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v101 + 24LL)
                                + 8LL * *(unsigned __int16 *)(*(_QWORD *)v101 + 172LL)
                                + 1192)
                    + 144LL);
                    goto LABEL_278;
                  }
                }
              }
              v139 = *(_QWORD *)v128;
              v106 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v128 + 8LL), 0LL);
              if ( v106 )
              {
                _m_prefetchw(v106 + 11);
                if ( _InterlockedAnd(v106 + 11, 0xFFFFFFF9) == 6 )
                {
                  v107 = **(_QWORD **)v106;
                  *(_QWORD *)v106 = 0LL;
                  goto LABEL_242;
                }
                if ( (unsigned __int8)RtlpIsSubSegmentReuseable(v139, v106) )
                {
                  do
                  {
                    v116 = v106[11];
                    if ( !v116 || (v116 & 2) != 0 )
                      goto LABEL_243;
                  }
                  while ( v116 != _InterlockedCompareExchange(v106 + 11, v116 | 2, v116) );
                  v104 = *(_QWORD *)v106;
                  v103 = 0LL;
                  while ( 1 )
                  {
                    v117 = ((_BYTE)v103 + (unsigned __int8)*(_WORD *)(v104 + 174)) & 0xF;
                    v105 = *(_QWORD *)(v104 + 8 * v117 + 16);
                    v118 = (_QWORD *)(v104 + 8 * v117);
                    if ( v105 )
                    {
                      if ( (*(_DWORD *)(v105 + 44) & 1) == 0
                        && v105 == _InterlockedCompareExchange64(v118 + 2, (signed __int64)v106, v105) )
                      {
                        _m_prefetchw((const void *)(v105 + 44));
                        if ( _InterlockedAnd((volatile signed __int32 *)(v105 + 44), 0xFFFFFFFD) == 2 )
                        {
                          v107 = **(_QWORD **)v105;
                          *(_QWORD *)v105 = 0LL;
LABEL_242:
                          RtlpInterlockedPushEntrySList(v107);
                        }
                        break;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(v118 + 2, (signed __int64)v106, 0LL) )
                    {
                      break;
                    }
                    v103 = (unsigned int)(v103 + 1);
                    if ( (unsigned int)v103 >= 0x10 )
                    {
                      v107 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v106 + 24LL)
                                       + 8LL * *(unsigned __int16 *)(*(_QWORD *)v106 + 172LL)
                                       + 1192)
                           + 144LL;
                      goto LABEL_242;
                    }
                  }
                }
              }
LABEL_243:
              v108 = *(_QWORD *)(*(_QWORD *)v139 + 24LL);
              v140 = *(unsigned __int16 **)v101;
              if ( (*((_BYTE *)v101 + 38) & 3) != 0 )
              {
                v135 = (*((_QWORD *)v101 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL;
                ReservedBlockSize = RtlpGetReservedBlockSize(v101, v105, v103, v104);
                v110 = *(_QWORD *)(v108 + 24);
                v134 = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v101 + 20);
                HeapProtection = RtlpGetHeapProtection(v110, 1LL);
                ZwProtectVirtualMemory(-1LL, &v135, &v134, HeapProtection, v133);
              }
              *(_DWORD *)(*((_QWORD *)v101 + 1) + 20LL) = 0;
              RtlpFreeUserBlock(v108, *((_QWORD *)v101 + 1));
              v112 = v140;
              v113 = -*((unsigned __int16 *)v101 + 20);
              do
              {
                v114 = *((_QWORD *)v112 + 20);
                LODWORD(v141) = v114 + v113;
                HIDWORD(v141) = HIDWORD(v114) - 1;
              }
              while ( v114 != _InterlockedCompareExchange64((volatile signed __int64 *)v112 + 20, v141, v114) );
              *((_QWORD *)v101 + 1) = 0LL;
              _InterlockedIncrement((volatile signed __int32 *)(v108 + 60));
              *((_DWORD *)v101 + 8) = 0;
              _m_prefetchw((const void *)(v101 + 11));
              if ( _InterlockedAnd(v101 + 11, 0xFFFFFFFE) == 1 )
              {
                v115 = **(_QWORD **)v101;
                *(_QWORD *)v101 = 0LL;
                RtlpInterlockedPushEntrySList(v115);
              }
LABEL_278:
              v62 = 1;
LABEL_128:
              if ( a5 )
                *a5 = 0;
              if ( a4 )
                *a4 = 0LL;
              if ( RtlpHpStackLoggingEnabled() && (a3 & 0x10000000) == 0 )
                goto LABEL_280;
              return v62;
            }
            v89 = *(_QWORD *)(v88 + 24);
          }
          RtlpLogHeapFailure(3, v89, v10, 0, 0LL, 0LL);
          goto LABEL_278;
        }
LABEL_127:
        v72 = RtlpFreeHeap(a1, a3 | 2u, v10, v8);
        v62 = v72;
        if ( !v72 )
          return v62;
        goto LABEL_128;
      }
    }
LABEL_178:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v76 = NtCurrentTeb();
    v76->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return 0;
  }
  if ( (RtlpHpAppCompatFlags & 2) != 0 && a2 )
  {
    v129 = *(_QWORD *)(a2 - 16);
    v8 = a2 - v129;
  }
  else
  {
    v129 = 0LL;
  }
  if ( a3 )
  {
    if ( a3 == 8 )
    {
      v11 = 2;
    }
    else
    {
      v11 = a3 & 1;
      if ( (a3 & 8) != 0 )
        v11 |= 2u;
      if ( (a3 & 4) != 0 )
        v11 |= 0x80000000;
      if ( (a3 & 0x100) != 0 )
        v11 |= 0x100u;
      if ( (a3 & 0xE00) != 0 )
        v11 |= a3 & 0xE00;
      if ( (a3 & 0x10) != 0 )
        v11 |= 0x2000000u;
      if ( (a3 & 2) != 0 )
        v11 |= 0x1000000u;
    }
  }
  else
  {
    v11 = 0;
  }
  v12 = *(_DWORD *)(a1 + 220);
  v13 = (v11 | *(_DWORD *)(a1 + 20)) & 0x11000001;
  v14 = 0;
  if ( v12 )
    LOBYTE(v14) = v12 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v15 = a5;
  v16 = v13 | 1;
  v17 = 0LL;
  v18 = 1;
  if ( !v14 )
    v16 = v13;
  if ( a5 )
  {
    v17 = -1LL;
    if ( (_WORD)v8 )
    {
      v19 = 0;
    }
    else
    {
      v68 = RtlCSparseBitmapBitmaskRead(&unk_180166908, 2 * ((v8 - qword_180166948) >> 20));
      if ( !v68 || (v19 = v68 - 1, v19 == 2) )
      {
        v40 = RtlpHpLargeAllocSize(a1, v8, v16, &v127);
        goto LABEL_34;
      }
      v18 = 1;
    }
    v20 = 192LL * v19;
    v21 = v20 + a1 + 256;
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(v20 + a1 + 256, v8);
      v18 = 1;
    }
    else
    {
      v22 = v8 & *(_QWORD *)v21;
      if ( (RtlpHpHeapGlobals ^ v21 ^ v22 ^ *(_QWORD *)(v22 + 0x10)) == 0xA2E64EADA2E64EADuLL )
        DescriptorValidateSafe = v22 + 32 * ((unsigned __int64)(unsigned int)(v8 - v22) >> *(_BYTE *)(v21 + 8));
      else
        DescriptorValidateSafe = 0LL;
    }
    if ( !DescriptorValidateSafe )
      goto LABEL_145;
    v24 = *(_BYTE *)(DescriptorValidateSafe + 24);
    if ( (v24 & 1) == 0 )
      goto LABEL_145;
    if ( (v24 & 2) != 0 )
    {
      v26 = v24 & 0xC;
      if ( v26 < 8u && (((1 << *(_BYTE *)(v21 + 8)) - 1) & v8) != 0 )
        goto LABEL_145;
    }
    else
    {
      DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
      v25 = *(_BYTE *)(DescriptorValidateSafe + 24);
      if ( (v25 & 3) != 3 )
        goto LABEL_145;
      v26 = v25 & 0xC;
      if ( v26 < 8u )
        goto LABEL_145;
    }
    v27 = *(_BYTE *)(v21 + 8);
    v28 = (DescriptorValidateSafe & *(_QWORD *)v21)
        + ((DescriptorValidateSafe - (DescriptorValidateSafe & *(_QWORD *)v21)) >> 5 << v27);
    if ( v8 <= v28 )
    {
      if ( (*(_WORD *)(DescriptorValidateSafe + 8) & 1) != 0 )
      {
        _InterlockedOr(v126, 0);
        v27 = *(_BYTE *)(v21 + 8);
      }
      else
      {
        v18 = 0;
      }
      v40 = ((unsigned __int64)*(unsigned __int8 *)(DescriptorValidateSafe + 31) << v27)
          - *(unsigned int *)(DescriptorValidateSafe + 4);
      v127 = v18;
    }
    else if ( v26 == 8 )
    {
      v29 = *(_DWORD *)((DescriptorValidateSafe & *(_QWORD *)v21)
                      + ((DescriptorValidateSafe - (DescriptorValidateSafe & *(_QWORD *)v21)) >> 5 << v27)
                      + 0x28);
      v30 = (unsigned int)v28 >> 12;
      v31 = qword_1801634A8 ^ ((unsigned int)v28 >> 12) ^ *(_DWORD *)(v28 + 40);
      v32 = (unsigned __int16)v31;
      v33 = *(_QWORD *)(*(_QWORD *)(v21 + 24)
                      + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v31 + 15) >> 4]
                      + 128);
      v34 = v8 - HIWORD(v31) - v28;
      v35 = *(unsigned int *)(v33 + 72);
      v36 = *(_BYTE *)(v33 + 76);
      if ( (_DWORD)v35 )
      {
        v37 = (v35 * (unsigned __int64)v34) >> v36;
        v38 = v34 - v37 * v32;
      }
      else
      {
        LODWORD(v37) = v34 >> v36;
        v38 = v34 & ((1 << v36) - 1);
      }
      if ( v38 )
      {
        v40 = -1LL;
      }
      else
      {
        v39 = *(_QWORD *)(v28 + 8 * ((unsigned __int64)(unsigned int)(2 * v37) >> 6) + 48) >> ((2 * v37) & 0x3F);
        if ( (v39 & 1) != 0 )
        {
          v40 = (unsigned __int16)qword_1801634A8 ^ (unsigned int)(unsigned __int16)(v29 ^ v30);
          if ( (v39 & 2) != 0 )
          {
            v41 = (unsigned __int16)qword_1801634A8 ^ (unsigned __int64)(unsigned __int16)(v29 ^ v30);
            v42 = *(_WORD *)(v41 + v8 - 2);
            v43 = v42 & 0x4000;
            if ( (v42 & 0x4000) != 0 )
            {
              _InterlockedOr(v126, 0);
              v42 = *(_WORD *)(v41 + v8 - 2);
            }
            v44 = v43 != 0;
            if ( v42 < 0 )
              v40 = (unsigned int)(v40 - 1);
            else
              v40 = (unsigned int)v40 - (v42 & 0x3FFF);
          }
          else
          {
            v44 = 0;
          }
          v127 = v44;
        }
        else
        {
          v40 = -1LL;
        }
      }
    }
    else
    {
      v40 = RtlpHpVsChunkSize(*(_QWORD *)(v21 + 32), v8, DescriptorValidateSafe, &v127);
    }
    v15 = a5;
LABEL_34:
    if ( v40 != -1LL )
    {
      if ( a4 )
        *a4 = v40;
      if ( v127 )
      {
        v45 = v40 + v8;
        if ( (v16 & 0x10000000) != 0 )
          v45 += 16LL;
        v17 = (v45 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v17 )
        {
          v46 = *(_WORD *)v17;
LABEL_42:
          *v15 = v46;
          goto LABEL_43;
        }
      }
      else
      {
        v17 = 0LL;
      }
LABEL_85:
      v46 = 0;
      goto LABEL_42;
    }
LABEL_145:
    v15 = a5;
    goto LABEL_85;
  }
  if ( a4 )
    *a4 = RtlpHpSizeHeapInternal(a1, v8, v16, 0LL);
LABEL_43:
  if ( (v16 & 0x1000000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 24) )
    {
      if ( (v17 || (v17 = RtlpHpExtrasGet(a1, v8, v16, a4)) != 0) && v17 != -1LL )
      {
        v73 = *(_BYTE *)(v17 + 2);
        if ( (v73 & 0xF) != 0 && (int)RtlpCallInterceptRoutine(v73 & 0xF, a1, v8, 3, v17 + 16) < 0 )
          goto LABEL_156;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x10000000) != 0 && RtlpHpSizeHeap(a1, v8, v16) == -1 )
  {
    RtlpLogHeapFailure(9, a1, v8, 0, 0LL, 0LL);
LABEL_156:
    v62 = 0;
    goto LABEL_157;
  }
  if ( (_WORD)v8 )
  {
    v47 = 0;
  }
  else
  {
    v69 = RtlCSparseBitmapBitmaskRead(&unk_180166908, 2 * ((v8 - qword_180166948) >> 20));
    if ( !v69 || (v47 = v69 - 1, v47 == 2) )
    {
      v138 = RtlpHpLargeFree(a1, v8, v16) != 0;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v70 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v70 = 2147353472LL;
      v62 = v138;
      if ( *(_BYTE *)v70 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( !v138 )
          goto LABEL_157;
        RtlpLogHeapFreeEvent(a1, v8, 3LL);
      }
      goto LABEL_63;
    }
  }
  v48 = 192LL * v47;
  v49 = v48 + a1 + 256;
  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    v51 = RtlpHpSegGetDescriptorValidateSafe(v48 + a1 + 256, v8);
  }
  else
  {
    v50 = v8 & *(_QWORD *)v49;
    if ( (RtlpHpHeapGlobals ^ v49 ^ v50 ^ *(_QWORD *)(v50 + 0x10)) == 0xA2E64EADA2E64EADuLL )
      v51 = v50 + 32 * ((unsigned __int64)(unsigned int)(v8 - v50) >> *(_BYTE *)(v49 + 8));
    else
      v51 = 0LL;
  }
  if ( v51 )
  {
    v52 = *(_BYTE *)(v51 + 24);
    if ( (v52 & 1) != 0 )
    {
      if ( (v52 & 2) != 0 )
      {
        v54 = v52 & 0xC;
        if ( v54 >= 8u || (((1 << *(_BYTE *)(v49 + 8)) - 1) & v8) == 0 )
        {
LABEL_56:
          v55 = *(_BYTE *)(v49 + 8);
          v56 = v51 & *(_QWORD *)v49;
          if ( v8 <= v56 + ((v51 - v56) >> 5 << v55) )
          {
            RtlpHpSegPageRangeShrink(v49, v51, 0LL, v16);
            v137 = 1;
            if ( (unsigned int)RtlGetCurrentServiceSessionId() )
              v71 = (__int64)NtCurrentPeb()->SharedData + 550;
            else
              v71 = 2147353472LL;
            if ( !*(_BYTE *)v71 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
              goto LABEL_62;
            v75 = 3LL;
          }
          else
          {
            v57 = v54 == 8;
            v58 = v56 + ((v51 - v56) >> 5 << v55);
            if ( v57 )
            {
              v59 = RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(v49 + 24), v58, v8, v16);
              v137 = v59;
            }
            else
            {
              v137 = RtlpHpVsContextFree(*(_QWORD *)(v49 + 32), v58, v8, v16, (__int64)&v132);
              v59 = v137;
              if ( v137 )
              {
                v64 = *(_QWORD *)(v49 + 24);
                if ( v132 <= (unsigned int)*(unsigned __int16 *)(v64 + 60) - 16 )
                {
                  v65 = RtlpLfhBucketIndexMap[(unsigned __int64)(v132 + 15) >> 4];
                  if ( (*(_QWORD *)(v64 + 8 * v65 + 128) & 1) != 0 )
                  {
                    do
                    {
                      v66 = *(_QWORD *)(v64 + 8 * v65 + 128);
                      v130 = v66;
                      v67 = v66;
                      v128 = (volatile signed __int32 *)v66;
                      if ( (v66 & 1) == 0 )
                        break;
                      if ( WORD1(v130) > 1u )
                      {
                        WORD1(v128) = WORD1(v130) - 1;
                        v67 = (signed __int64)v128;
                      }
                    }
                    while ( v66 != _InterlockedCompareExchange64(
                                     (volatile signed __int64 *)(v64 + 8 * v65 + 128),
                                     v67,
                                     v66) );
                  }
                }
                v59 = v137;
              }
            }
            SharedData = NtCurrentPeb()->SharedData;
            if ( SharedData && *SharedData )
              v61 = (__int64)NtCurrentPeb()->SharedData + 550;
            else
              v61 = 2147353472LL;
            if ( !*(_BYTE *)v61 || (NtCurrentPeb()->TracingFlags & 1) == 0 || !v59 )
              goto LABEL_62;
            LOBYTE(v5) = (*(_BYTE *)(v51 + 24) & 0xC) != 8;
            v75 = (unsigned int)(v5 + 2);
          }
          RtlpLogHeapFreeEvent(*(_QWORD *)(v49 + 56), v8, v75);
LABEL_62:
          v62 = v137;
          goto LABEL_63;
        }
      }
      else
      {
        v51 += -32LL * *(unsigned __int8 *)(v51 + 31);
        v53 = *(_BYTE *)(v51 + 24);
        if ( (v53 & 3) == 3 )
        {
          v54 = v53 & 0xC;
          if ( v54 >= 8u )
            goto LABEL_56;
        }
      }
    }
  }
  RtlpLogHeapFailure(9, *(_QWORD *)(v49 + 56), v8, 0, 0LL, 0LL);
  v62 = 0;
LABEL_63:
  if ( !v62 )
  {
LABEL_157:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v74 = NtCurrentTeb();
    v74->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return v62;
  }
  if ( a4 )
    *a4 -= v129;
  if ( (dword_180166388 & 1) != 0 && (dword_180166388 & 2) != 0 )
  {
    if ( NtCurrentPeb()->ProcessHeap )
    {
      v136 = RtlpHpEnvHandle;
      if ( a1 != *(_QWORD *)RtlpHpMetadataHeapCtxGet(&v136) )
LABEL_280:
        RtlpHpStackTraceRemoveStack(a1, v8);
    }
  }
  return v62;
}
