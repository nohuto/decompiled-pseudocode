/*
 * XREFs of RtlpAllocateHeapInternal @ 0x18000F320
 * Callers:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x180010D10 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpTagAllocateHeap @ 0x180064780 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     RtlpLowFragHeapAllocFromContext @ 0x18000FEB0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpHpLfhSlotAllocate @ 0x1800110C0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpHpSegAlloc @ 0x18001DB14 (RtlpHpSegAlloc.c)
 *     RtlpHpVsContextAllocate @ 0x18001E414 (RtlpHpVsContextAllocate.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     RtlpHpVsChunkSetExtraPresent @ 0x18005B460 (RtlpHpVsChunkSetExtraPresent.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18005B4B8 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLfhBucketActivate @ 0x180061E48 (RtlpHpLfhBucketActivate.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x180063D68 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpLargeAlloc @ 0x18006657C (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x1800669A4 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpLogHeapFailure @ 0x18009F7AC (RtlpLogHeapFailure.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpCallInterceptRoutine @ 0x1800F2E74 (RtlpCallInterceptRoutine.c)
 *     RtlpAllocateHeapRaiseException @ 0x1800F5B88 (RtlpAllocateHeapRaiseException.c)
 *     RtlpSetupExtendedBlock @ 0x1800F5EB4 (RtlpSetupExtendedBlock.c)
 *     RtlpHpStackTraceAddStack @ 0x18010449C (RtlpHpStackTraceAddStack.c)
 *     RtlpLogHeapAllocateEvent @ 0x180105ABC (RtlpLogHeapAllocateEvent.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010D74C (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpAllocateHeapInternal(__int64 a1, unsigned __int64 a2, int a3, __int16 a4)
{
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  int v15; // eax
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r14
  __int64 Heap; // rdi
  unsigned int v19; // ebx
  unsigned __int64 v20; // rax
  __int64 v21; // r9
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rax
  int v24; // r10d
  int v25; // edx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned int v28; // ebx
  unsigned __int64 v29; // rax
  int v30; // eax
  unsigned __int8 *v31; // rcx
  __int64 v32; // r10
  __int64 v33; // r9
  volatile signed __int64 *v34; // rbx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // rcx
  volatile signed __int64 v40; // rax
  __int64 v41; // r10
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // r8
  unsigned __int8 v44; // al
  void *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  char v48; // dh
  int v49; // r8d
  _QWORD *v50; // rax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rbx
  _QWORD *v53; // rbx
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // r14
  __int64 v58; // r8
  __int64 DescriptorValidateSafe; // rdx
  char v60; // al
  char v61; // cl
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned __int64 v64; // rcx
  int v65; // ecx
  _DWORD *v66; // rcx
  __int64 v67; // rcx
  struct _TEB *v68; // rbx
  ULONG v69; // eax
  bool v70; // sf
  int v71; // edx
  unsigned __int64 v72; // r12
  unsigned int v73; // r14d
  int v74; // edx
  __int64 v75; // rcx
  unsigned __int64 v76; // rax
  __int64 v77; // r9
  int v78; // ecx
  unsigned __int64 v79; // rcx
  __int64 v80; // r12
  unsigned __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rcx
  int v84; // r9d
  __int64 *v85; // rdx
  __int64 *v86; // rax
  unsigned __int64 v87; // rcx
  __int64 v88; // rbx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // rax
  struct _TEB *v92; // rbx
  unsigned __int64 v93; // rcx
  _DWORD *SharedData; // rcx
  __int64 v95; // rcx
  _BYTE *v96; // rdx
  char v97; // r8
  __int64 v98; // rcx
  __int64 v100; // [rsp+20h] [rbp-69h]
  int v101; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v102; // [rsp+38h] [rbp-51h]
  int v103; // [rsp+40h] [rbp-49h]
  unsigned int v104; // [rsp+44h] [rbp-45h]
  int v105; // [rsp+48h] [rbp-41h]
  int v106; // [rsp+4Ch] [rbp-3Dh]
  unsigned __int64 v107; // [rsp+50h] [rbp-39h] BYREF
  int v108; // [rsp+58h] [rbp-31h]
  int v109; // [rsp+5Ch] [rbp-2Dh]
  unsigned __int64 v110; // [rsp+60h] [rbp-29h]
  unsigned __int64 v111; // [rsp+68h] [rbp-21h] BYREF
  __int64 v112; // [rsp+70h] [rbp-19h]
  __int64 v113; // [rsp+78h] [rbp-11h]
  unsigned __int64 v114; // [rsp+80h] [rbp-9h]
  __int128 v115; // [rsp+90h] [rbp+7h] BYREF
  __int128 v116[4]; // [rsp+A0h] [rbp+17h] BYREF
  int v117; // [rsp+F0h] [rbp+67h]

  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    v71 = *(_DWORD *)(a1 + 116);
    v72 = 0LL;
    v73 = v71 | a3;
    v101 = 0;
    v107 = 0LL;
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    {
      v101 = 5;
LABEL_174:
      Heap = 0LL;
LABEL_175:
      NtCurrentTeb()->LastStatusValue = -1073741801;
      v92 = NtCurrentTeb();
      v92->LastErrorValue = RtlNtStatusToDosError(-1073741801);
      if ( (v73 & 4) != 0 )
      {
        v93 = a2;
        if ( v72 )
          v93 = v72;
        RtlpAllocateHeapRaiseException(v93);
      }
LABEL_179:
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v95 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v95 = 2147353472LL;
      if ( *(_BYTE *)v95
        && (NtCurrentPeb()->TracingFlags & 1) != 0
        && (*(_DWORD *)(a1 + 116) & 0x1000000) == 0
        && ((v73 & 0x61000000) == 0 || (v73 & 0x10000000) != 0)
        && v101 != 5 )
      {
        if ( !Heap )
          goto LABEL_196;
        v96 = (_BYTE *)(Heap - 16);
        _m_prefetchw((const void *)(Heap - 16));
        v97 = *(_BYTE *)(Heap - 16 + 15);
        v98 = Heap - 16;
        if ( v97 == 5 )
          v98 -= 16LL * (unsigned __int8)v96[14];
        if ( *(char *)(v98 + 15) < 0 )
          goto LABEL_196;
        _m_prefetchw(v96);
        if ( v97 == 5 )
          v96 -= 16 * (unsigned __int8)v96[14];
        if ( ((v96[10] ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
LABEL_196:
          RtlpLogHeapAllocateEvent(a1, Heap, a2);
      }
      if ( (dword_180166388 & 1) != 0 && (dword_180166388 & 2) != 0 )
      {
        if ( NtCurrentPeb()->ProcessHeap )
        {
          v116[0] = RtlpHpEnvHandle;
          if ( a1 != *(_QWORD *)RtlpHpMetadataHeapCtxGet(v116) && Heap && (v73 & 0x10000000) == 0 )
            goto LABEL_203;
        }
      }
      return Heap;
    }
    v74 = v71 & 0x1000000;
    if ( !v74 && !dword_18015F3E8 )
    {
      v75 = *(_QWORD *)(a1 + 392);
      v76 = v75;
      if ( (v75 || (v76 = qword_1801634C8) != 0) && a2 > v76 )
      {
        v77 = *(_QWORD *)(a1 + 400);
        if ( v77 )
          RtlpLogHeapFailure(20, a1, 0, v77, a2, v75);
        v101 = 5;
        goto LABEL_174;
      }
    }
    v78 = *(_DWORD *)(a1 + 144);
    v117 = v78;
    if ( v78 )
    {
      if ( (v73 & 0x3C000102) != 0 || v74 )
      {
        v117 = 0;
      }
      else
      {
        if ( (int)RtlpCallInterceptRoutine(v78, a1, 0, 1, (__int64)&v107) < 0 )
          goto LABEL_174;
        v79 = (v107 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        a2 += v79 + 16;
        v107 = v79 + 16;
      }
    }
    v80 = 1LL;
    if ( a2 )
      v80 = a2;
    v72 = (v80 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
    v81 = v72 >> 4;
    if ( (v73 & 0x7D810F61) != 0 )
      goto LABEL_169;
    if ( a2 <= RtlpLargestLfhBlock
      && ((unsigned __int8)(1 << ((v72 >> 4) & 7)) & *(_BYTE *)((v72 >> 7) + a1 + 434)) != 0 )
    {
      v82 = *(_QWORD *)(a1 + 424);
      v83 = *(_QWORD *)(a1 + 408);
      v101 = 2;
      Heap = RtlpLowFragHeapAllocFromContext(v83, *(unsigned __int16 *)(v82 + 2 * v81), a2, v73);
      if ( Heap )
      {
LABEL_171:
        if ( !v117 )
          goto LABEL_179;
        a2 -= v107;
        v91 = RtlpSetupExtendedBlock(a1, v73, Heap, v84, v107, v117);
        v100 = Heap;
        Heap = v91;
        if ( (int)RtlpCallInterceptRoutine(v117, a1, v91, 2, v100) >= 0 )
          goto LABEL_179;
        RtlFreeHeap(a1, 0LL, Heap);
        goto LABEL_174;
      }
    }
    v85 = *(__int64 **)(a1 + 312);
    if ( v81 < *((unsigned int *)v85 + 2) )
    {
LABEL_162:
      v87 = v72 >> 4;
    }
    else
    {
      while ( 1 )
      {
        v86 = (__int64 *)*v85;
        if ( !*v85 )
          break;
        v85 = (__int64 *)*v85;
        if ( v81 < *((unsigned int *)v86 + 2) )
          goto LABEL_162;
      }
      v87 = (unsigned int)(*((_DWORD *)v85 + 2) - 1);
    }
    if ( v87 >= *((unsigned int *)v85 + 2) || v81 != v87 )
    {
LABEL_169:
      v90 = 0LL;
    }
    else
    {
      v88 = v81 - *((unsigned int *)v85 + 6);
      v89 = 2 * v88;
      if ( !*((_DWORD *)v85 + 3) )
        v89 = v88;
      v90 = v85[6] + 8 * v89;
    }
    Heap = RtlpAllocateHeap((void *)a1, v90, (__int64)&v101);
    if ( !Heap )
      goto LABEL_175;
    goto LABEL_171;
  }
  if ( a3 )
  {
    if ( a3 == 8 )
    {
      v7 = 2;
    }
    else
    {
      v8 = a3 & 1 | 2;
      if ( (a3 & 8) == 0 )
        v8 = a3 & 1;
      v9 = v8 | 0x80000000;
      if ( (a3 & 4) == 0 )
        v9 = v8;
      v10 = v9 | 0x100;
      if ( (a3 & 0x100) == 0 )
        v10 = v9;
      v11 = a3 & 0xE00 | v10;
      if ( (a3 & 0xE00) == 0 )
        v11 = v10;
      v12 = v11 | 0x2000000;
      if ( (a3 & 0x10) == 0 )
        v12 = v11;
      v7 = v12 | 0x1000000;
      if ( (a3 & 2) == 0 )
        v7 = v12;
    }
  }
  else
  {
    v7 = 0;
  }
  v13 = *(_DWORD *)(a1 + 220);
  v14 = 0;
  if ( v13 )
    LOBYTE(v14) = v13 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v15 = v7 | 1;
  if ( !v14 )
    v15 = v7;
  v109 = v15;
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    v16 = 64LL;
    if ( a2 <= 0xFEFF8 )
      v16 = 16LL;
  }
  else
  {
    v16 = 0LL;
  }
  v17 = a2 + v16;
  v102 = v16;
  if ( a2 + v16 < a2 )
  {
    Heap = 0LL;
LABEL_125:
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v68 = NtCurrentTeb();
    v69 = RtlNtStatusToDosError(-1073741801);
    v70 = v109 < 0;
    v68->LastErrorValue = v69;
    if ( v70 || *(int *)(a1 + 20) < 0 )
      RtlpAllocateHeapRaiseException(a2);
    return Heap;
  }
  v19 = (v15 | *(_DWORD *)(a1 + 20)) & 0x93000F0B;
  if ( dword_18015F3E8 || (v20 = *(_QWORD *)(a1 + 48)) == 0 && (v20 = qword_1801634C8) == 0 || v17 <= v20 )
  {
    v23 = 0LL;
    v111 = 0LL;
    v105 = 0;
    if ( (v19 & 0x1000000) == 0 )
    {
      v24 = *(_DWORD *)(a1 + 24);
      v105 = v24;
      if ( v24 )
      {
        v19 |= 8u;
        if ( (int)RtlpCallInterceptRoutine(v24, a1, 0, 1, (__int64)&v111) < 0 )
        {
          Heap = 0LL;
          v22 = 0LL;
LABEL_115:
          v16 = v102;
          goto LABEL_116;
        }
        v23 = v111;
      }
    }
    v25 = v19 | 8;
    if ( !a4 )
      v25 = v19;
    v26 = v17 + v23;
    v104 = v25;
    v108 = v25 & 0x10000000;
    v27 = v26 + 16;
    if ( (v25 & 0x10000000) == 0 )
      v27 = v26;
    v106 = v25 & 0x20000F08;
    if ( (v25 & 0x20000F08) != 0 )
      v27 = ((v27 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    v22 = 1LL;
    if ( v27 )
      v22 = v27;
    if ( v22 < v17 || v17 > 0x7FFFFFFFFFFFFFFFLL )
    {
      Heap = 0LL;
      goto LABEL_115;
    }
    v28 = v25 & 0x13000003;
    v29 = (unsigned int)*(unsigned __int16 *)(a1 + 892) - 16;
    v103 = v25 & 0x13000003;
    if ( v22 > v29 )
      goto LABEL_73;
    v30 = v22 + 2;
    if ( (_DWORD)v17 == (_DWORD)v22 )
      v30 = v22;
    v31 = &RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v30 + 15) >> 4];
    v32 = *v31;
    v112 = v32;
    if ( (*(_QWORD *)(a1 + 832 + 8 * v32 + 128) & 1) == 0 )
      goto LABEL_66;
    v33 = *v31;
    v34 = (volatile signed __int64 *)(a1 + 960 + 8 * v33);
    if ( (*v34 & 1) != 0 )
    {
      v35 = *v34;
      v110 = v35;
      v36 = v35;
      if ( (v35 & 1) != 0 )
      {
        v37 = v35 >> 16;
        LOWORD(v38) = WORD1(v35);
        do
        {
          if ( (v37 & 0x1F) > 0x10 )
            break;
          if ( (unsigned __int16)v38 > 0xFF00u )
            break;
          WORD1(v110) = WORD1(v35) + 33;
          v36 = v110;
          if ( v35 == _InterlockedCompareExchange64(v34, v110, v35) )
            break;
          v110 = *v34;
          v35 = v110;
          v38 = v110 >> 16;
          v36 = v110;
          LOBYTE(v37) = BYTE2(v110);
        }
        while ( (v110 & 1) != 0 );
      }
      v39 = v36 >> 16;
      if ( (v39 & 0x1F) > 0x10 || (unsigned __int16)v39 > 0xFF00u )
      {
        RtlpHpLfhBucketActivate(a1 + 832, (unsigned int)v33);
        v32 = v112;
      }
    }
    v40 = *v34;
    v28 = v103;
    if ( (v40 & 1) != 0 )
    {
      Heap = -1LL;
    }
    else
    {
LABEL_66:
      v41 = *(_QWORD *)(a1 + 832 + 8 * v32 + 128);
      v42 = *(unsigned __int8 *)(a1 + 888) - (unsigned __int64)((*(_BYTE *)(a1 + 888) - 1) & 7);
      v113 = ((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 2LL) << 6;
      v43 = v42 + v113 + 7;
      v114 = v43;
      if ( *(_BYTE *)(v41 + 2) == 1 )
      {
        v44 = 0;
      }
      else
      {
        v44 = *(_BYTE *)(v113 + BYTE1(NtCurrentTeb()->HeapData) + v41);
        v43 = v114;
      }
      v45 = (void *)RtlpHpLfhSlotAllocate((int)a1 + 832, v41, *(_QWORD *)(v43 + 8LL * v44 + v41), v17, v28);
      Heap = (__int64)v45;
      if ( v45 && (v28 & 2) != 0 )
        memset(v45, 0, (unsigned int)v17);
    }
    if ( Heap == -1 )
    {
LABEL_73:
      if ( v22 > 0x20000 )
      {
        if ( v22 > *(unsigned int *)(a1 + 464) )
        {
          v46 = RtlpHpLargeAlloc(a1, v17, v22, v28);
        }
        else
        {
          v47 = 448LL;
          if ( v22 <= *(unsigned int *)(a1 + 272) )
            v47 = 256LL;
          v46 = RtlpHpSegAlloc(a1 + v47, v17, v22, v22, v28);
        }
      }
      else
      {
        v46 = RtlpHpVsContextAllocate(a1 + 640, (unsigned int)v17, (unsigned int)v22, v28);
      }
      Heap = v46;
    }
    if ( !Heap )
      goto LABEL_115;
    v48 = BYTE1(v104);
    if ( (v104 & 0x30000F08) == 0 )
      goto LABEL_115;
    v49 = v108;
    v50 = (_QWORD *)(v17 + Heap);
    v51 = v111;
    if ( v108 )
    {
      *v50 = 0xABABABABABABABABuLL;
      v50[1] = 0xABABABABABABABABuLL;
    }
    v52 = 0LL;
    if ( !v106 )
    {
LABEL_112:
      v65 = v105;
      if ( v105 )
      {
        *(_BYTE *)(v52 + 2) &= 0xF0u;
        *(_BYTE *)(v52 + 2) |= v65 & 0xF;
        if ( (int)RtlpCallInterceptRoutine(v65, a1, Heap, 2, v52 + 16) < 0 )
        {
          RtlFreeHeap(a1, 0LL, Heap);
          Heap = 0LL;
        }
      }
      goto LABEL_115;
    }
    v53 = v50 + 2;
    if ( !v49 )
      v53 = (_QWORD *)(v17 + Heap);
    v52 = ((unsigned __int64)v53 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    *(_QWORD *)v52 = 0LL;
    *(_QWORD *)(v52 + 8) = 0LL;
    *(_BYTE *)(v52 + 2) &= 0xFu;
    *(_BYTE *)(v52 + 3) = v51 >> 4;
    *(_BYTE *)(v52 + 2) |= 16 * (v48 & 0xFE);
    *(_WORD *)v52 = a4;
    v106 = 1;
    if ( (_WORD)Heap )
    {
      v55 = 0;
    }
    else
    {
      v54 = RtlCSparseBitmapBitmaskRead(&unk_180166908, 2 * ((unsigned __int64)(Heap - qword_180166948) >> 20));
      if ( !v54 || (v55 = v54 - 1, v55 == 2) )
      {
        RtlpHpLargeAllocSetExtraPresent(a1, Heap, v104);
        goto LABEL_112;
      }
    }
    v56 = 192LL * v55;
    v57 = v56 + a1 + 256;
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(v56 + a1 + 256, Heap);
    }
    else
    {
      v58 = Heap & *(_QWORD *)v57;
      if ( (RtlpHpHeapGlobals ^ v57 ^ v58 ^ *(_QWORD *)(v58 + 0x10)) == 0xA2E64EADA2E64EADuLL )
        DescriptorValidateSafe = v58 + 32 * ((unsigned __int64)(unsigned int)(Heap - v58) >> *(_BYTE *)(v57 + 8));
      else
        DescriptorValidateSafe = 0LL;
    }
    if ( DescriptorValidateSafe )
    {
      v60 = *(_BYTE *)(DescriptorValidateSafe + 24);
      if ( (v60 & 1) != 0 )
      {
        if ( (v60 & 2) != 0 )
        {
          if ( (v60 & 0xCu) >= 8 || (((1 << *(_BYTE *)(v57 + 8)) - 1) & (unsigned __int64)Heap) == 0 )
            goto LABEL_107;
        }
        else
        {
          DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
          v61 = *(_BYTE *)(DescriptorValidateSafe + 24);
          if ( (v61 & 3) == 3 && (v61 & 0xCu) >= 8 )
            goto LABEL_107;
        }
      }
    }
    DescriptorValidateSafe = 0LL;
LABEL_107:
    v62 = *(unsigned __int8 *)(DescriptorValidateSafe + 24);
    LOBYTE(v62) = v62 & 0xC;
    if ( (unsigned __int8)v62 < 8u )
    {
      *(_WORD *)(DescriptorValidateSafe + 8) |= 1u;
    }
    else
    {
      v63 = ((DescriptorValidateSafe - (DescriptorValidateSafe & *(_QWORD *)v57)) >> 5 << *(_BYTE *)(v57 + 8))
          + (DescriptorValidateSafe & *(_QWORD *)v57);
      if ( (_BYTE)v62 == 8 )
      {
        v64 = (unsigned __int16)qword_1801634A8 ^ *(unsigned __int16 *)(v63 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v63 >> 12);
        *(_WORD *)(v64 + Heap - 2) |= 0x4000u;
      }
      else
      {
        RtlpHpVsChunkSetExtraPresent(*(_QWORD *)(v57 + 32), Heap, v62, v63);
      }
    }
    goto LABEL_112;
  }
  v21 = *(_QWORD *)(a1 + 56);
  if ( v21 )
    RtlpLogHeapFailure(20, a1, 0, v21, a2 + v16, *(_QWORD *)(a1 + 48));
  Heap = 0LL;
  v22 = 0LL;
LABEL_116:
  v66 = NtCurrentPeb()->SharedData;
  if ( v66 && *v66 )
    v67 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v67 = 2147353472LL;
  if ( *(_BYTE *)v67 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapAllocateEvent(a1, Heap, v22);
  if ( !Heap )
    goto LABEL_125;
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    *(_QWORD *)(Heap + v16 - 16) = v16;
    if ( v16 > 0x10 )
      *(_QWORD *)Heap = v16;
    Heap += v16;
  }
  if ( (dword_180166388 & 1) != 0 && (dword_180166388 & 2) != 0 )
  {
    if ( NtCurrentPeb()->ProcessHeap )
    {
      v115 = RtlpHpEnvHandle;
      if ( a1 != *(_QWORD *)RtlpHpMetadataHeapCtxGet(&v115) )
LABEL_203:
        RtlpHpStackTraceAddStack(a1, Heap);
    }
  }
  return Heap;
}
