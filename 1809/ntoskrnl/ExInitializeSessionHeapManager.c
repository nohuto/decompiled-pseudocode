/*
 * XREFs of ExInitializeSessionHeapManager @ 0x1401701B8
 * Callers:
 *     MiSessionCreate @ 0x1407162A8 (MiSessionCreate.c)
 * Callees:
 *     ExCleanupSessionHeapManager @ 0x140154554 (ExCleanupSessionHeapManager.c)
 *     ExCreateHeap @ 0x140170328 (ExCreateHeap.c)
 *     RtlHpHeapManagerStart @ 0x140170368 (RtlHpHeapManagerStart.c)
 *     RtlHpHeapManagerInitialize @ 0x1401708D0 (RtlHpHeapManagerInitialize.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExInitializeSessionHeapManager(int a1, int a2)
{
  int v4; // ebx
  char *PoolWithTag; // rax
  char *v6; // rdi
  __int64 v7; // rax
  __int128 v9; // [rsp+40h] [rbp-20h] BYREF
  __int128 v10; // [rsp+50h] [rbp-10h] BYREF
  __int64 v11; // [rsp+90h] [rbp+30h] BYREF

  if ( (unsigned int)ExpHeapBackedPoolEnabledState >= 2 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30E8uLL, 0x65537048u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x30E8uLL);
      v11 = 0x500010200LL;
      RtlHpHeapManagerInitialize(v6, &v11);
      *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3424) = v6;
      *(_OWORD *)(v6 + 12488) = 4uLL;
      v4 = RtlHpHeapManagerStart((_DWORD)v6, 2, a1, a2 - a1, 0);
      if ( v4 >= 0 )
      {
        v9 = *(_OWORD *)(v6 + 12488);
        v4 = ExCreateHeap(&v9, 0LL, v6 + 12504);
        if ( v4 >= 0 )
        {
          v10 = *(_OWORD *)(v6 + 12488);
          v4 = ExCreateHeap(&v10, 0LL, v6 + 12512);
          if ( v4 >= 0 )
          {
            v7 = *((_QWORD *)v6 + 1564);
            v6 = 0LL;
            *(_DWORD *)(v7 + 816) |= 2u;
            *(_BYTE *)(v7 + 269) |= 8u;
            *(_BYTE *)(v7 + 461) |= 8u;
            v4 = 0;
          }
        }
      }
      if ( v6 )
        ExCleanupSessionHeapManager();
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v4;
}
