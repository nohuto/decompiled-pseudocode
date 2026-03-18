/*
 * XREFs of MiEmptyWorkingSetPrivatePagesByVa @ 0x1401434AC
 * Callers:
 *     MiFlushAllPages @ 0x14016A738 (MiFlushAllPages.c)
 *     MmProcessWorkingSetControl @ 0x1406F7278 (MmProcessWorkingSetControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003FA20 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadSupportsPrivateCommit @ 0x1400507D0 (MiVadSupportsPrivateCommit.c)
 *     MiVadMapsLargeImage @ 0x140053940 (MiVadMapsLargeImage.c)
 *     MiUnlockVad @ 0x140074220 (MiUnlockVad.c)
 *     MiEmptyWorkingSetInitiate @ 0x14015A9F8 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSetPrivatePagesByVa(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rbp
  _QWORD *v4; // rax
  unsigned int v5; // edi
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  unsigned __int64 v9; // rcx

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(Process + 880, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  if ( (*(_DWORD *)(Process + 780) & 0x20) != 0 )
  {
    v5 = -1073741558;
  }
  else
  {
    v4 = *(_QWORD **)(Process + 1624);
    v5 = 0;
    v6 = 0LL;
    while ( v4 )
    {
      v6 = (unsigned __int64)v4;
      v4 = (_QWORD *)*v4;
    }
    while ( v6 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v6 + 40, 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 0x80u;
      if ( (*(_DWORD *)(v6 + 48) & 4) == 0 && MiVadSupportsPrivateCommit(v6) && !MiVadMapsLargeImage(v6) )
        MiEmptyWorkingSetInitiate(
          a1,
          2LL,
          (*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32)) << 12,
          ((*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) << 12) | 0xFFF);
      MiUnlockVad((__int64)CurrentThread, v6);
      v8 = *(_QWORD **)(v6 + 8);
      v9 = v6;
      if ( v8 )
      {
        v7 = (_QWORD *)*v8;
        v6 = *(_QWORD *)(v6 + 8);
        if ( *v8 )
        {
          do
          {
            v6 = (unsigned __int64)v7;
            v7 = (_QWORD *)*v7;
          }
          while ( v7 );
        }
      }
      else
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v6 || *(_QWORD *)v6 == v9 )
            break;
          v9 = v6;
        }
      }
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  return v5;
}
