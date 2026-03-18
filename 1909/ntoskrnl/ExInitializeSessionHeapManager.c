/*
 * XREFs of ExInitializeSessionHeapManager @ 0x140179F44
 * Callers:
 *     MiSessionCreate @ 0x140741918 (MiSessionCreate.c)
 * Callees:
 *     ExCleanupSessionHeapManager @ 0x140166168 (ExCleanupSessionHeapManager.c)
 *     ExCreateHeap @ 0x14017A09C (ExCreateHeap.c)
 *     RtlHpHeapManagerStart @ 0x14017A0DC (RtlHpHeapManagerStart.c)
 *     RtlHpHeapManagerInitialize @ 0x14017A650 (RtlHpHeapManagerInitialize.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExInitializeSessionHeapManager(int a1, int a2)
{
  _OWORD *PoolWithTag; // rax
  _OWORD *v5; // rbx
  int v6; // edi
  __int64 v7; // rax
  __int128 v9; // [rsp+40h] [rbp-20h] BYREF
  __int128 v10; // [rsp+50h] [rbp-10h] BYREF
  __int64 v11; // [rsp+90h] [rbp+30h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38F0uLL, 0x65537048u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38F0uLL);
    v11 = 0x500010200LL;
    RtlHpHeapManagerInitialize(v5, &v11);
    *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 672) = v5;
    v5[909] = 4uLL;
    v6 = RtlHpHeapManagerStart((_DWORD)v5, 2, a1, a2 - a1, 0);
    if ( v6 >= 0 )
    {
      v9 = v5[909];
      v6 = ExCreateHeap(&v9, 0LL, v5 + 910);
      if ( v6 >= 0 )
      {
        v10 = v5[909];
        v6 = ExCreateHeap(&v10, 0LL, (char *)v5 + 14568);
        if ( v6 >= 0 )
        {
          v7 = *((_QWORD *)v5 + 1821);
          v5 = 0LL;
          *(_DWORD *)(v7 + 816) |= 2u;
          *(_BYTE *)(v7 + 269) |= 8u;
          *(_BYTE *)(v7 + 461) |= 8u;
          v6 = 0;
        }
      }
    }
    if ( v5 )
      ExCleanupSessionHeapManager();
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
