/*
 * XREFs of MiGetAweVadPartition @ 0x1402D6504
 * Callers:
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 * Callees:
 *     PsGetCurrentProcess @ 0x140006530 (PsGetCurrentProcess.c)
 *     MiGetAweNode @ 0x1402D6468 (MiGetAweNode.c)
 *     MiLockAweVadsShared @ 0x1402D6EDC (MiLockAweVadsShared.c)
 *     MiUnlockAweVadsShared @ 0x1402D7C70 (MiUnlockAweVadsShared.c)
 *     MiGetAweInfoPartition @ 0x140896848 (MiGetAweInfoPartition.c)
 */

__int64 __fastcall MiGetAweVadPartition(__int64 a1)
{
  int v1; // eax
  __int64 AweInfoPartition; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *AweNode; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r10

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x100000) != 0 && (v1 & 0x1000000) == 0 && (v1 & 0x2000000) != 0 )
    return *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)&PsGetCurrentProcess()[1].Spare2[69]);
  CurrentThread = KeGetCurrentThread();
  MiLockAweVadsShared(CurrentThread);
  AweNode = MiGetAweNode((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12);
  AweInfoPartition = MiGetAweInfoPartition(AweNode[4], v6, v7);
  MiUnlockAweVadsShared(CurrentThread, v8);
  return AweInfoPartition;
}
