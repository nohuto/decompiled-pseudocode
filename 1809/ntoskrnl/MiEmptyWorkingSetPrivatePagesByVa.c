/*
 * XREFs of MiEmptyWorkingSetPrivatePagesByVa @ 0x1402A7D10
 * Callers:
 *     MiFlushAllPages @ 0x140153238 (MiFlushAllPages.c)
 *     MmProcessWorkingSetControl @ 0x14085FFE0 (MmProcessWorkingSetControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400531B0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadMapsLargeImage @ 0x140074A00 (MiVadMapsLargeImage.c)
 *     MiUnlockVad @ 0x1400784A0 (MiUnlockVad.c)
 *     MiEmptyWorkingSetInitiate @ 0x140142320 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSetPrivatePagesByVa(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rbp
  unsigned int v4; // edi
  _QWORD *v5; // rax
  unsigned __int64 v6; // rbx
  int v7; // ecx
  _QWORD **v8; // rcx
  unsigned __int64 v9; // rax
  _QWORD *i; // rcx

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(Process + 872, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    v4 = -1073741558;
  }
  else
  {
    v5 = *(_QWORD **)(Process + 1576);
    v4 = 0;
    v6 = 0LL;
    while ( v5 )
    {
      v6 = (unsigned __int64)v5;
      v5 = (_QWORD *)*v5;
    }
    while ( v6 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v6 + 40, 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 0x80u;
      v7 = *(_DWORD *)(v6 + 48);
      if ( (v7 & 0x20000000) == 0 && ((1 << (v7 & 7)) & 0x55) != 0 && !MiVadMapsLargeImage(v6) )
        MiEmptyWorkingSetInitiate(
          a1,
          2,
          (*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32)) << 12,
          ((*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) << 12) | 0xFFF);
      MiUnlockVad((__int64)CurrentThread, v6);
      v8 = *(_QWORD ***)(v6 + 8);
      v9 = v6;
      if ( v8 )
      {
        v6 = *(_QWORD *)(v6 + 8);
        for ( i = *v8; i; i = (_QWORD *)*i )
          v6 = (unsigned __int64)i;
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
  return v4;
}
