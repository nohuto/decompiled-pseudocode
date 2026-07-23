/*
 * XREFs of ObCheckRefTraceProcess @ 0x140677E14
 * Callers:
 *     PspInsertProcess @ 0x140677BB8 (PspInsertProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     RtlInitAnsiString @ 0x1400EA030 (RtlInitAnsiString.c)
 *     PsGetProcessImageFileName @ 0x14012C270 (PsGetProcessImageFileName.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063FB50 (RtlAnsiStringToUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x140666440 (RtlPrefixUnicodeString.c)
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
