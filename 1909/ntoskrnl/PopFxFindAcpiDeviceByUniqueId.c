/*
 * XREFs of PopFxFindAcpiDeviceByUniqueId @ 0x14019277C
 * Callers:
 *     PopFxAcpiPrepareDevice @ 0x140304604 (PopFxAcpiPrepareDevice.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x140719F6C (PopFxFindDeviceAndAllocateUniqueId.c)
 *     PopFxRegisterDeviceWorker @ 0x1407722C0 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     IoAcquireRemoveLockEx @ 0x1400E0C90 (IoAcquireRemoveLockEx.c)
 *     RtlCompareUnicodeString @ 0x140666EF0 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall PopFxFindAcpiDeviceByUniqueId(PCUNICODE_STRING String2, __int64 **a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rbx
  NTSTATUS v6; // edi
  __int64 *i; // rsi

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = -1073741275;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( i = (__int64 *)PopFxAcpiDeviceList; i != &PopFxAcpiDeviceList; i = (__int64 *)*i )
  {
    v5 = i - 25;
    if ( i[3] && !RtlCompareUnicodeString((PCUNICODE_STRING)(v5 + 27), String2, 0) )
    {
      if ( a2 )
        v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 33), (PVOID)0x66466F50, &Src, 1u, 0x20u);
      else
        v6 = 0;
      break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v6 >= 0 && a2 )
    *a2 = v5;
  return (unsigned int)v6;
}
