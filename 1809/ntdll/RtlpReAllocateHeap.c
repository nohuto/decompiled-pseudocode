/*
 * XREFs of RtlpReAllocateHeap @ 0x18000C610
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18000C3B0 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpCreateSplitBlock @ 0x180020328 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x1800214E4 (RtlpGrowBlockInPlace.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpGetExtraStuffPointer @ 0x18005B1FC (RtlpGetExtraStuffPointer.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800611AC (RtlpSecMemFreeVirtualMemory.c)
 *     RtlTryEnterCriticalSection @ 0x180068C50 (RtlTryEnterCriticalSection.c)
 *     RtlpUpdateHeapRates @ 0x18007F5EC (RtlpUpdateHeapRates.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpUpdateTagEntry @ 0x1800F3FEC (RtlpUpdateTagEntry.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLogHeapReallocateEvent @ 0x180105F78 (RtlpLogHeapReallocateEvent.c)
 *     RtlDebugReAllocateHeap @ 0x1801081A8 (RtlDebugReAllocateHeap.c)
 *     RtlpBreakPointHeap @ 0x180108DD8 (RtlpBreakPointHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

char *__fastcall RtlpReAllocateHeap(unsigned __int16 *HeapHandle, int a2, char *a3, SIZE_T a4)
{
  __int64 v7; // rdi
  struct _TEB *v8; // rdi
  NTSTATUS v9; // ecx
  char *v11; // rbx
  unsigned __int16 *v12; // r8
  char *v13; // r10
  int *v14; // rdx
  unsigned __int64 v15; // r9
  unsigned int v16; // ecx
  __int64 v17; // rax
  unsigned __int16 v18; // r8
  char v19; // cl
  unsigned __int64 v20; // rdx
  unsigned __int16 v21; // ax
  int v22; // eax
  size_t v23; // rdi
  PVOID Heap; // rax
  _DWORD *SharedData; // rcx
  __int64 v26; // rcx
  PVOID v27; // rdi
  int v28; // esi
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  struct _TEB *v31; // rdi
  char *v32; // r9
  int v33; // edx
  __int64 **v34; // rcx
  _BYTE *v35; // r8
  char v36; // cl
  struct _TEB *v37; // rdi
  int v38; // ecx
  unsigned __int16 v39; // dx
  unsigned __int64 v40; // r12
  unsigned __int64 v41; // rcx
  int v42; // ecx
  unsigned __int8 v43; // dl
  int v44; // r15d
  _WORD *v45; // rcx
  __int64 v46; // r15
  SIZE_T v47; // r9
  SIZE_T v48; // rsi
  SIZE_T v49; // rax
  __int64 v50; // r8
  unsigned __int64 v51; // rdx
  char *v52; // rbx
  __int64 v53; // rcx
  int v54; // edi
  unsigned __int8 v55; // al
  unsigned __int16 *v56; // rdx
  unsigned __int64 v57; // rax
  char *v58; // rcx
  ULONG v59; // esi
  char v60; // al
  __int16 v61; // cx
  unsigned __int8 v62; // al
  char *v63; // r12
  char *v64; // r15
  int v65; // edx
  _QWORD *ExtraStuffPointer; // rdi
  _DWORD *v67; // rdx
  int v68; // edi
  size_t v69; // rcx
  _DWORD *v70; // rcx
  __int64 v71; // rcx
  char *v72; // rdi
  char v73; // [rsp+40h] [rbp-138h]
  char *v74; // [rsp+48h] [rbp-130h]
  char *v75; // [rsp+48h] [rbp-130h]
  unsigned __int64 v76; // [rsp+50h] [rbp-128h]
  __int16 v77[4]; // [rsp+58h] [rbp-120h]
  _DWORD *v78; // [rsp+58h] [rbp-120h]
  unsigned __int64 v79; // [rsp+60h] [rbp-118h]
  int v80; // [rsp+68h] [rbp-110h]
  SIZE_T v81; // [rsp+68h] [rbp-110h]
  PVOID v82; // [rsp+80h] [rbp-F8h]
  char *v83; // [rsp+88h] [rbp-F0h]
  __int64 v84; // [rsp+90h] [rbp-E8h]
  _QWORD *v85; // [rsp+90h] [rbp-E8h]
  _BYTE *v86; // [rsp+98h] [rbp-E0h]
  int v87; // [rsp+A0h] [rbp-D8h]
  unsigned __int64 v88; // [rsp+B0h] [rbp-C8h] BYREF
  char *v89; // [rsp+B8h] [rbp-C0h]
  unsigned __int64 v90; // [rsp+C0h] [rbp-B8h]
  const void *v91[2]; // [rsp+C8h] [rbp-B0h] BYREF
  char *v92; // [rsp+D8h] [rbp-A0h]
  unsigned int NtGlobalFlag; // [rsp+E0h] [rbp-98h]
  unsigned int v94; // [rsp+E4h] [rbp-94h]
  unsigned int v95; // [rsp+E8h] [rbp-90h]
  SIZE_T v96; // [rsp+F0h] [rbp-88h]
  __int64 v97; // [rsp+F8h] [rbp-80h]
  unsigned __int16 *v98; // [rsp+100h] [rbp-78h]
  __int64 v99; // [rsp+108h] [rbp-70h]
  int v100; // [rsp+110h] [rbp-68h]
  char *v101; // [rsp+118h] [rbp-60h]
  int v102; // [rsp+128h] [rbp-50h]
  int v103; // [rsp+138h] [rbp-40h]
  int v105; // [rsp+188h] [rbp+10h]
  char *Src; // [rsp+190h] [rbp+18h]

  Src = a3;
  v7 = 0LL;
  v83 = 0LL;
  v73 = 0;
  v92 = 0LL;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v8 = NtCurrentTeb();
    v9 = 0;
LABEL_3:
    v8->LastErrorValue = RtlNtStatusToDosError(v9);
    return 0LL;
  }
  v11 = a3 - 16;
  _m_prefetchw(a3 - 16);
  v12 = (unsigned __int16 *)v11;
  if ( v11[15] == 5 )
  {
    v12 = (unsigned __int16 *)&v11[-16 * (unsigned __int8)v11[14]];
    v74 = (char *)v12;
  }
  else
  {
    v74 = Src - 16;
  }
  if ( *((_BYTE *)HeapHandle + 418) == 2 )
  {
    if ( *((_QWORD *)HeapHandle + 51) )
    {
      v13 = (char *)v12 + 15;
      if ( *((char *)v12 + 15) < 0 )
      {
        if ( (a2 & 0x10) != 0 )
          return 0LL;
        v14 = (int *)(v12 + 4);
        v15 = (unsigned __int64)v12 >> 4;
        v16 = *((_DWORD *)v12 + 2) ^ RtlpLFHKey ^ ((unsigned __int64)v12 >> 4) ^ (unsigned int)HeapHandle;
        if ( (_WORD)v16 )
          v17 = 0LL;
        else
          v17 = *(_QWORD *)((char *)v12 - (v16 >> 12));
        v18 = *(_WORD *)(v17 + 36);
        v19 = *v13;
        if ( *v13 == 5 )
        {
          v20 = *((unsigned __int16 *)v74 + 6) ^ (unsigned __int64)HeapHandle[70];
        }
        else if ( (v19 & 0x40) != 0 )
        {
          v20 = *(unsigned __int16 *)&v74[16 * (v19 & 0x3F) + 12];
        }
        else if ( (v19 & 0x3F) == 0x3F )
        {
          if ( v19 >= 0 )
          {
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              v22 = *v14;
              v100 = v22;
              if ( (v22 & *((_DWORD *)HeapHandle + 31)) != 0 )
                v100 = *((_DWORD *)HeapHandle + 34) ^ v22;
              v21 = v100;
            }
            else
            {
              v21 = *(_WORD *)v14;
            }
          }
          else
          {
            if ( !(*(_WORD *)v14 ^ (unsigned __int16)(RtlpLFHKey ^ v15 ^ (unsigned __int16)HeapHandle)) )
              v7 = *(_QWORD *)&v74[-((*v14 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)v15 ^ (unsigned int)HeapHandle) >> 12)];
            v21 = *(_WORD *)(v7 + 36);
          }
          v20 = *(_QWORD *)&v74[16 * v21];
        }
        else
        {
          v20 = v19 & 0x3F;
        }
        v23 = 16LL * v18 - v20;
        v80 = 16 * v18 - v20;
        Heap = RtlAllocateHeap(HeapHandle, a2 & 0xC003FFFF, a4);
        v82 = Heap;
        if ( Heap )
        {
          if ( a4 < v23 )
            v23 = a4;
          memmove(Heap, Src, v23);
          RtlFreeHeap(HeapHandle, a2 & 0xC003FFFF, Src);
        }
        SharedData = NtCurrentPeb()->SharedData;
        if ( SharedData && *SharedData )
          v26 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v26 = 2147353472LL;
        if ( !*(_BYTE *)v26 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
          return (char *)v82;
        v27 = v82;
        if ( v82 )
        {
          RtlpLogHeapReallocateEvent((_DWORD)HeapHandle, (_DWORD)v82, (_DWORD)Src, v80, a4, 2);
          return (char *)v82;
        }
        return (char *)v27;
      }
    }
  }
  if ( v12 == HeapHandle )
  {
    RtlpLogHeapFailure(9, (_DWORD)HeapHandle, (_DWORD)v12, 0, 0LL, 0LL);
    return 0LL;
  }
  v28 = *((_DWORD *)HeapHandle + 29) | a2;
  v105 = v28;
  if ( (v28 & 0x61000000) != 0 && (v28 & 0x10000000) == 0 )
    return (char *)RtlDebugReAllocateHeap(HeapHandle);
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
  {
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v8 = NtCurrentTeb();
    v9 = -1073741801;
    goto LABEL_3;
  }
  v29 = a4;
  if ( !a4 )
    v29 = 1LL;
  v30 = *((_QWORD *)HeapHandle + 33) & (*((_QWORD *)HeapHandle + 32) + v29);
  if ( v30 < 0x20 )
    v30 = 32LL;
  v76 = v30;
  LODWORD(v81) = 0;
  if ( (v28 & 1) == 0 )
  {
    if ( RtlTryEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44)) )
    {
      ++*((_DWORD *)HeapHandle + 154);
    }
    else
    {
      if ( byte_180165408 )
      {
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v31 = NtCurrentTeb();
        v31->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_190;
      }
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      RtlpUpdateHeapRates(HeapHandle, 1LL);
    }
    v73 = 1;
    v28 ^= 1u;
    v105 = v28;
  }
  _m_prefetchw(v11);
  if ( v11[15] == 5 )
    v11 -= 16 * (unsigned __int8)v11[14];
  v75 = v11;
  v32 = v11;
  v89 = v11;
  if ( *((_DWORD *)HeapHandle + 31) )
  {
    v33 = *((_DWORD *)v11 + 2) ^ *((_DWORD *)HeapHandle + 34);
    *((_DWORD *)v11 + 2) = v33;
    if ( HIBYTE(v33) != ((unsigned __int8)v33 ^ (unsigned __int8)(BYTE1(v33) ^ BYTE2(v33))) )
    {
      RtlpAnalyzeHeapFailure(HeapHandle, v11);
      v32 = v11;
    }
  }
  v83 = v11;
  v34 = (__int64 **)*((_QWORD *)HeapHandle + 39);
  do
  {
    if ( *((unsigned __int16 *)v11 + 4) < (unsigned __int64)*((unsigned int *)v34 + 2) )
      break;
    v34 = (__int64 **)*v34;
  }
  while ( v34 );
  if ( (v28 & 0x3C000100) != 0 || *((_QWORD *)HeapHandle + 41) || (v11[10] & 2) != 0 )
    v76 += 16LL;
  v35 = v11 + 15;
  v86 = v11 + 15;
  v36 = v11[15];
  if ( (v36 & 0x3F) != 0 )
  {
    if ( v36 == 4 )
    {
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        v38 = *((_DWORD *)v32 + 2);
        v102 = v38;
        if ( (v38 & *((_DWORD *)HeapHandle + 31)) != 0 )
        {
          v102 = v38 ^ *((_DWORD *)HeapHandle + 34);
          LOWORD(v38) = v102;
        }
        v39 = *((_WORD *)v11 + 4);
        v28 = v105;
      }
      else
      {
        v39 = *((_WORD *)v32 + 4);
        LOWORD(v38) = v39;
      }
      v81 = *((_QWORD *)v11 - 2) - (unsigned __int16)v38;
      v40 = (v81 + v39) >> 4;
      v79 = v40;
      v76 = (v76 + 4151) & 0xFFFFFFFFFFFFF000uLL;
      v35 = v11 + 15;
    }
    else
    {
      v40 = *((unsigned __int16 *)v32 + 4);
      v79 = v40;
      if ( v36 == 5 )
      {
        v41 = *((unsigned __int16 *)v11 + 6) ^ (unsigned __int64)HeapHandle[70];
      }
      else if ( (v36 & 0x40) != 0 )
      {
        v41 = *(unsigned __int16 *)&v11[16 * (v36 & 0x3F) + 12];
      }
      else if ( (v36 & 0x3F) == 0x3F )
      {
        if ( v36 >= 0 )
        {
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            v42 = *((_DWORD *)v11 + 2);
            v103 = v42;
            if ( (v42 & *((_DWORD *)HeapHandle + 31)) != 0 )
            {
              v103 = v42 ^ *((_DWORD *)HeapHandle + 34);
              LOWORD(v42) = v103;
            }
            v28 = v105;
          }
          else
          {
            LOWORD(v42) = *((_WORD *)v11 + 4);
          }
        }
        else
        {
          if ( *((_WORD *)v11 + 4) ^ (unsigned __int16)(RtlpLFHKey ^ (unsigned __int16)HeapHandle ^ ((unsigned __int64)v11 >> 4)) )
            LOWORD(v42) = MEMORY[0x24];
          else
            LOWORD(v42) = *(_WORD *)(*(_QWORD *)&v11[-((*((_DWORD *)v11 + 2) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)HeapHandle ^ (unsigned int)((unsigned __int64)v11 >> 4)) >> 12)]
                                   + 36LL);
          v28 = v105;
          v40 = *((unsigned __int16 *)v32 + 4);
        }
        v41 = *(_QWORD *)&v11[16 * (unsigned __int16)v42];
      }
      else
      {
        v41 = v11[15] & 0x3F;
      }
      v81 = 16 * v40 - v41;
      if ( v40 < HeapHandle[216] )
      {
        v43 = *((_BYTE *)HeapHandle + (v40 >> 3) + 434);
        v44 = 1 << (v40 & 7);
        v40 = v79;
        if ( ((unsigned __int8)v44 & v43) == 0 )
        {
          v45 = (_WORD *)(*((_QWORD *)HeapHandle + 53) + 2 * v79);
          if ( *v45 > 1u )
            --*v45;
        }
        v28 = v105;
      }
    }
    v46 = v76 >> 4;
    *(_QWORD *)v77 = v76 >> 4;
    if ( v76 >> 4 > v40 )
    {
      if ( *v35 == 4 || !(unsigned __int8)RtlpGrowBlockInPlace(HeapHandle, v76 >> 4) )
      {
        if ( (v28 & 0x10) != 0 )
        {
          Src = 0LL;
        }
        else
        {
          v59 = v28 & 0xC003FFFF;
          v105 = v59;
          v60 = v11[10];
          if ( (v60 & 2) != 0 )
          {
            v59 = (16 * (v60 & 0xE0 | 0x10)) | v59 & 0xFFFFF1FF;
            v105 = v59;
            v61 = *(_WORD *)(RtlpGetExtraStuffPointer(v11) + 2);
            if ( v61 > 0 )
            {
              v59 |= (unsigned __int16)v61 << 18;
              v105 = v59;
            }
          }
          else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          {
            v62 = v11[11];
            if ( v62 )
            {
              v59 |= v62 << 18;
              v105 = v59;
            }
          }
          v78 = HeapHandle + 62;
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            v11[11] = v11[8] ^ v11[9] ^ v11[10];
            *((_DWORD *)v11 + 2) ^= *((_DWORD *)HeapHandle + 34);
          }
          v83 = 0LL;
          v63 = (char *)RtlAllocateHeap(HeapHandle, v59, a4);
          if ( v63 )
          {
            v64 = v63 - 16;
            _m_prefetchw(v63 - 16);
            if ( *(v63 - 1) == 5 )
              v64 -= 16 * (unsigned __int8)v64[14];
            v91[1] = v64;
            if ( *v78 )
            {
              v65 = *((_DWORD *)v64 + 2) ^ *((_DWORD *)HeapHandle + 34);
              *((_DWORD *)v64 + 2) = v65;
              if ( HIBYTE(v65) != ((unsigned __int8)v65 ^ (unsigned __int8)(BYTE1(v65) ^ BYTE2(v65))) )
                RtlpAnalyzeHeapFailure(HeapHandle, v64);
            }
            if ( (v64[10] & 2) != 0 )
            {
              ExtraStuffPointer = (_QWORD *)RtlpGetExtraStuffPointer(v64);
              v85 = ExtraStuffPointer;
              if ( *v67 )
              {
                v68 = *((_DWORD *)v11 + 2) ^ *((_DWORD *)HeapHandle + 34);
                *((_DWORD *)v11 + 2) = v68;
                if ( HIBYTE(v68) != ((unsigned __int8)v68 ^ (unsigned __int8)(BYTE1(v68) ^ BYTE2(v68))) )
                  RtlpAnalyzeHeapFailure(HeapHandle, v11);
                ExtraStuffPointer = v85;
              }
              if ( (v11[10] & 2) != 0 )
              {
                ExtraStuffPointer[1] = *(_QWORD *)(RtlpGetExtraStuffPointer(v11) + 8);
              }
              else
              {
                *ExtraStuffPointer = 0LL;
                ExtraStuffPointer[1] = 0LL;
              }
              if ( *((_DWORD *)HeapHandle + 31) )
              {
                v11[11] = v11[8] ^ v11[9] ^ v11[10];
                *((_DWORD *)v11 + 2) ^= *((_DWORD *)HeapHandle + 34);
              }
            }
            if ( *v78 )
            {
              v64[11] = v64[8] ^ v64[9] ^ v64[10];
              *((_DWORD *)v64 + 2) ^= *((_DWORD *)HeapHandle + 34);
            }
            v83 = 0LL;
            if ( v73 )
            {
              RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
              v73 = 0;
              v59 &= ~1u;
              v105 = v59;
            }
            v69 = v81;
            if ( a4 < v81 )
              v69 = a4;
            memmove(v63, Src, v69);
            RtlFreeHeap(HeapHandle, v59, Src);
          }
          v92 = Src;
          Src = v63;
        }
      }
      goto LABEL_190;
    }
    if ( (v76 >> 4) + 1 == v40 )
    {
      v46 = (v76 >> 4) + 1;
      *(_QWORD *)v77 = v46;
      v76 += 16LL;
    }
    if ( *v35 == 4 )
    {
      v47 = a4;
      *((_WORD *)v11 + 4) = v76 - a4;
      goto LABEL_118;
    }
    if ( (v11[10] & 2) != 0 )
    {
      v101 = &v11[16 * *((unsigned __int16 *)v11 + 4) - 16];
      v84 = (__int64)&v11[16 * v46 - 16];
      *(_OWORD *)v84 = *(_OWORD *)v101;
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) != 0 )
      {
        v46 = *(_QWORD *)v77;
        v40 = v79;
        *(_WORD *)(v84 + 2) = RtlpUpdateTagEntry(
                                (_DWORD)HeapHandle,
                                *(unsigned __int16 *)(v84 + 2),
                                v79,
                                *(_DWORD *)v77,
                                4);
LABEL_117:
        v47 = a4;
        LOBYTE(v28) = v105;
LABEL_118:
        if ( v47 > v81 )
        {
          if ( (v28 & 8) != 0 )
          {
            v48 = a4;
            memset(&Src[v81], 0, a4 - v81);
LABEL_133:
            if ( (HeapHandle[56] & 0x20) != 0 )
            {
              *(_QWORD *)&v11[v48 + 16] = 0xABABABABABABABABuLL;
              *(_QWORD *)&v11[v48 + 24] = 0xABABABABABABABABuLL;
            }
            if ( v46 != v40 )
            {
              if ( *v86 == 4 )
              {
                v52 = v11 - 48;
                v95 = NtCurrentPeb()->NtGlobalFlag;
                v46 = *(_QWORD *)v77;
                if ( (v95 & 0x800) != 0 )
                  *((_WORD *)v52 + 9) = RtlpUpdateTagEntry(
                                          (_DWORD)HeapHandle,
                                          *((unsigned __int16 *)v52 + 9),
                                          v79,
                                          *(_DWORD *)v77,
                                          5);
                v91[0] = &v52[v76];
                v88 = 16 * v79 - v76;
                v87 = RtlpSecMemFreeVirtualMemory(v76, v91, &v88, 0x4000LL);
                if ( v87 >= 0 )
                {
                  *((_QWORD *)v52 + 4) -= v88;
                  v11 = v75;
                }
                else
                {
                  if ( NtCurrentPeb()->Ldr )
                    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                  else
                    DbgPrint("HEAP: ");
                  DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v91[0], v88, v87);
                  RtlpBreakPointHeap();
                  v11 = v75;
                  v46 = *(_QWORD *)v77;
                }
              }
              else
              {
                v53 = *((unsigned __int16 *)v11 + 4) - (unsigned __int64)(unsigned __int16)v46;
                v99 = v53;
                *((_WORD *)v11 + 4) = v46;
                v54 = *((_DWORD *)HeapHandle + 28) & 0x40;
                v55 = v11[14];
                if ( v55 )
                  v56 = (unsigned __int16 *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFF0000uLL)
                                           - ((unsigned __int64)v55 << 16)
                                           + 0x10000);
                else
                  v56 = HeapHandle;
                v98 = v56;
                RtlpCreateSplitBlock(HeapHandle, v54 != 0, v46, v53);
              }
            }
            if ( *v86 != 4 )
            {
              v57 = v76 - v48;
              v58 = v89;
              if ( v76 - v48 >= 0x3F )
              {
                *(_QWORD *)&v11[16 * v46] = v57;
                v58[15] = 63;
              }
              else
              {
                v89[15] = v57;
              }
            }
            goto LABEL_190;
          }
          if ( (HeapHandle[56] & 0x40) != 0 )
          {
            v49 = v81 & 3;
            v96 = v49;
            if ( (v81 & 3) != 0 )
            {
              v49 = 4 - v49;
              v96 = v49;
            }
            v48 = a4;
            if ( a4 <= v49 + v81 )
              goto LABEL_133;
            if ( ((a4 - v49 - v81) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
              goto LABEL_133;
            v50 = (__int64)&v11[v49 + 16 + v81];
            v97 = v50;
            v51 = ((a4 - v49 - v81) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
            v90 = v51;
            if ( !v51 )
              goto LABEL_133;
            if ( (v50 & 4) != 0 )
            {
              *(_DWORD *)v50 = -1163005939;
              v90 = --v51;
              if ( !v51 )
                goto LABEL_133;
              v50 += 4LL;
              v97 = v50;
            }
            memset64((void *)v50, 0xBAADF00DBAADF00DuLL, v51 >> 1);
            if ( (v51 & 1) != 0 )
              *(_DWORD *)(v50 + 4 * v51 - 4) = -1163005939;
            goto LABEL_133;
          }
        }
        v48 = a4;
        goto LABEL_133;
      }
    }
    else
    {
      v94 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v94 & 0x800) != 0 )
      {
        v46 = *(_QWORD *)v77;
        v11[11] = RtlpUpdateTagEntry(
                    (_DWORD)HeapHandle,
                    (unsigned __int8)v11[11],
                    *((unsigned __int16 *)v11 + 4),
                    *(_DWORD *)v77,
                    4);
        LOBYTE(v28) = v105;
        v40 = v79;
        v47 = a4;
        goto LABEL_118;
      }
    }
    v40 = v79;
    v46 = *(_QWORD *)v77;
    goto LABEL_117;
  }
  NtCurrentTeb()->LastStatusValue = -1073741811;
  v37 = NtCurrentTeb();
  v37->LastErrorValue = RtlNtStatusToDosError(-1073741811);
LABEL_190:
  if ( v83 && *((_DWORD *)HeapHandle + 31) )
  {
    v83[11] = v83[8] ^ v83[9] ^ v83[10];
    *((_DWORD *)v83 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v73 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  v70 = NtCurrentPeb()->SharedData;
  if ( v70 && *v70 )
    v71 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v71 = 2147353472LL;
  if ( !*(_BYTE *)v71 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
    return Src;
  v72 = Src;
  if ( Src && (v105 & 0x800000) == 0 )
  {
    RtlpLogHeapReallocateEvent((_DWORD)HeapHandle, (_DWORD)Src, (_DWORD)v92, v81, a4, 3);
    return Src;
  }
  return v72;
}
