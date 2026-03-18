/*
 * XREFs of MiCopyPagesIntoEnclave @ 0x140892BA4
 * Callers:
 *     NtLoadEnclaveData @ 0x140894EE0 (NtLoadEnclaveData.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14002FE40 (MmMapLockedPagesSpecifyCache.c)
 *     MiMakeProtectionMask @ 0x1400504A0 (MiMakeProtectionMask.c)
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     MmUnlockPages @ 0x14006A600 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1400CBF50 (MmProbeAndLockPages.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiCreatePteCopyList @ 0x14012FB84 (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x1401322E8 (MiReleasePteCopyList.c)
 *     MiGetPteFromCopyList @ 0x140138004 (MiGetPteFromCopyList.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KeAddEnclavePage @ 0x1402A5F14 (KeAddEnclavePage.c)
 *     MiGetVmPartition @ 0x1402C99D4 (MiGetVmPartition.c)
 *     MiGetPageForEnclave @ 0x1402D46C4 (MiGetPageForEnclave.c)
 *     MiInitializeEnclavePfn @ 0x1402D4728 (MiInitializeEnclavePfn.c)
 *     MiReturnEnclavePage @ 0x1402D5040 (MiReturnEnclavePage.c)
 *     MiWriteEnclavePte @ 0x1402D5188 (MiWriteEnclavePte.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCopyPagesIntoEnclave(
        _KPROCESS *a1,
        __int64 a2,
        char a3,
        unsigned __int64 a4,
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
  char v16; // cl
  char v17; // dl
  char v18; // cl
  int v19; // r12d
  unsigned __int64 v20; // rdx
  unsigned __int64 PteAddress; // r12
  unsigned __int64 v22; // r13
  int v23; // edi
  unsigned __int64 v24; // rax
  unsigned int v25; // r13d
  char v26; // al
  unsigned __int64 v27; // rcx
  char *v28; // r14
  char *v29; // r14
  __int64 PageForEnclave; // rax
  ULONG_PTR v31; // r15
  unsigned __int64 PteFromCopyList; // r12
  __int64 v33; // rdx
  int v34; // r8d
  bool v35; // zf
  unsigned __int64 ValidPte; // rax
  __int64 v38; // [rsp+40h] [rbp-1B8h]
  ULONG_PTR BugCheckParameter4; // [rsp+48h] [rbp-1B0h]
  char v40; // [rsp+50h] [rbp-1A8h]
  int v41; // [rsp+54h] [rbp-1A4h]
  _QWORD v44[4]; // [rsp+70h] [rbp-188h] BYREF
  _QWORD *VmPartition; // [rsp+90h] [rbp-168h]
  _DWORD *v46; // [rsp+98h] [rbp-160h]
  __int64 v47; // [rsp+A0h] [rbp-158h]
  char *v48; // [rsp+A8h] [rbp-150h]
  unsigned __int64 v49; // [rsp+B0h] [rbp-148h]
  struct _MDL MemoryDescriptorList[4]; // [rsp+C0h] [rbp-138h] BYREF
  _BYTE v51[48]; // [rsp+180h] [rbp-78h] BYREF

  v38 = a4;
  v11 = (unsigned __int64)Src;
  v46 = a9;
  memset(v51, 0, sizeof(v51));
  memset(v44, 0, 24);
  memset(MemoryDescriptorList, 0, 0xB8uLL);
  PoolWithTag = 0LL;
  ProtectionMask = MiMakeProtectionMask(a7 & 0x5FFFFFFF);
  if ( (ProtectionMask & 7) == 0 || ProtectionMask > 7 || (ProtectionMask & 5) == 5 )
    return 3221225541LL;
  if ( (ProtectionMask & 2) != 0 )
  {
    if ( (*(_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].Spare2[7] & 0x100) != 0
      && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) == 0 )
    {
      return 3221227012LL;
    }
    v14 |= 4u;
  }
  v16 = v14 | 2;
  if ( (ProtectionMask & 4) == 0 )
    v16 = v14;
  v17 = v16 | 1;
  v18 = v16 | 0x41;
  if ( (*(_DWORD *)(a2 + 64) & 2) == 0 )
    v18 = v17;
  v40 = v18;
  if ( (v18 & 9) == 0 )
    return 3221225541LL;
  v19 = ProtectionMask & 2 | 4;
  if ( (*(_DWORD *)(a2 + 72) & 1) == 0 )
    v19 = ProtectionMask;
  v41 = v19;
  PteAddress = MiGetPteAddress(a4);
  BugCheckParameter4 = PteAddress;
  v22 = PteAddress + 8 * (v20 - 1);
  v49 = v22;
  if ( v20 > 0x14 )
    v20 = 20LL;
  MiCreatePteCopyList(v20 + 1, v20 + 1, (__int64)v44);
  if ( !HIDWORD(v44[0]) )
    return 3221225626LL;
  if ( ((unsigned __int16)Src & 0xFFF) == 0
    || (PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x10000uLL, 0x44456D4Du)) != 0LL )
  {
    VmPartition = (_QWORD *)MiGetVmPartition((__int64)&a1[1].IdealNode[6]);
    v23 = 0;
    *a8 = 0LL;
    v47 = (__int64)(*(_QWORD *)(a2 + 80) << 25) >> 16;
    while ( 1 )
    {
      if ( PteAddress > v22 )
        goto LABEL_23;
      v24 = (__int64)(v22 - PteAddress + 8) >> 3;
      v25 = 16;
      if ( v24 < 0x10 )
        v25 = v24;
      v26 = a3;
      if ( a3 == 1 )
      {
        if ( v25 )
        {
          v27 = ((unsigned __int64)v25 << 12) + v11;
          if ( v27 > 0x7FFFFFFF0000LL || v27 < v11 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v26 = 1;
      }
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, (const void *)v11, (unsigned __int64)v25 << 12);
        v28 = PoolWithTag;
      }
      else if ( v26 == 1 )
      {
        MemoryDescriptorList[0].Next = 0LL;
        MemoryDescriptorList[0].Size = 8 * (((((unsigned __int64)v25 << 12) + (v11 & 0xFFF) + 4095) >> 12) + 6);
        MemoryDescriptorList[0].MdlFlags = 0;
        MemoryDescriptorList[0].StartVa = (PVOID)(v11 & 0xFFFFFFFFFFFFF000uLL);
        MemoryDescriptorList[0].ByteOffset = v11 & 0xFFF;
        MemoryDescriptorList[0].ByteCount = v25 << 12;
        MmProbeAndLockPages(MemoryDescriptorList, 0, IoReadAccess);
        v28 = (char *)MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000000);
        if ( !v28 )
          break;
      }
      else
      {
        v28 = (char *)v11;
      }
      v48 = (char *)(((unsigned __int64)v25 << 12) + v11);
      KiStackAttachProcess(a1, 0, (__int64)v51);
      v29 = &v28[-v38];
      while ( v25 )
      {
        PageForEnclave = MiGetPageForEnclave(a2, VmPartition);
        v31 = PageForEnclave;
        if ( PageForEnclave == -1 )
        {
          v23 = -1073741801;
          break;
        }
        PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)v44, PageForEnclave, -1LL);
        v23 = KeAddEnclavePage(v47, (__int64)&v29[v38], (__int64)(PteFromCopyList << 25) >> 16, v38, v40, v46);
        if ( MiPteInShadowRange(PteFromCopyList) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v34 = 1;
            if ( HIBYTE(word_1404658EC) )
              goto LABEL_55;
            v35 = (v33 & 1) == 0;
          }
          else
          {
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
              goto LABEL_55;
            v35 = (v33 & 1) == 0;
          }
          if ( !v35 )
            v33 |= 0x8000000000000000uLL;
        }
LABEL_55:
        *(_QWORD *)PteFromCopyList = v33;
        if ( v34 )
          MiWritePteShadow(PteFromCopyList);
        if ( v23 < 0 )
        {
          MiReturnEnclavePage(v31);
          PteAddress = BugCheckParameter4;
          break;
        }
        MiInitializeEnclavePfn(v31, BugCheckParameter4, v41);
        ValidPte = MiMakeValidPte(BugCheckParameter4, v31, v41 | 0x80000000);
        MiWriteEnclavePte(BugCheckParameter4, ValidPte, a2, 0, 1);
        v38 += 4096LL;
        PteAddress = BugCheckParameter4 + 8;
        BugCheckParameter4 += 8LL;
        --v25;
        *a8 += 4096LL;
      }
      if ( (MemoryDescriptorList[0].MdlFlags & 2) != 0 )
        MmUnlockPages(MemoryDescriptorList);
      KiUnstackDetachProcess((struct _KTHREAD *)v51, 0);
      v11 = (unsigned __int64)v48;
      v22 = v49;
    }
  }
  v23 = -1073741670;
LABEL_23:
  if ( (MemoryDescriptorList[0].MdlFlags & 2) != 0 )
    MmUnlockPages(MemoryDescriptorList);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  MiReleasePteCopyList((__int64)v44);
  return (unsigned int)v23;
}
