/*
 * XREFs of ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1C01A9B30
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ShowAutorunCursor @ 0x1C019778C (ShowAutorunCursor.c)
 */

__int64 __fastcall DeviceCDROMNotify(char *NotificationStructure, unsigned int *Context)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rax
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *v7; // rdi
  struct _LIST_ENTRY *Flink; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  PVOID *v12; // rcx
  __int64 v13; // rax

  if ( gProtocolType )
    return 0LL;
  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_IO_MEDIA_ARRIVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_IO_MEDIA_ARRIVAL.Data4;
  if ( !v3 )
  {
    v4 = 1;
    goto LABEL_10;
  }
  v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_IO_MEDIA_REMOVAL.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_IO_MEDIA_REMOVAL.Data4;
  if ( !v5 )
  {
    v4 = 2;
LABEL_10:
    Context[8] = v4;
    v6 = (struct _LIST_ENTRY *)Win32AllocPoolNonPaged(Context[4], 1886417749LL);
    v7 = v6;
    if ( v6 )
    {
      memmove(v6, Context, Context[4]);
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      Flink = gMediaChangeList.Flink;
      if ( gMediaChangeList.Flink->Blink != &gMediaChangeList )
        __fastfail(3u);
      v7->Blink = &gMediaChangeList;
      v9 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
      v7->Flink = Flink;
      Flink->Blink = v7;
      gMediaChangeList.Flink = v7;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v9);
      KeSetEvent((PRKEVENT)WPP_MAIN_CB.Queue.ListEntry.Blink, 1, 0);
    }
    return 0LL;
  }
  v10 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( v10 )
  {
    v13 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_IO_DEVICE_BECOMING_READY.Data1;
    if ( !v13 )
      v13 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_IO_DEVICE_BECOMING_READY.Data4;
    if ( !v13 )
      ShowAutorunCursor(10 * *((_DWORD *)NotificationStructure + 11));
  }
  else
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
    {
      v11 = *(_QWORD **)Context;
      if ( *(unsigned int **)(*(_QWORD *)Context + 8LL) != Context
        || (v12 = (PVOID *)*((_QWORD *)Context + 1), *v12 != Context) )
      {
        __fastfail(3u);
      }
      *v12 = v11;
      v11[1] = v12;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      IoUnregisterPlugPlayNotification(*((PVOID *)Context + 3));
      Win32FreePool(Context);
    }
    else
    {
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    }
  }
  return 0LL;
}
