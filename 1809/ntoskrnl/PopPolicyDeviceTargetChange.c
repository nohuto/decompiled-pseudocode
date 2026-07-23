/*
 * XREFs of PopPolicyDeviceTargetChange @ 0x140877790
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoUnregisterPlugPlayNotificationEx @ 0x140720320 (IoUnregisterPlugPlayNotificationEx.c)
 *     PopConnectToPolicyDevice @ 0x140742084 (PopConnectToPolicyDevice.c)
 *     PopPolicyDeviceRemove @ 0x14087771C (PopPolicyDeviceRemove.c)
 */

__int64 __fastcall PopPolicyDeviceTargetChange(char *NotificationStructure, UNICODE_STRING *Context)
{
  char v4; // si
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  v4 = 0;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPolicyDeviceLock);
  v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v5 )
  {
    PopPolicyDeviceRemove((__int64)Context);
    goto LABEL_14;
  }
  v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v6 )
  {
    PopPolicyDeviceRemove((__int64)Context);
LABEL_13:
    v4 = 1;
    goto LABEL_14;
  }
  v7 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v7 )
  {
    PopConnectToPolicyDevice(*(_DWORD *)&Context[1].Length, Context + 2);
    goto LABEL_13;
  }
LABEL_14:
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  if ( v4 )
  {
    IoUnregisterPlugPlayNotificationEx(Context[1].Buffer);
    ExFreePoolWithTag(Context, *((_DWORD *)&unk_140401854 + 8 * *(int *)&Context[1].Length));
  }
  return 0LL;
}
