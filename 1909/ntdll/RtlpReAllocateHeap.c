/*
 * XREFs of RtlpReAllocateHeap @ 0x180043550
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180043280 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpGrowBlockInPlace @ 0x1800445F8 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180046728 (RtlpCreateSplitBlock.c)
 *     RtlTryEnterCriticalSection @ 0x180046C20 (RtlTryEnterCriticalSection.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180048120 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlNtStatusToDosError @ 0x180053CB0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     RtlpGetExtraStuffPointer @ 0x18006EB2C (RtlpGetExtraStuffPointer.c)
 *     RtlpUpdateHeapRates @ 0x18007A774 (RtlpUpdateHeapRates.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlpUpdateTagEntry @ 0x1800F139C (RtlpUpdateTagEntry.c)
 *     RtlpAnalyzeHeapFailure @ 0x180101104 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLogHeapReallocateEvent @ 0x180103650 (RtlpLogHeapReallocateEvent.c)
 *     RtlDebugReAllocateHeap @ 0x1801056D8 (RtlDebugReAllocateHeap.c)
 *     RtlpBreakPointHeap @ 0x1801062C8 (RtlpBreakPointHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010A6B0 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpReAllocateHeap(__int64 a1, int a2, char *a3, unsigned __int64 a4)
{
  __int64 v7; // rdi
  struct _TEB *v8; // rdi
  NTSTATUS v9; // ecx
  char *v11; // rbx
  char *v12; // r8
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
  void *Heap; // rax
  _DWORD *SharedData; // rcx
  __int64 v26; // rcx
  void *v27; // rdi
  int v28; // esi
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  struct _TEB *v31; // rdi
  int v32; // edx
  unsigned __int16 *v33; // r8
  unsigned __int64 v34; // r12
  __int64 **v35; // rcx
  _BYTE *v36; // rdx
  char v37; // cl
  struct _TEB *v38; // rdi
  int v39; // ecx
  unsigned __int64 v40; // rcx
  int v41; // ecx
  _WORD *v42; // rcx
  __int64 v43; // r15
  unsigned __int64 v44; // r9
  unsigned __int64 v45; // rsi
  size_t v46; // rax
  __int64 v47; // r8
  unsigned __int64 v48; // rdx
  int v49; // r9d
  char *v50; // rbx
  __int64 v51; // rcx
  int v52; // edi
  unsigned __int8 v53; // al
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rax
  unsigned int v56; // esi
  char v57; // al
  __int16 v58; // cx
  unsigned __int8 v59; // al
  _DWORD *v60; // rdi
  char *v61; // r12
  char *v62; // r15
  int v63; // edx
  _QWORD *ExtraStuffPointer; // rdx
  int v65; // edi
  __int64 v66; // rax
  __int64 v67; // rdx
  size_t v68; // rcx
  _DWORD *v69; // rcx
  __int64 v70; // rcx
  char *v71; // rdi
  char v72; // [rsp+40h] [rbp-138h]
  char *v73; // [rsp+48h] [rbp-130h]
  char *v74; // [rsp+48h] [rbp-130h]
  unsigned __int64 v75; // [rsp+50h] [rbp-128h]
  unsigned __int64 v76; // [rsp+58h] [rbp-120h]
  int v77; // [rsp+60h] [rbp-118h]
  size_t v78; // [rsp+60h] [rbp-118h]
  __int64 v79; // [rsp+70h] [rbp-108h]
  void *v80; // [rsp+80h] [rbp-F8h]
  char *v81; // [rsp+88h] [rbp-F0h]
  _BYTE *v82; // [rsp+98h] [rbp-E0h]
  __int64 v83; // [rsp+A0h] [rbp-D8h]
  _QWORD *v84; // [rsp+A0h] [rbp-D8h]
  int v85; // [rsp+A8h] [rbp-D0h]
  unsigned __int64 v86; // [rsp+B0h] [rbp-C8h] BYREF
  unsigned __int64 v87; // [rsp+B8h] [rbp-C0h]
  const void *v88[2]; // [rsp+C0h] [rbp-B8h] BYREF
  char *v89; // [rsp+D0h] [rbp-A8h]
  _WORD *v90; // [rsp+D8h] [rbp-A0h]
  unsigned int NtGlobalFlag; // [rsp+E0h] [rbp-98h]
  unsigned int v92; // [rsp+E4h] [rbp-94h]
  unsigned int v93; // [rsp+E8h] [rbp-90h]
  size_t v94; // [rsp+F0h] [rbp-88h]
  __int64 v95; // [rsp+F8h] [rbp-80h]
  unsigned __int64 v96; // [rsp+100h] [rbp-78h]
  __int64 v97; // [rsp+108h] [rbp-70h]
  int v98; // [rsp+110h] [rbp-68h]
  char *v99; // [rsp+118h] [rbp-60h]
  int v100; // [rsp+128h] [rbp-50h]
  int v101; // [rsp+138h] [rbp-40h]
  int v103; // [rsp+188h] [rbp+10h]
  char *Src; // [rsp+190h] [rbp+18h]

  Src = a3;
  v7 = 0LL;
  v81 = 0LL;
  v72 = 0;
  v89 = 0LL;
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
  v12 = v11;
  if ( v11[15] == 5 )
  {
    v12 = &v11[-16 * (unsigned __int8)v11[14]];
    v73 = v12;
  }
  else
  {
    v73 = Src - 16;
  }
  if ( *(_BYTE *)(a1 + 418) == 2 )
  {
    if ( *(_QWORD *)(a1 + 408) )
    {
      v13 = v12 + 15;
      if ( v12[15] < 0 )
      {
        if ( (a2 & 0x10) != 0 )
          return 0LL;
        v14 = (int *)(v12 + 8);
        v15 = (unsigned __int64)v12 >> 4;
        v16 = RtlpLFHKey ^ ((unsigned __int64)v12 >> 4) ^ *((_DWORD *)v12 + 2) ^ a1;
        if ( (_WORD)v16 )
          v17 = 0LL;
        else
          v17 = *(_QWORD *)&v12[-(v16 >> 12)];
        v18 = *(_WORD *)(v17 + 36);
        v19 = *v13;
        if ( *v13 == 5 )
        {
          v20 = *((unsigned __int16 *)v73 + 6) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
        }
        else if ( (v19 & 0x40) != 0 )
        {
          v20 = *(unsigned __int16 *)&v73[16 * (v19 & 0x3F) + 12];
        }
        else if ( (v19 & 0x3F) == 0x3F )
        {
          if ( v19 >= 0 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v22 = *v14;
              v98 = v22;
              if ( (v22 & *(_DWORD *)(a1 + 124)) != 0 )
                v98 = *(_DWORD *)(a1 + 136) ^ v22;
              v21 = v98;
            }
            else
            {
              v21 = *(_WORD *)v14;
            }
          }
          else
          {
            if ( !((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(v15 ^ *(_WORD *)v14 ^ a1)) )
              v7 = *(_QWORD *)&v73[-(((unsigned int)RtlpLFHKey ^ (unsigned int)v15 ^ *v14 ^ (unsigned int)a1) >> 12)];
            v21 = *(_WORD *)(v7 + 36);
          }
          v20 = *(_QWORD *)&v73[16 * v21];
        }
        else
        {
          v20 = v19 & 0x3F;
        }
        v23 = 16LL * v18 - v20;
        v77 = 16 * v18 - v20;
        Heap = (void *)RtlAllocateHeap(a1, a2 & 0xC003FFFF, a4);
        v80 = Heap;
        if ( Heap )
        {
          if ( a4 < v23 )
            v23 = a4;
          memmove(Heap, Src, v23);
          RtlFreeHeap(a1, a2 & 0xC003FFFF, (__int64)Src);
        }
        SharedData = NtCurrentPeb()->SharedData;
        if ( SharedData && *SharedData )
          v26 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v26 = 2147353472LL;
        if ( !*(_BYTE *)v26 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
          return (__int64)v80;
        v27 = v80;
        if ( v80 )
        {
          RtlpLogHeapReallocateEvent(a1, (_DWORD)v80, (_DWORD)Src, v77, a4, 2);
          return (__int64)v80;
        }
        return (__int64)v27;
      }
    }
  }
  if ( v12 == (char *)a1 )
  {
    RtlpLogHeapFailure(9, a1, (_DWORD)v12, 0, 0LL, 0LL);
    return 0LL;
  }
  v28 = *(_DWORD *)(a1 + 116) | a2;
  v103 = v28;
  if ( (v28 & 0x61000000) != 0 && (v28 & 0x10000000) == 0 )
    return RtlDebugReAllocateHeap((void *)a1);
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
  v30 = *(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v29);
  if ( v30 < 0x20 )
    v30 = 32LL;
  v75 = v30;
  LODWORD(v78) = 0;
  if ( (v28 & 1) == 0 )
  {
    if ( (unsigned int)RtlTryEnterCriticalSection(*(_QWORD *)(a1 + 352)) )
    {
      ++*(_DWORD *)(a1 + 616);
    }
    else
    {
      if ( byte_180165408 )
      {
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v31 = NtCurrentTeb();
        v31->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_193;
      }
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      RtlpUpdateHeapRates(a1, 1LL);
    }
    v72 = 1;
    v28 ^= 1u;
    v103 = v28;
  }
  _m_prefetchw(v11);
  if ( v11[15] == 5 )
    v11 -= 16 * (unsigned __int8)v11[14];
  v74 = v11;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v32 = *((_DWORD *)v11 + 2) ^ *(_DWORD *)(a1 + 136);
    *((_DWORD *)v11 + 2) = v32;
    if ( HIBYTE(v32) != ((unsigned __int8)v32 ^ (unsigned __int8)(BYTE1(v32) ^ BYTE2(v32))) )
      RtlpAnalyzeHeapFailure(a1, v11);
  }
  v81 = v11;
  v33 = (unsigned __int16 *)(v11 + 8);
  v90 = v11 + 8;
  v34 = *((unsigned __int16 *)v11 + 4);
  v35 = *(__int64 ***)(a1 + 312);
  do
  {
    if ( v34 < *((unsigned int *)v35 + 2) )
      break;
    v35 = (__int64 **)*v35;
  }
  while ( v35 );
  if ( (v28 & 0x3C000100) != 0 || *(_QWORD *)(a1 + 328) || (v11[10] & 2) != 0 )
    v75 += 16LL;
  v36 = v11 + 15;
  v82 = v11 + 15;
  v37 = v11[15];
  if ( (v37 & 0x3F) != 0 )
  {
    if ( v37 == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v39 = *(_DWORD *)v33;
        v100 = v39;
        if ( (v39 & *(_DWORD *)(a1 + 124)) != 0 )
        {
          v100 = v39 ^ *(_DWORD *)(a1 + 136);
          LOWORD(v39) = v100;
        }
        LOWORD(v34) = *((_WORD *)v11 + 4);
        v28 = v103;
      }
      else
      {
        LOWORD(v39) = *((_WORD *)v11 + 4);
      }
      v78 = *((_QWORD *)v11 - 2) - (unsigned __int16)v39;
      v34 = (v78 + (unsigned __int16)v34) >> 4;
      v76 = v34;
      v75 = (v75 + 4151) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_107;
    }
    v76 = *((unsigned __int16 *)v11 + 4);
    if ( v37 == 5 )
    {
      v40 = *((unsigned __int16 *)v11 + 6) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v37 & 0x40) != 0 )
    {
      v40 = *(unsigned __int16 *)&v11[16 * (v37 & 0x3F) + 12];
    }
    else if ( (v37 & 0x3F) == 0x3F )
    {
      if ( v37 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v41 = *(_DWORD *)v33;
          v101 = v41;
          if ( (v41 & *(_DWORD *)(a1 + 124)) != 0 )
          {
            v101 = v41 ^ *(_DWORD *)(a1 + 136);
            LOWORD(v41) = v101;
          }
          v28 = v103;
        }
        else
        {
          LOWORD(v41) = *v33;
        }
      }
      else
      {
        if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *v33 ^ ((unsigned __int64)v11 >> 4)) )
          LOWORD(v41) = MEMORY[0x24];
        else
          LOWORD(v41) = *(_WORD *)(*(_QWORD *)&v11[-(((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)v33 ^ (unsigned int)((unsigned __int64)v11 >> 4)) >> 12)]
                                 + 36LL);
        v28 = v103;
      }
      v40 = *(_QWORD *)&v11[16 * (unsigned __int16)v41];
    }
    else
    {
      v40 = v11[15] & 0x3F;
    }
    v78 = 16 * v34 - v40;
    if ( v34 < *(unsigned __int16 *)(a1 + 432) )
    {
      if ( ((unsigned __int8)(1 << (v34 & 7)) & *(_BYTE *)((v34 >> 3) + a1 + 434)) != 0 )
      {
        v28 = v103;
LABEL_107:
        v36 = v11 + 15;
        goto LABEL_108;
      }
      v42 = (_WORD *)(*(_QWORD *)(a1 + 424) + 2 * v34);
      v36 = v11 + 15;
      if ( *v42 > 1u )
        --*v42;
      v28 = v103;
    }
LABEL_108:
    v43 = v75 >> 4;
    v79 = v75 >> 4;
    if ( v75 >> 4 > v34 )
    {
      if ( *v36 == 4 || !(unsigned __int8)RtlpGrowBlockInPlace(a1, v28, (_DWORD)v11, a4, v75 >> 4) )
      {
        if ( (v28 & 0x10) != 0 )
        {
          Src = 0LL;
        }
        else
        {
          v56 = v28 & 0xC003FFFF;
          v103 = v56;
          v57 = v11[10];
          if ( (v57 & 2) != 0 )
          {
            v56 = (16 * (v57 & 0xE0 | 0x10)) | v56 & 0xFFFFF1FF;
            v103 = v56;
            v58 = *(_WORD *)(RtlpGetExtraStuffPointer(v11) + 2);
            if ( v58 > 0 )
            {
              v56 |= (unsigned __int16)v58 << 18;
              v103 = v56;
            }
          }
          else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          {
            v59 = v11[11];
            if ( v59 )
            {
              v56 |= v59 << 18;
              v103 |= v59 << 18;
            }
          }
          v60 = (_DWORD *)(a1 + 124);
          if ( *(_DWORD *)(a1 + 124) )
          {
            v11[11] = v11[8] ^ v11[9] ^ v11[10];
            *((_DWORD *)v11 + 2) ^= *(_DWORD *)(a1 + 136);
          }
          v81 = 0LL;
          v61 = (char *)RtlAllocateHeap(a1, v56, a4);
          if ( v61 )
          {
            v62 = v61 - 16;
            _m_prefetchw(v61 - 16);
            if ( *(v61 - 1) == 5 )
              v62 -= 16 * (unsigned __int8)v62[14];
            v88[1] = v62;
            if ( *v60 )
            {
              v63 = *((_DWORD *)v62 + 2) ^ *(_DWORD *)(a1 + 136);
              *((_DWORD *)v62 + 2) = v63;
              if ( HIBYTE(v63) != ((unsigned __int8)v63 ^ (unsigned __int8)(BYTE1(v63) ^ BYTE2(v63))) )
                RtlpAnalyzeHeapFailure(a1, v62);
            }
            if ( (v62[10] & 2) != 0 )
            {
              ExtraStuffPointer = (_QWORD *)RtlpGetExtraStuffPointer(v62);
              v84 = ExtraStuffPointer;
              if ( *v60 )
              {
                v65 = *((_DWORD *)v11 + 2) ^ *(_DWORD *)(a1 + 136);
                *((_DWORD *)v11 + 2) = v65;
                if ( HIBYTE(v65) != ((unsigned __int8)v65 ^ (unsigned __int8)(BYTE1(v65) ^ BYTE2(v65))) )
                  RtlpAnalyzeHeapFailure(a1, v11);
                ExtraStuffPointer = v84;
              }
              if ( (v11[10] & 2) != 0 )
              {
                v66 = RtlpGetExtraStuffPointer(v11);
                *(_QWORD *)(v67 + 8) = *(_QWORD *)(v66 + 8);
              }
              else
              {
                *ExtraStuffPointer = 0LL;
                ExtraStuffPointer[1] = 0LL;
              }
              if ( *(_DWORD *)(a1 + 124) )
              {
                v11[11] = v11[8] ^ v11[9] ^ v11[10];
                *((_DWORD *)v11 + 2) ^= *(_DWORD *)(a1 + 136);
              }
              v60 = (_DWORD *)(a1 + 124);
            }
            if ( *v60 )
            {
              v62[11] = v62[8] ^ v62[9] ^ v62[10];
              *((_DWORD *)v62 + 2) ^= *(_DWORD *)(a1 + 136);
            }
            v81 = 0LL;
            if ( v72 )
            {
              RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
              v72 = 0;
              v56 &= ~1u;
              v103 = v56;
            }
            v68 = v78;
            if ( a4 < v78 )
              v68 = a4;
            memmove(v61, Src, v68);
            RtlFreeHeap(a1, v56, (__int64)Src);
          }
          v89 = Src;
          Src = v61;
        }
      }
      goto LABEL_193;
    }
    if ( (v75 >> 4) + 1 == v34 )
    {
      v43 = (v75 >> 4) + 1;
      v79 = v43;
      v75 += 16LL;
    }
    if ( *v36 == 4 )
    {
      v44 = a4;
      *v33 = v75 - a4;
      goto LABEL_120;
    }
    if ( (v11[10] & 2) != 0 )
    {
      v99 = &v11[16 * *v33 - 16];
      v83 = (__int64)&v11[16 * v43 - 16];
      *(_OWORD *)v83 = *(_OWORD *)v99;
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) != 0 )
      {
        v43 = v79;
        v34 = v76;
        *(_WORD *)(v83 + 2) = RtlpUpdateTagEntry(a1, *(unsigned __int16 *)(v83 + 2), v76, v79, 4);
LABEL_119:
        v44 = a4;
        LOBYTE(v28) = v103;
LABEL_120:
        if ( v44 > v78 )
        {
          if ( (v28 & 8) != 0 )
          {
            v45 = a4;
            memset(&Src[v78], 0, a4 - v78);
LABEL_135:
            if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
            {
              *(_QWORD *)&v11[v45 + 16] = 0xABABABABABABABABuLL;
              *(_QWORD *)&v11[v45 + 24] = 0xABABABABABABABABuLL;
            }
            if ( v43 != v34 )
            {
              v49 = (unsigned __int8)v11[10];
              LOBYTE(v49) = v49 & 0xFE;
              if ( *v82 == 4 )
              {
                v50 = v11 - 48;
                v93 = NtCurrentPeb()->NtGlobalFlag;
                v43 = v79;
                if ( (v93 & 0x800) != 0 )
                  *((_WORD *)v50 + 9) = RtlpUpdateTagEntry(a1, *((unsigned __int16 *)v50 + 9), v76, v79, 5);
                v88[0] = &v50[v75];
                v86 = 16 * v76 - v75;
                v85 = RtlpSecMemFreeVirtualMemory(v75, v88, &v86, 0x4000LL);
                if ( v85 >= 0 )
                {
                  *((_QWORD *)v50 + 4) -= v86;
                  v11 = v74;
                }
                else
                {
                  if ( NtCurrentPeb()->Ldr )
                    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                  else
                    DbgPrint("HEAP: ");
                  DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v88[0], v86, v85);
                  RtlpBreakPointHeap();
                  v11 = v74;
                  v43 = v79;
                }
              }
              else
              {
                v51 = (unsigned __int16)*v90 - (unsigned __int64)(unsigned __int16)v43;
                v97 = v51;
                *v90 = v43;
                v52 = *(_DWORD *)(a1 + 112) & 0x40;
                v53 = v11[14];
                if ( v53 )
                  v54 = ((unsigned __int64)v11 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v53 << 16) + 0x10000;
                else
                  v54 = a1;
                v96 = v54;
                RtlpCreateSplitBlock(a1, v54, (_DWORD)v11 + 16 * v43, v49, v52 != 0, v43, v51);
              }
            }
            if ( *v82 != 4 )
            {
              v55 = v75 - v45;
              v90 = (_WORD *)(v75 - v45);
              if ( v75 - v45 >= 0x3F )
              {
                *(_QWORD *)&v11[16 * v43] = v55;
                *v82 = 63;
              }
              else
              {
                *v82 = v55;
              }
            }
            goto LABEL_193;
          }
          if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
          {
            v46 = v78 & 3;
            v94 = v46;
            if ( (v78 & 3) != 0 )
            {
              v46 = 4 - v46;
              v94 = v46;
            }
            v45 = a4;
            if ( a4 <= v46 + v78 )
              goto LABEL_135;
            if ( ((a4 - v46 - v78) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
              goto LABEL_135;
            v47 = (__int64)&v11[v46 + 16 + v78];
            v95 = v47;
            v48 = ((a4 - v46 - v78) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
            v87 = v48;
            if ( !v48 )
              goto LABEL_135;
            if ( (v47 & 4) != 0 )
            {
              *(_DWORD *)v47 = -1163005939;
              v87 = --v48;
              if ( !v48 )
                goto LABEL_135;
              v47 += 4LL;
              v95 = v47;
            }
            memset64((void *)v47, 0xBAADF00DBAADF00DuLL, v48 >> 1);
            if ( (v48 & 1) != 0 )
              *(_DWORD *)(v47 + 4 * v48 - 4) = -1163005939;
            goto LABEL_135;
          }
        }
        v45 = a4;
        goto LABEL_135;
      }
    }
    else
    {
      v92 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v92 & 0x800) != 0 )
      {
        v43 = v79;
        v11[11] = RtlpUpdateTagEntry(a1, (unsigned __int8)v11[11], *v33, v79, 4);
        LOBYTE(v28) = v103;
        v34 = v76;
        v44 = a4;
        goto LABEL_120;
      }
    }
    v34 = v76;
    v43 = v79;
    goto LABEL_119;
  }
  NtCurrentTeb()->LastStatusValue = -1073741811;
  v38 = NtCurrentTeb();
  v38->LastErrorValue = RtlNtStatusToDosError(-1073741811);
LABEL_193:
  if ( v81 && *(_DWORD *)(a1 + 124) )
  {
    v81[11] = v81[8] ^ v81[9] ^ v81[10];
    *((_DWORD *)v81 + 2) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v72 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  v69 = NtCurrentPeb()->SharedData;
  if ( v69 && *v69 )
    v70 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v70 = 2147353472LL;
  if ( !*(_BYTE *)v70 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
    return (__int64)Src;
  v71 = Src;
  if ( Src && (v103 & 0x800000) == 0 )
  {
    RtlpLogHeapReallocateEvent(a1, (_DWORD)Src, (_DWORD)v89, v78, a4, 3);
    return (__int64)Src;
  }
  return (__int64)v71;
}
