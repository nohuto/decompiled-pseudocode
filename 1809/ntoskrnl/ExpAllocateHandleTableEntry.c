/*
 * XREFs of ExpAllocateHandleTableEntry @ 0x1405D2470
 * Callers:
 *     ExCreateHandleEx @ 0x1405D2380 (ExCreateHandleEx.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140697D34 (ExpAllocateHandleTableEntrySlow.c)
 */

__int64 __fastcall ExpAllocateHandleTableEntry(int *a1, _QWORD *a2)
{
  char v2; // al
  unsigned int Number; // r15d
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  unsigned int v8; // ebp
  int *v9; // rbx
  unsigned int v10; // eax
  char HandleTableEntrySlow; // di
  __int64 result; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // eax
  int v16; // [rsp+50h] [rbp+8h]

  v2 = *((_BYTE *)a1 + 44);
  if ( (v2 & 4) == 0 )
  {
    if ( (v2 & 1) != 0 )
      Number = 0;
    else
      Number = KeGetPcr()->Prcb.Number;
    v6 = ExpFreeListCount;
    do
    {
      v7 = 0;
      v16 = *a1;
      v8 = Number;
      do
      {
        v9 = &a1[16 * v8 + 16];
        if ( *((_QWORD *)v9 + 1) )
        {
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&a1[16 * v8 + 16], 0LL);
          v13 = *((_QWORD *)v9 + 1);
          if ( v13 )
          {
            v14 = *(_QWORD *)(v13 + 8);
            *((_QWORD *)v9 + 1) = v14;
            if ( !v14 )
              *((_QWORD *)v9 + 2) = 0LL;
            v15 = ++v9[6];
            if ( v15 > v9[7] )
              v9[7] = v15;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&a1[16 * v8 + 16]);
          KeAbPostRelease((ULONG_PTR)&a1[16 * v8 + 16]);
          if ( v13 )
          {
            result = v13;
            *a2 = *(_QWORD *)((v13 & 0xFFFFFFFFFFFFF000uLL) + 8)
                + 4 * ((__int64)(v13 - (v13 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
            return result;
          }
        }
        v10 = v8 + 1;
        ++v7;
        v8 = 0;
        if ( v10 != v6 )
          v8 = v10;
      }
      while ( v7 < v6 );
      HandleTableEntrySlow = 1;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 14), 0LL);
      if ( v16 == *a1 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(a1, &a1[16 * Number + 16]);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)a1 + 7);
      KeAbPostRelease((ULONG_PTR)(a1 + 14));
    }
    while ( HandleTableEntrySlow );
  }
  return 0LL;
}
