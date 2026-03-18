/*
 * XREFs of PspIumAllocatePartitionState @ 0x140308B04
 * Callers:
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     MiProbeAndLockPages @ 0x1400CBF90 (MiProbeAndLockPages.c)
 *     MmAllocateSecureKernelPages @ 0x1402DCE20 (MmAllocateSecureKernelPages.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspIumAllocatePartitionState(__int64 a1)
{
  ULONG_PTR **v1; // rsi
  _DWORD *PoolWithTag; // rax
  unsigned __int64 v4; // rbx
  unsigned int v6; // ecx
  unsigned int v7; // eax
  ULONG_PTR *v8; // rax
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(ULONG_PTR ***)(a1 + 16);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA8uLL, 0x70507549u);
  v4 = (unsigned __int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0;
  PoolWithTag[22] = 0;
  PoolWithTag[1] = 0;
  *((_QWORD *)PoolWithTag + 1) = v1;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  v6 = *(_DWORD *)(a1 + 24);
  PoolWithTag[38] = v6;
  v7 = 8;
  if ( v6 >= 8 )
    v7 = v6;
  else
    *(_DWORD *)(v4 + 152) = 8;
  v8 = MmAllocateSecureKernelPages(v1, v7, 1u, 1, &v9);
  *(_QWORD *)(v4 + 160) = v8;
  if ( !v8 )
  {
    ExFreePoolWithTag((PVOID)v4, 0);
    return 3221225626LL;
  }
  *(_DWORD *)(v4 + 156) = *(_DWORD *)(v4 + 152);
  *(_QWORD *)(v4 + 96) = 0LL;
  *(_WORD *)(v4 + 106) = 0;
  *(_DWORD *)(v4 + 136) = 168;
  *(_WORD *)(v4 + 104) = 8 * ((((v4 & 0xFFF) + 4263) >> 12) + 6);
  *(_QWORD *)(v4 + 128) = v4 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v4 + 140) = v4 & 0xFFF;
  MiProbeAndLockPages((_DWORD *)(v4 + 96), 0, 1);
  if ( v1 )
    ObfReferenceObjectWithTag(v1, 0x746C6644u);
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(v4 + 144);
  return 0LL;
}
