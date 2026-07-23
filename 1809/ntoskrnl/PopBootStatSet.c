/*
 * XREFs of PopBootStatSet @ 0x140719764
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
 *     RtlGetSetBootStatusData @ 0x140719A60 (RtlGetSetBootStatusData.c)
 *     RtlBootStatusItemInfo @ 0x140719D78 (RtlBootStatusItemInfo.c)
 *     RtlUnlockBootStatusData @ 0x140719E40 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140719F20 (RtlLockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x140754560 (PopBootStatAccessCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PopBootStatSet(__int64 a1, __int64 a2)
{
  char *PoolWithTag; // rdi
  char PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  NTSTATUS SetBootStatusData; // ebx
  __int64 j; // rsi
  const void **v9; // r12
  char *v10; // rbx
  char v11; // r14
  unsigned __int64 v13; // kr00_8
  SIZE_T v14; // rsi
  SIZE_T v15; // rax
  __int64 i; // rdx
  char *v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  ULONG Size[3]; // [rsp+34h] [rbp-74h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-68h] BYREF
  ULONG ReturnLength; // [rsp+44h] [rbp-64h] BYREF
  char *v24; // [rsp+48h] [rbp-60h]
  __int64 v25; // [rsp+50h] [rbp-58h]
  const void **v26; // [rsp+58h] [rbp-50h]
  __int64 v27; // [rsp+60h] [rbp-48h]
  char v29; // [rsp+C8h] [rbp+20h]

  PoolWithTag = 0LL;
  *(_QWORD *)&Size[1] = 0LL;
  v29 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v13 = *(unsigned int *)(a1 + 8);
    v27 = (*(unsigned int *)(a1 + 8) * (unsigned __int128)0x18uLL) >> 64;
    v14 = 24 * v13;
    if ( is_mul_ok(v13, 0x18uLL) )
    {
      v25 = 24 * v13;
      SetBootStatusData = 0;
    }
    else
    {
      v14 = -1LL;
      v25 = -1LL;
      SetBootStatusData = -1073741675;
    }
    if ( SetBootStatusData < 0 )
      goto LABEL_12;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v14, 0x206D654Du);
    v24 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SetBootStatusData = -1073741670;
      goto LABEL_12;
    }
    if ( v14 )
    {
      v15 = *(_QWORD *)(a1 + 16);
      if ( (v15 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v15 + v14 > 0x7FFFFFFF0000LL || v15 + v14 < v15 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, *(const void **)(a1 + 16), v14);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
    {
      v17 = &PoolWithTag[24 * i];
      v26 = (const void **)v17;
      v18 = *((unsigned int *)v17 + 4);
      if ( (_DWORD)v18 )
      {
        v19 = *((_QWORD *)v17 + 1);
        v20 = v19 + v18;
        if ( v20 > 0x7FFFFFFF0000LL || v20 < v19 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  else
  {
    PoolWithTag = *(char **)(a1 + 16);
    v24 = PoolWithTag;
  }
  v29 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  SetBootStatusData = RtlLockBootStatusData((PHANDLE)&Size[1]);
  if ( SetBootStatusData >= 0 )
  {
    if ( !PreviousMode
      || (LOBYTE(v6) = PreviousMode,
          SetBootStatusData = PopBootStatAccessCheck(*(_QWORD *)&Size[1], v6, 2LL),
          SetBootStatusData >= 0) )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 8); j = (unsigned int)(j + 1) )
      {
        v9 = (const void **)&PoolWithTag[24 * j];
        v26 = v9;
        SetBootStatusData = RtlBootStatusItemInfo(*(unsigned int *)v9, &v22, Size);
        if ( SetBootStatusData < 0 )
          break;
        if ( *((_DWORD *)v9 + 4) < Size[0] )
        {
          SetBootStatusData = -1073741811;
          break;
        }
        v10 = (char *)&PopBootStat + v22;
        memmove(v10, v9[1], Size[0]);
        SetBootStatusData = RtlGetSetBootStatusData(
                              *(HANDLE *)&Size[1],
                              0,
                              *(RTL_BSD_ITEM_TYPE *)v9,
                              v10,
                              Size[0],
                              &ReturnLength);
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = ReturnLength;
      }
    }
  }
LABEL_12:
  if ( *(_QWORD *)&Size[1] )
    RtlUnlockBootStatusData(*(HANDLE *)&Size[1]);
  if ( v29 )
  {
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock);
    KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( PreviousMode && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)SetBootStatusData;
}
