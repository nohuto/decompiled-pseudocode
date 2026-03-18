/*
 * XREFs of MiGetChannelInformation @ 0x14065162C
 * Callers:
 *     MmManagePartitionMemoryInformation @ 0x140651384 (MmManagePartitionMemoryInformation.c)
 *     MmGetChannelInformation @ 0x14074E2F8 (MmGetChannelInformation.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1400C5490 (MiUnlockDynamicMemoryExclusive.c)
 *     MiGetNodeChannelPageCounts @ 0x1400C5684 (MiGetNodeChannelPageCounts.c)
 *     MiLockDynamicMemoryExclusive @ 0x1400C57C0 (MiLockDynamicMemoryExclusive.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MiGetChannelInformation(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v8; // rbp
  unsigned int v9; // r8d
  unsigned int v10; // r14d
  __int64 v11; // rdi
  _QWORD *v12; // r13
  unsigned int v14; // ecx
  unsigned __int8 *v15; // rdx
  __int64 v16; // [rsp+90h] [rbp+8h] BYREF
  int v17; // [rsp+98h] [rbp+10h]
  __int64 v18; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v19; // [rsp+A8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v8 = *(_QWORD *)(a1 + 16) + 1984LL * a2;
  *a4 = 40LL * (unsigned int)MmNumberOfChannels;
  MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(v8 + 1920, 0LL);
  v9 = MmNumberOfChannels;
  v17 = MmNumberOfChannels;
  v10 = 0;
  if ( MmNumberOfChannels )
  {
    v11 = a3 + 4;
    v12 = (_QWORD *)(v8 + 1776);
    do
    {
      *(_DWORD *)(v11 - 4) = v10;
      if ( (*(_DWORD *)(v8 + 1912) & 1) != 0 )
      {
        v14 = 0;
        v15 = (unsigned __int8 *)(v8 + 1938);
        while ( *v15 != v10 )
        {
          ++v14;
          ++v15;
          if ( v14 >= v9 )
            goto LABEL_5;
        }
        *(_DWORD *)v11 = v14;
      }
      else
      {
        *(_DWORD *)v11 = -1;
      }
LABEL_5:
      *(_QWORD *)(v11 + 4) = *v12;
      MiGetNodeChannelPageCounts(a1, a2, v10++, &v16, &v18, &v19);
      v9 = v17;
      ++v12;
      *(_QWORD *)(v11 + 12) = v16;
      *(_QWORD *)(v11 + 20) = v18;
      *(_QWORD *)(v11 + 28) = v19;
      v11 += 40LL;
    }
    while ( v10 < v9 );
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 1920), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v8 + 1920));
  KeAbPostRelease(v8 + 1920);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
}
