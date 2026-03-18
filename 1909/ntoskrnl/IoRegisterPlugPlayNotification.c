/*
 * XREFs of IoRegisterPlugPlayNotification @ 0x140722750
 * Callers:
 *     PopConnectToPolicyDevice @ 0x14074E044 (PopConnectToPolicyDevice.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1408A36EC (PopRegisterCoolingExtensionProtection.c)
 *     SmKmStoreFileCreate @ 0x1408E9EAC (SmKmStoreFileCreate.c)
 *     PoInitDriverServices @ 0x140A20EFC (PoInitDriverServices.c)
 *     SbpWaitForVmbus @ 0x140A4007C (SbpWaitForVmbus.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140002320 (PsGetServerSiloServiceSessionId.c)
 *     ObReferenceObjectByPointerWithTag @ 0x1400063F0 (ObReferenceObjectByPointerWithTag.c)
 *     PsGetCurrentServerSilo @ 0x140006560 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     PnpGetRelatedTargetDevice @ 0x1400ED9FC (PnpGetRelatedTargetDevice.c)
 *     KeAcquireGuardedMutex @ 0x1400EF450 (KeAcquireGuardedMutex.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopGetDeviceInterfaces @ 0x140627858 (IopGetDeviceInterfaces.c)
 *     PnpDeferNotification @ 0x140722B20 (PnpDeferNotification.c)
 *     PnpInitializeNotifyEntry @ 0x140722BE8 (PnpInitializeNotifyEntry.c)
 *     IopGetSessionIdFromSymbolicName @ 0x140737D04 (IopGetSessionIdFromSymbolicName.c)
 *     PnpNotifyDriverCallback @ 0x140737E98 (PnpNotifyDriverCallback.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x140875828 (PiRegisterKernelSoftRestartNotification.c)
 */

NTSTATUS __stdcall IoRegisterPlugPlayNotification(
        IO_NOTIFICATION_EVENT_CATEGORY EventCategory,
        ULONG EventCategoryFlags,
        PVOID EventCategoryData,
        PDRIVER_OBJECT DriverObject,
        PDRIVER_NOTIFICATION_CALLBACK_ROUTINE CallbackRoutine,
        PVOID Context,
        PVOID *NotificationEntry)
{
  NTSTATUS result; // eax
  __int32 v11; // ebx
  __int32 v12; // ebx
  __int32 v13; // ebx
  NTSTATUS restarted; // ebx
  _QWORD *PoolWithTag; // rdi
  PCWSTR v16; // rsi
  PCWSTR *v17; // rdx
  struct _FAST_MUTEX *v18; // rcx
  _DWORD *v19; // r14
  char *v20; // rax
  char **v21; // rdx
  __int128 v22; // xmm1
  WCHAR *v23; // r14
  const WCHAR *i; // rsi
  unsigned __int64 CurrentServerSilo; // rax
  int SessionIdFromSymbolicName; // eax
  _QWORD *v27; // rax
  void *v28; // rcx
  ULONG v29; // edx
  PCWSTR SourceString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  int v32; // [rsp+48h] [rbp-38h] BYREF
  GUID v33; // [rsp+4Ch] [rbp-34h]
  __int128 v34; // [rsp+5Ch] [rbp-24h]
  _BYTE v35[12]; // [rsp+6Ch] [rbp-14h] BYREF

  LODWORD(SourceString) = EventCategoryFlags;
  *NotificationEntry = 0LL;
  result = ObReferenceObjectByPointerWithTag(DriverObject, 0, IoDriverObjectType, 0, 0x4E706E50u);
  if ( result >= 0 )
  {
    v11 = EventCategory - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 != 1 )
          {
            restarted = -1073741585;
            goto LABEL_33;
          }
          restarted = PiRegisterKernelSoftRestartNotification(DriverObject, CallbackRoutine, Context, NotificationEntry);
          goto LABEL_13;
        }
        restarted = PnpGetRelatedTargetDevice((PFILE_OBJECT)EventCategoryData, &SourceString);
        if ( restarted < 0 )
          goto LABEL_33;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x43706E50u);
        if ( PoolWithTag )
        {
          restarted = PnpInitializeNotifyEntry(
                        (_DWORD)PoolWithTag,
                        3,
                        (_DWORD)CallbackRoutine,
                        (_DWORD)Context,
                        (__int64)DriverObject,
                        (__int64)&PnpTargetDeviceNotifyLock);
          if ( restarted < 0 )
          {
            ExFreePoolWithTag(PoolWithTag, 0x43706E50u);
            v28 = (void *)*((_QWORD *)SourceString + 4);
          }
          else
          {
            v16 = SourceString;
            PoolWithTag[10] = EventCategoryData;
            PoolWithTag[11] = *((_QWORD *)v16 + 4);
            restarted = PnpDeferNotification(PoolWithTag);
            if ( restarted >= 0 )
            {
              KeAcquireGuardedMutex(&PnpTargetDeviceNotifyLock);
              v17 = (PCWSTR *)*((_QWORD *)v16 + 60);
              if ( *v17 == v16 + 236 )
              {
                *PoolWithTag = v16 + 236;
                v18 = &PnpTargetDeviceNotifyLock;
                PoolWithTag[1] = v17;
                *v17 = (PCWSTR)PoolWithTag;
                *((_QWORD *)v16 + 60) = PoolWithTag;
LABEL_11:
                KeReleaseGuardedMutex(v18);
LABEL_12:
                *NotificationEntry = PoolWithTag;
                goto LABEL_13;
              }
              goto LABEL_47;
            }
            ExFreePoolWithTag(PoolWithTag, 0x43706E50u);
            v28 = (void *)*((_QWORD *)v16 + 4);
          }
          ObfDereferenceObject(v28);
LABEL_13:
          if ( restarted >= 0 )
            return restarted;
LABEL_33:
          ObfDereferenceObjectWithTag(DriverObject, 0x4E706E50u);
          return restarted;
        }
        ObfDereferenceObject(*((PVOID *)SourceString + 4));
LABEL_38:
        restarted = -1073741670;
        goto LABEL_33;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x44706E50u);
      if ( !PoolWithTag )
        goto LABEL_38;
      restarted = PnpInitializeNotifyEntry(
                    (_DWORD)PoolWithTag,
                    2,
                    (_DWORD)CallbackRoutine,
                    (_DWORD)Context,
                    (__int64)DriverObject,
                    (__int64)&PnpDeviceClassNotifyLock);
      if ( restarted < 0 )
        goto LABEL_33;
      v19 = PoolWithTag + 10;
      *((_OWORD *)PoolWithTag + 5) = *(_OWORD *)EventCategoryData;
      restarted = PnpDeferNotification(PoolWithTag);
      if ( restarted >= 0 )
      {
        KeAcquireGuardedMutex(&PnpDeviceClassNotifyLock);
        v20 = (char *)&PnpDeviceClassNotifyList
            + 16
            * ((*v19 + *((_DWORD *)PoolWithTag + 21) + *((_DWORD *)PoolWithTag + 22) + *((_DWORD *)PoolWithTag + 23))
             % 0xDu);
        v21 = (char **)*((_QWORD *)v20 + 1);
        if ( *v21 == v20 )
        {
          *PoolWithTag = v20;
          PoolWithTag[1] = v21;
          *v21 = (char *)PoolWithTag;
          *((_QWORD *)v20 + 1) = PoolWithTag;
          KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
          if ( ((unsigned __int8)SourceString & 1) != 0 )
          {
            v22 = *(_OWORD *)v19;
            *(_QWORD *)&DestinationString.Length = 0LL;
            DestinationString.Buffer = 0LL;
            memset(v35, 0, sizeof(v35));
            v32 = 3145729;
            v33 = GUID_DEVICE_INTERFACE_ARRIVAL;
            v34 = v22;
            restarted = IopGetDeviceInterfaces((__int64)(PoolWithTag + 10), 0LL, 0, 0, &SourceString, 0LL);
            if ( restarted < 0 )
              goto LABEL_33;
            v23 = (WCHAR *)SourceString;
            for ( i = SourceString; *i; i += ((unsigned __int64)DestinationString.Length >> 1) + 1 )
            {
              RtlInitUnicodeString(&DestinationString, i);
              *(_QWORD *)&v35[4] = &DestinationString;
              CurrentServerSilo = PsGetCurrentServerSilo();
              if ( *((_DWORD *)PoolWithTag + 5) != (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
              {
                SessionIdFromSymbolicName = IopGetSessionIdFromSymbolicName(*(_QWORD *)&v35[4]);
                if ( SessionIdFromSymbolicName != -1 && *((_DWORD *)PoolWithTag + 5) != SessionIdFromSymbolicName )
                  continue;
              }
              PnpNotifyDriverCallback(PoolWithTag, &v32, &SourceString);
            }
            ExFreePoolWithTag(v23, 0);
          }
          goto LABEL_12;
        }
        goto LABEL_47;
      }
      v29 = 1148218960;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x39706E50u);
      if ( !PoolWithTag )
        goto LABEL_38;
      restarted = PnpInitializeNotifyEntry(
                    (_DWORD)PoolWithTag,
                    1,
                    (_DWORD)CallbackRoutine,
                    (_DWORD)Context,
                    (__int64)DriverObject,
                    (__int64)&PnpHwProfileNotifyLock);
      if ( restarted < 0 )
        goto LABEL_33;
      restarted = PnpDeferNotification(PoolWithTag);
      if ( restarted >= 0 )
      {
        KeAcquireGuardedMutex(&PnpHwProfileNotifyLock);
        v27 = (_QWORD *)qword_1409AEAF8;
        if ( *(PVOID **)qword_1409AEAF8 == &PnpProfileNotifyList )
        {
          *PoolWithTag = &PnpProfileNotifyList;
          v18 = &PnpHwProfileNotifyLock;
          PoolWithTag[1] = v27;
          *v27 = PoolWithTag;
          qword_1409AEAF8 = (__int64)PoolWithTag;
          goto LABEL_11;
        }
LABEL_47:
        __fastfail(3u);
      }
      v29 = 963669584;
    }
    ExFreePoolWithTag(PoolWithTag, v29);
    goto LABEL_13;
  }
  return result;
}
