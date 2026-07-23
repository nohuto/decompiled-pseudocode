/*
 * XREFs of PopCoolingExtensionPnpNotification @ 0x1408687B0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     PopPropogateCoolingChange @ 0x14018DBE4 (PopPropogateCoolingChange.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopDiagTraceCoolingExtension @ 0x1406DC478 (PopDiagTraceCoolingExtension.c)
 *     PopAcquireCoolingInterface @ 0x140746DF8 (PopAcquireCoolingInterface.c)
 *     PopOrphanCoolingExtension @ 0x140868AB0 (PopOrphanCoolingExtension.c)
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

  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v3 )
  {
    v4 = Context + 32;
    PopAcquireRwLockExclusive((ULONG_PTR)(Context + 32));
    Context[64] = 0;
    PopDiagTraceCoolingExtension((__int64)Context, &POP_ETW_EVENT_COOLING_EXTENSION_REMOVE);
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
      PopDiagTraceCoolingExtension((__int64)Context, &POP_ETW_EVENT_COOLING_EXTENSION_ADD);
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
