/*
 * XREFs of MmInitializeHandBuiltProcess @ 0x14075FA5C
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiAllowWorkingSetExpansion @ 0x1400F3394 (MiAllowWorkingSetExpansion.c)
 *     ExInitializeAutoExpandPushLock @ 0x1401192A0 (ExInitializeAutoExpandPushLock.c)
 *     MiInsertNewProcess @ 0x14013CFF0 (MiInsertNewProcess.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     MiAllocateProcessShadow @ 0x1406D2D8C (MiAllocateProcessShadow.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbp
  _KPROCESS *Process; // r14
  LONG *SharedVm; // rax
  unsigned __int64 DirectoryTableBase; // rcx
  LONG *v7; // r15
  __int64 result; // rax
  LONG *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x230uLL, 0x3250694Du);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x230uLL);
  ExInitializeAutoExpandPushLock(v3 + 45, 1);
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  DirectoryTableBase = Process->DirectoryTableBase;
  *(_DWORD *)(a1 + 2080) |= 0x20u;
  *(_QWORD *)(a1 + 872) = 0LL;
  v7 = SharedVm;
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 40) = DirectoryTableBase;
  *(_QWORD *)(a1 + 1936) = a1 + 1928;
  *(_QWORD *)(a1 + 1928) = a1 + 1928;
  *(_QWORD *)(a1 + 1920) = 0LL;
  result = MiAllocateProcessShadow(a1, 0);
  if ( (int)result >= 0 )
  {
    v9 = MiGetSharedVm(a1 + 1280);
    v10 = (_QWORD *)(a1 + 1320);
    *v9 = 0;
    *(_QWORD *)(a1 + 1576) = 0LL;
    *(_QWORD *)(a1 + 1392) = *(_QWORD *)&Process[1].Spare2[23];
    *(_QWORD *)(a1 + 1432) = *(_QWORD *)&Process[1].Spare2[63];
    *((_QWORD *)v9 + 7) = *((_QWORD *)v7 + 7);
    *((_QWORD *)v9 + 8) = *((_QWORD *)v7 + 8);
    v11 = 8LL;
    *(_QWORD *)(a1 + 1400) = *(_QWORD *)&Process[1].Spare2[31];
    *(_QWORD *)(a1 + 1408) = *(_QWORD *)&Process[1].Spare2[39];
    *(_QWORD *)(a1 + 1416) = *(_QWORD *)&Process[1].Spare2[47];
    *(_QWORD *)(a1 + 1424) = *(_QWORD *)&Process[1].Spare2[55];
    *(_QWORD *)(a1 + 1152) = Process[1].ActiveProcessors.Bitmap[18];
    *(_QWORD *)(a1 + 920) = Process[1].Affinity.Bitmap[13];
    *(_QWORD *)(a1 + 1296) = v3;
    do
    {
      *v10 = *(_QWORD *)((char *)v10 + (_QWORD)Process - a1);
      ++v10;
      --v11;
    }
    while ( v11 );
    MiInsertNewProcess((_QWORD *)a1, 0LL);
    MiAllowWorkingSetExpansion(a1 + 1280);
    return 0LL;
  }
  return result;
}
