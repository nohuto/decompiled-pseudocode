/*
 * XREFs of MiScrubProcessLargePages @ 0x1402CFD2C
 * Callers:
 *     MiScrubProcesses @ 0x140860E20 (MiScrubProcesses.c)
 * Callees:
 *     MiUnlockVadShared @ 0x14001AF48 (MiUnlockVadShared.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400531B0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiVadMapsLargeImage @ 0x140074A00 (MiVadMapsLargeImage.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiScrubLargeMappedPage @ 0x1402CF428 (MiScrubLargeMappedPage.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiScrubProcessLargePages(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Process; // r13
  int v4; // r15d
  _QWORD *v5; // rbp
  _QWORD *v6; // r12
  _QWORD *v7; // rax
  _QWORD *i; // rdi
  unsigned int v9; // r14d
  _QWORD **v10; // rax
  __int64 v11; // rsi
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  _QWORD *PoolWithTag; // rax
  __int64 v15; // rax
  int v16; // r15d
  __int64 *v17; // rsi
  unsigned int v18; // ebp
  __int64 v19; // rdi
  PVOID P; // [rsp+80h] [rbp+18h]
  _QWORD *v24; // [rsp+88h] [rbp+20h]
  void *v25; // [rsp+88h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->KernelApcDisable;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(Process + 872, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  }
  else
  {
    v4 = *(_DWORD *)(Process + 1708);
    v5 = 0LL;
    v24 = 0LL;
    v6 = 0LL;
    v7 = *(_QWORD **)(Process + 1576);
    i = 0LL;
    P = 0LL;
    v9 = 13;
    while ( v7 )
    {
      i = v7;
      v7 = (_QWORD *)*v7;
    }
    while ( v4 && i )
    {
      v10 = (_QWORD **)i[1];
      v11 = (__int64)i;
      v12 = i;
      if ( v10 )
      {
        v13 = *v10;
        for ( i = (_QWORD *)i[1]; v13; v13 = (_QWORD *)*v13 )
          i = v13;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v12 )
            break;
          v12 = i;
        }
      }
      if ( (*(_BYTE *)(v11 + 48) & 7) == 5 || MiVadMapsLargeImage(v11) )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockSharedEx(v11 + 40, 0LL);
        BYTE1(CurrentThread[1].Queue) |= 0x20u;
        if ( (*(_DWORD *)(v11 + 48) & 0x20000000) != 0 )
        {
          MiUnlockVadShared((__int64)CurrentThread, v11);
        }
        else
        {
          if ( v9 >= 0xD )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x7356694Du);
            v5 = PoolWithTag;
            if ( !PoolWithTag )
            {
              MiUnlockVadShared((__int64)CurrentThread, v11);
              break;
            }
            v9 = 0;
            memset(PoolWithTag, 0, 0x70uLL);
            if ( v6 )
            {
              *v24 = v5;
            }
            else
            {
              v6 = v5;
              P = v5;
            }
            v24 = v5;
          }
          v15 = v9++;
          v5[v15 + 1] = v11;
          _InterlockedIncrement((volatile signed __int32 *)(v11 + 36));
          MiUnlockVadShared((__int64)CurrentThread, v11);
          --v4;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    v16 = 1;
    if ( v6 )
    {
      do
      {
        v17 = v6 + 1;
        v18 = 0;
        v25 = (void *)*v6;
        do
        {
          v19 = *v17;
          if ( !*v17 )
            break;
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx(v19 + 40, 0LL);
          LOBYTE(CurrentThread[1].Queue) |= 0x80u;
          if ( (*(_DWORD *)(v19 + 48) & 0x20000000) == 0 && v16 == 1 )
            v16 = MiScrubLargeMappedPage(v19, a1, Process, a2);
          MiUnlockAndDereferenceVad((char *)v19);
          ++v18;
          ++v17;
        }
        while ( v18 < 0xD );
        ExFreePoolWithTag(P, 0);
        P = v25;
        v6 = v25;
      }
      while ( v25 );
    }
  }
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
}
