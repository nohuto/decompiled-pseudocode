/*
 * XREFs of KeAllocateXStateContext @ 0x14012E7D0
 * Callers:
 *     KeSaveExtendedAndSupervisorState @ 0x14012E5AC (KeSaveExtendedAndSupervisorState.c)
 *     VfCtxInit @ 0x140941B04 (VfCtxInit.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KeAllocateXStateContext(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ebx
  PVOID PoolWithTag; // rax
  unsigned __int64 v6; // rcx

  v3 = 576;
  if ( a3 >= 0x240 )
    v3 = a3;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v3 + 63), 0x76615358u);
  *(_QWORD *)(a1 + 24) = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  *(_DWORD *)(a1 + 8) = v3;
  v6 = ((unsigned __int64)PoolWithTag + 63) & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(a1 + 16) = v6;
  memset((void *)(v6 + 512), 0, 0x40uLL);
  return 0LL;
}
