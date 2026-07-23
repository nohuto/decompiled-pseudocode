/*
 * XREFs of MiLockWorkingSetForLargeMapping @ 0x1401B5940
 * Callers:
 *     MiInsertLargeUserMapping @ 0x1402C59E0 (MiInsertLargeUserMapping.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiLockWorkingSetExclusive @ 0x1402BF844 (MiLockWorkingSetExclusive.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

unsigned __int8 __fastcall MiLockWorkingSetForLargeMapping(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rbp
  PVOID PoolWithTag; // rax
  unsigned __int8 v5; // al
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 v8; // si

  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return ((__int64 (*)(void))MiLockWorkingSetExclusive)();
  v2 = 0LL;
  v3 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  if ( !*(_QWORD *)(v3 + 552) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x800uLL, 0x6C53694Du);
    v2 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, 0x800uLL);
  }
  v5 = MiLockWorkingSetExclusive(a1);
  v8 = v5;
  if ( v2 )
  {
    if ( *(_QWORD *)(v3 + 552) )
    {
      MiUnlockWorkingSetExclusive(a1, v5, v6, v7);
      ExFreePoolWithTag(v2, 0);
      MiLockWorkingSetExclusive(a1);
    }
    else
    {
      *(_QWORD *)(v3 + 552) = v2;
    }
  }
  return v8;
}
