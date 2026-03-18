/*
 * XREFs of MiCommitPoolMemory @ 0x140022A30
 * Callers:
 *     MmAllocatePoolMemory @ 0x14002270C (MmAllocatePoolMemory.c)
 * Callees:
 *     MiInitializePoolCommitPacket @ 0x140022864 (MiInitializePoolCommitPacket.c)
 *     MiLockPoolCommitPageTable @ 0x140022C50 (MiLockPoolCommitPageTable.c)
 *     MiLinkPoolCommitChain @ 0x140022DC0 (MiLinkPoolCommitChain.c)
 *     MiWorkingSetIsContended @ 0x140023050 (MiWorkingSetIsContended.c)
 *     MiUnlockPoolCommitWs @ 0x140023084 (MiUnlockPoolCommitWs.c)
 *     MiLockPoolCommitWs @ 0x1400230D4 (MiLockPoolCommitWs.c)
 *     MiReturnExcessPoolCommit @ 0x140023110 (MiReturnExcessPoolCommit.c)
 *     MiCountSystemPool @ 0x140023198 (MiCountSystemPool.c)
 *     MiFillPoolCommitPageTable @ 0x140023250 (MiFillPoolCommitPageTable.c)
 *     MiMakeZeroedPageTablesEx @ 0x14008D5B8 (MiMakeZeroedPageTablesEx.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140109950 (KeShouldYieldProcessor.c)
 *     MiClearNonPagedPtes @ 0x14010E6B8 (MiClearNonPagedPtes.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402C0B60 (MiLogPerfMemoryRangeEvent.c)
 */

__int64 __fastcall MiCommitPoolMemory(_QWORD *a1, ULONG_PTR *a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  unsigned int v9; // r14d
  __int64 result; // rax
  int v11; // r15d
  unsigned __int64 v12; // rdi
  __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  int v15; // edx
  __int64 v16; // rdx
  _QWORD v17[14]; // [rsp+30h] [rbp-41h] BYREF

  memset(v17, 0, 0x68uLL);
  v9 = a5 & 0xFFFFFFDF;
  if ( (a5 & 1) != 0 )
    v9 = a5;
  result = MiInitializePoolCommitPacket(a1, a2, a3, a4, v9, (__int64)v17);
  v11 = result;
  if ( (int)result < 0 )
    return result;
  v12 = ((v17[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiLockPoolCommitWs(v17);
  if ( v12 > v17[7] )
    goto LABEL_13;
  while ( 1 )
  {
    v13 = v17[5];
    if ( v17[12] )
    {
      MiUnlockPageTableInternal(v17[5]);
      v17[12] = 0LL;
    }
    if ( BYTE4(v17[9]) < 2u && ((unsigned int)MiWorkingSetIsContended(v13) || KeShouldYieldProcessor()) )
    {
      MiUnlockPoolCommitWs(v17);
      MiLockPoolCommitWs(v17);
    }
    v14 = v12 & 0xFFFFFFFFFFFFF000uLL;
    if ( !(unsigned int)MiLockPoolCommitPageTable(v17, v12) )
      break;
    MiLinkPoolCommitChain(v17, v12);
    v12 = v14 + 4096;
LABEL_12:
    if ( v12 > v17[7] )
      goto LABEL_13;
  }
  MiUnlockPoolCommitWs(v17);
  v15 = v14 + 4088;
  if ( v14 + 4088 > v17[7] )
    v15 = v17[7];
  if ( (unsigned int)MiMakeZeroedPageTablesEx(v12, v15, (LODWORD(v17[9]) >> 28) & 2 | 0x200, v17[4], a3 & 0x7F) )
  {
    MiLockPoolCommitWs(v17);
    goto LABEL_12;
  }
  BYTE5(v17[9]) = 1;
  v11 = -1073741670;
  MiLockPoolCommitWs(v17);
LABEL_13:
  MiFillPoolCommitPageTable(v17);
  MiUnlockPoolCommitWs(v17);
  if ( v11 < 0 )
  {
    if ( (v9 & 1) == 0 )
    {
      v16 = (v17[1] >> 9) & 0x7FFFFFFFF8LL;
      if ( v12 != v16 - 0x98000000000LL )
        MiClearNonPagedPtes(v17[1], (__int64)(v12 - v16 + 0x98000000000LL) >> 3, 0x4000LL, (LODWORD(v17[9]) >> 29) & 1);
    }
  }
  else
  {
    if ( (a3 & 0x20000000) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(*a1, 0LL, 11LL, v17[10]);
    MiCountSystemPool(v9, v17[11], 1LL);
  }
  MiReturnExcessPoolCommit(v17);
  return (unsigned int)v11;
}
