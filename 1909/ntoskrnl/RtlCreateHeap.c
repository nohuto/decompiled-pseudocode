/*
 * XREFs of RtlCreateHeap @ 0x1406E7930
 * Callers:
 *     <none>
 * Callees:
 *     ExInitializeResourceLite @ 0x140047770 (ExInitializeResourceLite.c)
 *     ExDeleteResourceLite @ 0x1400797C0 (ExDeleteResourceLite.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x1401114CC (RtlpHeapGenerateRandomValue64.c)
 *     DbgPrint @ 0x140126B50 (DbgPrint.c)
 *     RtlpHpFixedHeapCreate @ 0x140137770 (RtlpHpFixedHeapCreate.c)
 *     RtlpHpLegacyGetEnvHandle @ 0x140137A38 (RtlpHpLegacyGetEnvHandle.c)
 *     RtlpHpConvertCreationFlags @ 0x140137A50 (RtlpHpConvertCreationFlags.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1401C0F50 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1401C1010 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1401C10B0 (ZwQueryVirtualMemory.c)
 *     ZwQuerySystemInformation @ 0x1401C1310 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlpCreateHeapEncoding @ 0x14030F0EC (RtlpCreateHeapEncoding.c)
 *     RtlpInitializeHeapSegment @ 0x1403109D0 (RtlpInitializeHeapSegment.c)
 *     RtlpHeapExceptionFilter @ 0x140319AB8 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x140319F48 (RtlpHeapHandleError.c)
 *     RtlpPopulateListIndex @ 0x14031A7E4 (RtlpPopulateListIndex.c)
 */

PVOID __stdcall RtlCreateHeap(
        ULONG Flags,
        PVOID HeapBase,
        SIZE_T ReserveSize,
        SIZE_T CommitSize,
        PVOID Lock,
        PRTL_HEAP_PARAMETERS Parameters)
{
  struct _ERESOURCE *v10; // r12
  unsigned __int64 v11; // rdx
  int v12; // r8d
  void *v13; // rdi
  struct _ERESOURCE *v14; // rcx
  ULONG v16; // eax
  ULONG v17; // ecx
  int v18; // edx
  int v19; // esi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  SIZE_T v26; // rdx
  SIZE_T v27; // rax
  ULONG_PTR v28; // rcx
  int v29; // r13d
  unsigned int v30; // r15d
  char *v31; // rsi
  char *v32; // r8
  void *v33; // rcx
  char *v34; // rdx
  __int64 v35; // rdi
  unsigned __int64 v36; // rdi
  unsigned int v37; // r13d
  __int64 v38; // r9
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _DWORD *v43; // rcx
  PVOID v44; // [rsp+40h] [rbp-1D8h] BYREF
  unsigned __int64 v45; // [rsp+48h] [rbp-1D0h]
  ULONG_PTR v46; // [rsp+50h] [rbp-1C8h] BYREF
  int v47; // [rsp+58h] [rbp-1C0h]
  PVOID v48; // [rsp+60h] [rbp-1B8h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-1B0h] BYREF
  ULONG_PTR v50; // [rsp+70h] [rbp-1A8h] BYREF
  ULONG_PTR v51; // [rsp+78h] [rbp-1A0h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp-198h] BYREF
  __int64 v53; // [rsp+88h] [rbp-190h]
  __int64 v54; // [rsp+90h] [rbp-188h]
  __int64 v55; // [rsp+98h] [rbp-180h]
  __int64 v56; // [rsp+A0h] [rbp-178h]
  unsigned __int64 v57; // [rsp+A8h] [rbp-170h]
  __int64 v58[2]; // [rsp+B0h] [rbp-168h] BYREF
  _OWORD v59[7]; // [rsp+C0h] [rbp-158h] BYREF
  void *MemoryInformation[6]; // [rsp+130h] [rbp-E8h] BYREF
  _QWORD v61[6]; // [rsp+160h] [rbp-B8h] BYREF
  _QWORD SystemInformation[8]; // [rsp+190h] [rbp-88h] BYREF

  v45 = (unsigned __int64)Lock;
  v53 = (__int64)HeapBase;
  RegionSize = (ULONG_PTR)Lock;
  LODWORD(v46) = NtGlobalFlag;
  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  memset(v61, 0, 0x28uLL);
  v47 = 0;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v44 = 0LL;
  v10 = 0LL;
  if ( (Flags & 0x100) == 0 )
  {
    if ( (Flags & 0x200) != 0 )
      goto LABEL_14;
    if ( (Flags & 0x10000000) == 0 )
    {
      if ( RtlpHeapErrorHandlerThreshold < 2 )
      {
        v16 = Flags & 0xFFF80C00;
      }
      else
      {
        v16 = Flags & 0xFFF80C00;
        if ( (Flags & 0xFFF80C00) != 0 )
        {
          DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
          RtlpHeapHandleError();
        }
      }
      if ( v16 )
        Flags &= 0x7F3FFu;
    }
    memset(&v59[1], 0, 0x60uLL);
    if ( Parameters && Parameters->Length == 96 )
      *(struct _RTL_HEAP_PARAMETERS *)&v59[1] = *Parameters;
    v17 = Flags | 0x20;
    if ( (v46 & 0x10) == 0 )
      v17 = Flags;
    v18 = v17 | 0x40;
    if ( (v46 & 0x20) == 0 )
      v18 = v17;
    v19 = v18 | 0x80;
    if ( (v46 & 0x200000) == 0 )
      v19 = v18;
    v20 = *((_QWORD *)&v59[1] + 1);
    if ( !*((_QWORD *)&v59[1] + 1) )
      v20 = qword_1405711C8;
    v55 = v20;
    v21 = *(_QWORD *)&v59[2];
    if ( !*(_QWORD *)&v59[2] )
      v21 = qword_1405711C0;
    v56 = v21;
    v22 = *((_QWORD *)&v59[2] + 1);
    if ( !*((_QWORD *)&v59[2] + 1) )
      v22 = qword_1405711B0;
    v57 = v22;
    v23 = *(_QWORD *)&v59[3];
    if ( !*(_QWORD *)&v59[3] )
      v23 = qword_1405711B8;
    *(_QWORD *)&v59[0] = v23;
    v24 = qword_14050E988;
    if ( !qword_14050E988 )
    {
      qword_14050E990 = 0x10000LL;
      if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
        goto LABEL_14;
      v24 = SystemInformation[5];
      qword_14050E988 = SystemInformation[5];
    }
    v54 = *((_QWORD *)&v59[3] + 1);
    if ( !*((_QWORD *)&v59[3] + 1) )
      v54 = v24 - qword_14050E990 - 4096;
    v25 = *(_QWORD *)&v59[4];
    if ( (unsigned __int64)(*(_QWORD *)&v59[4] - 1LL) > 0xFEFFF )
      v25 = 1044480LL;
    v58[0] = v25;
    if ( CommitSize )
      v26 = (CommitSize + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
    else
      v26 = 0x2000LL;
    if ( ReserveSize )
      v27 = (ReserveSize + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
    else
      v27 = (v26 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
    v28 = v27;
    v46 = v27;
    if ( v26 > v27 )
      v26 = v27;
    v50 = v26;
    if ( (v19 & 2) == 0 || HeapBase )
    {
      v53 = 0LL;
    }
    else
    {
      v53 = 4096LL;
      v47 = 2;
      if ( v27 - 4096 < v26 )
      {
        v28 = (v27 + 69631) & 0xFFFFFFFFFFFF0000uLL;
        v46 = v28;
      }
    }
    if ( !v26 || !v28 )
      goto LABEL_14;
    v29 = 704;
    v14 = (struct _ERESOURCE *)v45;
    v30 = v19;
    if ( (v19 & 1) != 0 )
    {
      if ( v45 )
        goto LABEL_74;
    }
    else
    {
      v10 = (struct _ERESOURCE *)(v45 & -(__int64)(v45 != 0));
      v30 = v19 | 0x80000000;
      if ( !v45 )
        v30 = v19;
      v29 = v45 != 0 ? 704 : 808;
    }
    if ( HeapBase )
    {
      if ( *((_QWORD *)&v59[5] + 1) )
      {
        if ( !*((_QWORD *)&v59[4] + 1)
          || !*(_QWORD *)&v59[5]
          || *((_QWORD *)&v59[4] + 1) > *(_QWORD *)&v59[5]
          || (v30 & 2) != 0 )
        {
          goto LABEL_14;
        }
        v48 = HeapBase;
        v31 = (char *)HeapBase + *((_QWORD *)&v59[4] + 1);
        v46 = *(_QWORD *)&v59[5];
        memset(HeapBase, 0, 0x1000uLL);
        v32 = (char *)HeapBase;
      }
      else
      {
        if ( ZwQueryVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               HeapBase,
               MemoryBasicInformation,
               MemoryInformation,
               0x30uLL,
               0LL) < 0 )
          goto LABEL_14;
        v31 = (char *)MemoryInformation[0];
        if ( MemoryInformation[0] != HeapBase || LODWORD(MemoryInformation[4]) == 0x10000 )
          goto LABEL_14;
        v32 = (char *)MemoryInformation[0];
        v48 = MemoryInformation[0];
        if ( LODWORD(MemoryInformation[4]) == 4096 )
        {
          if ( (v30 & 0x40000) != 0 && (BYTE4(MemoryInformation[4]) & 0x40) == 0 )
            goto LABEL_14;
          memset(MemoryInformation[0], 0, 0x1000uLL);
          if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, HeapBase, MemoryRegionInformation, v61, 0x28uLL, 0LL) < 0 )
            goto LABEL_14;
          v46 = v61[2];
          v50 = (ULONG_PTR)MemoryInformation[3];
          v32 = (char *)v48;
          v31 = (char *)MemoryInformation[3] + (unsigned __int64)v48;
        }
        else
        {
          v46 = (ULONG_PTR)MemoryInformation[3];
          v33 = (void *)v50;
          if ( (void *)v50 > MemoryInformation[3] )
            v33 = MemoryInformation[3];
          v50 = (ULONG_PTR)v33;
          if ( (unsigned __int64)v33 < 0x2000 )
            goto LABEL_14;
        }
      }
      v47 |= 1u;
      v34 = (char *)HeapBase;
      v44 = HeapBase;
      goto LABEL_94;
    }
    BaseAddress = 0LL;
    if ( !*((_QWORD *)&v59[5] + 1) )
    {
      v51 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
      RegionSize = v46 + v51;
      if ( v46 + v51 < v46 )
      {
        RegionSize = v46;
        v51 = 0LL;
      }
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) < 0 )
        goto LABEL_14;
      v34 = (char *)BaseAddress;
      v44 = BaseAddress;
      v46 = RegionSize;
      if ( v51 )
      {
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v51, 0x8000u);
        v34 = (char *)BaseAddress + v51;
        v44 = (char *)BaseAddress + v51;
        v46 = RegionSize - v51;
      }
      v32 = v34;
      v48 = v34;
      v31 = v34;
LABEL_94:
      if ( v32 != v31 )
        goto LABEL_97;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v48, 0LL, &v50, 0x1000u, 4u) >= 0 )
      {
        v31 += v50;
        v34 = (char *)v44;
LABEL_97:
        v35 = (__int64)(v34 + 704);
        if ( (NtGlobalFlag & 0x800) != 0 )
        {
          v36 = (unsigned __int64)(v34 + 711) & 0xFFFFFFFFFFFFFFF8uLL;
          *((_QWORD *)v34 + 41) = v36;
          v29 += 2064;
          v35 = v36 + 2064;
          v30 |= 0x4000000u;
          v34 = (char *)v44;
        }
        v37 = (v29 + 15) & 0xFFFFFFF0;
        *((_WORD *)v34 + 4) = v37 >> 4;
        *((_BYTE *)v44 + 10) = 1;
        *((_BYTE *)v44 + 15) = 1;
        *((_DWORD *)v44 + 38) = -285217025;
        *((_DWORD *)v44 + 28) = v30 & 0xEFFFFFFF;
        *((_DWORD *)v44 + 36) = 0;
        memset((char *)v44 + 568, 0, 0x78uLL);
        RtlpCreateHeapEncoding((__int64)v44);
        *((_DWORD *)v44 + 29) = v30 & 0x6001007D;
        *((_WORD *)v44 + 105) = v35 - (_WORD)v44;
        *((_QWORD *)v44 + 27) = 0LL;
        v39 = (char *)v44 + 336;
        *((_QWORD *)v44 + 43) = (char *)v44 + 336;
        *v39 = v39;
        v40 = (char *)v44 + 272;
        *((_QWORD *)v44 + 35) = (char *)v44 + 272;
        *v40 = v40;
        v41 = (char *)v44 + 288;
        *((_QWORD *)v44 + 37) = (char *)v44 + 288;
        *v41 = v41;
        v42 = (char *)v44 + 240;
        *((_QWORD *)v44 + 31) = (char *)v44 + 240;
        *v42 = v42;
        if ( !v10 && (v30 & 1) == 0 )
        {
          v10 = (struct _ERESOURCE *)v35;
          if ( ExInitializeResourceLite((PERESOURCE)v35) < 0 )
          {
            v10 = 0LL;
            goto LABEL_14;
          }
          v35 += 104LL;
        }
        *((_QWORD *)v44 + 44) = v10;
        *((_DWORD *)v44 + 30) |= 0x80000000;
        if ( RtlpInitializeHeapSegment(
               (__int64)v44,
               (__int64)v44,
               v37 + 1104,
               v38,
               v47,
               (__int64)v48,
               v31,
               (ULONG_PTR)v48 + v46 - v53) )
        {
          if ( HeapBase )
            memset((void *)v35, 0, 0x80uLL);
          *(_DWORD *)(v35 + 8) = 128;
          *(_QWORD *)(v35 + 40) = v35 + 56;
          *(_QWORD *)(v35 + 32) = (char *)v44 + 336;
          *(_QWORD *)(v35 + 48) = v35 + 72;
          RtlpPopulateListIndex((ULONG_PTR)v44, v35);
          *((_WORD *)v44 + 104) = 0;
          *((_QWORD *)v44 + 20) = v55;
          *((_QWORD *)v44 + 21) = v56;
          *((_QWORD *)v44 + 22) = v57 >> 4;
          *((_QWORD *)v44 + 23) = *(_QWORD *)&v59[0] >> 4;
          *((_QWORD *)v44 + 25) = v54;
          *((_DWORD *)v44 + 37) = (unsigned __int64)(v58[0] + 15) >> 4;
          *((_QWORD *)v44 + 45) = RtlpHeapKey ^ *((_QWORD *)&v59[5] + 1);
          *((_DWORD *)v44 + 172) = 4;
          *((_QWORD *)v44 + 87) = 2088960LL;
          *((_QWORD *)v44 + 32) = 31LL;
          *((_QWORD *)v44 + 33) = -16LL;
          v43 = v44;
          if ( (*((_DWORD *)v44 + 28) & 0x20) != 0 )
          {
            *((_QWORD *)v44 + 32) += 16LL;
            v43 = v44;
          }
          v43[30] &= ~0x80000000;
          v13 = v44;
          v44 = 0LL;
          v10 = 0LL;
          goto LABEL_10;
        }
      }
LABEL_14:
      v13 = 0LL;
      goto LABEL_10;
    }
LABEL_74:
    v13 = 0LL;
    goto LABEL_11;
  }
  if ( !HeapBase )
    goto LABEL_14;
  if ( v45 )
    goto LABEL_14;
  if ( (Flags & 2) != 0 )
    goto LABEL_14;
  RtlpHpConvertCreationFlags(Flags, v46);
  if ( Parameters->CommitRoutine )
  {
    CommitSize = Parameters->InitialCommit;
    if ( !CommitSize )
      goto LABEL_14;
    ReserveSize = Parameters->InitialReserve;
    if ( !ReserveSize || CommitSize > ReserveSize )
      goto LABEL_14;
  }
  *(_OWORD *)v58 = *RtlpHpLegacyGetEnvHandle(v59);
  v13 = (void *)RtlpHpFixedHeapCreate(HeapBase, v11, ReserveSize, CommitSize, v12, v58);
LABEL_10:
  v14 = (struct _ERESOURCE *)v45;
LABEL_11:
  if ( v10 && v10 != v14 )
    ExDeleteResourceLite(v10);
  if ( v44 && !HeapBase )
  {
    v46 = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v44, &v46, 0x8000u);
  }
  return v13;
}
