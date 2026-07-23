/*
 * XREFs of RtlpFreeHeapInternal @ 0x180040B50
 * Callers:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x1800407A0 (RtlpHpFreeWithExceptionProtection.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x180036AE0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsContextFree @ 0x180038C70 (RtlpHpVsContextFree.c)
 *     RtlpHpSizeHeap @ 0x180040320 (RtlpHpSizeHeap.c)
 *     RtlpHpStackLoggingEnabled @ 0x180040750 (RtlpHpStackLoggingEnabled.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1800413B0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpFreeHeap @ 0x180041AB0 (RtlpFreeHeap.c)
 *     RtlpIsSubSegmentReuseable @ 0x180043114 (RtlpIsSubSegmentReuseable.c)
 *     RtlpHpSizeHeapInternal @ 0x180046C60 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpExtrasGet @ 0x180046D10 (RtlpHpExtrasGet.c)
 *     RtlpGetHeapProtection @ 0x18004733C (RtlpGetHeapProtection.c)
 *     RtlpLfhBucketUsageUpdate @ 0x1800488A4 (RtlpLfhBucketUsageUpdate.c)
 *     RtlpHpVsChunkSize @ 0x180048924 (RtlpHpVsChunkSize.c)
 *     RtlpFreeUserBlock @ 0x18004AD04 (RtlpFreeUserBlock.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x18004CD1C (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpLargeFree @ 0x1800507E4 (RtlpHpLargeFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180051688 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlNtStatusToDosError @ 0x180053CB0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18006E818 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpLargeAllocSize @ 0x1800843E0 (RtlpHpLargeAllocSize.c)
 *     ZwProtectVirtualMemory @ 0x18009D890 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A09A0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A09E0 (RtlpInterlockedFlushSList.c)
 *     RtlpCallInterceptRoutine @ 0x1800EFE14 (RtlpCallInterceptRoutine.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180102864 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapFreeEvent @ 0x180103550 (RtlpLogHeapFreeEvent.c)
 *     RtlpGetReservedBlockSize @ 0x180107840 (RtlpGetReservedBlockSize.c)
 *     RtlpValidateLFHBlock @ 0x180107C7C (RtlpValidateLFHBlock.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010B280 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpFreeHeapInternal(__int64 a1, unsigned __int64 a2, int a3, unsigned __int64 *a4, _WORD *a5)
{
  int v5; // edi
  unsigned __int64 v8; // rsi
  unsigned __int64 v10; // r13
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  _WORD *v15; // rbx
  unsigned int v16; // r15d
  unsigned __int64 v17; // r14
  int v18; // r11d
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rbx
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  char v24; // r9
  char v25; // r9
  unsigned __int8 v26; // r9
  char v27; // cl
  unsigned __int64 v28; // r10
  __int64 v29; // r8
  int v30; // ebx
  unsigned int v31; // r9d
  unsigned int v32; // edx
  int v33; // r13d
  __int64 v34; // rcx
  unsigned int v35; // r8d
  __int64 v36; // rax
  char v37; // cl
  unsigned __int64 v38; // rdx
  int v39; // r8d
  __int64 v40; // r8
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // r8
  __int16 v43; // ax
  int v44; // ecx
  BOOL v45; // r8d
  unsigned __int64 v46; // r14
  __int16 v47; // ax
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // r14
  unsigned __int64 v51; // rdx
  __int64 DescriptorValidateSafe; // rbx
  char v53; // r8
  char v54; // r8
  unsigned __int8 v55; // r8
  unsigned __int64 v56; // rdx
  int v57; // edx
  _DWORD *SharedData; // rcx
  __int64 v59; // rcx
  unsigned int v60; // r13d
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rcx
  unsigned __int8 v68; // al
  char v69; // cl
  struct _TEB *v70; // rbx
  __int64 v71; // r8
  struct _TEB *v72; // rbx
  int v73; // edx
  __int64 v74; // rax
  unsigned __int16 v75; // dx
  int v76; // eax
  int v77; // eax
  unsigned __int16 v78; // ax
  __int64 v79; // rcx
  __int64 v80; // rcx
  signed __int32 *v81; // rbx
  unsigned int v82; // edx
  __int64 v83; // rax
  __int64 v84; // r14
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r9
  int v88; // r8d
  signed __int32 v89; // ebx
  signed __int32 *v90; // rdx
  _WORD *v91; // r8
  _QWORD *v92; // rax
  int v93; // r8d
  unsigned int v94; // edx
  signed __int64 *v95; // rcx
  int v96; // eax
  signed __int32 *v97; // rbx
  int v98; // eax
  _DWORD *v99; // r8
  unsigned __int64 v100; // r9
  signed __int64 v101; // rdx
  _DWORD *v102; // r13
  __int64 v103; // rcx
  _DWORD *v104; // rdx
  bool v105; // zf
  signed __int32 *v106; // r8
  unsigned __int16 ReservedBlockSize; // ax
  __int64 v108; // r8
  __int64 v109; // rcx
  ULONG HeapProtection; // eax
  signed __int32 v111; // eax
  int v112; // r8d
  __int64 v113; // rax
  _QWORD *v114; // rcx
  unsigned __int16 *v115; // r8
  int v116; // edx
  signed __int64 v117; // rax
  signed __int32 *v118; // rax
  __int64 v119; // rcx
  signed __int32 v120; // eax
  unsigned __int16 *v121; // r9
  unsigned int i; // r8d
  __int64 v123; // rax
  volatile signed __int32 *v124; // rdx
  unsigned __int16 *v125; // rcx
  __int64 v126; // rcx
  signed __int32 v127[8]; // [rsp+0h] [rbp-A8h] BYREF
  signed __int32 *v128; // [rsp+30h] [rbp-78h]
  int v129; // [rsp+38h] [rbp-70h] BYREF
  unsigned int v130; // [rsp+3Ch] [rbp-6Ch]
  __int64 v131; // [rsp+40h] [rbp-68h] BYREF
  __int64 v132; // [rsp+48h] [rbp-60h]
  int v133; // [rsp+50h] [rbp-58h]
  ULONG OldProtect; // [rsp+58h] [rbp-50h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-48h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-40h] BYREF
  __int128 v137; // [rsp+70h] [rbp-38h] BYREF
  int v138; // [rsp+B0h] [rbp+8h]
  BOOL v139; // [rsp+B0h] [rbp+8h]
  _DWORD *v140; // [rsp+B0h] [rbp+8h]
  unsigned __int16 *v141; // [rsp+B0h] [rbp+8h]
  signed __int64 v142; // [rsp+B0h] [rbp+8h]

  v5 = 0;
  v8 = a2;
  v10 = 0LL;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0 && a2 )
    {
      v128 = *(signed __int32 **)(a2 - 16);
      v8 = a2 - (_QWORD)v128;
    }
    else
    {
      v128 = 0LL;
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
    if ( !a5 )
    {
      if ( a4 )
        *a4 = RtlpHpSizeHeapInternal(a1, v8, v16, 0LL);
LABEL_43:
      if ( (v16 & 0x1000000) == 0 )
      {
        if ( *(_DWORD *)(a1 + 24) )
        {
          if ( (v17 || (v17 = RtlpHpExtrasGet(a1, v8, v16)) != 0) && v17 != -1LL )
          {
            v69 = *(_BYTE *)(v17 + 2);
            if ( (v69 & 0xF) != 0 && (int)RtlpCallInterceptRoutine(v69 & 0xF, a1, v8, 3, v17 + 16) < 0 )
              goto LABEL_154;
          }
        }
      }
      if ( (*(_DWORD *)(a1 + 20) & 0x10000000) != 0 && RtlpHpSizeHeap(a1, v8, v16) == -1 )
      {
        RtlpLogHeapFailure(9, a1, v8, 0, 0LL, 0LL);
LABEL_154:
        v60 = 0;
        goto LABEL_155;
      }
      if ( (_WORD)v8 )
      {
        v48 = 0;
      }
      else
      {
        v65 = RtlCSparseBitmapBitmaskRead(&::BaseAddress, 2 * ((v8 - qword_180166A68) >> 20));
        if ( !v65 || (v48 = v65 - 1, v48 == 2) )
        {
          v139 = RtlpHpLargeFree(a1, v8, v16) != 0;
          if ( RtlGetCurrentServiceSessionId() )
            v66 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v66 = 2147353472LL;
          v60 = v139;
          if ( *(_BYTE *)v66 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( !v139 )
              goto LABEL_155;
            RtlpLogHeapFreeEvent(a1, v8, 3LL);
          }
          goto LABEL_63;
        }
      }
      v49 = 192LL * v48;
      v50 = v49 + a1 + 256;
      if ( (RtlpHpAppCompatFlags & 1) != 0 )
      {
        DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(v49 + a1 + 256, v8);
      }
      else
      {
        v51 = v8 & *(_QWORD *)v50;
        if ( (RtlpHpHeapGlobals ^ v50 ^ v51 ^ *(_QWORD *)(v51 + 0x10)) == 0xA2E64EADA2E64EADuLL )
          DescriptorValidateSafe = v51 + 32 * ((unsigned __int64)(unsigned int)(v8 - v51) >> *(_BYTE *)(v50 + 8));
        else
          DescriptorValidateSafe = 0LL;
      }
      if ( DescriptorValidateSafe )
      {
        v53 = *(_BYTE *)(DescriptorValidateSafe + 24);
        if ( (v53 & 1) != 0 )
        {
          if ( (v53 & 2) != 0 )
          {
            v55 = v53 & 0xC;
            if ( v55 >= 8u || (((1 << *(_BYTE *)(v50 + 8)) - 1) & v8) == 0 )
            {
LABEL_56:
              v56 = (DescriptorValidateSafe & *(_QWORD *)v50)
                  + ((DescriptorValidateSafe - (DescriptorValidateSafe & *(_QWORD *)v50)) >> 5 << *(_BYTE *)(v50 + 8));
              if ( v8 <= v56 )
              {
                RtlpHpSegPageRangeShrink(v50, DescriptorValidateSafe, 0, v16);
                v138 = 1;
                if ( RtlGetCurrentServiceSessionId() )
                  v67 = (__int64)NtCurrentPeb()->SharedData + 550;
                else
                  v67 = 2147353472LL;
                if ( !*(_BYTE *)v67 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
                  goto LABEL_62;
                v71 = 3LL;
              }
              else
              {
                if ( v55 == 8 )
                {
                  v57 = RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(v50 + 24), v56, v8, v16);
                  v138 = v57;
                }
                else
                {
                  v138 = RtlpHpVsContextFree(*(PRTL_SRWLOCK *)(v50 + 32), v56, v8, v16, (unsigned int *)&v131);
                  v57 = v138;
                  if ( v138 )
                  {
                    v62 = *(_QWORD *)(v50 + 24);
                    if ( (unsigned int)v131 <= (unsigned int)*(unsigned __int16 *)(v62 + 60) - 16 )
                    {
                      v63 = RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v131 + 15) >> 4];
                      if ( (*(_QWORD *)(v62 + 8 * v63 + 128) & 1) != 0 )
                        RtlpLfhBucketUsageUpdate(v62, v63, 0LL);
                      v57 = v138;
                    }
                  }
                }
                SharedData = NtCurrentPeb()->SharedData;
                if ( SharedData && *SharedData )
                  v59 = (__int64)NtCurrentPeb()->SharedData + 550;
                else
                  v59 = 2147353472LL;
                if ( !*(_BYTE *)v59 || (NtCurrentPeb()->TracingFlags & 1) == 0 || !v57 )
                  goto LABEL_62;
                LOBYTE(v5) = (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) != 8;
                v71 = (unsigned int)(v5 + 2);
              }
              RtlpLogHeapFreeEvent(*(_QWORD *)(v50 + 56), v8, v71);
LABEL_62:
              v60 = v138;
              goto LABEL_63;
            }
          }
          else
          {
            DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
            v54 = *(_BYTE *)(DescriptorValidateSafe + 24);
            if ( (v54 & 3) == 3 )
            {
              v55 = v54 & 0xC;
              if ( v55 >= 8u )
                goto LABEL_56;
            }
          }
        }
      }
      RtlpLogHeapFailure(9, *(_QWORD *)(v50 + 56), v8, 0, 0LL, 0LL);
      v60 = 0;
LABEL_63:
      if ( v60 )
      {
        if ( a4 )
          *a4 -= (unsigned __int64)v128;
        if ( (dword_1801663A8 & 1) != 0 && (dword_1801663A8 & 2) != 0 )
        {
          if ( NtCurrentPeb()->ProcessHeap )
          {
            v137 = RtlpHpEnvHandle;
            if ( a1 != *(_QWORD *)RtlpHpMetadataHeapCtxGet(&v137) )
              goto LABEL_280;
          }
        }
        return v60;
      }
LABEL_155:
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v70 = NtCurrentTeb();
      v70->LastErrorValue = RtlNtStatusToDosError(-1073741811);
      return v60;
    }
    v17 = -1LL;
    if ( (_WORD)v8 )
    {
      v19 = 0;
    }
    else
    {
      v64 = RtlCSparseBitmapBitmaskRead(&::BaseAddress, 2 * ((v8 - qword_180166A68) >> 20));
      if ( !v64 || (v19 = v64 - 1, v19 == 2) )
      {
        v41 = RtlpHpLargeAllocSize(a1, v8, v16, &v129);
        goto LABEL_34;
      }
      v18 = 1;
    }
    v20 = 192LL * v19;
    v21 = v20 + a1 + 256;
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      v23 = RtlpHpSegGetDescriptorValidateSafe(v20 + a1 + 256, v8);
      v18 = 1;
    }
    else
    {
      v22 = v8 & *(_QWORD *)v21;
      if ( (RtlpHpHeapGlobals ^ v21 ^ v22 ^ *(_QWORD *)(v22 + 0x10)) == 0xA2E64EADA2E64EADuLL )
        v23 = v22 + 32 * ((unsigned __int64)(unsigned int)(v8 - v22) >> *(_BYTE *)(v21 + 8));
      else
        v23 = 0LL;
    }
    if ( !v23 )
      goto LABEL_144;
    v24 = *(_BYTE *)(v23 + 24);
    if ( (v24 & 1) == 0 )
      goto LABEL_144;
    if ( (v24 & 2) != 0 )
    {
      v26 = v24 & 0xC;
      if ( v26 < 8u && (((1 << *(_BYTE *)(v21 + 8)) - 1) & v8) != 0 )
        goto LABEL_144;
    }
    else
    {
      v23 += -32LL * *(unsigned __int8 *)(v23 + 31);
      v25 = *(_BYTE *)(v23 + 24);
      if ( (v25 & 3) != 3 )
        goto LABEL_144;
      v26 = v25 & 0xC;
      if ( v26 < 8u )
        goto LABEL_144;
    }
    v27 = *(_BYTE *)(v21 + 8);
    v28 = (v23 & *(_QWORD *)v21) + ((v23 - (v23 & *(_QWORD *)v21)) >> 5 << v27);
    if ( v8 <= v28 )
    {
      if ( (*(_WORD *)(v23 + 8) & 1) != 0 )
      {
        _InterlockedOr(v127, 0);
        v27 = *(_BYTE *)(v21 + 8);
      }
      else
      {
        v18 = 0;
      }
      v41 = ((unsigned __int64)*(unsigned __int8 *)(v23 + 31) << v27) - *(unsigned int *)(v23 + 4);
      v129 = v18;
    }
    else if ( v26 == 8 )
    {
      v29 = *(_QWORD *)(v21 + 24);
      v30 = *(_DWORD *)(v28 + 40);
      v31 = (unsigned int)v28 >> 12;
      v32 = qword_180163548 ^ ((unsigned int)v28 >> 12) ^ v30;
      v33 = (unsigned __int16)v32;
      v34 = *(_QWORD *)(v29
                      + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v32 + 15) >> 4]
                      + 128);
      v35 = v8 - HIWORD(v32) - v28;
      v36 = *(unsigned int *)(v34 + 72);
      v37 = *(_BYTE *)(v34 + 76);
      if ( (_DWORD)v36 )
      {
        v38 = (v36 * (unsigned __int64)v35) >> v37;
        v39 = v35 - v38 * v33;
      }
      else
      {
        LODWORD(v38) = v35 >> v37;
        v39 = v35 & ((1 << v37) - 1);
      }
      if ( v39 )
      {
        v41 = -1LL;
      }
      else
      {
        v40 = *(_QWORD *)(v28 + 8 * ((unsigned __int64)(unsigned int)(2 * v38) >> 6) + 48) >> ((2 * v38) & 0x3F);
        if ( (v40 & 1) != 0 )
        {
          v41 = (unsigned __int16)qword_180163548 ^ (unsigned int)(unsigned __int16)(v30 ^ v31);
          if ( (v40 & 2) != 0 )
          {
            v42 = (unsigned __int16)qword_180163548 ^ (unsigned __int64)(unsigned __int16)(v30 ^ v31);
            v43 = *(_WORD *)(v42 + v8 - 2);
            v44 = v43 & 0x4000;
            if ( (v43 & 0x4000) != 0 )
            {
              _InterlockedOr(v127, 0);
              v43 = *(_WORD *)(v42 + v8 - 2);
            }
            v45 = v44 != 0;
            if ( v43 < 0 )
              v41 = (unsigned int)(v41 - 1);
            else
              v41 = (unsigned int)v41 - (v43 & 0x3FFF);
          }
          else
          {
            v45 = 0;
          }
          v129 = v45;
        }
        else
        {
          v41 = -1LL;
        }
      }
    }
    else
    {
      v41 = RtlpHpVsChunkSize(*(_QWORD *)(v21 + 32), v8, v23, &v129);
    }
    v15 = a5;
LABEL_34:
    if ( v41 != -1LL )
    {
      if ( a4 )
        *a4 = v41;
      if ( v129 )
      {
        v46 = v41 + v8;
        if ( (v16 & 0x10000000) != 0 )
          v46 += 16LL;
        v17 = (v46 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v17 )
        {
          v47 = *(_WORD *)v17;
LABEL_42:
          *v15 = v47;
          goto LABEL_43;
        }
      }
      else
      {
        v17 = 0LL;
      }
LABEL_84:
      v47 = 0;
      goto LABEL_42;
    }
LABEL_144:
    v15 = a5;
    goto LABEL_84;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
  {
LABEL_123:
    v68 = RtlpFreeHeap(a1);
    v60 = v68;
    if ( v68 )
      goto LABEL_124;
    return v60;
  }
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
  if ( !v10 )
    goto LABEL_176;
  if ( *(_BYTE *)(v8 - 1) == 5 )
  {
    if ( *(char *)(v10 + 15) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v73 = *(_DWORD *)(v10 + 8) ^ *(_DWORD *)(a1 + 136);
        if ( HIBYTE(v73) != ((unsigned __int8)v73 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v10 + 8) ^ *(_WORD *)(a1 + 136)) >> 8) ^ BYTE2(v73))) )
          goto LABEL_201;
      }
    }
    else if ( !(unsigned __int8)RtlpValidateLFHBlock(a1, v10) )
    {
LABEL_201:
      RtlpLogHeapFailure(3, a1, v10, v8, 0LL, 0LL);
      goto LABEL_176;
    }
    if ( *(char *)(v10 + 15) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v76 = *(_DWORD *)(v10 + 8);
        v133 = v76;
        if ( (v76 & *(_DWORD *)(a1 + 124)) != 0 )
          v133 = *(_DWORD *)(a1 + 136) ^ v76;
        v75 = v133;
      }
      else
      {
        v75 = *(_WORD *)(v10 + 8);
      }
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4)) )
        v74 = 0LL;
      else
        v74 = *(_QWORD *)(v10
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12));
      v75 = *(_WORD *)(v74 + 36);
    }
    if ( *(_BYTE *)(v10 + 15) == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v77 = *(_DWORD *)(v10 + 8);
        v133 = v77;
        if ( (v77 & *(_DWORD *)(a1 + 124)) != 0 )
          v133 = *(_DWORD *)(a1 + 136) ^ v77;
        v78 = v133;
      }
      else
      {
        v78 = *(_WORD *)(v10 + 8);
      }
      v79 = v75 + *(_QWORD *)(v10 - 16) - v78;
    }
    else
    {
      v79 = 16LL * v75;
    }
    if ( v79 + v10 < v8 )
      goto LABEL_201;
    if ( (a3 & 0x3C000102) != 0 )
      goto LABEL_122;
    v80 = *(_BYTE *)(v8 - 1) == 5 ? v8 - 16LL * *(unsigned __int8 *)(v8 - 16 + 14) : 0LL;
    if ( (int)RtlpCallInterceptRoutine(*(_DWORD *)(v8 - 8), a1, v8, 3, v80) >= 0 )
      goto LABEL_122;
LABEL_176:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v72 = NtCurrentTeb();
    v72->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return 0;
  }
LABEL_122:
  if ( *(char *)(v10 + 15) >= 0 )
    goto LABEL_123;
  if ( (unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4))
    || (v81 = *(signed __int32 **)(v10
                                 - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12)),
        (v128 = v81) == 0LL) )
  {
    LODWORD(v85) = a1;
    goto LABEL_277;
  }
  _m_prefetchw(v81);
  v82 = (unsigned __int16)(*(_DWORD *)(v10 + 12) >> 8);
  v83 = *(_QWORD *)v81;
  v132 = *((_QWORD *)v81 + 1);
  v130 = v82;
  v84 = *(_QWORD *)(*(_QWORD *)v83 + 24LL);
  if ( v132
     + v82 * (((unsigned int)v132 ^ (unsigned int)v84 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v132 + 24)) >> 16)
     + (unsigned __int16)(v132 ^ v84 ^ RtlpLFHKey ^ *(_WORD *)(v132 + 24)) != v10 )
  {
    v85 = *(_QWORD *)(v84 + 24);
LABEL_277:
    RtlpLogHeapFailure(3, v85, v10, 0, 0LL, 0LL);
    goto LABEL_278;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v86 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v86 = 2147353472LL;
  if ( *(_BYTE *)v86 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapFreeEvent(*(_QWORD *)(v84 + 24), v10 + 16, 2LL);
  v87 = 0LL;
  v88 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
    v87 = 100LL;
  while ( 1 )
  {
    v89 = v81[8];
    v90 = v128;
    if ( (v89 & 0x80000000) == 0 && v89 == _InterlockedCompareExchange(v128 + 8, v89 | 0x80000000, v89) )
      break;
    if ( ++v88 > (unsigned int)v87 )
    {
      v89 = -1;
      break;
    }
    v81 = v128;
  }
  *(_BYTE *)(v10 + 15) = 0x80;
  v91 = v90 + 4;
  if ( v89 == -1 )
  {
    RtlpInterlockedPushEntrySList(v91, v10 + 16);
    goto LABEL_278;
  }
  _bittestandreset64(*(signed __int64 **)(v132 + 40), v130);
  if ( *v91 )
  {
    v92 = (_QWORD *)RtlpInterlockedFlushSList(v90 + 4, v90, v91, v87);
    v93 = 0;
    while ( v92 )
    {
      v94 = *((_DWORD *)v92 - 1);
      ++v93;
      v92 = (_QWORD *)*v92;
      v95 = *(signed __int64 **)(v132 + 40);
      v94 >>= 8;
      v130 = (unsigned __int16)v94;
      _bittestandreset64(v95, (unsigned __int16)v94);
    }
  }
  else
  {
    v93 = 0;
  }
  v96 = (unsigned __int16)v89;
  v97 = v128;
  v98 = (v130 << 16) | (v93 + 1 + v96);
  v99 = *(_DWORD **)v128;
  if ( (_WORD)v98 != *((_WORD *)v128 + 20)
    || (v100 = (unsigned int)v99[42], v101 = *(unsigned int *)(*(_QWORD *)v99 + 32LL), v99[41] == 1)
    && (unsigned int)v101 >= (unsigned int)v100
    && (v101 = (unsigned int)(v101 - v100), (unsigned int)v101 < *(_DWORD *)(*(_QWORD *)v99 + 36LL)) )
  {
    v128[8] = v98;
    if ( (v97[11] & 2) == 0 && (unsigned __int8)RtlpIsSubSegmentReuseable(v99, v97) )
    {
      do
      {
        v120 = v97[11];
        if ( !v120 || (v120 & 2) != 0 )
          goto LABEL_278;
      }
      while ( v120 != _InterlockedCompareExchange(v97 + 11, v120 | 2, v120) );
      v121 = *(unsigned __int16 **)v97;
      for ( i = 0; i < 0x10; ++i )
      {
        v123 = ((_BYTE)i + (unsigned __int8)v121[87]) & 0xF;
        v124 = *(volatile signed __int32 **)&v121[4 * v123 + 8];
        v125 = &v121[4 * v123];
        if ( v124 )
        {
          if ( (v124[11] & 1) == 0
            && v124 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                    (volatile signed __int64 *)v125 + 2,
                                                    (signed __int64)v97,
                                                    (signed __int64)v124) )
          {
            _m_prefetchw((const void *)(v124 + 11));
            if ( _InterlockedAnd(v124 + 11, 0xFFFFFFFD) == 2 )
            {
              v126 = **(_QWORD **)v124;
              *(_QWORD *)v124 = 0LL;
              RtlpInterlockedPushEntrySList(v126, v124 + 12);
            }
            goto LABEL_278;
          }
        }
        else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v125 + 2, (signed __int64)v97, 0LL) )
        {
          goto LABEL_278;
        }
      }
      RtlpInterlockedPushEntrySList(
        *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v97 + 24LL) + 8LL * *(unsigned __int16 *)(*(_QWORD *)v97 + 172LL) + 1192)
      + 144LL,
        v97 + 12);
    }
LABEL_278:
    v60 = 1;
    goto LABEL_124;
  }
  v140 = *(_DWORD **)v128;
  v102 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v128 + 8LL), 0LL);
  if ( !v102 )
    goto LABEL_242;
  _m_prefetchw(v102 + 11);
  if ( _InterlockedAnd(v102 + 11, 0xFFFFFFF9) == 6 )
  {
    v103 = **(_QWORD **)v102;
    *(_QWORD *)v102 = 0LL;
LABEL_240:
    v104 = v102 + 12;
LABEL_241:
    RtlpInterlockedPushEntrySList(v103, v104);
    goto LABEL_242;
  }
  if ( !(unsigned __int8)RtlpIsSubSegmentReuseable(v140, v102) )
    goto LABEL_242;
  do
  {
    v111 = v102[11];
    if ( !v111 || (v111 & 2) != 0 )
      goto LABEL_242;
  }
  while ( v111 != _InterlockedCompareExchange(v102 + 11, v111 | 2, v111) );
  v100 = *(_QWORD *)v102;
  v112 = 0;
  while ( 1 )
  {
    v113 = ((_BYTE)v112 + (unsigned __int8)*(_WORD *)(v100 + 174)) & 0xF;
    v101 = *(_QWORD *)(v100 + 8 * v113 + 16);
    v114 = (_QWORD *)(v100 + 8 * v113);
    if ( !v101 )
    {
      if ( !_InterlockedCompareExchange64(v114 + 2, (signed __int64)v102, 0LL) )
        goto LABEL_242;
      goto LABEL_251;
    }
    if ( (*(_DWORD *)(v101 + 44) & 1) == 0
      && v101 == _InterlockedCompareExchange64(v114 + 2, (signed __int64)v102, v101) )
    {
      break;
    }
LABEL_251:
    if ( (unsigned int)++v112 >= 0x10 )
    {
      v103 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v102 + 24LL)
                       + 8LL * *(unsigned __int16 *)(*(_QWORD *)v102 + 172LL)
                       + 1192)
           + 144LL;
      goto LABEL_240;
    }
  }
  _m_prefetchw((const void *)(v101 + 44));
  if ( _InterlockedAnd((volatile signed __int32 *)(v101 + 44), 0xFFFFFFFD) == 2 )
  {
    v103 = **(_QWORD **)v101;
    *(_QWORD *)v101 = 0LL;
    v104 = (_DWORD *)(v101 + 48);
    goto LABEL_241;
  }
LABEL_242:
  v105 = (*((_BYTE *)v97 + 38) & 3) == 0;
  v106 = *(signed __int32 **)(*(_QWORD *)v140 + 24LL);
  v141 = *(unsigned __int16 **)v97;
  v128 = v106;
  if ( v105 )
  {
    v60 = 1;
  }
  else
  {
    BaseAddress = (PVOID)((*((_QWORD *)v97 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL);
    ReservedBlockSize = RtlpGetReservedBlockSize(v97, v101, v106, v100);
    v60 = 1;
    v109 = *(_QWORD *)(v108 + 24);
    RegionSize = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v97 + 20);
    HeapProtection = RtlpGetHeapProtection(v109, 1LL);
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, HeapProtection, &OldProtect);
    v106 = v128;
  }
  *(_DWORD *)(*((_QWORD *)v97 + 1) + 20LL) = 0;
  RtlpFreeUserBlock(v106, *((_QWORD *)v97 + 1));
  v115 = v141;
  v116 = -*((unsigned __int16 *)v97 + 20);
  do
  {
    v117 = *((_QWORD *)v115 + 20);
    LODWORD(v142) = v117 + v116;
    HIDWORD(v142) = HIDWORD(v117) - 1;
  }
  while ( v117 != _InterlockedCompareExchange64((volatile signed __int64 *)v115 + 20, v142, v117) );
  v118 = v128;
  *((_QWORD *)v97 + 1) = 0LL;
  _InterlockedIncrement(v118 + 15);
  v97[8] = 0;
  _m_prefetchw(v97 + 11);
  if ( _InterlockedAnd(v97 + 11, 0xFFFFFFFE) == 1 )
  {
    v119 = **(_QWORD **)v97;
    *(_QWORD *)v97 = 0LL;
    RtlpInterlockedPushEntrySList(v119, v97 + 12);
  }
LABEL_124:
  if ( a5 )
    *a5 = 0;
  if ( a4 )
    *a4 = 0LL;
  if ( RtlpHpStackLoggingEnabled() && (a3 & 0x10000000) == 0 )
LABEL_280:
    RtlpHpStackTraceRemoveStack(a1, v8);
  return v60;
}
