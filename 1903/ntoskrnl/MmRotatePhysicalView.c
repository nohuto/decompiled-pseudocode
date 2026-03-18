/*
 * XREFs of MmRotatePhysicalView @ 0x1406BFCA0
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPfn @ 0x140005EA0 (MiIsPfn.c)
 *     MiUnlockAndDereferenceVad @ 0x1400504B0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140050770 (MiObtainReferencedVadEx.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x140052438 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x14008E960 (MmProbeAndLockPages.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400FA170 (MmBuildMdlForNonPagedPool.c)
 *     MiReplaceRotateWithDemandZero @ 0x140116764 (MiReplaceRotateWithDemandZero.c)
 *     MiDereferenceIoPages @ 0x1401174CC (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140118650 (MiReferenceIoPages.c)
 *     MiSanitizePage @ 0x140118CE8 (MiSanitizePage.c)
 *     MiRotateComplete @ 0x140118E8C (MiRotateComplete.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140118F14 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDeleteRotateAndStopFaults @ 0x1401193C8 (MiDeleteRotateAndStopFaults.c)
 *     MmSizeOfMdl @ 0x140119480 (MmSizeOfMdl.c)
 *     MiLegitimatePageForDriversToMap @ 0x140156E60 (MiLegitimatePageForDriversToMap.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiMarkMdlComplete @ 0x1402C7278 (MiMarkMdlComplete.c)
 *     MiSlowRotateCopy @ 0x1402C739C (MiSlowRotateCopy.c)
 *     MiSwitchToTransition @ 0x1402C74B8 (MiSwitchToTransition.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiLogVirtualRotateEvent @ 0x14088B2FC (MiLogVirtualRotateEvent.c)
 */

NTSTATUS __stdcall MmRotatePhysicalView(
        PVOID VirtualAddress,
        PSIZE_T NumberOfBytes,
        PMDL NewMdl,
        MM_ROTATE_DIRECTION Direction,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
        PVOID Context)
{
  struct _MDL *v7; // r13
  unsigned __int64 v9; // rdi
  NTSTATUS v10; // r15d
  char *v11; // rsi
  SIZE_T v12; // r12
  int v13; // ebx
  unsigned __int64 v14; // rax
  int v15; // r8d
  unsigned int v16; // r8d
  SIZE_T v17; // rdx
  unsigned __int64 *v18; // rcx
  SIZE_T v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // r8d
  NTSTATUS v23; // ebx
  SIZE_T v24; // rax
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v26; // rbx
  int v28; // r14d
  int v29; // edi
  unsigned __int64 *v30; // r13
  __int64 v31; // rdx
  SIZE_T v32; // rax
  SIZE_T v33; // rax
  PMDL v34; // rcx
  __int16 v35; // r14
  CSHORT v36; // si
  unsigned __int64 v37; // rdi
  int v38; // r14d
  __int64 v39; // rsi
  char *v40; // rdi
  __int64 ByteCount; // rcx
  PMDL v42; // r14
  unsigned __int64 v43; // rsi
  unsigned __int64 *v44; // r14
  __int64 v45; // rdx
  PVOID v46; // rdi
  int v47; // [rsp+40h] [rbp-258h]
  NTSTATUS v49; // [rsp+50h] [rbp-248h] BYREF
  PMDL MemoryDescriptorList; // [rsp+58h] [rbp-240h]
  unsigned int v51; // [rsp+60h] [rbp-238h]
  MM_ROTATE_DIRECTION v52; // [rsp+64h] [rbp-234h]
  PVOID P; // [rsp+68h] [rbp-230h]
  __int64 v54; // [rsp+70h] [rbp-228h]
  PVOID v55; // [rsp+78h] [rbp-220h]
  __int64 ProcessPartition; // [rsp+80h] [rbp-218h]
  ULONG_PTR v57; // [rsp+88h] [rbp-210h]
  SIZE_T v58; // [rsp+90h] [rbp-208h]
  SIZE_T v59; // [rsp+98h] [rbp-200h]
  PVOID v60; // [rsp+A0h] [rbp-1F8h]
  PMM_ROTATE_COPY_CALLBACK_FUNCTION v61; // [rsp+A8h] [rbp-1F0h]
  __int64 v62; // [rsp+B0h] [rbp-1E8h] BYREF
  char *v63; // [rsp+B8h] [rbp-1E0h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-1D8h]
  PSIZE_T v65; // [rsp+C8h] [rbp-1D0h]
  _BYTE v66[192]; // [rsp+D0h] [rbp-1C8h] BYREF
  struct _MDL v67[4]; // [rsp+190h] [rbp-108h] BYREF

  v52 = Direction;
  v7 = NewMdl;
  v9 = (unsigned __int64)VirtualAddress;
  P = VirtualAddress;
  v65 = NumberOfBytes;
  MemoryDescriptorList = NewMdl;
  v61 = CopyFunction;
  v60 = Context;
  v62 = 0LL;
  v63 = 0LL;
  CurrentThread = 0LL;
  memset(v66, 0, 0xB8uLL);
  memset(v67, 0, 0xB8uLL);
  v10 = 0;
  v11 = 0LL;
  v47 = 0;
  v12 = *NumberOfBytes;
  v57 = 0LL;
  if ( (v9 & 0xFFF) != 0 )
  {
    v23 = -1073741585;
    goto LABEL_31;
  }
  if ( (v12 & 0xFFF) != 0 )
    goto LABEL_32;
  if ( Direction >= MmMaximumRotateDirection )
  {
    v23 = -1073741583;
    goto LABEL_31;
  }
  v59 = v12 + v9 - 1;
  if ( v59 <= v9 )
  {
LABEL_32:
    v23 = -1073741584;
LABEL_31:
    v29 = 0;
    goto LABEL_42;
  }
  LODWORD(v55) = 0;
  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  v13 = 0;
  while ( 1 )
  {
    v14 = MiObtainReferencedVadEx(v9, 0, &v49);
    v11 = (char *)v14;
    v55 = (PVOID)v14;
    if ( !v14 )
      break;
    v15 = *(_DWORD *)(v14 + 48);
    if ( (v15 & 0x70) != 0x40
      || (*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) < v59 >> 12 )
    {
      v23 = -1073741800;
      goto LABEL_39;
    }
    if ( (v15 & 0x380) != 0 && (v15 & 0xC00) == 3072 )
      v16 = 2;
    else
      v16 = (v15 & 0xC00) != 1024;
    v51 = v16;
    v17 = v12;
    v54 = v12;
    v58 = v12 >> 12;
    if ( v52 <= MmToFrameBufferNoCopy )
    {
      if ( v12 <= 0xFFFFFFFF )
      {
        v18 = (unsigned __int64 *)&v7[1];
        P = &v7[1];
        v19 = 0LL;
        while ( 1 )
        {
          v49 = v19;
          if ( v19 >= v12 >> 12 )
            break;
          if ( (unsigned int)MiIsPfn(*v18) )
          {
            v23 = MiLegitimatePageForDriversToMap(48 * v20 - 0x58000000000LL);
            if ( v23 < 0 )
              goto LABEL_41;
          }
          else
          {
            v21 = MiSanitizePage(v20);
            v23 = MiReferenceIoPages(1, v21, 1LL, v22, 0LL, 0LL);
            if ( v23 < 0 )
              goto LABEL_41;
            ++v47;
          }
          v19 = (unsigned int)(v49 + 1);
          v18 = (unsigned __int64 *)((char *)P + 8);
          P = (char *)P + 8;
        }
        if ( (unsigned int)MiChargeCommit(ProcessPartition, v12 >> 12, 0) )
        {
          v24 = MmSizeOfMdl((PVOID)v9, v12);
          PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v24, 0x6F666E49u);
          v26 = PoolWithTag;
          P = PoolWithTag;
          if ( PoolWithTag )
          {
            PoolWithTag->Next = 0LL;
            PoolWithTag->Size = 8 * (((v12 + (v9 & 0xFFF) + 4095) >> 12) + 6);
            PoolWithTag->MdlFlags = 0;
            PoolWithTag->StartVa = (PVOID)(v9 & 0xFFFFFFFFFFFFF000uLL);
            PoolWithTag->ByteOffset = v9 & 0xFFF;
            PoolWithTag->ByteCount = v12;
            MmProbeAndLockPages(PoolWithTag, 1, IoReadAccess);
            v63 = v11;
            CurrentThread = KeGetCurrentThread();
            MiDeleteRotateAndStopFaults(v9, v59, &v62);
            if ( v52 == MmToFrameBuffer )
            {
              v26->MdlFlags |= 0x2000u;
              if ( ((int (__fastcall *)(struct _MDL *, struct _MDL *, PVOID))v61)(v7, v26, v60) < 0 )
                MiSlowRotateCopy((__int64)v7, (__int64)v26, (__int64)v11);
            }
            MiMapLockedPagesInUserSpaceHelper(v9, (__int64)&v7[1], &v26[1].Next, v51, v12 >> 12, 0LL, 16);
            MiRotateComplete((unsigned __int64 *)&v62);
            MiUnlockAndDereferenceVad(v11);
            MmUnlockPages(v26);
            ExFreePoolWithTag(v26, 0);
            *NumberOfBytes = v12;
            if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v12 )
              MiLogVirtualRotateEvent(v9, v12, (unsigned int)v52);
            return 0;
          }
          MiReturnCommit(ProcessPartition, v12 >> 12);
        }
        v23 = -1073741670;
LABEL_41:
        v29 = v47;
        goto LABEL_42;
      }
      v23 = -1073741306;
LABEL_39:
      v29 = 0;
      goto LABEL_42;
    }
    if ( v52 == MmToRegularMemoryNoCopy )
    {
      v28 = MiReplaceRotateWithDemandZero(v9, v59, v16);
      MiUnlockAndDereferenceVad(v11);
      *NumberOfBytes = v12;
      if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v12 )
        MiLogVirtualRotateEvent(v9, v12, 3LL);
      if ( v28 == 1 )
        return 1073741849;
      return v10;
    }
    if ( v12 > 0x10000 )
    {
      if ( v12 <= 0xFFFFFFFF
        && (v32 = MmSizeOfMdl((PVOID)v9, v12),
            (MemoryDescriptorList = (PMDL)ExAllocatePoolWithTag(NonPagedPoolNx, v32, 0x6F666E49u)) != 0LL) )
      {
        v17 = v54;
      }
      else
      {
        MemoryDescriptorList = (PMDL)v66;
        v17 = 0x10000LL;
        v54 = 0x10000LL;
      }
    }
    else
    {
      MemoryDescriptorList = (PMDL)v66;
    }
    if ( v17 > 0x10000 )
    {
      v33 = MmSizeOfMdl((PVOID)v9, v17);
      v7 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v33, 0x6F666E49u);
      if ( v7 )
      {
        v17 = v54;
      }
      else
      {
        v7 = v67;
        v17 = 0x10000LL;
        v54 = 0x10000LL;
      }
    }
    else
    {
      v7 = v67;
    }
    v34 = MemoryDescriptorList;
    MemoryDescriptorList->Next = 0LL;
    v35 = v9;
    v36 = 8 * (((v17 + (v9 & 0xFFF) + 4095) >> 12) + 6);
    v34->Size = v36;
    v34->MdlFlags = 0;
    v37 = v9 & 0xFFFFFFFFFFFFF000uLL;
    v34->StartVa = (PVOID)v37;
    v38 = v35 & 0xFFF;
    v34->ByteOffset = v38;
    v34->ByteCount = v17;
    MmBuildMdlForNonPagedPool(v34);
    MemoryDescriptorList->MdlFlags |= 0x2000u;
    v7->Next = 0LL;
    v7->Size = v36;
    v7->StartVa = (PVOID)v37;
    v7->ByteOffset = v38;
    v39 = v54;
    v7->ByteCount = v54;
    v7->MdlFlags = 0x2000;
    v13 |= 1u;
    v40 = (char *)v55;
    LODWORD(v55) = MiSwitchToTransition((ULONG_PTR)v7, (__int64)v55, v51);
    ByteCount = v7->ByteCount;
    v42 = MemoryDescriptorList;
    if ( ByteCount != v39 )
    {
      v54 = v7->ByteCount;
      MemoryDescriptorList->ByteCount = ByteCount;
      LODWORD(ByteCount) = v7->ByteCount;
    }
    if ( (_DWORD)ByteCount )
    {
      v49 = ((__int64 (__fastcall *)(struct _MDL *, PMDL, PVOID))v61)(v7, v42, v60);
      if ( v49 < 0 )
        MiSlowRotateCopy((__int64)v7, (__int64)v42, (__int64)v40);
      MiMarkMdlComplete((__int64)v7, (__int64)v40);
      v43 = (unsigned __int64)v42->ByteCount >> 12;
      v44 = (unsigned __int64 *)&v42[1];
      while ( v43 )
      {
        if ( !(unsigned int)MiIsPfn(*v44) )
          MiDereferenceIoPages(1, v45, 1uLL);
        ++v44;
        --v43;
      }
      v42 = MemoryDescriptorList;
    }
    MiUnlockAndDereferenceVad(v40);
    v11 = 0LL;
    v46 = P;
    if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 && v54 )
      MiLogVirtualRotateEvent(P, v54, (unsigned int)v52);
    if ( v42 != (PMDL)v66 )
      ExFreePoolWithTag(v42, 0);
    if ( (v13 & 1) != 0 )
    {
      v13 &= ~1u;
      if ( v7->ByteCount )
        MmUnlockPages(v7);
      if ( v7 != v67 )
        ExFreePoolWithTag(v7, 0);
    }
    v57 += v54;
    v9 = (unsigned __int64)v46 + v54;
    P = (PVOID)v9;
    if ( (_DWORD)v55 == 1 )
    {
      v23 = 1073741849;
      goto LABEL_31;
    }
    v12 -= v54;
    if ( !v12 )
    {
      v23 = 0;
      v29 = 0;
      goto LABEL_42;
    }
    v7 = 0LL;
    MemoryDescriptorList = 0LL;
  }
  v23 = v49;
  v29 = 0;
  if ( v49 == -1073741664 )
    v23 = -1073741819;
LABEL_42:
  if ( v11 )
    MiUnlockAndDereferenceVad(v11);
  if ( v23 < 0 )
  {
    v30 = (unsigned __int64 *)&v7[1];
    while ( v29 )
    {
      if ( !(unsigned int)MiIsPfn(*v30) )
      {
        MiDereferenceIoPages(1, v31, 1uLL);
        --v29;
      }
      ++v30;
    }
  }
  *NumberOfBytes = v57;
  return v23;
}
