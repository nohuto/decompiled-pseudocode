/*
 * XREFs of PopBootStatCheckIntegrity @ 0x1408784B0
 * Callers:
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     RtlUnlockBootStatusData @ 0x140719E40 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140719F20 (RtlLockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x140754560 (PopBootStatAccessCheck.c)
 *     RtlCheckBootStatusIntegrity @ 0x140896E48 (RtlCheckBootStatusIntegrity.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PopBootStatCheckIntegrity(__int64 a1)
{
  char *PoolWithTag; // rsi
  KPROCESSOR_MODE PreviousMode; // r15
  unsigned __int64 v4; // kr00_8
  SIZE_T v5; // r14
  int v6; // edi
  SIZE_T v7; // rax
  __int64 i; // rdi
  struct _KTHREAD *CurrentThread; // rax
  HANDLE FileHandle; // [rsp+28h] [rbp-50h] BYREF
  char *v12; // [rsp+30h] [rbp-48h]
  __int64 v13; // [rsp+38h] [rbp-40h]
  __int64 v14; // [rsp+40h] [rbp-38h]
  volatile void **v15; // [rsp+48h] [rbp-30h]
  char v16; // [rsp+90h] [rbp+18h]
  BOOLEAN Verified; // [rsp+98h] [rbp+20h] BYREF

  PoolWithTag = 0LL;
  FileHandle = 0LL;
  v16 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v4 = *(unsigned int *)(a1 + 8);
    v14 = (*(unsigned int *)(a1 + 8) * (unsigned __int128)0x18u) >> 64;
    v5 = 24 * v4;
    if ( is_mul_ok(v4, 0x18uLL) )
    {
      v13 = 24 * v4;
      v6 = 0;
    }
    else
    {
      v5 = -1LL;
      v13 = -1LL;
      v6 = -1073741675;
    }
    if ( v6 < 0 )
      goto LABEL_25;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v5, 0x206D654Du);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = -1073741670;
      goto LABEL_25;
    }
    if ( v5 )
    {
      v7 = *(_QWORD *)(a1 + 16);
      if ( (v7 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v7 + v5 > 0x7FFFFFFF0000LL || v7 + v5 < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, *(const void **)(a1 + 16), v5);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
    {
      v15 = (volatile void **)&PoolWithTag[24 * i];
      ProbeForWrite(v15[1], *((unsigned int *)v15 + 4), 1u);
    }
  }
  else
  {
    PoolWithTag = *(char **)(a1 + 16);
    v12 = PoolWithTag;
  }
  v16 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  v6 = RtlLockBootStatusData(&FileHandle);
  if ( v6 >= 0 )
  {
    if ( !PreviousMode || (v6 = PopBootStatAccessCheck(FileHandle, PreviousMode, 1u), v6 >= 0) )
    {
      v6 = RtlCheckBootStatusIntegrity(FileHandle, &Verified);
      if ( v6 >= 0 )
      {
        if ( *((_DWORD *)PoolWithTag + 4) )
          **((_BYTE **)PoolWithTag + 1) = Verified;
        else
          v6 = -1073741811;
      }
    }
  }
LABEL_25:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v16 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock);
    KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( PreviousMode && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v6;
}
