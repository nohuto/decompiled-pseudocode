/*
 * XREFs of PopNotifyPolicyDevice @ 0x14074DFC0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopAcquireTransitionLock @ 0x1407491E0 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14074923C (PopReleaseTransitionLock.c)
 *     PopConnectToPolicyDevice @ 0x14074E044 (PopConnectToPolicyDevice.c)
 *     PopEnableHiberFile @ 0x140759E1C (PopEnableHiberFile.c)
 *     PopChangeCapability @ 0x14075AD34 (PopChangeCapability.c)
 */

__int64 __fastcall PopNotifyPolicyDevice(_QWORD *NotificationStructure, PVOID Context)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  bool v5; // bl
  __int64 v7; // rdx
  char v8; // bl
  __int64 v9; // rcx

  v2 = (unsigned int)Context;
  v3 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  v5 = v3 == 0;
  if ( (_DWORD)Context == 8 )
  {
    PopAcquirePolicyLock();
    LOBYTE(v7) = !v5;
    PopChangeCapability(&byte_140443B93, v7);
    PopReleasePolicyLock();
  }
  else if ( (_DWORD)Context == 3 )
  {
    PopAcquireTransitionLock(4);
    PopAcquirePolicyLock();
    v8 = PopHiberEnabled;
    PopEnableHiberFile(0LL, 0LL);
    if ( v8 )
    {
      LOBYTE(v9) = 1;
      PopEnableHiberFile(v9, 0LL);
    }
    PopReleasePolicyLock();
    PopReleaseTransitionLock(4);
  }
  else if ( v3 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPolicyDeviceLock);
    PopConnectToPolicyDevice(v2, NotificationStructure[5]);
    PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  }
  return 0LL;
}
