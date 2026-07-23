/*
 * XREFs of PiUEventProcessBroadcastNotifications @ 0x14058FB9C
 * Callers:
 *     PiUEventProcessEventWorker @ 0x14058F940 (PiUEventProcessEventWorker.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14000733C (RtlStringCchLengthW.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140700070 (PiUEventQueueBroadcastEventEntry.c)
 *     IopGetSessionIdFromSymbolicName @ 0x14070B980 (IopGetSessionIdFromSymbolicName.c)
 */

__int64 __fastcall PiUEventProcessBroadcastNotifications(__int64 a1)
{
  NTSTATUS ObjectProperty; // ebx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // r14d
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rax
  bool v15; // zf
  __int64 v16; // rax
  char *v17; // rax
  char *v18; // r14
  _DWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  char *v27; // rax
  _DWORD *v28; // rax
  _DWORD *v29; // rdi
  char *v30; // rax
  char *PoolWithTag; // rax
  UNICODE_STRING pcchLength; // [rsp+60h] [rbp-10h] BYREF
  int v33; // [rsp+A8h] [rbp+38h] BYREF
  int v34; // [rsp+B0h] [rbp+40h] BYREF
  int v35; // [rsp+B8h] [rbp+48h] BYREF

  ObjectProperty = 0;
  *(_QWORD *)&pcchLength.Length = 0LL;
  v34 = 0;
  if ( !PiUEventBroadcastSubscriberPresent )
    return (unsigned int)ObjectProperty;
  v3 = *(_DWORD *)(a1 + 88);
  if ( !v3 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1C0uLL, 0x59706E50u);
    v18 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0x1C0uLL);
    *((_DWORD *)v18 + 6) = -1;
    *((_DWORD *)v18 + 5) = 2;
    *(_OWORD *)(v18 + 28) = *(_OWORD *)(a1 + 72);
    goto LABEL_27;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v16 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1;
    if ( !v16 )
      v16 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_ARRIVAL.Data4;
    if ( !v16 )
      goto LABEL_24;
    v25 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_REMOVE_PENDING.Data1;
    if ( !v25 )
      v25 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_REMOVE_PENDING.Data4;
    if ( !v25 )
    {
LABEL_24:
      v17 = (char *)ExAllocatePoolWithTag(PagedPool, 0x1C0uLL, 0x59706E50u);
      v18 = v17;
      if ( !v17 )
        return (unsigned int)-1073741670;
      memset(v17, 0, 0x1C0uLL);
      *((_DWORD *)v18 + 5) = 0;
      ObjectProperty = PnpGetObjectProperty(
                         PiPnpRtlCtx,
                         (int)a1 + 120,
                         1,
                         0,
                         0LL,
                         (__int64)&DEVPKEY_Device_SessionId,
                         (__int64)&v33,
                         (__int64)(v18 + 24),
                         4,
                         (__int64)&v34,
                         0);
      if ( ObjectProperty < 0 || v34 != 4 )
      {
        *((_DWORD *)v18 + 6) = -1;
        ObjectProperty = 0;
      }
LABEL_27:
      v19 = v18;
LABEL_28:
      PiUEventQueueBroadcastEventEntry(v19);
      return (unsigned int)ObjectProperty;
    }
    v26 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
    if ( !v26 )
      v26 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
    v15 = v26 == 0;
LABEL_19:
    if ( !v15 )
      return (unsigned int)ObjectProperty;
    goto LABEL_24;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( !v6 )
    {
      v7 = a1 + 128;
      ObjectProperty = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a1 + 128), 0xC8uLL, (size_t *)&pcchLength.Length);
      if ( ObjectProperty < 0 || !*(_QWORD *)&pcchLength.Length )
        return (unsigned int)ObjectProperty;
      v8 = 2 * *(_DWORD *)&pcchLength.Length + 82;
      v9 = -1;
      if ( v8 >= 0x50 )
        v9 = 2 * *(_DWORD *)&pcchLength.Length + 82;
      ObjectProperty = v8 < 0x50 ? 0xC0000095 : 0;
      if ( v8 < 0x50 )
        return (unsigned int)ObjectProperty;
      v10 = v9 + 7;
      v11 = -1;
      if ( v9 + 7 >= v9 )
        v11 = v9 + 7;
      ObjectProperty = v10 < v9 ? 0xC0000095 : 0;
      if ( v10 < v9 )
        return (unsigned int)ObjectProperty;
      v12 = v11 & 0xFFFFFFF8;
      v13 = *(_QWORD *)(v12 + a1 + 76) - *(_QWORD *)&GUID_IO_VOLUME_NAME_CHANGE.Data1;
      if ( !v13 )
        v13 = *(_QWORD *)(v12 + a1 + 84) - *(_QWORD *)GUID_IO_VOLUME_NAME_CHANGE.Data4;
      if ( v13 )
        return (unsigned int)ObjectProperty;
      v28 = ExAllocatePoolWithTag(PagedPool, 0x1C0uLL, 0x59706E50u);
      v29 = v28;
      if ( v28 )
      {
        memset(v28, 0, 0x1C0uLL);
        v29[5] = 1;
        ObjectProperty = PnpGetObjectProperty(
                           PiPnpRtlCtx,
                           v7,
                           1,
                           0,
                           0LL,
                           (__int64)&DEVPKEY_Device_SessionId,
                           (__int64)&v33,
                           (__int64)(v29 + 6),
                           4,
                           (__int64)&v34,
                           0);
        if ( ObjectProperty < 0 || v34 != 4 )
        {
          v29[6] = -1;
          ObjectProperty = 0;
        }
        v19 = v29;
        goto LABEL_28;
      }
      return (unsigned int)-1073741670;
    }
    v15 = v6 == 1;
    goto LABEL_19;
  }
  v20 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v20 )
    v20 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v20 )
    goto LABEL_32;
  v24 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v24 )
    v24 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  if ( !v24 )
  {
LABEL_32:
    v21 = *(_QWORD *)(a1 + 120) - *(_QWORD *)&GUID_DEVINTERFACE_VOLUME.Data1;
    if ( !v21 )
      v21 = *(_QWORD *)(a1 + 128) - *(_QWORD *)GUID_DEVINTERFACE_VOLUME.Data4;
    if ( !v21 )
    {
      v27 = (char *)ExAllocatePoolWithTag(PagedPool, 0x1C0uLL, 0x59706E50u);
      v18 = v27;
      if ( !v27 )
        return (unsigned int)-1073741670;
      memset(v27, 0, 0x1C0uLL);
      RtlInitUnicodeString(&pcchLength, (PCWSTR)(a1 + 136));
      *((_DWORD *)v18 + 5) = 1;
      *((_DWORD *)v18 + 6) = IopGetSessionIdFromSymbolicName(&pcchLength);
      goto LABEL_27;
    }
    v22 = *(_QWORD *)(a1 + 120) - *(_QWORD *)&GUID_DEVINTERFACE_PARALLEL.Data1;
    if ( !v22 )
      v22 = *(_QWORD *)(a1 + 128) - *(_QWORD *)GUID_DEVINTERFACE_PARALLEL.Data4;
    if ( !v22 )
      goto LABEL_63;
    v23 = *(_QWORD *)(a1 + 120) - *(_QWORD *)&GUID_DEVINTERFACE_COMPORT.Data1;
    if ( !v23 )
      v23 = *(_QWORD *)(a1 + 128) - *(_QWORD *)GUID_DEVINTERFACE_COMPORT.Data4;
    if ( !v23 )
    {
LABEL_63:
      v30 = (char *)ExAllocatePoolWithTag(PagedPool, 0x1C0uLL, 0x59706E50u);
      v18 = v30;
      if ( !v30 )
        return (unsigned int)-1073741670;
      memset(v30, 0, 0x1C0uLL);
      RtlInitUnicodeString(&pcchLength, (PCWSTR)(a1 + 136));
      *((_DWORD *)v18 + 5) = 3;
      *(_OWORD *)(v18 + 28) = *(_OWORD *)(a1 + 72);
      v35 = 400;
      ObjectProperty = PnpGetObjectProperty(
                         PiPnpRtlCtx,
                         (int)a1 + 136,
                         3,
                         0,
                         0LL,
                         (__int64)&DEVPKEY_Device_InstanceId,
                         (__int64)&v33,
                         (__int64)(v18 + 44),
                         400,
                         (__int64)&v35,
                         0);
      if ( ObjectProperty < 0 || v33 != 18 )
      {
        ExFreePoolWithTag(v18, 0x59706E50u);
        return (unsigned int)ObjectProperty;
      }
      v35 = 4;
      ObjectProperty = PnpGetObjectProperty(
                         PiPnpRtlCtx,
                         (int)v18 + 44,
                         1,
                         0,
                         0LL,
                         (__int64)&DEVPKEY_Device_SessionId,
                         (__int64)&v33,
                         (__int64)(v18 + 24),
                         4,
                         (__int64)&v35,
                         0);
      if ( ObjectProperty < 0 || v33 != 7 )
      {
        *((_DWORD *)v18 + 6) = -1;
        ObjectProperty = 0;
      }
      goto LABEL_27;
    }
  }
  return (unsigned int)ObjectProperty;
}
