/*
 * XREFs of RtlpAllocateHeap @ 0x1402EFF20
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x14011F024 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x14000C54C (RtlpHpHeapCheckCommitLimit.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     DbgPrint @ 0x1401263A0 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x1401B85F0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1401B86B0 (ZwFreeVirtualMemory.c)
 *     RtlCompareMemoryUlong @ 0x1401C5DB0 (RtlCompareMemoryUlong.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlpCreateSplitBlock @ 0x1402F0D54 (RtlpCreateSplitBlock.c)
 *     RtlpExtendHeap @ 0x1402F1BB0 (RtlpExtendHeap.c)
 *     RtlpLogHeapFailure @ 0x1402FBA28 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402FBA7C (RtlpAnalyzeHeapFailure.c)
 *     RtlpFindEntry @ 0x1402FC158 (RtlpFindEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x1402FC548 (RtlpHeapRemoveListEntry.c)
 *     RtlGetNtGlobalFlags @ 0x140896B00 (RtlGetNtGlobalFlags.c)
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
  int v18; // edx
  unsigned __int64 v19; // rcx
  __int64 v20; // r13
  __int64 *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 **v24; // rdx
  __int64 *v25; // rcx
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r13
  __int64 *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 **v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  char v36; // r13
  int v37; // edx
  SIZE_T v38; // rdi
  SIZE_T v39; // rax
  __int64 v40; // rdi
  ULONG_PTR v41; // rax
  ULONG_PTR v42; // rcx
  unsigned __int16 v43; // cx
  __int64 v44; // rdi
  __int16 v45; // dx
  char v46; // bl
  int v47; // r9d
  unsigned __int8 v48; // al
  unsigned __int64 v49; // rdx
  void *v50; // r8
  unsigned __int64 v51; // rdx
  _QWORD *v52; // rax
  int v53; // eax
  _DWORD *v54; // rdx
  unsigned __int64 v55; // r8
  __int64 *v56; // rax
  char AllocationType; // [rsp+20h] [rbp-118h]
  int v58; // [rsp+44h] [rbp-F4h]
  PVOID v59; // [rsp+50h] [rbp-E8h] BYREF
  int v60; // [rsp+58h] [rbp-E0h]
  int v61; // [rsp+5Ch] [rbp-DCh]
  ULONG_PTR v62; // [rsp+60h] [rbp-D8h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-D0h] BYREF
  char *v64; // [rsp+70h] [rbp-C8h]
  __int64 *v65; // [rsp+78h] [rbp-C0h]
  __int64 *v66; // [rsp+80h] [rbp-B8h]
  __int64 v67; // [rsp+88h] [rbp-B0h]
  unsigned __int64 v68; // [rsp+90h] [rbp-A8h]
  ULONG_PTR RegionSize; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v70; // [rsp+A0h] [rbp-98h]
  unsigned __int64 v71; // [rsp+A8h] [rbp-90h]
  SIZE_T v72; // [rsp+B0h] [rbp-88h]
  unsigned __int64 v73; // [rsp+B8h] [rbp-80h]
  __int64 v74; // [rsp+C0h] [rbp-78h]
  _QWORD *v75; // [rsp+C8h] [rbp-70h]
  unsigned __int64 v76; // [rsp+D0h] [rbp-68h]
  __int64 v77; // [rsp+D8h] [rbp-60h]
  __int64 v78; // [rsp+E0h] [rbp-58h]
  __int64 v79; // [rsp+E8h] [rbp-50h]
  ULONG_PTR v80; // [rsp+F0h] [rbp-48h]
  ULONG_PTR v81; // [rsp+F8h] [rbp-40h]
  char v82; // [rsp+148h] [rbp+10h]
  ULONG_PTR v84; // [rsp+158h] [rbp+20h] BYREF

  v84 = a4;
  v82 = a2;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v67 = 0LL;
  v58 = 1;
  a5 = 0;
  v10 = 0LL;
  v64 = 0LL;
  v59 = 0LL;
  v60 = 0;
  if ( (a2 & 0x3C010F60) != 0 || a3 >= 0x80000000 )
  {
    v58 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    v14 = a3;
    if ( !a3 )
      v14 = 1LL;
    v6 = *(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v14);
    if ( v6 < 0x20 )
      v6 = 32LL;
    v84 = v6;
    v11 = (a2 >> 4) & 0xE0 | 1;
    if ( (a2 & 0x3C000100) != 0 || (v15 = v6, *(_QWORD *)(a1 + 328)) )
    {
      v11 = (a2 >> 4) & 0xE0 | 3;
      v15 = v6 + 16;
      v6 = v15;
      v84 = v15;
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
      v84 = a4 + 16;
      v12 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (RtlGetNtGlobalFlags() & 0x800) == 0 )
    v11 |= 8u;
  if ( (v8 & 1) == 0 )
  {
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 352), 1u);
    v60 = 0;
    a5 = 1;
    v6 = v84;
  }
  if ( v12 > *(unsigned int *)(a1 + 148) )
  {
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    {
      v84 = v6 + 56;
      v53 = ExGenRandom(1);
      v61 = v53 & 0x7FFFFFFF;
      v62 = (unsigned __int64)(v53 & 0xF) << 12;
      BaseAddress = 0LL;
      RegionSize = v84 + 4096 + v62;
      LODWORD(v66) = 4;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) < 0 )
        goto LABEL_116;
      v59 = (char *)BaseAddress + v62;
      if ( (unsigned int)RtlpHpHeapCheckCommitLimit(
                           (v84 + 4095) & 0xFFFFFFFFFFFFF000uLL,
                           *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664),
                           a1,
                           (unsigned __int64 *)(a1 + 376))
        && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v59, 0LL, &v84, 0x1000u, 4u) >= 0 )
      {
        *((_WORD *)v59 + 28) = v84 - v7;
        *((_BYTE *)v59 + 58) = v11 | 2;
        *((_QWORD *)v59 + 4) = v84;
        *((_QWORD *)v59 + 5) = RegionSize;
        *((_BYTE *)v59 + 63) = 4;
        *(_QWORD *)(a1 + 592) += v84;
        v54 = v59;
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_BYTE *)v59 + 59) = *((_BYTE *)v59 + 56) ^ *((_BYTE *)v59 + 57) ^ *((_BYTE *)v59 + 58);
          v54[14] ^= *(_DWORD *)(a1 + 136);
          v54 = v59;
        }
        v55 = a1 + 272;
        v56 = *(__int64 **)(a1 + 280);
        if ( *v56 == a1 + 272 )
        {
          *(_QWORD *)v54 = v55;
          *((_QWORD *)v54 + 1) = v56;
          *v56 = (__int64)v54;
          *(_QWORD *)(a1 + 280) = v54;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, v55, 0, *v56, 0LL);
        }
        v10 = (char *)v59 + 64;
        v64 = (char *)v59 + 64;
        goto LABEL_116;
      }
      v62 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v62, 0x8000u);
      v59 = 0LL;
      ++*(_DWORD *)(a1 + 632);
    }
    goto LABEL_115;
  }
  v76 = a1 + 336;
  Entry = RtlpFindEntry(a1, v12);
  v77 = Entry;
  if ( a1 + 336 == Entry )
  {
LABEL_40:
    v27 = RtlpExtendHeap(a1);
    v17 = v27;
    v70 = v27;
    if ( v27 )
    {
      v28 = v27 + 16;
      v29 = *(_QWORD *)(v27 + 16);
      v30 = *(__int64 **)(v27 + 24);
      v65 = v30;
      v31 = *v30;
      v32 = *(_QWORD *)(v29 + 8);
      if ( *v30 != v32 || v31 != v28 )
      {
        RtlpLogHeapFailure(13, a1, v28, v32, v31, 0LL);
        goto LABEL_116;
      }
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v17 + 8);
      v33 = *(__int64 ***)(a1 + 312);
      if ( v33 )
      {
        v34 = *(unsigned __int16 *)(v17 + 8);
        while ( 1 )
        {
          v35 = *((unsigned int *)v33 + 2);
          if ( v34 < v35 )
            break;
          if ( !*v33 )
          {
            v34 = (unsigned int)(v35 - 1);
            break;
          }
          v33 = (__int64 **)*v33;
        }
        v71 = v34;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v33, v28, v28, v34, *(unsigned __int16 *)(v17 + 8));
        v30 = v65;
      }
      *v30 = v29;
      *(_QWORD *)(v29 + 8) = v30;
LABEL_50:
      v36 = *(_BYTE *)(v17 + 10);
      v37 = v58;
      if ( !v58 && (v36 & 4) != 0 )
      {
        v38 = 16LL * *(unsigned __int16 *)(v17 + 8) - 32;
        v72 = v38;
        if ( (v36 & 2) != 0 && v38 > 4 )
        {
          v38 -= 4LL;
          v72 = v38;
        }
        v39 = RtlCompareMemoryUlong((PVOID)(v17 + 32), v38, 0xFEEEFEEE);
        if ( v39 != v38 )
        {
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v17,
            (const void *)(v17 + v39 + 32));
          if ( (_BYTE)KdDebuggerEnabled )
            __debugbreak();
        }
        v37 = 0;
      }
      v78 = v17;
      if ( (*(_BYTE *)(v17 + 10) & 1) != 0 )
      {
        RtlpLogHeapFailure(3, a1, v17, 0, 0LL, 0LL);
        goto LABEL_116;
      }
      *(_BYTE *)(v17 + 10) = v11;
      v40 = *(unsigned __int16 *)(v17 + 8) - v12;
      v79 = v40;
      *(_WORD *)(v17 + 8) = v12;
      v41 = v84 - a3;
      v80 = v84 - a3;
      if ( v84 - a3 >= 0x3F )
      {
        *(_QWORD *)(v17 + 16 * v12) = v41;
        *(_BYTE *)(v17 + 15) = 63;
      }
      else
      {
        *(_BYTE *)(v17 + 15) = v41;
      }
      *(_BYTE *)(v17 + 11) = 0;
      if ( v40 )
      {
        if ( v40 == 1 )
        {
          ++*(_WORD *)(v17 + 8);
          v42 = v84 - a3 + 16;
          v81 = v42;
          if ( v42 >= 0x3F )
          {
            *(_QWORD *)(v17 + 16 * (v12 + 1)) = v42;
            *(_BYTE *)(v17 + 15) = 63;
          }
          else
          {
            *(_BYTE *)(v17 + 15) = v42;
          }
        }
        else
        {
          v47 = v37 ^ 1;
          v48 = *(_BYTE *)(v17 + 14);
          if ( v48 )
            v49 = (v17 & 0xFFFFFFFFFFFF0000uLL) + ((1LL - v48) << 16);
          else
            v49 = a1;
          v73 = v49;
          AllocationType = v47;
          LOBYTE(v47) = v36;
          if ( !(unsigned __int8)RtlpCreateSplitBlock(a1, v49, (int)v17 + 16 * (int)v12, v47, AllocationType, v12, v40) )
            goto LABEL_116;
        }
      }
      v10 = (_DWORD *)(v17 + 16);
      v64 = (char *)(v17 + 16);
      v43 = *(_WORD *)(v17 + 8);
      v44 = 16LL * v43;
      v67 = v44;
      v45 = HIBYTE(v43);
      if ( (*(_BYTE *)(v17 + 15) & 0x3F) == 0x3F )
      {
        v44 -= 8LL;
        v67 = v44;
        LOBYTE(v45) = HIBYTE(v43);
      }
      if ( v58 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v17 + 11) = v45 ^ v43 ^ *(_BYTE *)(v17 + 10);
          *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        v46 = a5;
        if ( a5 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
          a5 = 0;
          v46 = 0;
        }
        if ( (v82 & 8) != 0 )
          memset(v10, 0, v44 - 8);
        goto LABEL_117;
      }
      if ( (v82 & 8) != 0 )
      {
        memset((void *)(v17 + 16), 0, v44 - 8);
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
            v52 = (_QWORD *)(v17 - 32);
          else
            v52 = (_QWORD *)(v17 + 16LL * *(unsigned __int16 *)(v17 + 8) - 16);
          v75 = v52;
          *v52 = 0LL;
          v52[1] = 0LL;
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
      v50 = (void *)(v17 + 16);
      v74 = v17 + 16;
      v51 = (a3 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      v68 = v51;
      if ( !v51 )
        goto LABEL_93;
      if ( ((unsigned __int8)v10 & 4) != 0 )
      {
        *v10 = -1163005939;
        v68 = --v51;
        if ( !v51 )
          goto LABEL_93;
        v50 = (void *)(v17 + 20);
        v74 = v17 + 20;
      }
      memset64(v50, 0xBAADF00DBAADF00DuLL, v51 >> 1);
      if ( (v51 & 1) != 0 )
        *((_DWORD *)v50 + v51 - 1) = -1163005939;
      goto LABEL_93;
    }
LABEL_115:
    v10 = 0LL;
    v64 = 0LL;
    goto LABEL_116;
  }
  v17 = Entry - 16;
  v70 = Entry - 16;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v18 = *(_DWORD *)(v17 + 8) ^ *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v17 + 8) = v18;
    if ( *(_BYTE *)(v17 + 11) != ((unsigned __int8)v18 ^ (unsigned __int8)(BYTE1(v18) ^ BYTE2(v18))) )
      RtlpAnalyzeHeapFailure(a1, v17);
  }
  v19 = *(unsigned __int16 *)(v17 + 8);
  if ( v19 < v12 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v17 + 11) = BYTE1(v19) ^ v19 ^ *(_BYTE *)(v17 + 10);
      *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    goto LABEL_40;
  }
  v20 = *(_QWORD *)(v17 + 16);
  v21 = *(__int64 **)(v17 + 24);
  v66 = v21;
  v22 = *v21;
  v23 = *(_QWORD *)(v20 + 8);
  if ( *v21 == v23 && v22 == v17 + 16 )
  {
    *(_QWORD *)(a1 + 192) -= v19;
    v24 = *(__int64 ***)(a1 + 312);
    if ( v24 )
    {
      v25 = (__int64 *)*(unsigned __int16 *)(v17 + 8);
      while ( 1 )
      {
        v26 = *((unsigned int *)v24 + 2);
        if ( (unsigned __int64)v25 < v26 )
          break;
        if ( !*v24 )
        {
          v25 = (__int64 *)(unsigned int)(v26 - 1);
          break;
        }
        v24 = (__int64 **)*v24;
      }
      v65 = v25;
      RtlpHeapRemoveListEntry(a1, (_DWORD)v24, v17 + 16, v17 + 16, (_DWORD)v25, *(unsigned __int16 *)(v17 + 8));
      v21 = v66;
    }
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    goto LABEL_50;
  }
  RtlpLogHeapFailure(13, a1, v17 + 16, v23, v22, 0LL);
LABEL_116:
  v46 = a5;
LABEL_117:
  if ( v46 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  return v10;
}
