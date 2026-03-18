/*
 * XREFs of MiComputeNodeMemory @ 0x140751334
 * Callers:
 *     MiUpdatePartitionMemory @ 0x1402EB738 (MiUpdatePartitionMemory.c)
 *     MiAddPhysicalMemory @ 0x14088774C (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140888720 (MiRemovePhysicalMemory.c)
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void __fastcall MiComputeNodeMemory(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int *v2; // r13
  unsigned int v3; // ebx
  __int64 v4; // r14
  volatile signed __int64 *v5; // rdi
  __int64 v6; // r9
  unsigned __int8 *v7; // rdx
  _QWORD *v8; // r8
  __int64 v9; // rsi
  _QWORD *v10; // rcx
  __int64 v11; // r8
  _QWORD v12[4]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+40h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = *(unsigned int **)(a1 + 32);
  v3 = 0;
  v4 = *v2;
  if ( KeNumberNodes )
  {
    v5 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 16) + 1920LL);
    do
    {
      memset(v12, 0, sizeof(v12));
      if ( (_DWORD)v4 )
      {
        v6 = v4;
        v7 = (unsigned __int8 *)&v2[4 * v4 + 4] + 1;
        v8 = v2 + 6;
        do
        {
          if ( *(v7 - 1) == v3 )
            v12[*v7] += *v8;
          v8 += 2;
          v7 += 2;
          --v6;
        }
        while ( v6 );
      }
      --CurrentThread->SpecialApcDisable;
      v9 = 0LL;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
      if ( MmNumberOfChannels )
      {
        v10 = v12;
        v11 = (unsigned int)MmNumberOfChannels;
        do
        {
          v9 += *v10;
          *(_QWORD *)((char *)v10 + (char *)v5 - (char *)&v13 - 112) = *v10;
          ++v10;
          --v11;
        }
        while ( v11 );
      }
      *((_QWORD *)v5 - 14) = v9;
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5);
      KeAbPostRelease((ULONG_PTR)v5);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v5 += 248;
      ++v3;
    }
    while ( v3 < (unsigned __int16)KeNumberNodes );
  }
}
