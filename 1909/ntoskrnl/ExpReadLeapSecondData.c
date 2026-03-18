/*
 * XREFs of ExpReadLeapSecondData @ 0x140764054
 * Callers:
 *     ExpLeapSecondDataRegistryNotifyHandler @ 0x14090A200 (ExpLeapSecondDataRegistryNotifyHandler.c)
 *     ExInitializeLeapSecondData @ 0x140A0EDE8 (ExInitializeLeapSecondData.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     ZwNotifyChangeKey @ 0x1401C2ED0 (ZwNotifyChangeKey.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExReleaseTimeRefreshLock @ 0x1406A71E0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1406A7200 (ExAcquireTimeRefreshLock.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x140764320 (EtwTraceLeapSecondDataUpdate.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407643E8 (ExpRefreshTimeZoneInformation.c)
 *     ExpParseAndUpdateLeapSecondData @ 0x140765378 (ExpParseAndUpdateLeapSecondData.c)
 *     ExpGetLeapSecondDataRegistryKeyHandle @ 0x14076541C (ExpGetLeapSecondDataRegistryKeyHandle.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x1408F3F90 (EtwTraceLeapSecondDataParseFailure.c)
 */

void __fastcall ExpReadLeapSecondData(bool *a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char *PoolWithTag; // rdi
  PVOID v6; // r14
  HANDLE v7; // rsi
  bool v8; // r15
  unsigned int v9; // r15d
  NTSTATUS v10; // eax
  unsigned int updated; // eax
  __int64 v12; // rcx
  ULONG ResultLength; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-28h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+60h] [rbp-20h] BYREF
  int v16; // [rsp+64h] [rbp-1Ch]
  int v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]

  CurrentThread = KeGetCurrentThread();
  KeyHandle = 0LL;
  PoolWithTag = 0LL;
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpLeapSecondDataLock, 0LL);
  if ( ExpLeapSecondDataRegistryNotify )
  {
    v7 = *(HANDLE *)ExpLeapSecondDataRegistryNotify;
    PoolWithTag = (char *)ExpLeapSecondDataRegistryNotify;
    KeyHandle = *(HANDLE *)ExpLeapSecondDataRegistryNotify;
  }
  else
  {
    if ( (int)ExpGetLeapSecondDataRegistryKeyHandle(&KeyHandle) < 0 )
      goto LABEL_22;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6453704Cu);
    if ( !PoolWithTag )
      goto LABEL_22;
    v7 = KeyHandle;
  }
  *((_QWORD *)PoolWithTag + 3) = ExpLeapSecondDataRegistryNotifyHandler;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  if ( ZwNotifyChangeKey(
         v7,
         0LL,
         (PIO_APC_ROUTINE)(PoolWithTag + 8),
         (PVOID)1,
         (PIO_STATUS_BLOCK)(PoolWithTag + 40),
         4u,
         0,
         0LL,
         0,
         1u) < 0 )
    goto LABEL_22;
  v8 = 1;
  if ( ZwQueryValueKey(
         v7,
         (PUNICODE_STRING)&ExpLeapSecondRegkeyValueEnabled,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x14u,
         &ResultLength) >= 0
    && v16 == 4
    && v17 == 4 )
  {
    v8 = v18 != 0;
  }
  *a1 = v8;
  v9 = *((_DWORD *)a1 + 1);
  v10 = ZwQueryValueKey(
          v7,
          (PUNICODE_STRING)&ExpLeapSecondRegkeyValueLeapSeconds,
          KeyValuePartialInformation,
          0LL,
          0,
          &ResultLength);
  if ( v10 != -1073741789 )
    goto LABEL_14;
  v6 = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x6453704Cu);
  if ( v6 )
  {
    v10 = ZwQueryValueKey(
            v7,
            (PUNICODE_STRING)&ExpLeapSecondRegkeyValueLeapSeconds,
            KeyValuePartialInformation,
            v6,
            ResultLength,
            &ResultLength);
LABEL_14:
    if ( v10 >= 0 )
    {
      updated = ExpParseAndUpdateLeapSecondData(v6, a1);
      ExLeapSecondDataLastParseResult = updated;
      if ( updated )
        EtwTraceLeapSecondDataParseFailure(updated);
    }
  }
  if ( a2 )
  {
    ExAcquireTimeRefreshLock(1u);
    ExpRefreshTimeZoneInformation(v12);
    ExReleaseTimeRefreshLock();
  }
  EtwTraceLeapSecondDataUpdate(1LL, *a1, *((unsigned int *)a1 + 1), v9);
  if ( !ExpLeapSecondDataRegistryNotify )
  {
    ExpLeapSecondDataRegistryNotify = (__int64)PoolWithTag;
    *(_QWORD *)PoolWithTag = v7;
  }
  PoolWithTag = 0LL;
  KeyHandle = 0LL;
LABEL_22:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpLeapSecondDataLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpLeapSecondDataLock);
  KeAbPostRelease((ULONG_PTR)&ExpLeapSecondDataLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6453704Cu);
  if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0x6453704Cu);
    ExpLeapSecondDataRegistryNotify = 0LL;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
