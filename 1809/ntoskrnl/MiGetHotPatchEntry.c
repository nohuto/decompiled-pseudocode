/*
 * XREFs of MiGetHotPatchEntry @ 0x140854FF8
 * Callers:
 *     MiHotPatchImage @ 0x140855350 (MiHotPatchImage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     RtlRbInsertNodeEx @ 0x1400BD690 (RtlRbInsertNodeEx.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     MiHotPatchImageTreeCompare @ 0x140855608 (MiHotPatchImageTreeCompare.c)
 */

unsigned __int64 __fastcall MiGetHotPatchEntry(unsigned __int64 a1, __int64 a2, int a3, int *a4)
{
  volatile signed __int64 *v7; // r12
  __int64 v8; // rax
  int v9; // edi
  unsigned __int64 v10; // rsi
  int v11; // ebp
  int v12; // eax
  unsigned __int64 v13; // rax
  PVOID PoolWithTag; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  bool v17; // r8
  int v18; // ebp
  unsigned __int64 v19; // rax
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (volatile signed __int64 *)(a1 + 16);
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = 0;
  v10 = *(_QWORD *)a1;
  if ( (v8 & 1) != 0 )
  {
    if ( v10 )
      v10 ^= a1;
    else
      v10 = 0LL;
  }
  v11 = v8 & 1;
  if ( !v10 )
    goto LABEL_20;
  do
  {
    v12 = MiHotPatchImageTreeCompare(a2, v10);
    if ( v12 >= 0 )
    {
      if ( v12 <= 0 )
        break;
      v13 = *(_QWORD *)(v10 + 8);
    }
    else
    {
      v13 = *(_QWORD *)v10;
    }
    if ( v11 && v13 )
      v10 ^= v13;
    else
      v10 = v13;
  }
  while ( v10 );
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 92) & 1) != 0 )
    {
      v10 = 0LL;
      v9 = 259;
      goto LABEL_43;
    }
    if ( *(_DWORD *)(v10 + 88) == a3 )
    {
      v10 = 0LL;
      v9 = 255;
      goto LABEL_43;
    }
  }
  else
  {
LABEL_20:
    if ( !a3 )
    {
      v10 = 0LL;
      v9 = 1075380276;
      goto LABEL_43;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x4E455048u);
    v10 = (unsigned __int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
      goto LABEL_43;
    }
    memset(PoolWithTag, 0, 0x60uLL);
    *(_QWORD *)(v10 + 24) = a2;
    *(_DWORD *)(v10 + 88) = 0;
    v15 = *(_QWORD *)(a1 + 8);
    v16 = *(_QWORD *)a1;
    if ( (v15 & 1) != 0 )
    {
      if ( v16 )
        v16 ^= a1;
      else
        v16 = 0LL;
    }
    v17 = 0;
    v18 = v15 & 1;
    if ( v16 )
    {
      while ( 1 )
      {
        if ( (int)MiHotPatchImageTreeCompare(a2, v16) < 0 )
        {
          v19 = *(_QWORD *)v16;
          if ( v18 )
          {
            if ( !v19 )
              goto LABEL_40;
            v19 ^= v16;
          }
          if ( !v19 )
          {
LABEL_40:
            v17 = 0;
            break;
          }
        }
        else
        {
          v19 = *(_QWORD *)(v16 + 8);
          if ( v18 )
          {
            if ( !v19 )
              goto LABEL_34;
            v19 ^= v16;
          }
          if ( !v19 )
          {
LABEL_34:
            v17 = 1;
            break;
          }
        }
        v16 = v19;
      }
    }
    RtlRbInsertNodeEx(a1, v16, v17, (_QWORD *)v10);
  }
  *(_DWORD *)(v10 + 92) |= 1u;
LABEL_43:
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  *a4 = v9;
  return v10;
}
