/*
 * XREFs of MiDeleteImageHotPatchState @ 0x140854CDC
 * Callers:
 *     MiFinishVadDeletion @ 0x140067770 (MiFinishVadDeletion.c)
 *     MiHotPatchImage @ 0x140855330 (MiHotPatchImage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     RtlRbRemoveNode @ 0x1400BDDF0 (RtlRbRemoveNode.c)
 *     MiDeleteHotPatchEntry @ 0x140854B38 (MiDeleteHotPatchEntry.c)
 *     MiGetProcessHotPatchContext @ 0x1408551F0 (MiGetProcessHotPatchContext.c)
 *     MiHotPatchImageTreeCompare @ 0x1408555E8 (MiHotPatchImageTreeCompare.c)
 */

void __fastcall MiDeleteImageHotPatchState(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 ProcessHotPatchContext; // rax
  __int64 v4; // rsi
  UNICODE_STRING *v5; // r14
  volatile signed __int64 *v6; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  int v9; // r12d
  int v10; // eax
  unsigned __int64 v11; // rax

  CurrentThread = KeGetCurrentThread();
  ProcessHotPatchContext = MiGetProcessHotPatchContext(CurrentThread->ApcState.Process, 0LL);
  v4 = ProcessHotPatchContext;
  if ( ProcessHotPatchContext )
  {
    v5 = 0LL;
    --CurrentThread->SpecialApcDisable;
    v6 = (volatile signed __int64 *)(ProcessHotPatchContext + 16);
    ExAcquirePushLockExclusiveEx(ProcessHotPatchContext + 16, 0LL);
    v7 = *(_QWORD *)(v4 + 8);
    v8 = *(_QWORD *)v4;
    if ( (v7 & 1) != 0 )
    {
      if ( v8 )
        v8 ^= v4;
      else
        v8 = 0LL;
    }
    v9 = v7 & 1;
    if ( v8 )
    {
      do
      {
        v10 = MiHotPatchImageTreeCompare(a1, v8);
        if ( v10 >= 0 )
        {
          if ( v10 <= 0 )
            break;
          v11 = *(_QWORD *)(v8 + 8);
        }
        else
        {
          v11 = *(_QWORD *)v8;
        }
        if ( v9 && v11 )
          v8 ^= v11;
        else
          v8 = v11;
      }
      while ( v8 );
      v6 = (volatile signed __int64 *)(v4 + 16);
      if ( v8 )
      {
        RtlRbRemoveNode(v4, v8);
        *(_DWORD *)(v8 + 92) |= 2u;
        v5 = (UNICODE_STRING *)v8;
        if ( (*(_DWORD *)(v8 + 92) & 1) != 0 )
          v5 = 0LL;
      }
    }
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( v5 )
      MiDeleteHotPatchEntry(v5);
  }
}
