/*
 * XREFs of ExpReadLeapSecondData @ 0x14075F730
 * Callers:
 *     ExpLeapSecondDataRegistryNotifyHandler @ 0x14090A7A0 (ExpLeapSecondDataRegistryNotifyHandler.c)
 *     ExInitializeLeapSecondData @ 0x140A0E650 (ExInitializeLeapSecondData.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     ZwNotifyChangeKey @ 0x1401C2350 (ZwNotifyChangeKey.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x14075F9B4 (EtwTraceLeapSecondDataUpdate.c)
 *     ExpRefreshTimeZoneInformation @ 0x14075FA7C (ExpRefreshTimeZoneInformation.c)
 *     ExpParseAndUpdateLeapSecondData @ 0x140760970 (ExpParseAndUpdateLeapSecondData.c)
 *     ExpGetLeapSecondDataRegistryKeyHandle @ 0x140760A14 (ExpGetLeapSecondDataRegistryKeyHandle.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x1408F4620 (EtwTraceLeapSecondDataParseFailure.c)
 */

void __fastcall ExpReadLeapSecondData(bool *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char *PoolWithTag; // rbx
  PVOID v3; // r14
  HANDLE v5; // rdi
  bool v6; // r15
  unsigned int v7; // r15d
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  unsigned int updated; // eax
  char v11; // si
  ULONG ResultLength; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-28h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+60h] [rbp-20h] BYREF
  int v15; // [rsp+64h] [rbp-1Ch]
  int v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+6Ch] [rbp-14h]

  CurrentThread = KeGetCurrentThread();
  PoolWithTag = 0LL;
  KeyHandle = 0LL;
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpLeapSecondDataLock, 0LL);
  if ( ExpLeapSecondDataRegistryNotify )
  {
    v5 = *(HANDLE *)ExpLeapSecondDataRegistryNotify;
    PoolWithTag = (char *)ExpLeapSecondDataRegistryNotify;
    KeyHandle = *(HANDLE *)ExpLeapSecondDataRegistryNotify;
  }
  else
  {
    if ( (int)ExpGetLeapSecondDataRegistryKeyHandle(&KeyHandle) < 0 )
      goto LABEL_19;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6453704Cu);
    if ( !PoolWithTag )
      goto LABEL_19;
    v5 = KeyHandle;
  }
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  *((_QWORD *)PoolWithTag + 3) = ExpLeapSecondDataRegistryNotifyHandler;
  if ( ZwNotifyChangeKey(
         v5,
         0LL,
         (PIO_APC_ROUTINE)(PoolWithTag + 8),
         (PVOID)1,
         (PIO_STATUS_BLOCK)(PoolWithTag + 40),
         4u,
         0,
         0LL,
         0,
         1u) < 0 )
    goto LABEL_19;
  v6 = 1;
  if ( ZwQueryValueKey(
         v5,
         (PUNICODE_STRING)&ExpLeapSecondRegkeyValueEnabled,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x14u,
         &ResultLength) >= 0
    && v15 == 4
    && v16 == 4 )
  {
    v6 = v17 != 0;
  }
  *a1 = v6;
  v7 = *((_DWORD *)a1 + 1);
  v8 = ZwQueryValueKey(
         v5,
         (PUNICODE_STRING)&ExpLeapSecondRegkeyValueLeapSeconds,
         KeyValuePartialInformation,
         0LL,
         0,
         &ResultLength);
  if ( v8 != -1073741789 )
    goto LABEL_13;
  v3 = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x6453704Cu);
  if ( v3 )
  {
    v8 = ZwQueryValueKey(
           v5,
           (PUNICODE_STRING)&ExpLeapSecondRegkeyValueLeapSeconds,
           KeyValuePartialInformation,
           v3,
           ResultLength,
           &ResultLength);
LABEL_13:
    if ( v8 >= 0 )
    {
      updated = ExpParseAndUpdateLeapSecondData(v3, a1);
      ExLeapSecondDataLastParseResult = updated;
      if ( updated )
        EtwTraceLeapSecondDataParseFailure(updated);
    }
  }
  ExpRefreshTimeZoneInformation(v9);
  EtwTraceLeapSecondDataUpdate(1LL, *a1, *((unsigned int *)a1 + 1), v7);
  if ( !ExpLeapSecondDataRegistryNotify )
  {
    ExpLeapSecondDataRegistryNotify = (__int64)PoolWithTag;
    *(_QWORD *)PoolWithTag = v5;
  }
  PoolWithTag = 0LL;
  KeyHandle = 0LL;
LABEL_19:
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpLeapSecondDataLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpLeapSecondDataLock);
  KeAbPostRelease((ULONG_PTR)&ExpLeapSecondDataLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v3 )
    ExFreePoolWithTag(v3, 0x6453704Cu);
  if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0x6453704Cu);
    ExpLeapSecondDataRegistryNotify = 0LL;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
