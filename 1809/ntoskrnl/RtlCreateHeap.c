/*
 * XREFs of RtlCreateHeap @ 0x14070C1C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x140009608 (RtlpHeapGenerateRandomValue64.c)
 *     ExDeleteResourceLite @ 0x140020F50 (ExDeleteResourceLite.c)
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     DbgPrint @ 0x1401263A0 (DbgPrint.c)
 *     RtlpHpLegacyGetEnvHandle @ 0x14013B1C0 (RtlpHpLegacyGetEnvHandle.c)
 *     RtlpHpFixedHeapCreate @ 0x14016B178 (RtlpHpFixedHeapCreate.c)
 *     RtlpHpConvertCreationFlags @ 0x14016B314 (RtlpHpConvertCreationFlags.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1401B85F0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1401B86B0 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1401B8750 (ZwQueryVirtualMemory.c)
 *     ZwQuerySystemInformation @ 0x1401B89B0 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlpCreateHeapEncoding @ 0x1402F0CEC (RtlpCreateHeapEncoding.c)
 *     RtlpInitializeHeapSegment @ 0x1402F2624 (RtlpInitializeHeapSegment.c)
 *     RtlpHeapExceptionFilter @ 0x1402FB914 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x1402FBDBC (RtlpHeapHandleError.c)
 *     RtlpPopulateListIndex @ 0x1402FC63C (RtlpPopulateListIndex.c)
 */

PVOID __stdcall RtlCreateHeap(
        ULONG Flags,
        PVOID HeapBase,
        SIZE_T ReserveSize,
        SIZE_T CommitSize,
        PVOID Lock,
        PRTL_HEAP_PARAMETERS Parameters)
{
  struct _ERESOURCE *v10; // rcx
  struct _ERESOURCE *v11; // r15
  unsigned __int64 v12; // rdx
  int v13; // r8d
  void *v14; // rdi
  ULONG v16; // ecx
  ULONG v17; // ecx
  int v18; // edx
  int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  SIZE_T v26; // rdx
  SIZE_T v27; // rcx
  int v28; // r13d
  unsigned int v29; // r12d
  char *v30; // rsi
  char *v31; // r8
  ULONG_PTR v32; // rcx
  char *v33; // rdx
  __int64 v34; // rdi
  unsigned __int64 v35; // rdi
  unsigned int v36; // r13d
  __int64 v37; // r9
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  _DWORD *v42; // rcx
  PVOID v43; // [rsp+40h] [rbp-1C8h] BYREF
  unsigned __int64 v44; // [rsp+48h] [rbp-1C0h]
  ULONG_PTR v45; // [rsp+50h] [rbp-1B8h] BYREF
  int v46; // [rsp+58h] [rbp-1B0h]
  ULONG_PTR v47; // [rsp+60h] [rbp-1A8h] BYREF
  PVOID v48; // [rsp+68h] [rbp-1A0h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-198h] BYREF
  ULONG_PTR v50; // [rsp+78h] [rbp-190h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp-188h] BYREF
  __int64 v52; // [rsp+88h] [rbp-180h]
  __int64 v53; // [rsp+90h] [rbp-178h]
  __int64 v54; // [rsp+98h] [rbp-170h]
  __int64 v55; // [rsp+A0h] [rbp-168h]
  unsigned __int64 v56; // [rsp+A8h] [rbp-160h]
  __int64 v57[2]; // [rsp+B0h] [rbp-158h] BYREF
  _OWORD v58[7]; // [rsp+C0h] [rbp-148h] BYREF
  PVOID MemoryInformation[3]; // [rsp+130h] [rbp-D8h] BYREF
  ULONG_PTR v60; // [rsp+148h] [rbp-C0h]
  int v61; // [rsp+150h] [rbp-B8h]
  char v62; // [rsp+154h] [rbp-B4h]
  char v63[16]; // [rsp+160h] [rbp-A8h] BYREF
  ULONG_PTR v64; // [rsp+170h] [rbp-98h]
  char SystemInformation[40]; // [rsp+180h] [rbp-88h] BYREF
  __int64 v66; // [rsp+1A8h] [rbp-60h]

  v10 = (struct _ERESOURCE *)Lock;
  v44 = (unsigned __int64)Lock;
  v52 = (__int64)HeapBase;
  RegionSize = (ULONG_PTR)Lock;
  LODWORD(v45) = NtGlobalFlag;
  v46 = 0;
  v43 = 0LL;
  v11 = 0LL;
  if ( (Flags & 0x100) == 0 )
  {
    if ( (Flags & 0x200) == 0 )
    {
      if ( (Flags & 0x10000000) == 0 )
      {
        v16 = Flags & 0xFFF80C00;
        if ( RtlpHeapErrorHandlerThreshold < 2 )
        {
          if ( v16 )
            Flags &= 0x7F3FFu;
        }
        else if ( v16 )
        {
          DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
          RtlpHeapHandleError();
        }
      }
      memset(&v58[1], 0, 0x60uLL);
      if ( Parameters && Parameters->Length == 96 )
        *(struct _RTL_HEAP_PARAMETERS *)&v58[1] = *Parameters;
      v17 = Flags | 0x20;
      if ( (v45 & 0x10) == 0 )
        v17 = Flags;
      v18 = v17 | 0x40;
      if ( (v45 & 0x20) == 0 )
        v18 = v17;
      v19 = v18 | 0x80;
      if ( (v45 & 0x200000) == 0 )
        v19 = v18;
      v20 = *((_QWORD *)&v58[1] + 1);
      if ( !*((_QWORD *)&v58[1] + 1) )
        v20 = qword_1405411B8;
      v54 = v20;
      v21 = *(_QWORD *)&v58[2];
      if ( !*(_QWORD *)&v58[2] )
        v21 = qword_1405411B0;
      v55 = v21;
      v22 = *((_QWORD *)&v58[2] + 1);
      if ( !*((_QWORD *)&v58[2] + 1) )
        v22 = qword_1405411A0;
      v56 = v22;
      v23 = *(_QWORD *)&v58[3];
      if ( !*(_QWORD *)&v58[3] )
        v23 = qword_1405411A8;
      *(_QWORD *)&v58[0] = v23;
      v24 = qword_1404E2568;
      if ( !qword_1404E2568 )
      {
        qword_1404E2570 = 0x10000LL;
        if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
          goto LABEL_15;
        v24 = v66;
        qword_1404E2568 = v66;
      }
      v53 = *((_QWORD *)&v58[3] + 1);
      if ( !*((_QWORD *)&v58[3] + 1) )
        v53 = v24 - qword_1404E2570 - 4096;
      v25 = *(_QWORD *)&v58[4];
      if ( (unsigned __int64)(*(_QWORD *)&v58[4] - 1LL) > 0xFEFFF )
        v25 = 1044480LL;
      v57[0] = v25;
      if ( CommitSize )
        v26 = (CommitSize + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
      else
        v26 = 0x2000LL;
      v47 = v26;
      if ( ReserveSize )
        v27 = (ReserveSize + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
      else
        v27 = (v26 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
      v45 = v27;
      if ( v26 > v27 )
      {
        v47 = v27;
        v26 = v27;
      }
      if ( (v19 & 2) == 0 || HeapBase )
      {
        v52 = 0LL;
      }
      else
      {
        v52 = 4096LL;
        v46 = 2;
        if ( v27 - 4096 < v26 )
        {
          v27 = (v27 + 69631) & 0xFFFFFFFFFFFF0000uLL;
          v45 = v27;
        }
      }
      if ( !v26 || !v27 )
        goto LABEL_15;
      v28 = 704;
      v10 = (struct _ERESOURCE *)v44;
      v29 = v19;
      if ( (v19 & 1) != 0 )
      {
        if ( v44 )
          goto LABEL_14;
      }
      else
      {
        v11 = (struct _ERESOURCE *)(v44 & -(__int64)(v44 != 0));
        v29 = v19 | 0x80000000;
        if ( !v44 )
          v29 = v19;
        v28 = v44 != 0 ? 704 : 808;
      }
      if ( HeapBase )
      {
        if ( *((_QWORD *)&v58[5] + 1) )
        {
          if ( !*((_QWORD *)&v58[4] + 1)
            || !*(_QWORD *)&v58[5]
            || *((_QWORD *)&v58[4] + 1) > *(_QWORD *)&v58[5]
            || (v29 & 2) != 0 )
          {
            goto LABEL_15;
          }
          v48 = HeapBase;
          v30 = (char *)HeapBase + *((_QWORD *)&v58[4] + 1);
          v45 = *(_QWORD *)&v58[5];
          memset(HeapBase, 0, 0x1000uLL);
          v31 = (char *)HeapBase;
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
            goto LABEL_15;
          v30 = (char *)MemoryInformation[0];
          if ( MemoryInformation[0] != HeapBase || v61 == 0x10000 )
            goto LABEL_15;
          v31 = (char *)MemoryInformation[0];
          v48 = MemoryInformation[0];
          if ( v61 == 4096 )
          {
            if ( (v29 & 0x40000) != 0 && (v62 & 0x40) == 0 )
              goto LABEL_15;
            memset(MemoryInformation[0], 0, 0x1000uLL);
            if ( ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   HeapBase,
                   MemoryRegionInformation,
                   v63,
                   0x20uLL,
                   0LL) < 0 )
              goto LABEL_15;
            v45 = v64;
            v47 = v60;
            v31 = (char *)v48;
            v30 = (char *)v48 + v60;
          }
          else
          {
            v45 = v60;
            v32 = v47;
            if ( v47 > v60 )
              v32 = v60;
            v47 = v32;
            if ( v32 < 0x2000 )
              goto LABEL_15;
          }
        }
        v46 |= 1u;
        v33 = (char *)HeapBase;
        v43 = HeapBase;
        goto LABEL_93;
      }
      BaseAddress = 0LL;
      v50 = 0LL;
      if ( !*((_QWORD *)&v58[5] + 1) )
      {
        v50 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
        RegionSize = v45 + v50;
        if ( v45 + v50 < v45 )
        {
          RegionSize = v45;
          v50 = 0LL;
        }
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) < 0 )
          goto LABEL_15;
        v33 = (char *)BaseAddress;
        v43 = BaseAddress;
        v45 = RegionSize;
        if ( v50 )
        {
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v50, 0x8000u);
          v33 = (char *)BaseAddress + v50;
          v43 = (char *)BaseAddress + v50;
          v45 = RegionSize - v50;
        }
        v31 = v33;
        v48 = v33;
        v30 = v33;
LABEL_93:
        if ( v31 != v30 )
          goto LABEL_96;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v48, 0LL, &v47, 0x1000u, 4u) >= 0 )
        {
          v30 += v47;
          v33 = (char *)v43;
LABEL_96:
          v34 = (__int64)(v33 + 704);
          if ( (NtGlobalFlag & 0x800) != 0 )
          {
            v35 = (unsigned __int64)(v33 + 711) & 0xFFFFFFFFFFFFFFF8uLL;
            *((_QWORD *)v33 + 41) = v35;
            v28 += 2064;
            v34 = v35 + 2064;
            v29 |= 0x4000000u;
            v33 = (char *)v43;
          }
          v36 = (v28 + 15) & 0xFFFFFFF0;
          *((_WORD *)v33 + 4) = v36 >> 4;
          *((_BYTE *)v43 + 10) = 1;
          *((_BYTE *)v43 + 15) = 1;
          *((_DWORD *)v43 + 38) = -285217025;
          *((_DWORD *)v43 + 28) = v29 & 0xEFFFFFFF;
          *((_DWORD *)v43 + 36) = 0;
          memset((char *)v43 + 568, 0, 0x78uLL);
          RtlpCreateHeapEncoding((__int64)v43);
          *((_DWORD *)v43 + 29) = v29 & 0x6001007D;
          *((_WORD *)v43 + 105) = v34 - (_WORD)v43;
          *((_QWORD *)v43 + 27) = 0LL;
          v38 = (char *)v43 + 336;
          *((_QWORD *)v43 + 43) = (char *)v43 + 336;
          *v38 = v38;
          v39 = (char *)v43 + 272;
          *((_QWORD *)v43 + 35) = (char *)v43 + 272;
          *v39 = v39;
          v40 = (char *)v43 + 288;
          *((_QWORD *)v43 + 37) = (char *)v43 + 288;
          *v40 = v40;
          v41 = (char *)v43 + 240;
          *((_QWORD *)v43 + 31) = (char *)v43 + 240;
          *v41 = v41;
          if ( !v11 && (v29 & 1) == 0 )
          {
            v11 = (struct _ERESOURCE *)v34;
            if ( ExInitializeResourceLite((PERESOURCE)v34) < 0 )
            {
              v11 = 0LL;
              goto LABEL_15;
            }
            v34 += 104LL;
          }
          *((_QWORD *)v43 + 44) = v11;
          *((_DWORD *)v43 + 30) |= 0x80000000;
          if ( RtlpInitializeHeapSegment(
                 (__int64)v43,
                 (__int64)v43,
                 v36 + 1104,
                 v37,
                 v46,
                 (__int64)v48,
                 v30,
                 (ULONG_PTR)v48 + v45 - v52) )
          {
            if ( HeapBase )
              memset((void *)v34, 0, 0x80uLL);
            *(_DWORD *)(v34 + 8) = 128;
            *(_QWORD *)(v34 + 40) = v34 + 56;
            *(_QWORD *)(v34 + 32) = (char *)v43 + 336;
            *(_QWORD *)(v34 + 48) = v34 + 72;
            RtlpPopulateListIndex((ULONG_PTR)v43, v34);
            *((_WORD *)v43 + 104) = 0;
            *((_QWORD *)v43 + 20) = v54;
            *((_QWORD *)v43 + 21) = v55;
            *((_QWORD *)v43 + 22) = v56 >> 4;
            *((_QWORD *)v43 + 23) = *(_QWORD *)&v58[0] >> 4;
            *((_QWORD *)v43 + 25) = v53;
            *((_DWORD *)v43 + 37) = (unsigned __int64)(v57[0] + 15) >> 4;
            *((_QWORD *)v43 + 45) = RtlpHeapKey ^ *((_QWORD *)&v58[5] + 1);
            *((_DWORD *)v43 + 172) = 4;
            *((_QWORD *)v43 + 87) = 2088960LL;
            *((_QWORD *)v43 + 32) = 31LL;
            *((_QWORD *)v43 + 33) = -16LL;
            v42 = v43;
            if ( (*((_DWORD *)v43 + 28) & 0x20) != 0 )
            {
              *((_QWORD *)v43 + 32) += 16LL;
              v42 = v43;
            }
            v42[30] &= ~0x80000000;
            v14 = v43;
            v43 = 0LL;
            v11 = 0LL;
            goto LABEL_10;
          }
        }
LABEL_15:
        v14 = 0LL;
        goto LABEL_10;
      }
    }
LABEL_14:
    v14 = 0LL;
    goto LABEL_11;
  }
  if ( !HeapBase || Lock || (Flags & 2) != 0 )
    goto LABEL_14;
  RtlpHpConvertCreationFlags(Flags, NtGlobalFlag);
  if ( Parameters->CommitRoutine )
  {
    CommitSize = Parameters->InitialCommit;
    if ( !CommitSize )
      goto LABEL_15;
    ReserveSize = Parameters->InitialReserve;
    if ( !ReserveSize || CommitSize > ReserveSize )
      goto LABEL_15;
  }
  *(_OWORD *)v57 = *RtlpHpLegacyGetEnvHandle(v58);
  v14 = (void *)RtlpHpFixedHeapCreate(HeapBase, v12, ReserveSize, CommitSize, v13, v57);
LABEL_10:
  v10 = (struct _ERESOURCE *)v44;
LABEL_11:
  if ( v11 && v11 != v10 )
    ExDeleteResourceLite(v11);
  if ( v43 && !HeapBase )
  {
    v45 = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v43, &v45, 0x8000u);
  }
  return v14;
}
