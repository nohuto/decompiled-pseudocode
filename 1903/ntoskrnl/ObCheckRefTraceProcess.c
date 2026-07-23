/*
 * XREFs of ObCheckRefTraceProcess @ 0x140672700
 * Callers:
 *     PspInsertProcess @ 0x1406724A4 (PspInsertProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     RtlInitAnsiString @ 0x1400E5090 (RtlInitAnsiString.c)
 *     PsGetProcessImageFileName @ 0x14012B7A0 (PsGetProcessImageFileName.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063CAA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x140653340 (RtlPrefixUnicodeString.c)
 */

NTSTATUS __fastcall ObCheckRefTraceProcess(__int64 a1)
{
  NTSTATUS result; // eax
  const CHAR *ProcessImageFileName; // rax
  struct _KTHREAD *CurrentThread; // rax
  _STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING String1; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  if ( (ObpTraceFlags & 0x20) == 0 )
    return 0;
  ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(a1);
  RtlInitAnsiString(&DestinationString, ProcessImageFileName);
  if ( !DestinationString.Length )
    return 0;
  result = RtlAnsiStringToUnicodeString(&String1, &DestinationString, 1u);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
    if ( (ObpTraceFlags & 0x20) != 0 && RtlPrefixUnicodeString(&String1, ObpTraceProcessName, 1u) )
      _InterlockedOr((volatile signed __int32 *)(a1 + 776), 0x200u);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    RtlFreeAnsiString(&String1);
    return 0;
  }
  return result;
}
