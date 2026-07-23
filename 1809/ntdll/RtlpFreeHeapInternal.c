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
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     ZwProtectVirtualMemory @ 0x1800A0D00 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A3DF0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A3E30 (RtlpInterlockedFlushSList.c)
 *     RtlpCallInterceptRoutine @ 0x1800F2E74 (RtlpCallInterceptRoutine.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180105188 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapFreeEvent @ 0x180105E78 (RtlpLogHeapFreeEvent.c)
 *     RtlpGetReservedBlockSize @ 0x18010A39C (RtlpGetReservedBlockSize.c)
 *     RtlpValidateLFHBlock @ 0x18010A7D8 (RtlpValidateLFHBlock.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010D74C (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpFreeHeapInternal(
        _DWORD *BaseAddress,
        unsigned __int64 a2,
        int a3,
        unsigned __int64 *a4,
        _WORD *a5)
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
  unsigned __int64 v21; // rbx
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
  unsigned __int64 v49; // rsi
  unsigned __int64 v50; // rdx
  __int64 v51; // rbx
  char v52; // dl
  char v53; // dl
  unsigned __int8 v54; // dl
  char v55; // cl
  __int64 v56; // rax
  int v57; // edx
  _DWORD *SharedData; // rcx
  __int64 v59; // rcx
  unsigned int v60; // r15d
  __int64 v62; // rdx
  __int64 v63; // r8
  signed __int64 v64; // rax
  signed __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rcx
  unsigned __int8 v70; // al
  char v71; // cl
  struct _TEB *v72; // rbx
  __int64 v73; // r8
  struct _TEB *v74; // rbx
  int v75; // edx
  __int64 v76; // rax
  unsigned __int16 v77; // dx
  int v78; // eax
  int v79; // eax
  unsigned __int16 v80; // ax
  __int64 v81; // rcx
  __int64 v82; // rcx
  signed __int32 *v83; // rbx
  int v84; // edx
  __int64 v85; // rax
  __int64 v86; // r15
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r9
  int v90; // r8d
  signed __int32 v91; // ebx
  volatile signed __int32 *v92; // rdx
  _WORD *v93; // r8
  _QWORD *v94; // rax
  int v95; // r8d
  unsigned int v96; // edx
  signed __int64 *v97; // rcx
  int v98; // eax
  volatile signed __int32 *v99; // rbx
  int v100; // eax
  unsigned __int64 v101; // r8
  unsigned __int64 v102; // r9
  signed __int64 v103; // rdx
  _DWORD *v104; // r12
  __int64 v105; // rcx
  __int64 v106; // r12
  unsigned __int16 ReservedBlockSize; // ax
  __int64 v108; // rcx
  ULONG HeapProtection; // eax
  unsigned __int16 *v110; // r8
  int v111; // edx
  signed __int64 v112; // rax
  __int64 v113; // rcx
  signed __int32 v114; // eax
  __int64 v115; // rax
  _QWORD *v116; // rcx
  signed __int32 v117; // eax
  unsigned __int16 *v118; // r9
  int v119; // r8d
  __int64 v120; // rax
  volatile signed __int32 *v121; // rdx
  unsigned __int16 *v122; // rcx
  __int64 v123; // rcx
  signed __int32 v124[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v125; // [rsp+30h] [rbp-78h] BYREF
  volatile signed __int32 *v126; // [rsp+38h] [rbp-70h]
  __int64 v127; // [rsp+40h] [rbp-68h]
  signed __int64 v128; // [rsp+48h] [rbp-60h]
  int v129; // [rsp+50h] [rbp-58h]
  unsigned int v130; // [rsp+58h] [rbp-50h] BYREF
  ULONG OldProtect; // [rsp+5Ch] [rbp-4Ch] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-48h] BYREF
  PVOID BaseAddressa; // [rsp+68h] [rbp-40h] BYREF
  __int128 v134; // [rsp+70h] [rbp-38h] BYREF
  int v135; // [rsp+B0h] [rbp+8h]
  BOOL v136; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v137; // [rsp+B0h] [rbp+8h]
  unsigned __int16 *v138; // [rsp+B0h] [rbp+8h]
  signed __int64 v139; // [rsp+B0h] [rbp+8h]

  v5 = 0;
  v8 = a2;
  v10 = 0LL;
  if ( BaseAddress[4] != -571548178 )
  {
    if ( (BaseAddress[29] & 0x1000000) != 0 )
      goto LABEL_127;
    if ( (BaseAddress[30] & 1) != 0 )
    {
      v10 = RtlpProbeUserBufferSafe(BaseAddress, a2);
    }
    else if ( (a2 & 0xF) != 0 )
    {
      RtlpLogHeapFailure(9, (_DWORD)BaseAddress, a2, 0, 0LL, 0LL);
    }
    else
    {
      v10 = a2 - 16;
      _m_prefetchw((const void *)(a2 - 16));
      if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
        v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
      if ( (*(_BYTE *)(v10 + 15) & 0x3F) == 0 )
      {
        RtlpLogHeapFailure(8, (_DWORD)BaseAddress, v10, 0, 0LL, 0LL);
        v10 = 0LL;
      }
    }
    if ( v10 )
    {
      if ( *(_BYTE *)(v8 - 1) != 5 )
        goto LABEL_126;
      if ( *(char *)(v10 + 15) >= 0 )
      {
        if ( BaseAddress[31] )
        {
          v75 = *(_DWORD *)(v10 + 8) ^ BaseAddress[34];
          if ( HIBYTE(v75) != ((unsigned __int8)v75 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v10 + 8) ^ *((_WORD *)BaseAddress + 68)) >> 8) ^ BYTE2(v75))) )
            goto LABEL_203;
        }
      }
      else if ( !(unsigned __int8)RtlpValidateLFHBlock(BaseAddress, v10) )
      {
LABEL_203:
        RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v10, v8, 0LL, 0LL);
        goto LABEL_178;
      }
      if ( *(char *)(v10 + 15) >= 0 )
      {
        if ( BaseAddress[31] )
        {
          v78 = *(_DWORD *)(v10 + 8);
          v129 = v78;
          if ( (v78 & BaseAddress[31]) != 0 )
            v129 = BaseAddress[34] ^ v78;
          v77 = v129;
        }
        else
        {
          v77 = *(_WORD *)(v10 + 8);
        }
      }
      else
      {
        if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)BaseAddress ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4)) )
          v76 = 0LL;
        else
          v76 = *(_QWORD *)(v10
                          - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12));
        v77 = *(_WORD *)(v76 + 36);
      }
      if ( *(_BYTE *)(v10 + 15) == 4 )
      {
        if ( BaseAddress[31] )
        {
          v79 = *(_DWORD *)(v10 + 8);
          v129 = v79;
          if ( (v79 & BaseAddress[31]) != 0 )
            v129 = BaseAddress[34] ^ v79;
          v80 = v129;
        }
        else
        {
          v80 = *(_WORD *)(v10 + 8);
        }
        v81 = v77 + *(_QWORD *)(v10 - 16) - v80;
      }
      else
      {
        v81 = 16LL * v77;
      }
      if ( v81 + v10 < v8 )
        goto LABEL_203;
      if ( (a3 & 0x3C000102) != 0
        || (*(_BYTE *)(v8 - 1) != 5 ? (v82 = 0LL) : (v82 = v8 - 16LL * *(unsigned __int8 *)(v8 - 16 + 14)),
            (int)RtlpCallInterceptRoutine(*(_DWORD *)(v8 - 8), (_DWORD)BaseAddress, v8, 3, v82) >= 0) )
      {
LABEL_126:
        if ( *(char *)(v10 + 15) < 0 )
        {
          if ( (unsigned __int16)BaseAddress ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4))
            || (v83 = *(signed __int32 **)(v10
                                         - ((unsigned __int64)((unsigned int)BaseAddress ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12)),
                (v126 = v83) == 0LL) )
          {
            LODWORD(v87) = (_DWORD)BaseAddress;
          }
          else
          {
            _m_prefetchw(v83);
            v84 = (unsigned __int16)(*(_DWORD *)(v10 + 12) >> 8);
            v85 = *(_QWORD *)v83;
            v128 = *((_QWORD *)v83 + 1);
            LODWORD(v127) = v84;
            v86 = *(_QWORD *)(*(_QWORD *)v85 + 24LL);
            if ( v128
               + v84
               * (((unsigned int)v128 ^ (unsigned int)v86 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v128 + 24)) >> 16)
               + (unsigned __int16)(v128 ^ v86 ^ RtlpLFHKey ^ *(_WORD *)(v128 + 24)) == v10 )
            {
              if ( RtlGetCurrentServiceSessionId() )
                v88 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v88 = 2147353472LL;
              if ( *(_BYTE *)v88 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapFreeEvent(*(_QWORD *)(v86 + 24), v10 + 16, 2LL);
              v89 = 0LL;
              v90 = 0;
              if ( MEMORY[0x7FFE036A] > 1u )
                v89 = 100LL;
              while ( 1 )
              {
                v91 = v83[8];
                v92 = v126;
                if ( (v91 & 0x80000000) == 0 && v91 == _InterlockedCompareExchange(v126 + 8, v91 | 0x80000000, v91) )
                  break;
                if ( ++v90 > (unsigned int)v89 )
                {
                  v91 = -1;
                  break;
                }
                v83 = (signed __int32 *)v126;
              }
              *(_BYTE *)(v10 + 15) = 0x80;
              v93 = v92 + 4;
              if ( v91 == -1 )
              {
                RtlpInterlockedPushEntrySList(v93);
                goto LABEL_278;
              }
              _bittestandreset64(*(signed __int64 **)(v128 + 40), (unsigned int)v127);
              if ( *v93 )
              {
                v94 = (_QWORD *)RtlpInterlockedFlushSList(v92 + 4, v92, v93, v89);
                v95 = 0;
                while ( v94 )
                {
                  v96 = *((_DWORD *)v94 - 1);
                  ++v95;
                  v94 = (_QWORD *)*v94;
                  v97 = *(signed __int64 **)(v128 + 40);
                  v96 >>= 8;
                  LODWORD(v127) = (unsigned __int16)v96;
                  _bittestandreset64(v97, (unsigned __int16)v96);
                }
              }
              else
              {
                v95 = 0;
              }
              v98 = (unsigned __int16)v91;
              v99 = v126;
              v100 = ((_DWORD)v127 << 16) | (v95 + 1 + v98);
              v101 = *(_QWORD *)v126;
              if ( (_WORD)v100 != *((_WORD *)v126 + 20)
                || (v102 = *(unsigned int *)(v101 + 168),
                    v103 = *(unsigned int *)(*(_QWORD *)v101 + 32LL),
                    *(_DWORD *)(v101 + 164) == 1)
                && (unsigned int)v103 >= (unsigned int)v102
                && (v103 = (unsigned int)(v103 - v102), (unsigned int)v103 < *(_DWORD *)(*(_QWORD *)v101 + 36LL)) )
              {
                *((_DWORD *)v126 + 8) = v100;
                if ( (v99[11] & 2) != 0 || !(unsigned __int8)RtlpIsSubSegmentReuseable(v101, v99) )
                  goto LABEL_278;
                do
                {
                  v117 = *((_DWORD *)v99 + 11);
                  if ( !v117 || (v117 & 2) != 0 )
                    goto LABEL_278;
                }
                while ( v117 != _InterlockedCompareExchange(v99 + 11, v117 | 2, v117) );
                v118 = *(unsigned __int16 **)v99;
                v119 = 0;
                while ( 1 )
                {
                  v120 = ((_BYTE)v119 + (unsigned __int8)v118[87]) & 0xF;
                  v121 = *(volatile signed __int32 **)&v118[4 * v120 + 8];
                  v122 = &v118[4 * v120];
                  if ( v121 )
                  {
                    if ( (v121[11] & 1) == 0
                      && v121 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                              (volatile signed __int64 *)v122 + 2,
                                                              (signed __int64)v99,
                                                              (signed __int64)v121) )
                    {
                      _m_prefetchw((const void *)(v121 + 11));
                      if ( _InterlockedAnd(v121 + 11, 0xFFFFFFFD) == 2 )
                      {
                        v123 = **(_QWORD **)v121;
                        *(_QWORD *)v121 = 0LL;
                        RtlpInterlockedPushEntrySList(v123);
                      }
                      goto LABEL_278;
                    }
                  }
                  else if ( !_InterlockedCompareExchange64(
                               (volatile signed __int64 *)v122 + 2,
                               (signed __int64)v99,
                               0LL) )
                  {
                    goto LABEL_278;
                  }
                  if ( (unsigned int)++v119 >= 0x10 )
                  {
                    RtlpInterlockedPushEntrySList(
                      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v99 + 24LL)
                                + 8LL * *(unsigned __int16 *)(*(_QWORD *)v99 + 172LL)
                                + 1192)
                    + 144LL);
                    goto LABEL_278;
                  }
                }
              }
              v137 = *(_QWORD *)v126;
              v104 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v126 + 8LL), 0LL);
              if ( v104 )
              {
                _m_prefetchw(v104 + 11);
                if ( _InterlockedAnd(v104 + 11, 0xFFFFFFF9) == 6 )
                {
                  v105 = **(_QWORD **)v104;
                  *(_QWORD *)v104 = 0LL;
                  goto LABEL_242;
                }
                if ( (unsigned __int8)RtlpIsSubSegmentReuseable(v137, v104) )
                {
                  do
                  {
                    v114 = v104[11];
                    if ( !v114 || (v114 & 2) != 0 )
                      goto LABEL_243;
                  }
                  while ( v114 != _InterlockedCompareExchange(v104 + 11, v114 | 2, v114) );
                  v102 = *(_QWORD *)v104;
                  v101 = 0LL;
                  while ( 1 )
                  {
                    v115 = ((_BYTE)v101 + (unsigned __int8)*(_WORD *)(v102 + 174)) & 0xF;
                    v103 = *(_QWORD *)(v102 + 8 * v115 + 16);
                    v116 = (_QWORD *)(v102 + 8 * v115);
                    if ( v103 )
                    {
                      if ( (*(_DWORD *)(v103 + 44) & 1) == 0
                        && v103 == _InterlockedCompareExchange64(v116 + 2, (signed __int64)v104, v103) )
                      {
                        _m_prefetchw((const void *)(v103 + 44));
                        if ( _InterlockedAnd((volatile signed __int32 *)(v103 + 44), 0xFFFFFFFD) == 2 )
                        {
                          v105 = **(_QWORD **)v103;
                          *(_QWORD *)v103 = 0LL;
LABEL_242:
                          RtlpInterlockedPushEntrySList(v105);
                        }
                        break;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(v116 + 2, (signed __int64)v104, 0LL) )
                    {
                      break;
                    }
                    v101 = (unsigned int)(v101 + 1);
                    if ( (unsigned int)v101 >= 0x10 )
                    {
                      v105 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v104 + 24LL)
                                       + 8LL * *(unsigned __int16 *)(*(_QWORD *)v104 + 172LL)
                                       + 1192)
                           + 144LL;
                      goto LABEL_242;
                    }
                  }
                }
              }
LABEL_243:
              v106 = *(_QWORD *)(*(_QWORD *)v137 + 24LL);
              v138 = *(unsigned __int16 **)v99;
              if ( (*((_BYTE *)v99 + 38) & 3) != 0 )
              {
                BaseAddressa = (PVOID)((*((_QWORD *)v99 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL);
                ReservedBlockSize = RtlpGetReservedBlockSize(v99, v103, v101, v102);
                v108 = *(_QWORD *)(v106 + 24);
                RegionSize = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v99 + 20);
                HeapProtection = RtlpGetHeapProtection(v108, 1LL);
                ZwProtectVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &BaseAddressa,
                  &RegionSize,
                  HeapProtection,
                  &OldProtect);
              }
              *(_DWORD *)(*((_QWORD *)v99 + 1) + 20LL) = 0;
              RtlpFreeUserBlock(v106, *((_QWORD *)v99 + 1));
              v110 = v138;
              v111 = -*((unsigned __int16 *)v99 + 20);
              do
              {
                v112 = *((_QWORD *)v110 + 20);
                LODWORD(v139) = v112 + v111;
                HIDWORD(v139) = HIDWORD(v112) - 1;
              }
              while ( v112 != _InterlockedCompareExchange64((volatile signed __int64 *)v110 + 20, v139, v112) );
              *((_QWORD *)v99 + 1) = 0LL;
              _InterlockedIncrement((volatile signed __int32 *)(v106 + 60));
              *((_DWORD *)v99 + 8) = 0;
              _m_prefetchw((const void *)(v99 + 11));
              if ( _InterlockedAnd(v99 + 11, 0xFFFFFFFE) == 1 )
              {
                v113 = **(_QWORD **)v99;
                *(_QWORD *)v99 = 0LL;
                RtlpInterlockedPushEntrySList(v113);
              }
LABEL_278:
              v60 = 1;
LABEL_128:
              if ( a5 )
                *a5 = 0;
              if ( a4 )
                *a4 = 0LL;
              if ( RtlpHpStackLoggingEnabled() && (a3 & 0x10000000) == 0 )
                goto LABEL_280;
              return v60;
            }
            v87 = *(_QWORD *)(v86 + 24);
          }
          RtlpLogHeapFailure(3, v87, v10, 0, 0LL, 0LL);
          goto LABEL_278;
        }
LABEL_127:
        v70 = RtlpFreeHeap(BaseAddress);
        v60 = v70;
        if ( !v70 )
          return v60;
        goto LABEL_128;
      }
    }
LABEL_178:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v74 = NtCurrentTeb();
    v74->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return 0;
  }
  if ( (RtlpHpAppCompatFlags & 2) != 0 && a2 )
  {
    v127 = *(_QWORD *)(a2 - 16);
    v8 = a2 - v127;
  }
  else
  {
    v127 = 0LL;
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
  v12 = BaseAddress[55];
  v13 = (v11 | BaseAddress[5]) & 0x11000001;
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
      v66 = RtlCSparseBitmapBitmaskRead(&unk_180166908, 2 * ((v8 - qword_180166948) >> 20));
      if ( !v66 || (v19 = v66 - 1, v19 == 2) )
      {
        v40 = RtlpHpLargeAllocSize(BaseAddress, v8, v16, &v125);
        goto LABEL_34;
      }
      v18 = 1;
    }
    v20 = 48LL * v19;
    v21 = (unsigned __int64)&BaseAddress[v20 + 64];
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(&BaseAddress[v20 + 64], v8);
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
        _InterlockedOr(v124, 0);
        v27 = *(_BYTE *)(v21 + 8);
      }
      else
      {
        v18 = 0;
      }
      v40 = ((unsigned __int64)*(unsigned __int8 *)(DescriptorValidateSafe + 31) << v27)
          - *(unsigned int *)(DescriptorValidateSafe + 4);
      v125 = v18;
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
              _InterlockedOr(v124, 0);
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
          v125 = v44;
        }
        else
        {
          v40 = -1LL;
        }
      }
    }
    else
    {
      v40 = RtlpHpVsChunkSize(*(_QWORD *)(v21 + 32), v8, DescriptorValidateSafe, &v125);
    }
    v15 = a5;
LABEL_34:
    if ( v40 != -1LL )
    {
      if ( a4 )
        *a4 = v40;
      if ( v125 )
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
    *a4 = RtlpHpSizeHeapInternal(BaseAddress, v8, v16, 0LL);
LABEL_43:
  if ( (v16 & 0x1000000) == 0 )
  {
    if ( BaseAddress[6] )
    {
      if ( (v17 || (v17 = RtlpHpExtrasGet(BaseAddress, v8, v16, a4)) != 0) && v17 != -1LL )
      {
        v71 = *(_BYTE *)(v17 + 2);
        if ( (v71 & 0xF) != 0 && (int)RtlpCallInterceptRoutine(v71 & 0xF, (_DWORD)BaseAddress, v8, 3, v17 + 16) < 0 )
          goto LABEL_156;
      }
    }
  }
  if ( (BaseAddress[5] & 0x10000000) != 0 && RtlpHpSizeHeap((__int64)BaseAddress, v8, v16) == -1 )
  {
    RtlpLogHeapFailure(9, (_DWORD)BaseAddress, v8, 0, 0LL, 0LL);
LABEL_156:
    v60 = 0;
    goto LABEL_157;
  }
  if ( (_WORD)v8 )
  {
    v47 = 0;
  }
  else
  {
    v67 = RtlCSparseBitmapBitmaskRead(&unk_180166908, 2 * ((v8 - qword_180166948) >> 20));
    if ( !v67 || (v47 = v67 - 1, v47 == 2) )
    {
      v136 = RtlpHpLargeFree(BaseAddress, v8, v16) != 0;
      if ( RtlGetCurrentServiceSessionId() )
        v68 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v68 = 2147353472LL;
      v60 = v136;
      if ( *(_BYTE *)v68 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( !v136 )
          goto LABEL_157;
        RtlpLogHeapFreeEvent(BaseAddress, v8, 3LL);
      }
      goto LABEL_63;
    }
  }
  v48 = 48LL * v47;
  v49 = (unsigned __int64)&BaseAddress[v48 + 64];
  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    v51 = RtlpHpSegGetDescriptorValidateSafe(&BaseAddress[v48 + 64], v8);
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
            v135 = 1;
            if ( RtlGetCurrentServiceSessionId() )
              v69 = (__int64)NtCurrentPeb()->SharedData + 550;
            else
              v69 = 2147353472LL;
            if ( !*(_BYTE *)v69 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
              goto LABEL_62;
            v73 = 3LL;
          }
          else
          {
            if ( v54 == 8 )
            {
              v57 = RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(v49 + 24), v56 + ((v51 - v56) >> 5 << v55), v8, v16);
              v135 = v57;
            }
            else
            {
              v135 = RtlpHpVsContextFree(*(PRTL_SRWLOCK *)(v49 + 32), (__int64)&v130);
              v57 = v135;
              if ( v135 )
              {
                v62 = *(_QWORD *)(v49 + 24);
                if ( v130 <= (unsigned int)*(unsigned __int16 *)(v62 + 60) - 16 )
                {
                  v63 = RtlpLfhBucketIndexMap[(unsigned __int64)(v130 + 15) >> 4];
                  if ( (*(_QWORD *)(v62 + 8 * v63 + 128) & 1) != 0 )
                  {
                    do
                    {
                      v64 = *(_QWORD *)(v62 + 8 * v63 + 128);
                      v128 = v64;
                      v65 = v64;
                      v126 = (volatile signed __int32 *)v64;
                      if ( (v64 & 1) == 0 )
                        break;
                      if ( WORD1(v128) > 1u )
                      {
                        WORD1(v126) = WORD1(v128) - 1;
                        v65 = (signed __int64)v126;
                      }
                    }
                    while ( v64 != _InterlockedCompareExchange64(
                                     (volatile signed __int64 *)(v62 + 8 * v63 + 128),
                                     v65,
                                     v64) );
                  }
                }
                v57 = v135;
              }
            }
            SharedData = NtCurrentPeb()->SharedData;
            if ( SharedData && *SharedData )
              v59 = (__int64)NtCurrentPeb()->SharedData + 550;
            else
              v59 = 2147353472LL;
            if ( !*(_BYTE *)v59 || (NtCurrentPeb()->TracingFlags & 1) == 0 || !v57 )
              goto LABEL_62;
            LOBYTE(v5) = (*(_BYTE *)(v51 + 24) & 0xC) != 8;
            v73 = (unsigned int)(v5 + 2);
          }
          RtlpLogHeapFreeEvent(*(_QWORD *)(v49 + 56), v8, v73);
LABEL_62:
          v60 = v135;
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
  v60 = 0;
LABEL_63:
  if ( !v60 )
  {
LABEL_157:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v72 = NtCurrentTeb();
    v72->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return v60;
  }
  if ( a4 )
    *a4 -= v127;
  if ( (dword_180166388 & 1) != 0 && (dword_180166388 & 2) != 0 )
  {
    if ( NtCurrentPeb()->ProcessHeap )
    {
      v134 = RtlpHpEnvHandle;
      if ( BaseAddress != *(_DWORD **)RtlpHpMetadataHeapCtxGet(&v134) )
LABEL_280:
        RtlpHpStackTraceRemoveStack(BaseAddress, v8);
    }
  }
  return v60;
}
