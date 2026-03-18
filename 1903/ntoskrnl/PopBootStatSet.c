/*
 * XREFs of PopBootStatSet @ 0x140738B08
 * Callers:
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlLockBootStatusData @ 0x140738E00 (RtlLockBootStatusData.c)
 *     RtlGetSetBootStatusData @ 0x140741AF0 (RtlGetSetBootStatusData.c)
 *     RtlBootStatusItemInfo @ 0x140741E30 (RtlBootStatusItemInfo.c)
 *     RtlUnlockBootStatusData @ 0x140744DE0 (RtlUnlockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x14077944C (PopBootStatAccessCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PopBootStatSet(__int64 a1, __int64 a2)
{
  char *PoolWithTag; // rsi
  char PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS SetBootStatusData; // edi
  __int64 j; // r14
  char v8; // bl
  const void **v10; // r12
  char *v11; // rdi
  unsigned __int64 v12; // kr00_8
  SIZE_T v13; // r14
  SIZE_T v14; // rax
  __int64 i; // rdx
  char *v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  ULONG Size[3]; // [rsp+34h] [rbp-74h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-68h] BYREF
  ULONG ReturnLength; // [rsp+44h] [rbp-64h] BYREF
  char *v23; // [rsp+48h] [rbp-60h]
  __int64 v24; // [rsp+50h] [rbp-58h]
  const void **v25; // [rsp+58h] [rbp-50h]
  __int64 v26; // [rsp+60h] [rbp-48h]
  char v28; // [rsp+C8h] [rbp+20h]

  PoolWithTag = 0LL;
  *(_QWORD *)&Size[1] = 0LL;
  v28 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v12 = *(unsigned int *)(a1 + 8);
    v26 = (*(unsigned int *)(a1 + 8) * (unsigned __int128)0x18uLL) >> 64;
    v13 = 24 * v12;
    if ( is_mul_ok(v12, 0x18uLL) )
    {
      v24 = 24 * v12;
      SetBootStatusData = 0;
    }
    else
    {
      v13 = -1LL;
      v24 = -1LL;
      SetBootStatusData = -1073741675;
    }
    if ( SetBootStatusData < 0 )
      goto LABEL_7;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v13, 0x206D654Du);
    v23 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SetBootStatusData = -1073741670;
      goto LABEL_7;
    }
    if ( v13 )
    {
      v14 = *(_QWORD *)(a1 + 16);
      if ( (v14 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v14 + v13 > 0x7FFFFFFF0000LL || v14 + v13 < v14 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, *(const void **)(a1 + 16), v13);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
    {
      v16 = &PoolWithTag[24 * i];
      v25 = (const void **)v16;
      v17 = *((unsigned int *)v16 + 4);
      if ( (_DWORD)v17 )
      {
        v18 = *((_QWORD *)v16 + 1);
        v19 = v18 + v17;
        if ( v19 > 0x7FFFFFFF0000LL || v19 < v18 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  else
  {
    PoolWithTag = *(char **)(a1 + 16);
    v23 = PoolWithTag;
  }
  v28 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  SetBootStatusData = RtlLockBootStatusData((PHANDLE)&Size[1]);
  if ( SetBootStatusData >= 0 )
  {
    if ( !PreviousMode || (SetBootStatusData = PopBootStatAccessCheck(*(HANDLE *)&Size[1]), SetBootStatusData >= 0) )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 8); j = (unsigned int)(j + 1) )
      {
        v10 = (const void **)&PoolWithTag[24 * j];
        v25 = v10;
        SetBootStatusData = RtlBootStatusItemInfo(*(unsigned int *)v10, &v21, Size);
        if ( SetBootStatusData < 0 )
          break;
        if ( *((_DWORD *)v10 + 4) < Size[0] )
        {
          SetBootStatusData = -1073741811;
          break;
        }
        v11 = (char *)&PopBootStat + v21;
        memmove(v11, v10[1], Size[0]);
        SetBootStatusData = RtlGetSetBootStatusData(
                              *(HANDLE *)&Size[1],
                              0,
                              *(RTL_BSD_ITEM_TYPE *)v10,
                              v11,
                              Size[0],
                              &ReturnLength);
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = ReturnLength;
      }
    }
  }
LABEL_7:
  if ( *(_QWORD *)&Size[1] )
    RtlUnlockBootStatusData(*(HANDLE *)&Size[1]);
  if ( v28 )
  {
    v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock);
    KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( PreviousMode && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)SetBootStatusData;
}
