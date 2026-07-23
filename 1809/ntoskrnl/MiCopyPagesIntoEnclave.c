/*
 * XREFs of MiCopyPagesIntoEnclave @ 0x14085A6EC
 * Callers:
 *     NtLoadEnclaveData @ 0x14085C210 (NtLoadEnclaveData.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MmProbeAndLockPages @ 0x140040380 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiMakeProtectionMask @ 0x140074490 (MiMakeProtectionMask.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiGetPteFromCopyList @ 0x14012D8D8 (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x14012ECB0 (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x140131930 (MiReleasePteCopyList.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     KeAddEnclavePage @ 0x14028F9A4 (KeAddEnclavePage.c)
 *     MiGetVmPartition @ 0x1402B4770 (MiGetVmPartition.c)
 *     MiGetPageForEnclave @ 0x1402BE1BC (MiGetPageForEnclave.c)
 *     MiInitializeEnclavePfn @ 0x1402BE220 (MiInitializeEnclavePfn.c)
 *     MiReturnEnclavePage @ 0x1402BEAD0 (MiReturnEnclavePage.c)
 *     MiWriteEnclavePte @ 0x1402BEC18 (MiWriteEnclavePte.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCopyPagesIntoEnclave(
        _KPROCESS *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        void *Src,
        __int64 a6,
        int a7,
        _QWORD *a8,
        _DWORD *a9)
{
  unsigned __int64 v11; // r15
  char *PoolWithTag; // rsi
  unsigned int ProtectionMask; // eax
  char v14; // r8
  unsigned __int64 v15; // r10
  char v17; // cl
  char v18; // dl
  char v19; // cl
  int v20; // r12d
  unsigned int v21; // edx
  unsigned __int64 PteAddress; // r12
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // r8
  int v25; // edi
  unsigned __int64 v26; // rax
  unsigned int v27; // r13d
  char v28; // al
  unsigned __int64 v29; // rcx
  char *v30; // r14
  char *v31; // r14
  __int64 PageForEnclave; // rax
  ULONG_PTR v33; // r15
  unsigned __int64 PteFromCopyList; // r12
  __int64 v35; // rdx
  int v36; // r8d
  bool v37; // zf
  unsigned __int64 ValidPte; // rax
  ULONG_PTR v41; // [rsp+48h] [rbp-1B0h]
  char v42; // [rsp+50h] [rbp-1A8h]
  int v43; // [rsp+54h] [rbp-1A4h]
  __int64 VmPartition; // [rsp+78h] [rbp-180h]
  __int64 v47; // [rsp+88h] [rbp-170h]
  char *v48; // [rsp+90h] [rbp-168h]
  unsigned __int64 v49; // [rsp+98h] [rbp-160h]
  unsigned int v50[8]; // [rsp+A0h] [rbp-158h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+C0h] [rbp-138h] BYREF
  _BYTE v52[48]; // [rsp+180h] [rbp-78h] BYREF

  v11 = (unsigned __int64)Src;
  MemoryDescriptorList.MdlFlags = 0;
  PoolWithTag = 0LL;
  ProtectionMask = MiMakeProtectionMask(a7 & 0x5FFFFFFF);
  if ( (ProtectionMask & 7) == 0 || ProtectionMask > 7 || (ProtectionMask & 5) == 5 )
    return 3221225541LL;
  if ( (ProtectionMask & 2) != 0 )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].UserTime & 0x100) != 0
      && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) == 0 )
    {
      return 3221227012LL;
    }
    v14 |= 4u;
  }
  v17 = v14 | 2;
  if ( (ProtectionMask & 4) == 0 )
    v17 = v14;
  v18 = v17 | 1;
  v19 = v17 | 0x41;
  if ( (*(_DWORD *)(a2 + 64) & 2) == 0 )
    v19 = v18;
  v42 = v19;
  if ( (v19 & 9) == 0 )
    return 3221225541LL;
  v20 = ProtectionMask & 2 | 4;
  if ( (*(_DWORD *)(a2 + 72) & 1) == 0 )
    v20 = ProtectionMask;
  v43 = v20;
  PteAddress = MiGetPteAddress(v15);
  v41 = PteAddress;
  v23 = PteAddress + 8 * (v21 - 1LL);
  v49 = v23;
  if ( v24 > 0x14000 )
    v21 = 20;
  MiCreatePteCopyList(v21 + 1, v21 + 1, (__int64)v50);
  if ( !v50[1] )
    return 3221225626LL;
  if ( ((unsigned __int16)Src & 0xFFF) == 0
    || (PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x10000uLL, 0x44456D4Du)) != 0LL )
  {
    VmPartition = MiGetVmPartition((__int64)&a1[1].IdealNode[12]);
    v25 = 0;
    *a8 = 0LL;
    v47 = (__int64)(*(_QWORD *)(a2 + 80) << 25) >> 16;
    while ( 1 )
    {
      if ( PteAddress > v23 )
        goto LABEL_23;
      v26 = (__int64)(v23 - PteAddress + 8) >> 3;
      v27 = 16;
      if ( v26 < 0x10 )
        v27 = v26;
      v28 = a3;
      if ( a3 == 1 )
      {
        if ( v27 )
        {
          v29 = ((unsigned __int64)v27 << 12) + v11;
          if ( v29 > 0x7FFFFFFF0000LL || v29 < v11 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v28 = 1;
      }
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, (const void *)v11, (unsigned __int64)v27 << 12);
        v30 = PoolWithTag;
      }
      else if ( v28 == 1 )
      {
        MemoryDescriptorList.Next = 0LL;
        MemoryDescriptorList.Size = 8 * (((((unsigned __int64)v27 << 12) + (v11 & 0xFFF) + 4095) >> 12) + 6);
        MemoryDescriptorList.MdlFlags = 0;
        MemoryDescriptorList.StartVa = (PVOID)(v11 & 0xFFFFFFFFFFFFF000uLL);
        MemoryDescriptorList.ByteOffset = v11 & 0xFFF;
        MemoryDescriptorList.ByteCount = v27 << 12;
        MmProbeAndLockPages(&MemoryDescriptorList, 0, IoReadAccess);
        v30 = (char *)MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000000);
        if ( !v30 )
          break;
      }
      else
      {
        v30 = (char *)v11;
      }
      v48 = (char *)(((unsigned __int64)v27 << 12) + v11);
      KiStackAttachProcess(a1, 0LL, (__int64)v52);
      v31 = &v30[-a4];
      while ( v27 )
      {
        PageForEnclave = MiGetPageForEnclave(a2, VmPartition);
        v33 = PageForEnclave;
        if ( PageForEnclave == -1 )
        {
          v25 = -1073741801;
          break;
        }
        PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList(v50, PageForEnclave, -1LL);
        v25 = KeAddEnclavePage(v47, (__int64)&v31[a4], (__int64)(PteFromCopyList << 25) >> 16, a4, v42, a9);
        if ( MiPteInShadowRange(PteFromCopyList) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v36 = 1;
            if ( HIBYTE(word_14043B26C) )
              goto LABEL_55;
            v37 = (v35 & 1) == 0;
          }
          else
          {
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
              goto LABEL_55;
            v37 = (v35 & 1) == 0;
          }
          if ( !v37 )
            v35 |= 0x8000000000000000uLL;
        }
LABEL_55:
        *(_QWORD *)PteFromCopyList = v35;
        if ( v36 )
          MiWritePteShadow(PteFromCopyList, v35);
        if ( v25 < 0 )
        {
          MiReturnEnclavePage(v33);
          PteAddress = v41;
          break;
        }
        MiInitializeEnclavePfn(v33, v41, v43);
        ValidPte = MiMakeValidPte(v41, v33, v43 | 0x80000000);
        MiWriteEnclavePte(v41, ValidPte, a2, 0, 1);
        a4 += 4096LL;
        PteAddress = v41 + 8;
        v41 += 8LL;
        --v27;
        *a8 += 4096LL;
      }
      if ( (MemoryDescriptorList.MdlFlags & 2) != 0 )
        MmUnlockPages(&MemoryDescriptorList);
      KiUnstackDetachProcess((__int64)v52, 0LL);
      v11 = (unsigned __int64)v48;
      v23 = v49;
    }
  }
  v25 = -1073741670;
LABEL_23:
  if ( (MemoryDescriptorList.MdlFlags & 2) != 0 )
    MmUnlockPages(&MemoryDescriptorList);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  MiReleasePteCopyList((__int64)v50);
  return (unsigned int)v25;
}
