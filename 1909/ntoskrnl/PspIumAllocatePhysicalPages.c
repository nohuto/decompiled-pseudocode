/*
 * XREFs of PspIumAllocatePhysicalPages @ 0x140308C48
 * Callers:
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FE40 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x14006AF70 (MmUnmapLockedPages.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MmAllocateSecureKernelPages @ 0x1402DCE20 (MmAllocateSecureKernelPages.c)
 *     MmFreeSecureKernelPages @ 0x1402DD10C (MmFreeSecureKernelPages.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspIumAllocatePhysicalPages(int a1, ULONG_PTR **a2, unsigned int a3, ULONG_PTR *a4, _DWORD *a5)
{
  ULONG_PTR *SecureKernelPages; // rax
  unsigned int v10; // ebx
  ULONG_PTR *v11; // rdi
  ULONG_PTR v13; // rax
  unsigned int v14; // ebp
  unsigned int v15; // ebp
  _DWORD *v16; // rax
  _DWORD *v17; // rsi
  _BYTE MemoryDescriptorList[56]; // [rsp+30h] [rbp-58h] BYREF

  memset(MemoryDescriptorList, 0, sizeof(MemoryDescriptorList));
  SecureKernelPages = MmAllocateSecureKernelPages(a2, (unsigned int)(a1 + 1), a3, 0, a5);
  v10 = 0;
  v11 = SecureKernelPages;
  if ( !SecureKernelPages )
    return 3221225495LL;
  if ( a1 )
  {
    v14 = *((_DWORD *)SecureKernelPages + 10);
    *(_DWORD *)&MemoryDescriptorList[8] = 131128;
    *(_QWORD *)&MemoryDescriptorList[32] = 0LL;
    *(_QWORD *)&MemoryDescriptorList[40] = 4096LL;
    v15 = v14 >> 12;
    *(_QWORD *)&MemoryDescriptorList[48] = SecureKernelPages[v15 + 5];
    v16 = MmMapLockedPagesSpecifyCache((PMDL)MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    v17 = v16;
    if ( !v16 )
    {
      MmFreeSecureKernelPages((ULONG_PTR)v11, 0);
      v10 = -1073741670;
      goto LABEL_9;
    }
    memmove(v16, v11, 8LL * v15 + 48);
    v17[10] -= 4096;
    MmUnmapLockedPages(v17, (PMDL)MemoryDescriptorList);
    v13 = *(_QWORD *)&MemoryDescriptorList[48];
  }
  else
  {
    v13 = SecureKernelPages[6];
  }
  *a4 = v13;
LABEL_9:
  ExFreePoolWithTag(v11, 0);
  return v10;
}
