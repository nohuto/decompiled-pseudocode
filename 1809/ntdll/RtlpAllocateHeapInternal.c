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
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpCallInterceptRoutine @ 0x1800F2E74 (RtlpCallInterceptRoutine.c)
 *     RtlpAllocateHeapRaiseException @ 0x1800F5B88 (RtlpAllocateHeapRaiseException.c)
 *     RtlpSetupExtendedBlock @ 0x1800F5EB4 (RtlpSetupExtendedBlock.c)
 *     RtlpHpStackTraceAddStack @ 0x18010449C (RtlpHpStackTraceAddStack.c)
 *     RtlpLogHeapAllocateEvent @ 0x180105ABC (RtlpLogHeapAllocateEvent.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010D74C (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpAllocateHeapInternal(unsigned __int16 *HeapHandle, unsigned __int64 a2, int a3, __int16 a4)
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
  __int64 v32; // r9
  volatile signed __int64 *v33; // rbx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rcx
  volatile signed __int64 v39; // rax
  unsigned __int64 v40; // rcx
  void *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  char v44; // dh
  int v45; // r8d
  _QWORD *v46; // rax
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rbx
  _QWORD *v49; // rbx
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rcx
  unsigned __int64 v53; // r14
  __int64 v54; // r8
  __int64 DescriptorValidateSafe; // rdx
  char v56; // al
  char v57; // cl
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int64 v60; // rcx
  int v61; // ecx
  _DWORD *v62; // rcx
  __int64 v63; // rcx
  struct _TEB *v64; // rbx
  ULONG v65; // eax
  bool v66; // sf
  int v67; // edx
  unsigned __int64 v68; // r12
  int v69; // r14d
  int v70; // edx
  __int64 v71; // rcx
  unsigned __int64 v72; // rax
  __int64 v73; // r9
  int v74; // ecx
  unsigned __int64 v75; // rcx
  __int64 v76; // r12
  unsigned __int64 v77; // rbx
  _RTL_SRWLOCK *v78; // rcx
  int v79; // r9d
  __int64 *v80; // rdx
  __int64 *v81; // rax
  unsigned __int64 v82; // rcx
  __int64 v83; // rbx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rax
  struct _TEB *v87; // rbx
  unsigned __int64 v88; // rcx
  _DWORD *SharedData; // rcx
  __int64 v90; // rcx
  _BYTE *v91; // rdx
  char v92; // r8
  __int64 v93; // rcx
  __int64 v95; // [rsp+20h] [rbp-69h]
  __int64 v96; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v97; // [rsp+38h] [rbp-51h]
  int v98; // [rsp+40h] [rbp-49h]
  unsigned int v99; // [rsp+44h] [rbp-45h]
  int v100; // [rsp+48h] [rbp-41h]
  int v101; // [rsp+4Ch] [rbp-3Dh]
  unsigned __int64 v102; // [rsp+50h] [rbp-39h] BYREF
  int v103; // [rsp+58h] [rbp-31h]
  int v104; // [rsp+5Ch] [rbp-2Dh]
  unsigned __int64 v105; // [rsp+60h] [rbp-29h]
  unsigned __int64 v106; // [rsp+68h] [rbp-21h] BYREF
  __int64 v107; // [rsp+70h] [rbp-19h]
  __int64 v108; // [rsp+78h] [rbp-11h]
  unsigned __int64 v109; // [rsp+80h] [rbp-9h]
  __int128 v110; // [rsp+90h] [rbp+7h] BYREF
  __int128 v111[4]; // [rsp+A0h] [rbp+17h] BYREF
  int v112; // [rsp+F0h] [rbp+67h]

  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
  {
    v67 = *((_DWORD *)HeapHandle + 29);
    v68 = 0LL;
    v69 = v67 | a3;
    LODWORD(v96) = 0;
    v102 = 0LL;
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    {
      LODWORD(v96) = 5;
LABEL_171:
      Heap = 0LL;
LABEL_172:
      NtCurrentTeb()->LastStatusValue = -1073741801;
      v87 = NtCurrentTeb();
      v87->LastErrorValue = RtlNtStatusToDosError(-1073741801);
      if ( (v69 & 4) != 0 )
      {
        v88 = a2;
        if ( v68 )
          v88 = v68;
        RtlpAllocateHeapRaiseException(v88);
      }
LABEL_176:
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v90 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v90 = 2147353472LL;
      if ( *(_BYTE *)v90
        && (NtCurrentPeb()->TracingFlags & 1) != 0
        && (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0
        && ((v69 & 0x61000000) == 0 || (v69 & 0x10000000) != 0)
        && (_DWORD)v96 != 5 )
      {
        if ( !Heap )
          goto LABEL_193;
        v91 = (_BYTE *)(Heap - 16);
        _m_prefetchw((const void *)(Heap - 16));
        v92 = *(_BYTE *)(Heap - 16 + 15);
        v93 = Heap - 16;
        if ( v92 == 5 )
          v93 -= 16LL * (unsigned __int8)v91[14];
        if ( *(char *)(v93 + 15) < 0 )
          goto LABEL_193;
        _m_prefetchw(v91);
        if ( v92 == 5 )
          v91 -= 16 * (unsigned __int8)v91[14];
        if ( ((v91[10] ^ (unsigned __int8)(HeapHandle[69] & (*((_DWORD *)HeapHandle + 31) >> 17))) & 8) == 0 )
LABEL_193:
          RtlpLogHeapAllocateEvent(HeapHandle, Heap, a2);
      }
      if ( (dword_180166388 & 1) != 0 && (dword_180166388 & 2) != 0 )
      {
        if ( NtCurrentPeb()->ProcessHeap )
        {
          v111[0] = RtlpHpEnvHandle;
          if ( HeapHandle != *(unsigned __int16 **)RtlpHpMetadataHeapCtxGet(v111) && Heap && (v69 & 0x10000000) == 0 )
            goto LABEL_200;
        }
      }
      return Heap;
    }
    v70 = v67 & 0x1000000;
    if ( !v70 && !dword_18015F3E8 )
    {
      v71 = *((_QWORD *)HeapHandle + 49);
      v72 = v71;
      if ( (v71 || (v72 = qword_1801634C8) != 0) && a2 > v72 )
      {
        v73 = *((_QWORD *)HeapHandle + 50);
        if ( v73 )
          RtlpLogHeapFailure(20, (_DWORD)HeapHandle, 0, v73, a2, v71);
        LODWORD(v96) = 5;
        goto LABEL_171;
      }
    }
    v74 = *((_DWORD *)HeapHandle + 36);
    v112 = v74;
    if ( v74 )
    {
      if ( (v69 & 0x3C000102) != 0 || v70 )
      {
        v112 = 0;
      }
      else
      {
        if ( (int)RtlpCallInterceptRoutine(v74, (_DWORD)HeapHandle, 0, 1, (__int64)&v102) < 0 )
          goto LABEL_171;
        v75 = (v102 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        a2 += v75 + 16;
        v102 = v75 + 16;
      }
    }
    v76 = 1LL;
    if ( a2 )
      v76 = a2;
    v68 = (v76 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
    v77 = v68 >> 4;
    if ( (v69 & 0x7D810F61) != 0 )
      goto LABEL_166;
    if ( a2 <= RtlpLargestLfhBlock
      && ((unsigned __int8)(1 << ((v68 >> 4) & 7)) & *((_BYTE *)HeapHandle + (v68 >> 7) + 434)) != 0 )
    {
      v78 = (_RTL_SRWLOCK *)*((_QWORD *)HeapHandle + 51);
      LODWORD(v96) = 2;
      Heap = RtlpLowFragHeapAllocFromContext(v78);
      if ( Heap )
      {
LABEL_168:
        if ( !v112 )
          goto LABEL_176;
        a2 -= v102;
        v86 = RtlpSetupExtendedBlock((_DWORD)HeapHandle, v69, Heap, v79, v102, v112);
        v95 = Heap;
        Heap = v86;
        if ( (int)RtlpCallInterceptRoutine(v112, (_DWORD)HeapHandle, v86, 2, v95) >= 0 )
          goto LABEL_176;
        RtlFreeHeap(HeapHandle, 0, (PVOID)Heap);
        goto LABEL_171;
      }
    }
    v80 = (__int64 *)*((_QWORD *)HeapHandle + 39);
    if ( v77 < *((unsigned int *)v80 + 2) )
    {
LABEL_159:
      v82 = v68 >> 4;
    }
    else
    {
      while ( 1 )
      {
        v81 = (__int64 *)*v80;
        if ( !*v80 )
          break;
        v80 = (__int64 *)*v80;
        if ( v77 < *((unsigned int *)v81 + 2) )
          goto LABEL_159;
      }
      v82 = (unsigned int)(*((_DWORD *)v80 + 2) - 1);
    }
    if ( v82 >= *((unsigned int *)v80 + 2) || v77 != v82 )
    {
LABEL_166:
      v85 = 0LL;
    }
    else
    {
      v83 = v77 - *((unsigned int *)v80 + 6);
      v84 = 2 * v83;
      if ( !*((_DWORD *)v80 + 3) )
        v84 = v83;
      v85 = v80[6] + 8 * v84;
    }
    Heap = RtlpAllocateHeap(HeapHandle, v85, (__int64)&v96);
    if ( !Heap )
      goto LABEL_172;
    goto LABEL_168;
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
  v13 = *((_DWORD *)HeapHandle + 55);
  v14 = 0;
  if ( v13 )
    LOBYTE(v14) = v13 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v15 = v7 | 1;
  if ( !v14 )
    v15 = v7;
  v104 = v15;
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
  v97 = v16;
  if ( a2 + v16 < a2 )
  {
    Heap = 0LL;
LABEL_122:
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v64 = NtCurrentTeb();
    v65 = RtlNtStatusToDosError(-1073741801);
    v66 = v104 < 0;
    v64->LastErrorValue = v65;
    if ( v66 || *((int *)HeapHandle + 5) < 0 )
      RtlpAllocateHeapRaiseException(a2);
    return Heap;
  }
  v19 = (v15 | *((_DWORD *)HeapHandle + 5)) & 0x93000F0B;
  if ( dword_18015F3E8 || (v20 = *((_QWORD *)HeapHandle + 6)) == 0 && (v20 = qword_1801634C8) == 0 || v17 <= v20 )
  {
    v23 = 0LL;
    v106 = 0LL;
    v100 = 0;
    if ( (v19 & 0x1000000) == 0 )
    {
      v24 = *((_DWORD *)HeapHandle + 6);
      v100 = v24;
      if ( v24 )
      {
        v19 |= 8u;
        if ( (int)RtlpCallInterceptRoutine(v24, (_DWORD)HeapHandle, 0, 1, (__int64)&v106) < 0 )
        {
          Heap = 0LL;
          v22 = 0LL;
LABEL_112:
          v16 = v97;
          goto LABEL_113;
        }
        v23 = v106;
      }
    }
    v25 = v19 | 8;
    if ( !a4 )
      v25 = v19;
    v26 = v17 + v23;
    v99 = v25;
    v103 = v25 & 0x10000000;
    v27 = v26 + 16;
    if ( (v25 & 0x10000000) == 0 )
      v27 = v26;
    v101 = v25 & 0x20000F08;
    if ( (v25 & 0x20000F08) != 0 )
      v27 = ((v27 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    v22 = 1LL;
    if ( v27 )
      v22 = v27;
    if ( v22 < v17 || v17 > 0x7FFFFFFFFFFFFFFFLL )
    {
      Heap = 0LL;
      goto LABEL_112;
    }
    v28 = v25 & 0x13000003;
    v29 = (unsigned int)HeapHandle[446] - 16;
    v98 = v25 & 0x13000003;
    if ( v22 > v29 )
      goto LABEL_70;
    v30 = v22 + 2;
    if ( (_DWORD)v17 == (_DWORD)v22 )
      v30 = v22;
    v31 = &RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v30 + 15) >> 4];
    v107 = *v31;
    if ( (*(_QWORD *)&HeapHandle[4 * v107 + 480] & 1) == 0 )
      goto LABEL_66;
    v32 = *v31;
    v33 = (volatile signed __int64 *)&HeapHandle[4 * v32 + 480];
    if ( (*v33 & 1) != 0 )
    {
      v34 = *v33;
      v105 = v34;
      v35 = v34;
      if ( (v34 & 1) != 0 )
      {
        v36 = v34 >> 16;
        LOWORD(v37) = WORD1(v34);
        do
        {
          if ( (v36 & 0x1F) > 0x10 )
            break;
          if ( (unsigned __int16)v37 > 0xFF00u )
            break;
          WORD1(v105) = WORD1(v34) + 33;
          v35 = v105;
          if ( v34 == _InterlockedCompareExchange64(v33, v105, v34) )
            break;
          v105 = *v33;
          v34 = v105;
          v37 = v105 >> 16;
          v35 = v105;
          LOBYTE(v36) = BYTE2(v105);
        }
        while ( (v105 & 1) != 0 );
      }
      v38 = v35 >> 16;
      if ( (v38 & 0x1F) > 0x10 || (unsigned __int16)v38 > 0xFF00u )
        RtlpHpLfhBucketActivate(HeapHandle + 416, (unsigned int)v32);
    }
    v39 = *v33;
    v28 = v98;
    if ( (v39 & 1) != 0 )
    {
      Heap = -1LL;
    }
    else
    {
LABEL_66:
      v40 = *((unsigned __int8 *)HeapHandle + 888) - (unsigned __int64)((*((_BYTE *)HeapHandle + 888) - 1) & 7);
      v108 = ((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 2LL) << 6;
      v109 = v40 + v108 + 7;
      v41 = (void *)RtlpHpLfhSlotAllocate((__int64)(HeapHandle + 416), v28);
      Heap = (__int64)v41;
      if ( v41 && (v28 & 2) != 0 )
        memset(v41, 0, (unsigned int)v17);
    }
    if ( Heap == -1 )
    {
LABEL_70:
      if ( v22 > 0x20000 )
      {
        if ( v22 > *((unsigned int *)HeapHandle + 116) )
        {
          v42 = RtlpHpLargeAlloc(HeapHandle);
        }
        else
        {
          v43 = 224LL;
          if ( v22 <= *((unsigned int *)HeapHandle + 68) )
            v43 = 128LL;
          v42 = RtlpHpSegAlloc(&HeapHandle[v43], v17, v22, v22, v28);
        }
      }
      else
      {
        v42 = RtlpHpVsContextAllocate(HeapHandle + 320, (unsigned int)v17, (unsigned int)v22, v28);
      }
      Heap = v42;
    }
    if ( !Heap )
      goto LABEL_112;
    v44 = BYTE1(v99);
    if ( (v99 & 0x30000F08) == 0 )
      goto LABEL_112;
    v45 = v103;
    v46 = (_QWORD *)(v17 + Heap);
    v47 = v106;
    if ( v103 )
    {
      *v46 = 0xABABABABABABABABuLL;
      v46[1] = 0xABABABABABABABABuLL;
    }
    v48 = 0LL;
    if ( !v101 )
    {
LABEL_109:
      v61 = v100;
      if ( v100 )
      {
        *(_BYTE *)(v48 + 2) &= 0xF0u;
        *(_BYTE *)(v48 + 2) |= v61 & 0xF;
        if ( (int)RtlpCallInterceptRoutine(v61, (_DWORD)HeapHandle, Heap, 2, v48 + 16) < 0 )
        {
          RtlFreeHeap(HeapHandle, 0, (PVOID)Heap);
          Heap = 0LL;
        }
      }
      goto LABEL_112;
    }
    v49 = v46 + 2;
    if ( !v45 )
      v49 = (_QWORD *)(v17 + Heap);
    v48 = ((unsigned __int64)v49 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    *(_QWORD *)v48 = 0LL;
    *(_QWORD *)(v48 + 8) = 0LL;
    *(_BYTE *)(v48 + 2) &= 0xFu;
    *(_BYTE *)(v48 + 3) = v47 >> 4;
    *(_BYTE *)(v48 + 2) |= 16 * (v44 & 0xFE);
    *(_WORD *)v48 = a4;
    v101 = 1;
    if ( (_WORD)Heap )
    {
      v51 = 0;
    }
    else
    {
      v50 = RtlCSparseBitmapBitmaskRead(&unk_180166908, 2 * ((unsigned __int64)(Heap - qword_180166948) >> 20));
      if ( !v50 || (v51 = v50 - 1, v51 == 2) )
      {
        RtlpHpLargeAllocSetExtraPresent(HeapHandle, Heap, v99);
        goto LABEL_109;
      }
    }
    v52 = 96LL * v51;
    v53 = (unsigned __int64)&HeapHandle[v52 + 128];
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(&HeapHandle[v52 + 128], Heap);
    }
    else
    {
      v54 = Heap & *(_QWORD *)v53;
      if ( (RtlpHpHeapGlobals ^ v53 ^ v54 ^ *(_QWORD *)(v54 + 0x10)) == 0xA2E64EADA2E64EADuLL )
        DescriptorValidateSafe = v54 + 32 * ((unsigned __int64)(unsigned int)(Heap - v54) >> *(_BYTE *)(v53 + 8));
      else
        DescriptorValidateSafe = 0LL;
    }
    if ( DescriptorValidateSafe )
    {
      v56 = *(_BYTE *)(DescriptorValidateSafe + 24);
      if ( (v56 & 1) != 0 )
      {
        if ( (v56 & 2) != 0 )
        {
          if ( (v56 & 0xCu) >= 8 || (((1 << *(_BYTE *)(v53 + 8)) - 1) & (unsigned __int64)Heap) == 0 )
            goto LABEL_104;
        }
        else
        {
          DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
          v57 = *(_BYTE *)(DescriptorValidateSafe + 24);
          if ( (v57 & 3) == 3 && (v57 & 0xCu) >= 8 )
            goto LABEL_104;
        }
      }
    }
    DescriptorValidateSafe = 0LL;
LABEL_104:
    v58 = *(unsigned __int8 *)(DescriptorValidateSafe + 24);
    LOBYTE(v58) = v58 & 0xC;
    if ( (unsigned __int8)v58 < 8u )
    {
      *(_WORD *)(DescriptorValidateSafe + 8) |= 1u;
    }
    else
    {
      v59 = ((DescriptorValidateSafe - (DescriptorValidateSafe & *(_QWORD *)v53)) >> 5 << *(_BYTE *)(v53 + 8))
          + (DescriptorValidateSafe & *(_QWORD *)v53);
      if ( (_BYTE)v58 == 8 )
      {
        v60 = (unsigned __int16)qword_1801634A8 ^ *(unsigned __int16 *)(v59 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v59 >> 12);
        *(_WORD *)(v60 + Heap - 2) |= 0x4000u;
      }
      else
      {
        RtlpHpVsChunkSetExtraPresent(*(_QWORD *)(v53 + 32), Heap, v58, v59);
      }
    }
    goto LABEL_109;
  }
  v21 = *((_QWORD *)HeapHandle + 7);
  if ( v21 )
    RtlpLogHeapFailure(20, (_DWORD)HeapHandle, 0, v21, a2 + v16, *((_QWORD *)HeapHandle + 6));
  Heap = 0LL;
  v22 = 0LL;
LABEL_113:
  v62 = NtCurrentPeb()->SharedData;
  if ( v62 && *v62 )
    v63 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v63 = 2147353472LL;
  if ( *(_BYTE *)v63 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapAllocateEvent(HeapHandle, Heap, v22);
  if ( !Heap )
    goto LABEL_122;
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
      v110 = RtlpHpEnvHandle;
      if ( HeapHandle != *(unsigned __int16 **)RtlpHpMetadataHeapCtxGet(&v110) )
LABEL_200:
        RtlpHpStackTraceAddStack(HeapHandle, Heap);
    }
  }
  return Heap;
}
