/*
 * XREFs of MmRotatePhysicalView @ 0x14066CAD0
 * Callers:
 *     <none>
 * Callees:
 *     MiLegitimatePageForDriversToMap @ 0x1400298DC (MiLegitimatePageForDriversToMap.c)
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x140040380 (MmProbeAndLockPages.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x14004D19C (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 *     MiIsPfn @ 0x1400A8820 (MiIsPfn.c)
 *     MiReferenceIoPages @ 0x1400E602C (MiReferenceIoPages.c)
 *     MiSanitizePage @ 0x1400E6454 (MiSanitizePage.c)
 *     MmBuildMdlForNonPagedPool @ 0x140102040 (MmBuildMdlForNonPagedPool.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010FCB8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MmSizeOfMdl @ 0x14011A7B0 (MmSizeOfMdl.c)
 *     MiReplaceRotateWithDemandZero @ 0x140122AC0 (MiReplaceRotateWithDemandZero.c)
 *     MiDereferenceIoPages @ 0x140123704 (MiDereferenceIoPages.c)
 *     MiDeleteRotateAndStopFaults @ 0x14013A1F0 (MiDeleteRotateAndStopFaults.c)
 *     MiRotateComplete @ 0x14013A76C (MiRotateComplete.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     MiMarkMdlComplete @ 0x1402AF604 (MiMarkMdlComplete.c)
 *     MiSlowRotateCopy @ 0x1402AF728 (MiSlowRotateCopy.c)
 *     MiSwitchToTransition @ 0x1402AF830 (MiSwitchToTransition.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiLogVirtualRotateEvent @ 0x1408505CC (MiLogVirtualRotateEvent.c)
 */

NTSTATUS __stdcall MmRotatePhysicalView(
        PVOID VirtualAddress,
        PSIZE_T NumberOfBytes,
        PMDL NewMdl,
        MM_ROTATE_DIRECTION Direction,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
        PVOID Context)
{
  struct _MDL *v6; // r13
  unsigned __int64 v7; // rdi
  char *v8; // rsi
  SIZE_T v9; // r12
  __int64 v10; // rax
  unsigned int v11; // r8d
  SIZE_T v12; // rdx
  unsigned __int64 *v13; // rcx
  SIZE_T v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // r8d
  NTSTATUS v18; // ebx
  SIZE_T v19; // rax
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v21; // rbx
  int v23; // ebx
  int v24; // edi
  PSIZE_T v25; // r12
  unsigned __int64 *v26; // r13
  __int64 v27; // rdx
  SIZE_T v28; // rax
  SIZE_T v29; // rax
  PMDL v30; // rcx
  __int16 v31; // r14
  CSHORT v32; // si
  unsigned __int64 v33; // rdi
  int v34; // r14d
  __int64 v35; // rsi
  char *v36; // rdi
  __int64 ByteCount; // rcx
  PMDL v38; // r14
  unsigned __int64 v39; // rsi
  unsigned __int64 *v40; // r14
  __int64 v41; // rdx
  PVOID v42; // rdi
  int v43; // [rsp+40h] [rbp-258h]
  int v45; // [rsp+50h] [rbp-248h]
  int v46; // [rsp+50h] [rbp-248h]
  NTSTATUS v47; // [rsp+54h] [rbp-244h] BYREF
  PMDL MemoryDescriptorList; // [rsp+58h] [rbp-240h]
  MM_ROTATE_DIRECTION v49; // [rsp+60h] [rbp-238h]
  PVOID P; // [rsp+68h] [rbp-230h]
  __int64 v51; // [rsp+70h] [rbp-228h]
  __int64 ProcessPartition; // [rsp+78h] [rbp-220h]
  ULONG_PTR v53; // [rsp+80h] [rbp-218h]
  SIZE_T v54; // [rsp+88h] [rbp-210h]
  unsigned __int64 v55; // [rsp+90h] [rbp-208h]
  PVOID v56; // [rsp+98h] [rbp-200h]
  PVOID v57; // [rsp+A0h] [rbp-1F8h]
  PMM_ROTATE_COPY_CALLBACK_FUNCTION v58; // [rsp+A8h] [rbp-1F0h]
  PSIZE_T v59; // [rsp+B0h] [rbp-1E8h]
  unsigned __int64 v60[3]; // [rsp+B8h] [rbp-1E0h] BYREF
  _BYTE v61[192]; // [rsp+D0h] [rbp-1C8h] BYREF
  struct _MDL v62; // [rsp+190h] [rbp-108h] BYREF

  v49 = Direction;
  v6 = NewMdl;
  v7 = (unsigned __int64)VirtualAddress;
  P = VirtualAddress;
  v59 = NumberOfBytes;
  MemoryDescriptorList = NewMdl;
  v58 = CopyFunction;
  v57 = Context;
  v8 = 0LL;
  v43 = 0;
  v9 = *NumberOfBytes;
  v53 = 0LL;
  if ( ((unsigned __int16)VirtualAddress & 0xFFF) != 0 )
  {
    v18 = -1073741585;
LABEL_30:
    v24 = 0;
    v25 = NumberOfBytes;
    goto LABEL_31;
  }
  if ( (v9 & 0xFFF) != 0 )
  {
LABEL_39:
    v18 = -1073741584;
    goto LABEL_30;
  }
  if ( Direction >= MmMaximumRotateDirection )
  {
    v18 = -1073741583;
    goto LABEL_30;
  }
  v55 = (unsigned __int64)VirtualAddress + v9 - 1;
  if ( v55 <= (unsigned __int64)VirtualAddress )
    goto LABEL_39;
  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  while ( 1 )
  {
    v10 = MiObtainReferencedVadEx(v7, 0, &v47);
    v8 = (char *)v10;
    v56 = (PVOID)v10;
    if ( !v10 )
    {
      v18 = v47;
      v24 = 0;
      v25 = NumberOfBytes;
      if ( v47 == -1073741664 )
        v18 = -1073741819;
      goto LABEL_31;
    }
    if ( (*(_BYTE *)(v10 + 48) & 7) != 6
      || (*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) < v55 >> 12 )
    {
      v18 = -1073741800;
      goto LABEL_45;
    }
    if ( (*(_DWORD *)(v10 + 48) & 0x38) != 0 && (*(_DWORD *)(v10 + 48) & 0xC0) == 192 )
      v11 = 2;
    else
      v11 = (*(_DWORD *)(v10 + 48) & 0xC0) != 64;
    v45 = v11;
    v12 = v9;
    v51 = v9;
    v54 = v9 >> 12;
    if ( v49 <= MmToFrameBufferNoCopy )
    {
      if ( v9 <= 0xFFFFFFFF )
      {
        v13 = (unsigned __int64 *)&v6[1];
        P = &v6[1];
        v14 = 0LL;
        while ( 1 )
        {
          v47 = v14;
          if ( v14 >= v9 >> 12 )
            break;
          if ( (unsigned int)MiIsPfn(*v13) )
          {
            v18 = MiLegitimatePageForDriversToMap(48 * v15 - 0x58000000000LL);
            if ( v18 < 0 )
            {
              v24 = v43;
              v25 = NumberOfBytes;
              goto LABEL_31;
            }
          }
          else
          {
            v16 = MiSanitizePage(v15);
            v18 = MiReferenceIoPages(1u, v16, 1LL, v17, 0LL, 0LL);
            if ( v18 < 0 )
              goto LABEL_52;
            ++v43;
          }
          v14 = (unsigned int)(v47 + 1);
          v13 = (unsigned __int64 *)((char *)P + 8);
          P = (char *)P + 8;
        }
        if ( (unsigned int)MiChargeCommit(ProcessPartition, v9 >> 12, 0) )
        {
          v19 = MmSizeOfMdl((PVOID)v7, v9);
          PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x6F666E49u);
          v21 = PoolWithTag;
          P = PoolWithTag;
          if ( PoolWithTag )
          {
            PoolWithTag->Next = 0LL;
            PoolWithTag->Size = 8 * (((v9 + (v7 & 0xFFF) + 4095) >> 12) + 6);
            PoolWithTag->MdlFlags = 0;
            PoolWithTag->StartVa = (PVOID)(v7 & 0xFFFFFFFFFFFFF000uLL);
            PoolWithTag->ByteOffset = v7 & 0xFFF;
            PoolWithTag->ByteCount = v9;
            MmProbeAndLockPages(PoolWithTag, 1, IoReadAccess);
            v60[1] = (unsigned __int64)v8;
            v60[2] = (unsigned __int64)KeGetCurrentThread();
            MiDeleteRotateAndStopFaults(v7, v55, v60);
            if ( v49 == MmToFrameBuffer )
            {
              v21->MdlFlags |= 0x2000u;
              if ( ((int (__fastcall *)(struct _MDL *, struct _MDL *, PVOID))v58)(v6, v21, v57) < 0 )
                MiSlowRotateCopy((__int64)v6, (__int64)v21, (__int64)v8);
            }
            MiMapLockedPagesInUserSpaceHelper(v7, (__int64)&v6[1], &v21[1].Next, v45, v9 >> 12, 0LL, 16);
            MiRotateComplete(v60);
            MiUnlockAndDereferenceVad(v8);
            MmUnlockPages(v21);
            ExFreePoolWithTag(v21, 0);
            *NumberOfBytes = v9;
            if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v9 )
              MiLogVirtualRotateEvent(v7, v9, (unsigned int)v49);
            return 0;
          }
          MiReturnCommit(ProcessPartition, v9 >> 12);
        }
        v18 = -1073741670;
LABEL_52:
        v24 = v43;
        goto LABEL_47;
      }
      v18 = -1073741306;
LABEL_45:
      v24 = 0;
      goto LABEL_47;
    }
    if ( v49 == MmToRegularMemoryNoCopy )
    {
      v23 = MiReplaceRotateWithDemandZero(v7, v55, v11);
      MiUnlockAndDereferenceVad(v8);
      *NumberOfBytes = v9;
      if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v9 )
        MiLogVirtualRotateEvent(v7, v9, 3LL);
      if ( v23 == 1 )
        return 1073741849;
      return 0;
    }
    if ( v9 > 0x10000 )
    {
      if ( v9 <= 0xFFFFFFFF
        && (v28 = MmSizeOfMdl((PVOID)v7, v9),
            (MemoryDescriptorList = (PMDL)ExAllocatePoolWithTag(NonPagedPoolNx, v28, 0x6F666E49u)) != 0LL) )
      {
        v12 = v51;
      }
      else
      {
        MemoryDescriptorList = (PMDL)v61;
        v12 = 0x10000LL;
        v51 = 0x10000LL;
      }
    }
    else
    {
      MemoryDescriptorList = (PMDL)v61;
    }
    if ( v12 > 0x10000 )
    {
      v29 = MmSizeOfMdl((PVOID)v7, v12);
      v6 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v29, 0x6F666E49u);
      if ( v6 )
      {
        v12 = v51;
      }
      else
      {
        v6 = &v62;
        v12 = 0x10000LL;
        v51 = 0x10000LL;
      }
    }
    else
    {
      v6 = &v62;
    }
    v30 = MemoryDescriptorList;
    MemoryDescriptorList->Next = 0LL;
    v31 = v7;
    v32 = 8 * (((v12 + (v7 & 0xFFF) + 4095) >> 12) + 6);
    v30->Size = v32;
    v30->MdlFlags = 0;
    v33 = v7 & 0xFFFFFFFFFFFFF000uLL;
    v30->StartVa = (PVOID)v33;
    v34 = v31 & 0xFFF;
    v30->ByteOffset = v34;
    v30->ByteCount = v12;
    MmBuildMdlForNonPagedPool(v30);
    MemoryDescriptorList->MdlFlags |= 0x2000u;
    v6->Next = 0LL;
    v6->Size = v32;
    v6->StartVa = (PVOID)v33;
    v6->ByteOffset = v34;
    v35 = v51;
    v6->ByteCount = v51;
    v6->MdlFlags = 0x2000;
    v36 = (char *)v56;
    v46 = MiSwitchToTransition((ULONG_PTR)v6, (__int64)v56, v45);
    ByteCount = v6->ByteCount;
    v38 = MemoryDescriptorList;
    if ( ByteCount != v35 )
    {
      v51 = v6->ByteCount;
      MemoryDescriptorList->ByteCount = ByteCount;
      LODWORD(ByteCount) = v6->ByteCount;
    }
    if ( (_DWORD)ByteCount )
    {
      v47 = ((__int64 (__fastcall *)(struct _MDL *, PMDL, PVOID))v58)(v6, v38, v57);
      if ( v47 < 0 )
        MiSlowRotateCopy((__int64)v6, (__int64)v38, (__int64)v36);
      MiMarkMdlComplete((__int64)v6, (__int64)v36);
      v39 = (unsigned __int64)v38->ByteCount >> 12;
      v40 = (unsigned __int64 *)&v38[1];
      while ( v39 )
      {
        if ( !(unsigned int)MiIsPfn(*v40) )
          MiDereferenceIoPages(1, v41, 1uLL);
        ++v40;
        --v39;
      }
      v38 = MemoryDescriptorList;
    }
    MiUnlockAndDereferenceVad(v36);
    v8 = 0LL;
    v42 = P;
    if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v51 )
      MiLogVirtualRotateEvent(P, v51, (unsigned int)v49);
    if ( v38 != (PMDL)v61 )
      ExFreePoolWithTag(v38, 0);
    if ( v6->ByteCount )
      MmUnlockPages(v6);
    if ( v6 != &v62 )
      ExFreePoolWithTag(v6, 0);
    v53 += v51;
    v7 = (unsigned __int64)v42 + v51;
    P = (PVOID)v7;
    if ( v46 == 1 )
      break;
    v9 -= v51;
    if ( !v9 )
    {
      v18 = 0;
      v24 = 0;
      goto LABEL_47;
    }
    v6 = 0LL;
    MemoryDescriptorList = 0LL;
  }
  v18 = 1073741849;
  v24 = 0;
LABEL_47:
  v25 = NumberOfBytes;
LABEL_31:
  if ( v8 )
    MiUnlockAndDereferenceVad(v8);
  if ( v18 < 0 )
  {
    v26 = (unsigned __int64 *)&v6[1];
    while ( v24 )
    {
      if ( !(unsigned int)MiIsPfn(*v26) )
      {
        MiDereferenceIoPages(1, v27, 1uLL);
        --v24;
      }
      ++v26;
    }
  }
  *v25 = v53;
  return v18;
}
