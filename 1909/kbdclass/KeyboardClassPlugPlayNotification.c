/*
 * XREFs of KeyboardClassPlugPlayNotification @ 0x1C000F790
 * Callers:
 *     <none>
 * Callees:
 *     KeyboardClassEnableGlobalPort @ 0x1C000F4CC (KeyboardClassEnableGlobalPort.c)
 */

__int64 __fastcall KeyboardClassPlugPlayNotification(char *NotificationStructure, PVOID Context)
{
  __int64 result; // rax
  __int64 v5; // rcx
  char v6; // dl
  __int64 v7; // rcx
  void *v8; // rcx
  __int64 v9; // rcx
  void *v10; // rcx

  result = 0LL;
  v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v5 )
  {
LABEL_4:
    v6 = 0;
    return KeyboardClassEnableGlobalPort((PVOID *)Context, v6);
  }
  v7 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v7 )
  {
    v8 = (void *)_InterlockedExchange64((volatile __int64 *)Context + 41, 0LL);
    if ( !v8 )
      return result;
    IoUnregisterPlugPlayNotification(v8);
    goto LABEL_4;
  }
  v9 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v9 )
  {
    v10 = (void *)_InterlockedExchange64((volatile __int64 *)Context + 41, 0LL);
    if ( v10 )
    {
      IoUnregisterPlugPlayNotification(v10);
      v6 = 1;
      return KeyboardClassEnableGlobalPort((PVOID *)Context, v6);
    }
  }
  return result;
}
