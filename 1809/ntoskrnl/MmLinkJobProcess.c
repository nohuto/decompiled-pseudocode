/*
 * XREFs of MmLinkJobProcess @ 0x14060627C
 * Callers:
 *     PspEstablishJobHierarchy @ 0x140605FE0 (PspEstablishJobHierarchy.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiRemoveSharedCommitNode @ 0x1405F1650 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1405F18A0 (MiInsertSharedCommitNode.c)
 */

__int64 __fastcall MmLinkJobProcess(__int64 a1, unsigned __int64 a2)
{
  int inserted; // r15d
  __int64 v4; // r13
  volatile signed __int64 *v5; // r12
  _QWORD *v6; // rsi
  _QWORD *v7; // r14
  __int64 v8; // r13
  _QWORD *PoolWithTag; // rax
  __int64 ***v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 *v16; // rsi
  _QWORD *v17; // r14
  __int64 *v20; // rcx
  __int64 *v21; // rax
  unsigned __int64 i; // rsi
  __int64 *v23; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v24; // [rsp+28h] [rbp-8h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp+48h]

  inserted = 0;
  v24 = &v23;
  v23 = (__int64 *)&v23;
  v4 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (volatile signed __int64 *)(a2 + 1920);
  ExAcquirePushLockExclusiveEx(a2 + 1920, 0LL);
  if ( (*(_DWORD *)(a2 + 1740) & 0x10) == 0 )
  {
    v6 = (_QWORD *)(a2 + 1928);
    v7 = *(_QWORD **)(a2 + 1928);
    if ( v7 != (_QWORD *)(a2 + 1928) )
    {
      while ( 1 )
      {
        v8 = v7[2];
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6E53694Du);
        if ( !PoolWithTag )
          break;
        PoolWithTag[7] = v8;
        PoolWithTag[4] = *(v7 - 1);
        v10 = (__int64 ***)(PoolWithTag + 5);
        v11 = v24;
        if ( *v24 != (__int64 *)&v23 )
          goto LABEL_35;
        v10[1] = v24;
        *v10 = &v23;
        *v11 = v10;
        v24 = (__int64 **)v10;
        v7 = (_QWORD *)*v7;
        if ( v7 == v6 )
          goto LABEL_6;
      }
      inserted = -1073741670;
LABEL_6:
      v4 = a1;
    }
    while ( (_QWORD *)*v6 != v6 )
      MiRemoveSharedCommitNode(*(_QWORD *)(*v6 + 16LL), a2, 1);
    if ( inserted < 0 )
    {
      while ( 1 )
      {
        v20 = v23;
        if ( v23 == (__int64 *)&v23 )
          break;
        if ( (__int64 **)v23[1] != &v23 )
          goto LABEL_35;
        v21 = (__int64 *)*v23;
        if ( *(__int64 **)(*v23 + 8) != v23 )
          goto LABEL_35;
        v23 = (__int64 *)*v23;
        v21[1] = (__int64)&v23;
        ExFreePoolWithTag(v20 - 5, 0);
      }
    }
    else if ( (*(_DWORD *)(a2 + 1740) & 8) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a2 + 1740), 8u);
    }
  }
  v12 = *(_QWORD **)(v4 + 48);
  v13 = (_QWORD *)(a2 + 1136);
  if ( *v12 != v4 + 40 )
LABEL_35:
    __fastfail(3u);
  *v13 = v4 + 40;
  *(_QWORD *)(a2 + 1144) = v12;
  *v12 = v13;
  *(_QWORD *)(v4 + 48) = v13;
  *(_QWORD *)(a2 + 944) = v4;
  while ( 1 )
  {
    v14 = v23;
    if ( v23 == (__int64 *)&v23 )
      break;
    if ( (__int64 **)v23[1] != &v23 )
      goto LABEL_35;
    v15 = (__int64 *)*v23;
    if ( *(__int64 **)(*v23 + 8) != v23 )
      goto LABEL_35;
    v23 = (__int64 *)*v23;
    v15[1] = (__int64)&v23;
    v16 = v14 - 5;
    if ( inserted >= 0 )
    {
      v17 = (_QWORD *)v16[7];
      if ( v16[4] )
      {
        do
        {
          inserted = MiInsertSharedCommitNode(v17, a2, 1);
          if ( inserted < 0 )
            break;
        }
        while ( v16[4]-- != 1 );
      }
    }
    ExFreePoolWithTag(v16, 0);
  }
  if ( inserted < 0 )
  {
    for ( i = a2 + 1928; *(_QWORD *)i != i; MiRemoveSharedCommitNode(*(_QWORD *)(*(_QWORD *)i + 16LL), a2, 1) )
      ;
    _InterlockedAnd((volatile signed __int32 *)(a2 + 1740), 0xFFFFFFF7);
    _InterlockedOr((volatile signed __int32 *)(a2 + 1740), 0x10u);
  }
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
