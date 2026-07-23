/*
 * XREFs of MiComputeNodeMemory @ 0x14075EE8C
 * Callers:
 *     MiUpdatePartitionMemory @ 0x1402D2DC0 (MiUpdatePartitionMemory.c)
 *     MiAddPhysicalMemory @ 0x14084DAF4 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14084E7AC (MiRemovePhysicalMemory.c)
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall MiComputeNodeMemory(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int *v2; // r13
  unsigned int v3; // ebp
  __int64 v4; // r14
  volatile signed __int64 *v5; // rbx
  unsigned __int8 *v6; // rdx
  __int64 v7; // r9
  _QWORD *v8; // r8
  __int64 v9; // rdi
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
    v5 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 16) + 1896LL);
    do
    {
      memset(v12, 0, sizeof(v12));
      if ( (_DWORD)v4 )
      {
        v6 = (unsigned __int8 *)&v2[4 * v4 + 4] + 1;
        v7 = v4;
        v8 = v2 + 6;
        do
        {
          if ( *(v6 - 1) == v3 )
            v12[*v6] += *v8;
          v8 += 2;
          v6 += 2;
          --v7;
        }
        while ( v7 );
      }
      v9 = 0LL;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
      if ( MmNumberOfChannels )
      {
        v10 = v12;
        v11 = (unsigned int)MmNumberOfChannels;
        do
        {
          v9 += *v10;
          *(_QWORD *)((char *)v10 + (char *)v5 - (char *)&v13 - 88) = *v10;
          ++v10;
          --v11;
        }
        while ( v11 );
      }
      *((_QWORD *)v5 - 11) = v9;
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
