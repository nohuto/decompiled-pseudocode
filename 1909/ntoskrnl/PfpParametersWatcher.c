/*
 * XREFs of PfpParametersWatcher @ 0x1408A1770
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwCreateKey @ 0x1401C0FF0 (ZwCreateKey.c)
 *     ZwNotifyChangeKey @ 0x1401C2ED0 (ZwNotifyChangeKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PfpParametersRead @ 0x14077AEA8 (PfpParametersRead.c)
 *     PfSnParametersRead @ 0x14077B07C (PfSnParametersRead.c)
 *     PfSnDetermineEnablePrefetcher @ 0x14078CFDC (PfSnDetermineEnablePrefetcher.c)
 *     PfpParametersPropagate @ 0x1408A1644 (PfpParametersPropagate.c)
 */

void __fastcall PfpParametersWatcher(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rcx
  NTSTATUS v4; // eax
  void *v5; // rcx
  char v6; // r14
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+67h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 504, 0LL);
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    v4 = ZwNotifyChangeKey(
           v3,
           0LL,
           (PIO_APC_ROUTINE)(a1 + 32),
           (PVOID)1,
           (PIO_STATUS_BLOCK)(a1 + 16),
           0x1000000Fu,
           0,
           (PVOID)(a1 + 64),
           4u,
           1u);
    if ( v4 >= 0 )
      goto LABEL_8;
    if ( v4 == -1073741444 )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\PrefetchParameters");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 576;
      if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
      {
        v5 = *(void **)(a1 + 8);
        *(_QWORD *)(a1 + 8) = KeyHandle;
        if ( v5 )
          ZwClose(v5);
        if ( ZwNotifyChangeKey(
               *(HANDLE *)(a1 + 8),
               0LL,
               (PIO_APC_ROUTINE)(a1 + 32),
               (PVOID)1,
               (PIO_STATUS_BLOCK)(a1 + 16),
               0x1000000Fu,
               0,
               (PVOID)(a1 + 64),
               4u,
               1u) >= 0 )
        {
LABEL_8:
          v6 = 0;
          if ( (int)PfpParametersRead(a1) >= 0 )
          {
            PfpParametersPropagate((_DWORD *)a1);
            v6 = 1;
          }
          if ( (int)PfSnParametersRead(a1) >= 0 )
          {
            PfSnDetermineEnablePrefetcher();
            v6 = 1;
          }
          if ( v6 && *(_QWORD *)a1 )
            KeSetEvent(*(PRKEVENT *)a1, 0, 0);
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 504), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 504));
  KeAbPostRelease(a1 + 504);
  KeLeaveCriticalRegion();
}
