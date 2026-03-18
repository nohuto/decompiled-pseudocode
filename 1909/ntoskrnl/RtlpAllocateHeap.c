/*
 * XREFs of RtlpAllocateHeap @ 0x14030E330
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x1401109E4 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x14002232C (RtlpHpHeapCheckCommitLimit.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
 *     DbgPrint @ 0x140126B50 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x1401C0F50 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1401C1010 (ZwFreeVirtualMemory.c)
 *     RtlCompareMemoryUlong @ 0x1401CCDF0 (RtlCompareMemoryUlong.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlpCreateSplitBlock @ 0x14030F154 (RtlpCreateSplitBlock.c)
 *     RtlpExtendHeap @ 0x14030FF98 (RtlpExtendHeap.c)
 *     RtlpLogHeapFailure @ 0x140319BCC (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x140319C20 (RtlpAnalyzeHeapFailure.c)
 *     RtlpFindEntry @ 0x14031A304 (RtlpFindEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x14031A6F0 (RtlpHeapRemoveListEntry.c)
 *     RtlGetNtGlobalFlags @ 0x1408D30D0 (RtlGetNtGlobalFlags.c)
 */

_DWORD *__fastcall RtlpAllocateHeap(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        ULONG_PTR a4,
        char a5,
        _DWORD *a6)
{
  ULONG_PTR v6; // rdi
  __int16 v7; // bx
  char v8; // r13
  _DWORD *v10; // r14
  char v11; // r12
  unsigned __int64 v12; // r15
  __int64 v14; // rdi
  ULONG_PTR v15; // r15
  __int64 Entry; // rax
  __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  __int64 v19; // r13
  __int64 *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 **v23; // rdx
  __int64 *v24; // rcx
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r13
  __int64 *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 **v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdi
  char v35; // r13
  int v36; // edx
  SIZE_T v37; // rdi
  SIZE_T v38; // rax
  __int64 v39; // rdi
  ULONG_PTR v40; // rax
  ULONG_PTR v41; // rcx
  __int64 v42; // rdi
  char v43; // bl
  int v44; // r9d
  unsigned __int8 v45; // al
  unsigned __int64 v46; // rdx
  void *v47; // r8
  unsigned __int64 v48; // rdx
  _QWORD *v49; // rax
  int v50; // eax
  _DWORD *v51; // rdx
  unsigned __int64 v52; // r8
  __int64 *v53; // rax
  char AllocationType; // [rsp+20h] [rbp-118h]
  int v55; // [rsp+44h] [rbp-F4h]
  PVOID v56; // [rsp+50h] [rbp-E8h] BYREF
  int v57; // [rsp+58h] [rbp-E0h]
  int v58; // [rsp+5Ch] [rbp-DCh]
  ULONG_PTR v59; // [rsp+60h] [rbp-D8h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-D0h] BYREF
  char *v61; // [rsp+70h] [rbp-C8h]
  __int64 *v62; // [rsp+78h] [rbp-C0h]
  __int64 *v63; // [rsp+80h] [rbp-B8h]
  __int64 v64; // [rsp+88h] [rbp-B0h]
  unsigned __int64 v65; // [rsp+90h] [rbp-A8h]
  ULONG_PTR RegionSize; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-98h]
  unsigned __int64 v68; // [rsp+A8h] [rbp-90h]
  SIZE_T v69; // [rsp+B0h] [rbp-88h]
  unsigned __int64 v70; // [rsp+B8h] [rbp-80h]
  __int64 v71; // [rsp+C0h] [rbp-78h]
  _QWORD *v72; // [rsp+C8h] [rbp-70h]
  unsigned __int64 v73; // [rsp+D0h] [rbp-68h]
  __int64 v74; // [rsp+D8h] [rbp-60h]
  __int64 v75; // [rsp+E0h] [rbp-58h]
  __int64 v76; // [rsp+E8h] [rbp-50h]
  ULONG_PTR v77; // [rsp+F0h] [rbp-48h]
  ULONG_PTR v78; // [rsp+F8h] [rbp-40h]
  char v79; // [rsp+148h] [rbp+10h]
  ULONG_PTR v81; // [rsp+158h] [rbp+20h] BYREF

  v81 = a4;
  v79 = a2;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v64 = 0LL;
  v55 = 1;
  a5 = 0;
  v10 = 0LL;
  v61 = 0LL;
  v56 = 0LL;
  v57 = 0;
  if ( (a2 & 0x3C010F60) != 0 || a3 >= 0x80000000 )
  {
    v55 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    v14 = a3;
    if ( !a3 )
      v14 = 1LL;
    v6 = *(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v14);
    if ( v6 < 0x20 )
      v6 = 32LL;
    v81 = v6;
    v11 = (a2 >> 4) & 0xE0 | 1;
    if ( (a2 & 0x3C000100) != 0 || (v15 = v6, *(_QWORD *)(a1 + 328)) )
    {
      v11 = (a2 >> 4) & 0xE0 | 3;
      v15 = v6 + 16;
      v6 = v15;
      v81 = v15;
    }
    v12 = v15 >> 4;
  }
  else
  {
    v11 = 1;
    v12 = a4 >> 4;
    if ( a4 >> 4 < 2 )
    {
      v6 = a4 + 16;
      v81 = a4 + 16;
      v12 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (RtlGetNtGlobalFlags() & 0x800) == 0 )
    v11 |= 8u;
  if ( (v8 & 1) == 0 )
  {
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 352), 1u);
    v57 = 0;
    a5 = 1;
    v6 = v81;
  }
  if ( v12 > *(unsigned int *)(a1 + 148) )
  {
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    {
      v81 = v6 + 56;
      v50 = ExGenRandom(1);
      v58 = v50 & 0x7FFFFFFF;
      v59 = (unsigned __int64)(v50 & 0xF) << 12;
      BaseAddress = 0LL;
      RegionSize = v81 + 4096 + v59;
      LODWORD(v63) = 4;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) < 0 )
        goto LABEL_116;
      v56 = (char *)BaseAddress + v59;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                           (v81 + 4095) & 0xFFFFFFFFFFFFF000uLL,
                           *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664),
                           a1,
                           (unsigned __int64 *)(a1 + 376))
        && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v56, 0LL, &v81, 0x1000u, 4u) >= 0 )
      {
        *((_WORD *)v56 + 28) = v81 - v7;
        *((_BYTE *)v56 + 58) = v11 | 2;
        *((_QWORD *)v56 + 4) = v81;
        *((_QWORD *)v56 + 5) = RegionSize;
        *((_BYTE *)v56 + 63) = 4;
        *(_QWORD *)(a1 + 592) += v81;
        v51 = v56;
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_BYTE *)v56 + 59) = *((_BYTE *)v56 + 56) ^ *((_BYTE *)v56 + 57) ^ *((_BYTE *)v56 + 58);
          v51[14] ^= *(_DWORD *)(a1 + 136);
          v51 = v56;
        }
        v52 = a1 + 272;
        v53 = *(__int64 **)(a1 + 280);
        if ( *v53 == a1 + 272 )
        {
          *(_QWORD *)v51 = v52;
          *((_QWORD *)v51 + 1) = v53;
          *v53 = (__int64)v51;
          *(_QWORD *)(a1 + 280) = v51;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, v52, 0, *v53, 0LL);
        }
        v10 = (char *)v56 + 64;
        v61 = (char *)v56 + 64;
        goto LABEL_116;
      }
      v59 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v59, 0x8000u);
      v56 = 0LL;
      ++*(_DWORD *)(a1 + 632);
    }
    goto LABEL_115;
  }
  v73 = a1 + 336;
  Entry = RtlpFindEntry(a1, v12);
  v74 = Entry;
  if ( a1 + 336 == Entry )
  {
LABEL_40:
    v26 = RtlpExtendHeap(a1);
    v17 = v26;
    v67 = v26;
    if ( v26 )
    {
      v27 = v26 + 16;
      v28 = *(_QWORD *)(v26 + 16);
      v29 = *(__int64 **)(v26 + 24);
      v62 = v29;
      v30 = *v29;
      v31 = *(_QWORD *)(v28 + 8);
      if ( *v29 != v31 || v30 != v27 )
      {
        RtlpLogHeapFailure(13, a1, v27, v31, v30, 0LL);
        goto LABEL_116;
      }
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v17 + 8);
      v32 = *(__int64 ***)(a1 + 312);
      if ( v32 )
      {
        v33 = *(unsigned __int16 *)(v17 + 8);
        while ( 1 )
        {
          v34 = *((unsigned int *)v32 + 2);
          if ( v33 < v34 )
            break;
          if ( !*v32 )
          {
            v33 = (unsigned int)(v34 - 1);
            break;
          }
          v32 = (__int64 **)*v32;
        }
        v68 = v33;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v32, v27, v27, v33, *(unsigned __int16 *)(v17 + 8));
        v29 = v62;
      }
      *v29 = v28;
      *(_QWORD *)(v28 + 8) = v29;
LABEL_50:
      v35 = *(_BYTE *)(v17 + 10);
      v36 = v55;
      if ( !v55 && (v35 & 4) != 0 )
      {
        v37 = 16LL * *(unsigned __int16 *)(v17 + 8) - 32;
        v69 = v37;
        if ( (v35 & 2) != 0 && v37 > 4 )
        {
          v37 -= 4LL;
          v69 = v37;
        }
        v38 = RtlCompareMemoryUlong((PVOID)(v17 + 32), v37, 0xFEEEFEEE);
        if ( v38 != v37 )
        {
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v17,
            (const void *)(v17 + v38 + 32));
          if ( (_BYTE)KdDebuggerEnabled )
            __debugbreak();
        }
        v36 = 0;
      }
      v75 = v17;
      if ( (*(_BYTE *)(v17 + 10) & 1) != 0 )
      {
        RtlpLogHeapFailure(3, a1, v17, 0, 0LL, 0LL);
        goto LABEL_116;
      }
      *(_BYTE *)(v17 + 10) = v11;
      v39 = *(unsigned __int16 *)(v17 + 8) - v12;
      v76 = v39;
      *(_WORD *)(v17 + 8) = v12;
      v40 = v81 - a3;
      v77 = v81 - a3;
      if ( v81 - a3 >= 0x3F )
      {
        *(_QWORD *)(v17 + 16 * v12) = v40;
        *(_BYTE *)(v17 + 15) = 63;
      }
      else
      {
        *(_BYTE *)(v17 + 15) = v40;
      }
      *(_BYTE *)(v17 + 11) = 0;
      if ( v39 )
      {
        if ( v39 == 1 )
        {
          ++*(_WORD *)(v17 + 8);
          v41 = v81 - a3 + 16;
          v78 = v41;
          if ( v41 >= 0x3F )
          {
            *(_QWORD *)(v17 + 16 * (v12 + 1)) = v41;
            *(_BYTE *)(v17 + 15) = 63;
          }
          else
          {
            *(_BYTE *)(v17 + 15) = v41;
          }
        }
        else
        {
          v44 = v36 ^ 1;
          v45 = *(_BYTE *)(v17 + 14);
          if ( v45 )
            v46 = (v17 & 0xFFFFFFFFFFFF0000uLL) + ((1LL - v45) << 16);
          else
            v46 = a1;
          v70 = v46;
          AllocationType = v44;
          LOBYTE(v44) = v35;
          if ( !(unsigned __int8)RtlpCreateSplitBlock(a1, v46, 16 * (int)v12 + (int)v17, v44, AllocationType, v12, v39) )
            goto LABEL_116;
        }
      }
      v10 = (_DWORD *)(v17 + 16);
      v61 = (char *)(v17 + 16);
      v42 = 16LL * *(unsigned __int16 *)(v17 + 8);
      v64 = v42;
      if ( (*(_BYTE *)(v17 + 15) & 0x3F) == 0x3F )
      {
        v42 -= 8LL;
        v64 = v42;
      }
      if ( v55 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v17 + 11) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
          *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        v43 = a5;
        if ( a5 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
          a5 = 0;
          v43 = 0;
        }
        if ( (v79 & 8) != 0 )
          memset(v10, 0, v42 - 8);
        goto LABEL_117;
      }
      if ( (v79 & 8) != 0 )
      {
        memset((void *)(v17 + 16), 0, v42 - 8);
LABEL_93:
        if ( (*(_DWORD *)(a1 + 112) & 0x20) != 0 )
        {
          *(_QWORD *)((char *)v10 + a3) = 0xABABABABABABABABuLL;
          *(_QWORD *)((char *)v10 + a3 + 8) = 0xABABABABABABABABuLL;
          *(_BYTE *)(v17 + 10) |= 4u;
        }
        *(_BYTE *)(v17 + 11) = 0;
        if ( (*(_BYTE *)(v17 + 10) & 2) != 0 )
        {
          if ( *(_BYTE *)(v17 + 15) == 4 )
            v49 = (_QWORD *)(v17 - 32);
          else
            v49 = (_QWORD *)(v17 + 16LL * *(unsigned __int16 *)(v17 + 8) - 16);
          v72 = v49;
          *v49 = 0LL;
          v49[1] = 0LL;
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v17 + 11) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
          *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        goto LABEL_116;
      }
      if ( (*(_DWORD *)(a1 + 112) & 0x40) == 0 )
        goto LABEL_93;
      v47 = (void *)(v17 + 16);
      v71 = v17 + 16;
      v48 = (a3 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      v65 = v48;
      if ( !v48 )
        goto LABEL_93;
      if ( ((unsigned __int8)v10 & 4) != 0 )
      {
        *v10 = -1163005939;
        v65 = --v48;
        if ( !v48 )
          goto LABEL_93;
        v47 = (void *)(v17 + 20);
        v71 = v17 + 20;
      }
      memset64(v47, 0xBAADF00DBAADF00DuLL, v48 >> 1);
      if ( (v48 & 1) != 0 )
        *((_DWORD *)v47 + v48 - 1) = -1163005939;
      goto LABEL_93;
    }
LABEL_115:
    v10 = 0LL;
    v61 = 0LL;
    goto LABEL_116;
  }
  v17 = Entry - 16;
  v67 = Entry - 16;
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v17 + 11) != (*(_BYTE *)(v17 + 8) ^ (unsigned __int8)(*(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v17);
  }
  v18 = *(unsigned __int16 *)(v17 + 8);
  if ( v18 < v12 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v17 + 11) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
      *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    goto LABEL_40;
  }
  v19 = *(_QWORD *)(v17 + 16);
  v20 = *(__int64 **)(v17 + 24);
  v63 = v20;
  v21 = *v20;
  v22 = *(_QWORD *)(v19 + 8);
  if ( *v20 == v22 && v21 == v17 + 16 )
  {
    *(_QWORD *)(a1 + 192) -= v18;
    v23 = *(__int64 ***)(a1 + 312);
    if ( v23 )
    {
      v24 = (__int64 *)*(unsigned __int16 *)(v17 + 8);
      while ( 1 )
      {
        v25 = *((unsigned int *)v23 + 2);
        if ( (unsigned __int64)v24 < v25 )
          break;
        if ( !*v23 )
        {
          v24 = (__int64 *)(unsigned int)(v25 - 1);
          break;
        }
        v23 = (__int64 **)*v23;
      }
      v62 = v24;
      RtlpHeapRemoveListEntry(a1, (_DWORD)v23, v17 + 16, v17 + 16, (_DWORD)v24, *(unsigned __int16 *)(v17 + 8));
      v20 = v63;
    }
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
    goto LABEL_50;
  }
  RtlpLogHeapFailure(13, a1, v17 + 16, v22, v21, 0LL);
LABEL_116:
  v43 = a5;
LABEL_117:
  if ( v43 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  return v10;
}
