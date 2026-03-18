/*
 * XREFs of PopCoolingExtensionPnpNotification @ 0x1408A32A0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopPropogateCoolingChange @ 0x140199FE8 (PopPropogateCoolingChange.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PopAcquireCoolingInterface @ 0x14075F5E8 (PopAcquireCoolingInterface.c)
 *     PopOrphanCoolingExtension @ 0x1408A35D8 (PopOrphanCoolingExtension.c)
 *     PopDiagTraceCoolingExtensionAdd @ 0x1408AD4A4 (PopDiagTraceCoolingExtensionAdd.c)
 *     PopDiagTraceCoolingExtensionRemove @ 0x1408AD57C (PopDiagTraceCoolingExtensionRemove.c)
 */

__int64 __fastcall PopCoolingExtensionPnpNotification(char *NotificationStructure, _BYTE *Context)
{
  __int64 v3; // rax
  char *v4; // rsi
  __int64 v5; // rbx
  void (__fastcall *v6)(__int64); // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v3 )
  {
    v4 = Context + 32;
    PopAcquireRwLockExclusive((ULONG_PTR)(Context + 32));
    Context[64] = 0;
    PopDiagTraceCoolingExtensionRemove(Context);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    *((_QWORD *)Context + 10) = &Event;
    PopPropogateCoolingChange((__int64)Context);
    PopReleaseRwLock((ULONG_PTR)v4);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    PopAcquireRwLockExclusive((ULONG_PTR)v4);
    *((_QWORD *)Context + 10) = 0LL;
    v5 = *((_QWORD *)Context + 12);
    v6 = (void (__fastcall *)(__int64))*((_QWORD *)Context + 14);
    PopReleaseRwLock((ULONG_PTR)v4);
    v6(v5);
    return 0LL;
  }
  v7 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v7 )
    goto LABEL_15;
  v8 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v8 )
  {
    if ( (int)PopAcquireCoolingInterface((__int64)Context) >= 0 )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)(Context + 32));
      Context[64] = 1;
      PopDiagTraceCoolingExtensionAdd(Context);
      if ( *((_BYTE **)Context + 2) != Context + 16 )
        PopPropogateCoolingChange((__int64)Context);
      PopReleaseRwLock((ULONG_PTR)(Context + 32));
      return 0LL;
    }
LABEL_15:
    PopOrphanCoolingExtension(Context);
  }
  return 0LL;
}
