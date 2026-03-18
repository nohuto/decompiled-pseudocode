/*
 * XREFs of CmpSyncNextBackupHive @ 0x140831844
 * Callers:
 *     NtInitializeRegistry @ 0x1407463C0 (NtInitializeRegistry.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpFlushBackupHive @ 0x14083126C (CmpFlushBackupHive.c)
 *     TryLockShutdownShared @ 0x140832AD4 (TryLockShutdownShared.c)
 */

__int64 CmpSyncNextBackupHive()
{
  unsigned int v0; // ebx
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v2; // di
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v5; // [rsp+90h] [rbp+20h]
  int v6; // [rsp+98h] [rbp+28h]
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( !(unsigned __int8)TryLockShutdownShared() )
    return (unsigned int)-2147483622;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v2 )
  {
    if ( CmpDoIdleProcessing )
    {
      do
      {
        v6 = CmpPeriodicBackupFlushHiveCount;
        if ( (unsigned int)CmpPeriodicBackupFlushHiveCount >= 6 )
          v5 = 0;
        else
          v5 = CmpPeriodicBackupFlushHiveCount + 1;
      }
      while ( _InterlockedCompareExchange(&CmpPeriodicBackupFlushHiveCount, v5, CmpPeriodicBackupFlushHiveCount) != v6 );
      if ( ((__int64)CmpMachineHiveList[19 * v5 + 4] & 1) == 0 && CmpMachineHiveList[19 * v5 + 6] )
        CmpFlushBackupHive(v5);
      if ( v5 == 6 )
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpConfigurationManagerKeyName;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
        {
          _InterlockedIncrement(&CmpBackupCount);
          ZwSetValueKey(KeyHandle, &CmpBackupCountValueName, 0, 4u, &CmpBackupCount, 4u);
          ZwClose(KeyHandle);
        }
        v0 = -2147483622;
      }
      else
      {
        v0 = 0;
      }
      goto LABEL_19;
    }
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  v0 = -1073741431;
LABEL_19:
  ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v2 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v0;
}
