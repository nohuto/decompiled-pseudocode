/*
 * XREFs of SmPrepareForFatalPageError @ 0x1403094CC
 * Callers:
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140305064 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140173360 (KeRegisterBugCheckReasonCallback.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmPrepareForFatalPageError(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        ULONG a4,
        ULONG a5,
        unsigned int a6,
        int a7,
        PVOID BaseAddress)
{
  struct _MDL *v9; // rdi
  char *v10; // r14
  int v11; // r12d
  __int64 v12; // rbx
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *PoolWithTag; // r15
  unsigned int v14; // ebx
  unsigned __int64 v15; // rbx
  struct _MDL *v16; // rax
  PHYSICAL_ADDRESS *v17; // r13
  __int64 v18; // rcx
  PHYSICAL_ADDRESS v19; // rax
  int v21; // [rsp+38h] [rbp-60h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = a2;
  PoolWithTag = (struct _KBUGCHECK_REASON_CALLBACK_RECORD *)ExAllocatePoolWithTag(
                                                              NonPagedPoolNx,
                                                              a2 + 104LL,
                                                              0x50626D73u);
  if ( !PoolWithTag )
    goto LABEL_2;
  v21 = a1;
  v15 = ((unsigned __int64)(a1 & 0xFFF) + v12 + 4095) >> 12;
  v16 = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v15 + 48, 0x50426D73u);
  v9 = v16;
  if ( !v16 )
    goto LABEL_2;
  v16->Next = 0LL;
  v16->Size = 8 * (v15 + 6);
  v16->MdlFlags = 0;
  v16->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  v16->ByteOffset = a1 & 0xFFF;
  v16->ByteCount = a2;
  MiProbeAndLockPages((__int64)v16, 0, 0);
  v11 = 1;
  v10 = (char *)((v9->MdlFlags & 5) != 0
               ? v9->MappedSystemVa
               : MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000020u));
  if ( !v10 )
    goto LABEL_2;
  v17 = (PHYSICAL_ADDRESS *)(((unsigned __int64)&PoolWithTag[1].Entry.Flink + 7) & 0xFFFFFFFFFFFFFFF8uLL);
  PoolWithTag->State = 0;
  memset(v17, 0, 0x40uLL);
  v17->LowPart = 65539;
  v17->HighPart = a3;
  v17[1].LowPart = a4;
  v17[1].HighPart = a2;
  v17[2].LowPart = a5;
  v18 = (unsigned int)(a7 - v21);
  v17[2].HighPart = v18;
  v17[3].QuadPart = a6;
  v17[4].QuadPart = MmGetPhysicalAddress(&v10[v18]).QuadPart / 4096;
  v19.QuadPart = (((a7 & 0xFFF) + a3 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) == 0x1000
               ? -1LL
               : MmGetPhysicalAddress(&v10[a3 - 1 + v17[2].HighPart]).QuadPart / 4096;
  v17[5] = v19;
  v17[6].QuadPart = MmGetPhysicalAddress(BaseAddress).QuadPart / 4096;
  memmove(&v17[7], v10, a2);
  if ( KeRegisterBugCheckReasonCallback(
         PoolWithTag,
         (PKBUGCHECK_REASON_CALLBACK_ROUTINE)SmFatalPageErrorDumpCallback,
         KbCallbackSecondaryDumpData,
         (PUCHAR)"nt!store memory compression") )
  {
    PoolWithTag = 0LL;
    v14 = 0;
  }
  else
  {
LABEL_2:
    v14 = -1073741670;
  }
  if ( v10 )
    MmUnmapLockedPages(v10, v9);
  if ( v11 )
    MmUnlockPages(v9);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v14;
}
