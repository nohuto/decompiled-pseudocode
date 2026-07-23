/*
 * XREFs of MiGetHotPatchEntry @ 0x140856238
 * Callers:
 *     MiHotPatchImage @ 0x140856590 (MiHotPatchImage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     RtlRbInsertNodeEx @ 0x1400BD5F0 (RtlRbInsertNodeEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     MiHotPatchImageTreeCompare @ 0x140856848 (MiHotPatchImageTreeCompare.c)
 */

unsigned __int64 __fastcall MiGetHotPatchEntry(PRTL_RB_TREE Tree, _RTL_BALANCED_NODE *a2, int a3, int *a4)
{
  volatile signed __int64 *v7; // r12
  _RTL_BALANCED_NODE *Min; // rax
  int v9; // edi
  unsigned __int64 Root; // rsi
  int v11; // ebp
  int v12; // eax
  unsigned __int64 v13; // rax
  _RTL_BALANCED_NODE *PoolWithTag; // rax
  _RTL_BALANCED_NODE *v15; // rax
  unsigned __int64 v16; // r14
  BOOLEAN v17; // r8
  int v18; // ebp
  unsigned __int64 v19; // rax
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (volatile signed __int64 *)&Tree[1];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Tree[1], 0LL);
  Min = Tree->Min;
  v9 = 0;
  Root = (unsigned __int64)Tree->Root;
  if ( ((unsigned __int8)Min & 1) != 0 )
  {
    if ( Root )
      Root ^= (unsigned __int64)Tree;
    else
      Root = 0LL;
  }
  v11 = (unsigned __int8)Min & 1;
  if ( !Root )
    goto LABEL_20;
  do
  {
    v12 = MiHotPatchImageTreeCompare(a2, Root);
    if ( v12 >= 0 )
    {
      if ( v12 <= 0 )
        break;
      v13 = *(_QWORD *)(Root + 8);
    }
    else
    {
      v13 = *(_QWORD *)Root;
    }
    if ( v11 && v13 )
      Root ^= v13;
    else
      Root = v13;
  }
  while ( Root );
  if ( Root )
  {
    if ( (*(_DWORD *)(Root + 92) & 1) != 0 )
    {
      Root = 0LL;
      v9 = 259;
      goto LABEL_43;
    }
    if ( *(_DWORD *)(Root + 88) == a3 )
    {
      Root = 0LL;
      v9 = 255;
      goto LABEL_43;
    }
  }
  else
  {
LABEL_20:
    if ( !a3 )
    {
      Root = 0LL;
      v9 = 1075380276;
      goto LABEL_43;
    }
    PoolWithTag = (_RTL_BALANCED_NODE *)ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x4E455048u);
    Root = (unsigned __int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
      goto LABEL_43;
    }
    memset(PoolWithTag, 0, 0x60uLL);
    *(_QWORD *)(Root + 24) = a2;
    *(_DWORD *)(Root + 88) = 0;
    v15 = Tree->Min;
    v16 = (unsigned __int64)Tree->Root;
    if ( ((unsigned __int8)v15 & 1) != 0 )
    {
      if ( v16 )
        v16 ^= (unsigned __int64)Tree;
      else
        v16 = 0LL;
    }
    v17 = 0;
    v18 = (unsigned __int8)v15 & 1;
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
    RtlRbInsertNodeEx(Tree, (PRTL_BALANCED_NODE)v16, v17, (PRTL_BALANCED_NODE)Root);
  }
  *(_DWORD *)(Root + 92) |= 1u;
LABEL_43:
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  *a4 = v9;
  return Root;
}
