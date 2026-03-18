/*
 * XREFs of MmInitializeHandBuiltProcess @ 0x140785DE0
 * Callers:
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 * Callees:
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiInsertNewProcess @ 0x1400E3120 (MiInsertNewProcess.c)
 *     MiAllowWorkingSetExpansion @ 0x1400E5724 (MiAllowWorkingSetExpansion.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     MiAllocateProcessShadow @ 0x14068D5F8 (MiAllocateProcessShadow.c)
 *     MiInitializeProcessAwe @ 0x1408968B4 (MiInitializeProcessAwe.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess(__int64 a1)
{
  char *PoolWithTag; // rax
  char *v3; // rbp
  _KPROCESS *Process; // r14
  LONG *SharedVm; // rax
  unsigned __int64 DirectoryTableBase; // rcx
  LONG *v7; // r15
  __int64 result; // rax
  LONG *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x270uLL, 0x3250694Du);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x270uLL);
  MiInitializeProcessAwe(v3 + 48);
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[6]);
  DirectoryTableBase = Process->DirectoryTableBase;
  *(_DWORD *)(a1 + 2128) |= 0x20u;
  *(_QWORD *)(a1 + 880) = 0LL;
  v7 = SharedVm;
  *(_QWORD *)(a1 + 888) = 0LL;
  *(_QWORD *)(a1 + 40) = DirectoryTableBase;
  *(_QWORD *)(a1 + 1984) = a1 + 1976;
  *(_QWORD *)(a1 + 1976) = a1 + 1976;
  *(_QWORD *)(a1 + 1968) = 0LL;
  result = MiAllocateProcessShadow(a1, 0);
  if ( (int)result >= 0 )
  {
    v9 = MiGetSharedVm(a1 + 1280);
    v10 = (_QWORD *)(a1 + 1320);
    *v9 = 0;
    *(_QWORD *)(a1 + 1624) = 0LL;
    *(_QWORD *)(a1 + 1392) = *(_QWORD *)&Process[1].Spare2[7];
    *(_QWORD *)(a1 + 1432) = *(_QWORD *)&Process[1].Spare2[47];
    *((_QWORD *)v9 + 6) = *((_QWORD *)v7 + 6);
    *((_QWORD *)v9 + 7) = *((_QWORD *)v7 + 7);
    v11 = 8LL;
    *(_QWORD *)(a1 + 1400) = *(_QWORD *)&Process[1].Spare2[15];
    *(_QWORD *)(a1 + 1408) = *(_QWORD *)&Process[1].Spare2[23];
    *(_QWORD *)(a1 + 1416) = *(_QWORD *)&Process[1].Spare2[31];
    *(_QWORD *)(a1 + 1424) = *(_QWORD *)&Process[1].Spare2[39];
    *(_QWORD *)(a1 + 1152) = Process[1].ActiveProcessors.Bitmap[17];
    *(_QWORD *)(a1 + 928) = Process[1].Affinity.Bitmap[13];
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
