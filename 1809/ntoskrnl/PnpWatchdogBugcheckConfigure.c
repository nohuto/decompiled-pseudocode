/*
 * XREFs of PnpWatchdogBugcheckConfigure @ 0x14071018C
 * Callers:
 *     PnpWatchdogBugcheckWatchCallback @ 0x1407083B0 (PnpWatchdogBugcheckWatchCallback.c)
 *     PnpInitializePnpWatchdogs @ 0x1409CAF5C (PnpInitializePnpWatchdogs.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     ZwNotifyChangeKey @ 0x1401BA550 (ZwNotifyChangeKey.c)
 */

NTSTATUS __fastcall PnpWatchdogBugcheckConfigure(HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v3; // si
  NTSTATUS v4; // eax
  int v5; // ecx
  char v6; // bl
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+50h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-60h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-50h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+78h] [rbp-40h] BYREF
  int v12; // [rsp+7Ch] [rbp-3Ch]
  int v13; // [rsp+80h] [rbp-38h]
  int v14; // [rsp+84h] [rbp-34h]

  v3 = ZwNotifyChangeKey(Handle, 0LL, PnpWatchdogBugcheckWatchWorkItem, (PVOID)1, &IoStatusBlock, 4u, 0, 0LL, 0, 1u) < 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PnpWatchdogBugcheckLock, 0LL);
  RtlInitUnicodeString(&DestinationString, L"PnpWatchdogBugcheckEnabled");
  v4 = ZwQueryValueKey(
         Handle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x14u,
         &ResultLength);
  v5 = v4 >= 0 && v12 == 4 && v13 == 4 && v14 != 0;
  if ( v4 < 0 )
    v5 = 2;
  PnpWatchdogBugcheckConfig = v5;
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PnpWatchdogBugcheckLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PnpWatchdogBugcheckLock);
  KeAbPostRelease((ULONG_PTR)&PnpWatchdogBugcheckLock);
  result = (unsigned int)KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v3 )
    return ZwClose(Handle);
  return result;
}
