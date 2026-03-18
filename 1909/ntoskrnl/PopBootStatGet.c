/*
 * XREFs of PopBootStatGet @ 0x14077C74C
 * Callers:
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     RtlLockBootStatusData @ 0x14073B060 (RtlLockBootStatusData.c)
 *     RtlGetSetBootStatusData @ 0x1407439F0 (RtlGetSetBootStatusData.c)
 *     RtlBootStatusItemInfo @ 0x140743D30 (RtlBootStatusItemInfo.c)
 *     RtlUnlockBootStatusData @ 0x140746CE0 (RtlUnlockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x14077CA2C (PopBootStatAccessCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PopBootStatGet(__int64 a1, __int64 a2)
{
  char *PoolWithTag; // rsi
  char PreviousMode; // r15
  unsigned __int64 v5; // kr00_8
  SIZE_T v6; // r14
  int SetBootStatusData; // edi
  SIZE_T v8; // rax
  __int64 i; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 j; // r14
  __int64 v12; // r11
  char v13; // bl
  ULONG ReturnLength; // [rsp+34h] [rbp-74h] BYREF
  HANDLE FileHandle; // [rsp+38h] [rbp-70h] BYREF
  unsigned int v17; // [rsp+40h] [rbp-68h] BYREF
  RTL_BSD_ITEM_TYPE DataClass; // [rsp+44h] [rbp-64h]
  char *v19; // [rsp+48h] [rbp-60h]
  char *v20; // [rsp+50h] [rbp-58h]
  int v21; // [rsp+58h] [rbp-50h] BYREF
  __int64 v22; // [rsp+60h] [rbp-48h]
  void *Src; // [rsp+68h] [rbp-40h]
  __int64 v24; // [rsp+70h] [rbp-38h]
  char v26; // [rsp+C8h] [rbp+20h]

  PoolWithTag = 0LL;
  FileHandle = 0LL;
  v26 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v5 = *(unsigned int *)(a1 + 8);
    v24 = (*(unsigned int *)(a1 + 8) * (unsigned __int128)0x18u) >> 64;
    v6 = 24 * v5;
    if ( is_mul_ok(v5, 0x18uLL) )
    {
      v22 = 24 * v5;
      SetBootStatusData = 0;
    }
    else
    {
      v6 = -1LL;
      v22 = -1LL;
      SetBootStatusData = -1073741675;
    }
    if ( SetBootStatusData < 0 )
      goto LABEL_27;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v6, 0x206D654Du);
    v19 = PoolWithTag;
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
      v20 = &PoolWithTag[24 * i];
      ProbeForWrite(*((volatile void **)v20 + 1), *((unsigned int *)v20 + 4), 1u);
    }
  }
  else
  {
    PoolWithTag = *(char **)(a1 + 16);
    v19 = PoolWithTag;
  }
  v26 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  SetBootStatusData = RtlLockBootStatusData(&FileHandle);
  if ( SetBootStatusData >= 0 )
  {
    if ( !PreviousMode || (SetBootStatusData = PopBootStatAccessCheck(FileHandle), SetBootStatusData >= 0) )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 8); j = (unsigned int)(j + 1) )
      {
        v20 = &PoolWithTag[24 * j];
        DataClass = *(_DWORD *)v20;
        SetBootStatusData = RtlBootStatusItemInfo(DataClass, &v17, &v21);
        if ( SetBootStatusData < 0 )
          break;
        Src = (char *)&PopBootStat + v17;
        SetBootStatusData = RtlGetSetBootStatusData(
                              FileHandle,
                              1u,
                              DataClass,
                              Src,
                              *(_DWORD *)(v12 + 16),
                              &ReturnLength);
        if ( SetBootStatusData >= 0 && ReturnLength )
          memmove(*((void **)v20 + 1), Src, ReturnLength);
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = ReturnLength;
      }
    }
  }
LABEL_27:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v26 )
  {
    v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock);
    KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( PreviousMode && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)SetBootStatusData;
}
