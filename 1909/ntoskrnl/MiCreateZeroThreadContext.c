/*
 * XREFs of MiCreateZeroThreadContext @ 0x14018892C
 * Callers:
 *     MiZeroNodePages @ 0x1401886D0 (MiZeroNodePages.c)
 *     MiInitializePartitionThreads @ 0x14088B0E4 (MiInitializePartitionThreads.c)
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 * Callees:
 *     MiCreateUltraThreadContext @ 0x1400F8D40 (MiCreateUltraThreadContext.c)
 *     MiInitializeColorTable @ 0x140175164 (MiInitializeColorTable.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
