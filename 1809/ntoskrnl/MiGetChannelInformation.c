/*
 * XREFs of MiGetChannelInformation @ 0x1406096FC
 * Callers:
 *     MmManagePartitionMemoryInformation @ 0x140609464 (MmManagePartitionMemoryInformation.c)
 *     MmGetChannelInformation @ 0x1408604B8 (MmGetChannelInformation.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140090C58 (MiUnlockDynamicMemoryExclusive.c)
 *     MiGetNodeChannelPageCounts @ 0x140090E54 (MiGetNodeChannelPageCounts.c)
 *     MiLockDynamicMemoryExclusive @ 0x140090F90 (MiLockDynamicMemoryExclusive.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MiGetChannelInformation(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // rsi
  signed __int64 *v8; // rdi
  unsigned int v9; // r13d
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  _QWORD *v12; // r12
  __int64 v13; // rbx
  unsigned int v15; // ecx
  unsigned __int8 *v16; // rdx
  struct _KTHREAD *v17; // [rsp+38h] [rbp-50h]
  __int64 v18; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+98h] [rbp+10h]
  __int64 v20; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v21; // [rsp+A8h] [rbp+20h] BYREF

  v19 = a2;
  CurrentThread = KeGetCurrentThread();
  v7 = *(_QWORD *)(a1 + 16) + 1984LL * a2;
  v17 = CurrentThread;
  *a4 = 40LL * (unsigned int)MmNumberOfChannels;
  MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  --CurrentThread->SpecialApcDisable;
  v8 = (signed __int64 *)(v7 + 1896);
  ExAcquirePushLockSharedEx(v7 + 1896, 0LL);
  v9 = MmNumberOfChannels;
  v10 = 0;
  if ( MmNumberOfChannels )
  {
    v11 = v19;
    v12 = (_QWORD *)(v7 + 1776);
    v13 = a3 + 4;
    do
    {
      *(_DWORD *)(v13 - 4) = v10;
      if ( (*(_DWORD *)(v7 + 1888) & 1) != 0 )
      {
        v15 = 0;
        v16 = (unsigned __int8 *)(v7 + 1914);
        while ( *v16 != v10 )
        {
          ++v15;
          ++v16;
          if ( v15 >= v9 )
            goto LABEL_5;
        }
        *(_DWORD *)v13 = v15;
      }
      else
      {
        *(_DWORD *)v13 = -1;
      }
LABEL_5:
      *(_QWORD *)(v13 + 4) = *v12;
      MiGetNodeChannelPageCounts(a1, v11, v10++, &v18, &v20, &v21);
      *(_QWORD *)(v13 + 12) = v18;
      ++v12;
      *(_QWORD *)(v13 + 20) = v20;
      *(_QWORD *)(v13 + 28) = v21;
      v13 += 40LL;
    }
    while ( v10 < v9 );
    v8 = (signed __int64 *)(v7 + 1896);
    CurrentThread = v17;
  }
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
}
