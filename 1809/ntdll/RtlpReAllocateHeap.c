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
 *     RtlpUpdateHeapRates @ 0x18007F5DC (RtlpUpdateHeapRates.c)
 *     RtlpLogHeapFailure @ 0x18009F7AC (RtlpLogHeapFailure.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpUpdateTagEntry @ 0x1800F3FEC (RtlpUpdateTagEntry.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLogHeapReallocateEvent @ 0x180105F78 (RtlpLogHeapReallocateEvent.c)
 *     RtlDebugReAllocateHeap @ 0x1801081A8 (RtlDebugReAllocateHeap.c)
 *     RtlpBreakPointHeap @ 0x180108DD8 (RtlpBreakPointHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
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
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // rsi
  size_t v49; // rax
  __int64 v50; // r8
  unsigned __int64 v51; // rdx
  int v52; // r9d
  char *v53; // rbx
  __int64 v54; // rcx
  int v55; // edi
  unsigned __int8 v56; // al
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rax
  char *v59; // rcx
  unsigned int v60; // esi
  char v61; // al
  __int16 v62; // cx
  unsigned __int8 v63; // al
  char *v64; // r12
  char *v65; // r15
  int v66; // edx
  _QWORD *ExtraStuffPointer; // rdi
  _DWORD *v68; // rdx
  int v69; // edi
  size_t v70; // rcx
  _DWORD *v71; // rcx
  __int64 v72; // rcx
  char *v73; // rdi
  char v74; // [rsp+40h] [rbp-138h]
  char *v75; // [rsp+48h] [rbp-130h]
  char *v76; // [rsp+48h] [rbp-130h]
  unsigned __int64 v77; // [rsp+50h] [rbp-128h]
  __int64 v78; // [rsp+58h] [rbp-120h]
  _DWORD *v79; // [rsp+58h] [rbp-120h]
  unsigned __int64 v80; // [rsp+60h] [rbp-118h]
  int v81; // [rsp+68h] [rbp-110h]
  size_t v82; // [rsp+68h] [rbp-110h]
  void *v83; // [rsp+80h] [rbp-F8h]
  char *v84; // [rsp+88h] [rbp-F0h]
  __int64 v85; // [rsp+90h] [rbp-E8h]
  _QWORD *v86; // [rsp+90h] [rbp-E8h]
  _BYTE *v87; // [rsp+98h] [rbp-E0h]
  int v88; // [rsp+A0h] [rbp-D8h]
  unsigned __int64 v89; // [rsp+B0h] [rbp-C8h] BYREF
  char *v90; // [rsp+B8h] [rbp-C0h]
  unsigned __int64 v91; // [rsp+C0h] [rbp-B8h]
  const void *v92[2]; // [rsp+C8h] [rbp-B0h] BYREF
  char *v93; // [rsp+D8h] [rbp-A0h]
  unsigned int NtGlobalFlag; // [rsp+E0h] [rbp-98h]
  unsigned int v95; // [rsp+E4h] [rbp-94h]
  unsigned int v96; // [rsp+E8h] [rbp-90h]
  size_t v97; // [rsp+F0h] [rbp-88h]
  __int64 v98; // [rsp+F8h] [rbp-80h]
  unsigned __int64 v99; // [rsp+100h] [rbp-78h]
  __int64 v100; // [rsp+108h] [rbp-70h]
  int v101; // [rsp+110h] [rbp-68h]
  char *v102; // [rsp+118h] [rbp-60h]
  int v103; // [rsp+128h] [rbp-50h]
  int v104; // [rsp+138h] [rbp-40h]
  int v106; // [rsp+188h] [rbp+10h]
  char *Src; // [rsp+190h] [rbp+18h]

  Src = a3;
  v7 = 0LL;
  v84 = 0LL;
  v74 = 0;
  v93 = 0LL;
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
    v75 = v12;
  }
  else
  {
    v75 = Src - 16;
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
        v16 = *((_DWORD *)v12 + 2) ^ RtlpLFHKey ^ ((unsigned __int64)v12 >> 4) ^ a1;
        if ( (_WORD)v16 )
          v17 = 0LL;
        else
          v17 = *(_QWORD *)&v12[-(v16 >> 12)];
        v18 = *(_WORD *)(v17 + 36);
        v19 = *v13;
        if ( *v13 == 5 )
        {
          v20 = *((unsigned __int16 *)v75 + 6) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
        }
        else if ( (v19 & 0x40) != 0 )
        {
          v20 = *(unsigned __int16 *)&v75[16 * (v19 & 0x3F) + 12];
        }
        else if ( (v19 & 0x3F) == 0x3F )
        {
          if ( v19 >= 0 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v22 = *v14;
              v101 = v22;
              if ( (v22 & *(_DWORD *)(a1 + 124)) != 0 )
                v101 = *(_DWORD *)(a1 + 136) ^ v22;
              v21 = v101;
            }
            else
            {
              v21 = *(_WORD *)v14;
            }
          }
          else
          {
            if ( !(*(_WORD *)v14 ^ (unsigned __int16)(RtlpLFHKey ^ v15 ^ a1)) )
              v7 = *(_QWORD *)&v75[-((*v14 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)v15 ^ (unsigned int)a1) >> 12)];
            v21 = *(_WORD *)(v7 + 36);
          }
          v20 = *(_QWORD *)&v75[16 * v21];
        }
        else
        {
          v20 = v19 & 0x3F;
        }
        v23 = 16LL * v18 - v20;
        v81 = 16 * v18 - v20;
        Heap = (void *)RtlAllocateHeap(a1, a2 & 0xC003FFFF, a4);
        v83 = Heap;
        if ( Heap )
        {
          if ( a4 < v23 )
            v23 = a4;
          memmove(Heap, Src, v23);
          RtlFreeHeap(a1, a2 & 0xC003FFFF, Src);
        }
        SharedData = NtCurrentPeb()->SharedData;
        if ( SharedData && *SharedData )
          v26 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v26 = 2147353472LL;
        if ( !*(_BYTE *)v26 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
          return (__int64)v83;
        v27 = v83;
        if ( v83 )
        {
          RtlpLogHeapReallocateEvent(a1, (_DWORD)v83, (_DWORD)Src, v81, a4, 2);
          return (__int64)v83;
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
  v106 = v28;
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
  v77 = v30;
  LODWORD(v82) = 0;
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
        goto LABEL_190;
      }
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      RtlpUpdateHeapRates(a1, 1LL);
    }
    v74 = 1;
    v28 ^= 1u;
    v106 = v28;
  }
  _m_prefetchw(v11);
  if ( v11[15] == 5 )
    v11 -= 16 * (unsigned __int8)v11[14];
  v76 = v11;
  v32 = v11;
  v90 = v11;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v33 = *((_DWORD *)v11 + 2) ^ *(_DWORD *)(a1 + 136);
    *((_DWORD *)v11 + 2) = v33;
    if ( HIBYTE(v33) != ((unsigned __int8)v33 ^ (unsigned __int8)(BYTE1(v33) ^ BYTE2(v33))) )
    {
      RtlpAnalyzeHeapFailure(a1, v11);
      v32 = v11;
    }
  }
  v84 = v11;
  v34 = *(__int64 ***)(a1 + 312);
  do
  {
    if ( *((unsigned __int16 *)v11 + 4) < (unsigned __int64)*((unsigned int *)v34 + 2) )
      break;
    v34 = (__int64 **)*v34;
  }
  while ( v34 );
  if ( (v28 & 0x3C000100) != 0 || *(_QWORD *)(a1 + 328) || (v11[10] & 2) != 0 )
    v77 += 16LL;
  v35 = v11 + 15;
  v87 = v11 + 15;
  v36 = v11[15];
  if ( (v36 & 0x3F) != 0 )
  {
    if ( v36 == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v38 = *((_DWORD *)v32 + 2);
        v103 = v38;
        if ( (v38 & *(_DWORD *)(a1 + 124)) != 0 )
        {
          v103 = v38 ^ *(_DWORD *)(a1 + 136);
          LOWORD(v38) = v103;
        }
        v39 = *((_WORD *)v11 + 4);
        v28 = v106;
      }
      else
      {
        v39 = *((_WORD *)v32 + 4);
        LOWORD(v38) = v39;
      }
      v82 = *((_QWORD *)v11 - 2) - (unsigned __int16)v38;
      v40 = (v82 + v39) >> 4;
      v80 = v40;
      v77 = (v77 + 4151) & 0xFFFFFFFFFFFFF000uLL;
      v35 = v11 + 15;
    }
    else
    {
      v40 = *((unsigned __int16 *)v32 + 4);
      v80 = v40;
      if ( v36 == 5 )
      {
        v41 = *((unsigned __int16 *)v11 + 6) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
      }
      else if ( (v36 & 0x40) != 0 )
      {
        v41 = *(unsigned __int16 *)&v11[16 * (v36 & 0x3F) + 12];
      }
      else if ( (v36 & 0x3F) == 0x3F )
      {
        if ( v36 >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v42 = *((_DWORD *)v11 + 2);
            v104 = v42;
            if ( (v42 & *(_DWORD *)(a1 + 124)) != 0 )
            {
              v104 = v42 ^ *(_DWORD *)(a1 + 136);
              LOWORD(v42) = v104;
            }
            v28 = v106;
          }
          else
          {
            LOWORD(v42) = *((_WORD *)v11 + 4);
          }
        }
        else
        {
          if ( *((_WORD *)v11 + 4) ^ (unsigned __int16)(RtlpLFHKey ^ a1 ^ ((unsigned __int64)v11 >> 4)) )
            LOWORD(v42) = MEMORY[0x24];
          else
            LOWORD(v42) = *(_WORD *)(*(_QWORD *)&v11[-((*((_DWORD *)v11 + 2) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ (unsigned int)((unsigned __int64)v11 >> 4)) >> 12)]
                                   + 36LL);
          v28 = v106;
          v40 = *((unsigned __int16 *)v32 + 4);
        }
        v41 = *(_QWORD *)&v11[16 * (unsigned __int16)v42];
      }
      else
      {
        v41 = v11[15] & 0x3F;
      }
      v82 = 16 * v40 - v41;
      if ( v40 < *(unsigned __int16 *)(a1 + 432) )
      {
        v43 = *(_BYTE *)((v40 >> 3) + a1 + 434);
        v44 = 1 << (v40 & 7);
        v40 = v80;
        if ( ((unsigned __int8)v44 & v43) == 0 )
        {
          v45 = (_WORD *)(*(_QWORD *)(a1 + 424) + 2 * v80);
          if ( *v45 > 1u )
            --*v45;
        }
        v28 = v106;
      }
    }
    v46 = v77 >> 4;
    v78 = v77 >> 4;
    if ( v77 >> 4 > v40 )
    {
      if ( *v35 == 4 || !(unsigned __int8)RtlpGrowBlockInPlace(a1, v28, (_DWORD)v11, a4, v77 >> 4) )
      {
        if ( (v28 & 0x10) != 0 )
        {
          Src = 0LL;
        }
        else
        {
          v60 = v28 & 0xC003FFFF;
          v106 = v60;
          v61 = v11[10];
          if ( (v61 & 2) != 0 )
          {
            v60 = (16 * (v61 & 0xE0 | 0x10)) | v60 & 0xFFFFF1FF;
            v106 = v60;
            v62 = *(_WORD *)(RtlpGetExtraStuffPointer(v11) + 2);
            if ( v62 > 0 )
            {
              v60 |= (unsigned __int16)v62 << 18;
              v106 = v60;
            }
          }
          else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          {
            v63 = v11[11];
            if ( v63 )
            {
              v60 |= v63 << 18;
              v106 = v60;
            }
          }
          v79 = (_DWORD *)(a1 + 124);
          if ( *(_DWORD *)(a1 + 124) )
          {
            v11[11] = v11[8] ^ v11[9] ^ v11[10];
            *((_DWORD *)v11 + 2) ^= *(_DWORD *)(a1 + 136);
          }
          v84 = 0LL;
          v64 = (char *)RtlAllocateHeap(a1, v60, a4);
          if ( v64 )
          {
            v65 = v64 - 16;
            _m_prefetchw(v64 - 16);
            if ( *(v64 - 1) == 5 )
              v65 -= 16 * (unsigned __int8)v65[14];
            v92[1] = v65;
            if ( *v79 )
            {
              v66 = *((_DWORD *)v65 + 2) ^ *(_DWORD *)(a1 + 136);
              *((_DWORD *)v65 + 2) = v66;
              if ( HIBYTE(v66) != ((unsigned __int8)v66 ^ (unsigned __int8)(BYTE1(v66) ^ BYTE2(v66))) )
                RtlpAnalyzeHeapFailure(a1, v65);
            }
            if ( (v65[10] & 2) != 0 )
            {
              ExtraStuffPointer = (_QWORD *)RtlpGetExtraStuffPointer(v65);
              v86 = ExtraStuffPointer;
              if ( *v68 )
              {
                v69 = *((_DWORD *)v11 + 2) ^ *(_DWORD *)(a1 + 136);
                *((_DWORD *)v11 + 2) = v69;
                if ( HIBYTE(v69) != ((unsigned __int8)v69 ^ (unsigned __int8)(BYTE1(v69) ^ BYTE2(v69))) )
                  RtlpAnalyzeHeapFailure(a1, v11);
                ExtraStuffPointer = v86;
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
              if ( *(_DWORD *)(a1 + 124) )
              {
                v11[11] = v11[8] ^ v11[9] ^ v11[10];
                *((_DWORD *)v11 + 2) ^= *(_DWORD *)(a1 + 136);
              }
            }
            if ( *v79 )
            {
              v65[11] = v65[8] ^ v65[9] ^ v65[10];
              *((_DWORD *)v65 + 2) ^= *(_DWORD *)(a1 + 136);
            }
            v84 = 0LL;
            if ( v74 )
            {
              RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
              v74 = 0;
              v60 &= ~1u;
              v106 = v60;
            }
            v70 = v82;
            if ( a4 < v82 )
              v70 = a4;
            memmove(v64, Src, v70);
            RtlFreeHeap(a1, v60, Src);
          }
          v93 = Src;
          Src = v64;
        }
      }
      goto LABEL_190;
    }
    if ( (v77 >> 4) + 1 == v40 )
    {
      v46 = (v77 >> 4) + 1;
      v78 = v46;
      v77 += 16LL;
    }
    if ( *v35 == 4 )
    {
      v47 = a4;
      *((_WORD *)v11 + 4) = v77 - a4;
      goto LABEL_118;
    }
    if ( (v11[10] & 2) != 0 )
    {
      v102 = &v11[16 * *((unsigned __int16 *)v11 + 4) - 16];
      v85 = (__int64)&v11[16 * v46 - 16];
      *(_OWORD *)v85 = *(_OWORD *)v102;
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) != 0 )
      {
        v46 = v78;
        v40 = v80;
        *(_WORD *)(v85 + 2) = RtlpUpdateTagEntry(a1, *(unsigned __int16 *)(v85 + 2), v80, v78, 4);
LABEL_117:
        v47 = a4;
        LOBYTE(v28) = v106;
LABEL_118:
        if ( v47 > v82 )
        {
          if ( (v28 & 8) != 0 )
          {
            v48 = a4;
            memset(&Src[v82], 0, a4 - v82);
LABEL_133:
            if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
            {
              *(_QWORD *)&v11[v48 + 16] = 0xABABABABABABABABuLL;
              *(_QWORD *)&v11[v48 + 24] = 0xABABABABABABABABuLL;
            }
            if ( v46 != v40 )
            {
              v52 = (unsigned __int8)v11[10];
              LOBYTE(v52) = v52 & 0xFE;
              if ( *v87 == 4 )
              {
                v53 = v11 - 48;
                v96 = NtCurrentPeb()->NtGlobalFlag;
                v46 = v78;
                if ( (v96 & 0x800) != 0 )
                  *((_WORD *)v53 + 9) = RtlpUpdateTagEntry(a1, *((unsigned __int16 *)v53 + 9), v80, v78, 5);
                v92[0] = &v53[v77];
                v89 = 16 * v80 - v77;
                v88 = RtlpSecMemFreeVirtualMemory(v77, v92, &v89, 0x4000LL);
                if ( v88 >= 0 )
                {
                  *((_QWORD *)v53 + 4) -= v89;
                  v11 = v76;
                }
                else
                {
                  if ( NtCurrentPeb()->Ldr )
                    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                  else
                    DbgPrint("HEAP: ");
                  DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v92[0], v89, v88);
                  RtlpBreakPointHeap();
                  v11 = v76;
                  v46 = v78;
                }
              }
              else
              {
                v54 = *((unsigned __int16 *)v11 + 4) - (unsigned __int64)(unsigned __int16)v46;
                v100 = v54;
                *((_WORD *)v11 + 4) = v46;
                v55 = *(_DWORD *)(a1 + 112) & 0x40;
                v56 = v11[14];
                if ( v56 )
                  v57 = ((unsigned __int64)v11 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v56 << 16) + 0x10000;
                else
                  v57 = a1;
                v99 = v57;
                RtlpCreateSplitBlock(a1, v57, (_DWORD)v11 + 16 * v46, v52, v55 != 0, v46, v54);
              }
            }
            if ( *v87 != 4 )
            {
              v58 = v77 - v48;
              v59 = v90;
              if ( v77 - v48 >= 0x3F )
              {
                *(_QWORD *)&v11[16 * v46] = v58;
                v59[15] = 63;
              }
              else
              {
                v90[15] = v58;
              }
            }
            goto LABEL_190;
          }
          if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
          {
            v49 = v82 & 3;
            v97 = v49;
            if ( (v82 & 3) != 0 )
            {
              v49 = 4 - v49;
              v97 = v49;
            }
            v48 = a4;
            if ( a4 <= v49 + v82 )
              goto LABEL_133;
            if ( ((a4 - v49 - v82) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
              goto LABEL_133;
            v50 = (__int64)&v11[v49 + 16 + v82];
            v98 = v50;
            v51 = ((a4 - v49 - v82) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
            v91 = v51;
            if ( !v51 )
              goto LABEL_133;
            if ( (v50 & 4) != 0 )
            {
              *(_DWORD *)v50 = -1163005939;
              v91 = --v51;
              if ( !v51 )
                goto LABEL_133;
              v50 += 4LL;
              v98 = v50;
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
      v95 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v95 & 0x800) != 0 )
      {
        v46 = v78;
        v11[11] = RtlpUpdateTagEntry(a1, (unsigned __int8)v11[11], *((unsigned __int16 *)v11 + 4), v78, 4);
        LOBYTE(v28) = v106;
        v40 = v80;
        v47 = a4;
        goto LABEL_118;
      }
    }
    v40 = v80;
    v46 = v78;
    goto LABEL_117;
  }
  NtCurrentTeb()->LastStatusValue = -1073741811;
  v37 = NtCurrentTeb();
  v37->LastErrorValue = RtlNtStatusToDosError(-1073741811);
LABEL_190:
  if ( v84 && *(_DWORD *)(a1 + 124) )
  {
    v84[11] = v84[8] ^ v84[9] ^ v84[10];
    *((_DWORD *)v84 + 2) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v74 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  v71 = NtCurrentPeb()->SharedData;
  if ( v71 && *v71 )
    v72 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v72 = 2147353472LL;
  if ( !*(_BYTE *)v72 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
    return (__int64)Src;
  v73 = Src;
  if ( Src && (v106 & 0x800000) == 0 )
  {
    RtlpLogHeapReallocateEvent(a1, (_DWORD)Src, (_DWORD)v93, v82, a4, 3);
    return (__int64)Src;
  }
  return (__int64)v73;
}
