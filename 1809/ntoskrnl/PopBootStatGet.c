/*
 * XREFs of PopBootStatGet @ 0x140754280
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
 *     RtlGetSetBootStatusData @ 0x140719A60 (RtlGetSetBootStatusData.c)
 *     RtlBootStatusItemInfo @ 0x140719D78 (RtlBootStatusItemInfo.c)
 *     RtlUnlockBootStatusData @ 0x140719E40 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140719F20 (RtlLockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x140754560 (PopBootStatAccessCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PopBootStatGet(__int64 a1, __int64 a2)
{
  char *PoolWithTag; // rdi
  char PreviousMode; // r15
  unsigned __int64 v5; // kr00_8
  SIZE_T v6; // r14
  int SetBootStatusData; // ebx
  SIZE_T v8; // rax
  __int64 i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rdx
  __int64 j; // r14
  __int64 v13; // r11
  char v14; // si
  ULONG ReturnLength; // [rsp+34h] [rbp-74h] BYREF
  HANDLE FileHandle; // [rsp+38h] [rbp-70h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-68h] BYREF
  RTL_BSD_ITEM_TYPE DataClass; // [rsp+44h] [rbp-64h]
  char *v20; // [rsp+48h] [rbp-60h]
  char *v21; // [rsp+50h] [rbp-58h]
  int v22; // [rsp+58h] [rbp-50h] BYREF
  __int64 v23; // [rsp+60h] [rbp-48h]
  void *Src; // [rsp+68h] [rbp-40h]
  __int64 v25; // [rsp+70h] [rbp-38h]
  char v27; // [rsp+C8h] [rbp+20h]

  PoolWithTag = 0LL;
  FileHandle = 0LL;
  v27 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v5 = *(unsigned int *)(a1 + 8);
    v25 = (*(unsigned int *)(a1 + 8) * (unsigned __int128)0x18u) >> 64;
    v6 = 24 * v5;
    if ( is_mul_ok(v5, 0x18uLL) )
    {
      v23 = 24 * v5;
      SetBootStatusData = 0;
    }
    else
    {
      v6 = -1LL;
      v23 = -1LL;
      SetBootStatusData = -1073741675;
    }
    if ( SetBootStatusData < 0 )
      goto LABEL_27;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v6, 0x206D654Du);
    v20 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SetBootStatusData = -1073741670;
      goto LABEL_27;
    }
    if ( v6 )
    {
      v8 = *(_QWORD *)(a1 + 16);
      if ( (v8 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v8 + v6 > 0x7FFFFFFF0000LL || v8 + v6 < v8 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, *(const void **)(a1 + 16), v6);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
    {
      v21 = &PoolWithTag[24 * i];
      ProbeForWrite(*((volatile void **)v21 + 1), *((unsigned int *)v21 + 4), 1u);
    }
  }
  else
  {
    PoolWithTag = *(char **)(a1 + 16);
    v20 = PoolWithTag;
  }
  v27 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  SetBootStatusData = RtlLockBootStatusData(&FileHandle);
  if ( SetBootStatusData >= 0 )
  {
    if ( !PreviousMode
      || (LOBYTE(v11) = PreviousMode,
          SetBootStatusData = PopBootStatAccessCheck(FileHandle, v11, 1LL),
          SetBootStatusData >= 0) )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 8); j = (unsigned int)(j + 1) )
      {
        v21 = &PoolWithTag[24 * j];
        DataClass = *(_DWORD *)v21;
        SetBootStatusData = RtlBootStatusItemInfo(DataClass, &v18, &v22);
        if ( SetBootStatusData < 0 )
          break;
        Src = (char *)&PopBootStat + v18;
        SetBootStatusData = RtlGetSetBootStatusData(
                              FileHandle,
                              1u,
                              DataClass,
                              Src,
                              *(_DWORD *)(v13 + 16),
                              &ReturnLength);
        if ( SetBootStatusData >= 0 && ReturnLength )
          memmove(*((void **)v21 + 1), Src, ReturnLength);
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = ReturnLength;
      }
    }
  }
LABEL_27:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v27 )
  {
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock);
    KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( PreviousMode && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)SetBootStatusData;
}
