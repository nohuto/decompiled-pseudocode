/*
 * XREFs of MiCreateZeroThreadContext @ 0x14017F66C
 * Callers:
 *     MiZeroNodePages @ 0x14017F400 (MiZeroNodePages.c)
 *     MiInitializePartitionThreads @ 0x140851E50 (MiInitializePartitionThreads.c)
 *     MiInitSystem @ 0x1409BC5A8 (MiInitSystem.c)
 * Callees:
 *     MiCreateUltraThreadContext @ 0x14013CAE4 (MiCreateUltraThreadContext.c)
 *     MiInitializeColorTable @ 0x14016A4CC (MiInitializeColorTable.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

PVOID __fastcall MiCreateZeroThreadContext(__int64 a1, int a2)
{
  PVOID PoolWithTag; // rax
  PVOID v5; // rbx
  int v6; // esi
  int v7; // edx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x108uLL, 0x20206D4Du);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x108uLL);
    v6 = 3;
    if ( a2 != 1 )
      v6 = 15;
    *((_BYTE *)v5 + 210) = a2 == 1;
    if ( a1 )
      v7 = *(_DWORD *)(a1 + 48);
    else
      v7 = 0;
    MiInitializeColorTable((_DWORD *)v5 + 58, v7);
    if ( (unsigned int)MiCreateUltraThreadContext((__int64)v5 + 80, *((_DWORD *)v5 + 61), v6) )
    {
      *((_QWORD *)v5 + 28) = a1;
      return v5;
    }
    ExFreePoolWithTag(v5, 0);
  }
  return 0LL;
}
