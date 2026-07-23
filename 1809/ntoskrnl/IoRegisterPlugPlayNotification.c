/*
 * XREFs of IoRegisterPlugPlayNotification @ 0x1407043E0
 * Callers:
 *     PopConnectToPolicyDevice @ 0x140742084 (PopConnectToPolicyDevice.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140868BA4 (PopRegisterCoolingExtensionProtection.c)
 *     SmKmStoreFileCreate @ 0x1408AE8B0 (SmKmStoreFileCreate.c)
 *     PoInitDriverServices @ 0x1409DEA94 (PoInitDriverServices.c)
 *     SbpWaitForVmbus @ 0x1409FB64C (SbpWaitForVmbus.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1400067D0 (PsGetServerSiloServiceSessionId.c)
 *     PnpGetRelatedTargetDevice @ 0x14000E8D0 (PnpGetRelatedTargetDevice.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     PsGetCurrentServerSilo @ 0x14004D270 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ObReferenceObjectByPointerWithTag @ 0x1400CB210 (ObReferenceObjectByPointerWithTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopGetDeviceInterfaces @ 0x14059F6C4 (IopGetDeviceInterfaces.c)
 *     PnpDeferNotification @ 0x14070479C (PnpDeferNotification.c)
 *     PnpInitializeNotifyEntry @ 0x140704864 (PnpInitializeNotifyEntry.c)
 *     PnpNotifyDriverCallback @ 0x1407049F4 (PnpNotifyDriverCallback.c)
 *     IopGetSessionIdFromSymbolicName @ 0x14070B980 (IopGetSessionIdFromSymbolicName.c)
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
  NTSTATUS RelatedTargetDevice; // ebx
  _QWORD *PoolWithTag; // rdi
  PCWSTR v15; // rsi
  PCWSTR *v16; // rdx
  struct _FAST_MUTEX *v17; // rcx
  _DWORD *v18; // r14
  char *v19; // rax
  char **v20; // rdx
  __int128 v21; // xmm1
  WCHAR *v22; // r14
  const WCHAR *i; // rsi
  __int64 CurrentServerSilo; // rax
  int SessionIdFromSymbolicName; // eax
  _QWORD *v26; // rax
  void *v27; // rcx
  ULONG v28; // edx
  PCWSTR SourceString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  int v31; // [rsp+48h] [rbp-38h] BYREF
  GUID v32; // [rsp+4Ch] [rbp-34h]
  __int128 v33; // [rsp+5Ch] [rbp-24h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-10h]

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
        if ( v12 != 1 )
        {
          RelatedTargetDevice = -1073741585;
          goto LABEL_33;
        }
        RelatedTargetDevice = PnpGetRelatedTargetDevice((PFILE_OBJECT)EventCategoryData, &SourceString);
        if ( RelatedTargetDevice < 0 )
        {
LABEL_33:
          ObfDereferenceObjectWithTag(DriverObject, 0x4E706E50u);
          return RelatedTargetDevice;
        }
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x43706E50u);
        if ( PoolWithTag )
        {
          RelatedTargetDevice = PnpInitializeNotifyEntry(
                                  (_DWORD)PoolWithTag,
                                  3,
                                  (_DWORD)CallbackRoutine,
                                  (_DWORD)Context,
                                  (__int64)DriverObject,
                                  (__int64)&PnpTargetDeviceNotifyLock);
          if ( RelatedTargetDevice < 0 )
          {
            ExFreePoolWithTag(PoolWithTag, 0x43706E50u);
            v27 = (void *)*((_QWORD *)SourceString + 4);
          }
          else
          {
            v15 = SourceString;
            PoolWithTag[10] = EventCategoryData;
            PoolWithTag[11] = *((_QWORD *)v15 + 4);
            RelatedTargetDevice = PnpDeferNotification(PoolWithTag);
            if ( RelatedTargetDevice >= 0 )
            {
              ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
              v16 = (PCWSTR *)*((_QWORD *)v15 + 60);
              if ( *v16 == v15 + 236 )
              {
                *PoolWithTag = v15 + 236;
                v17 = &PnpTargetDeviceNotifyLock;
                PoolWithTag[1] = v16;
                *v16 = (PCWSTR)PoolWithTag;
                *((_QWORD *)v15 + 60) = PoolWithTag;
LABEL_11:
                KeReleaseGuardedMutex(v17);
LABEL_12:
                *NotificationEntry = PoolWithTag;
                goto LABEL_13;
              }
              goto LABEL_45;
            }
            ExFreePoolWithTag(PoolWithTag, 0x43706E50u);
            v27 = (void *)*((_QWORD *)v15 + 4);
          }
          ObfDereferenceObject(v27);
LABEL_13:
          if ( RelatedTargetDevice >= 0 )
            return RelatedTargetDevice;
          goto LABEL_33;
        }
        ObfDereferenceObject(*((PVOID *)SourceString + 4));
LABEL_36:
        RelatedTargetDevice = -1073741670;
        goto LABEL_33;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x44706E50u);
      if ( !PoolWithTag )
        goto LABEL_36;
      RelatedTargetDevice = PnpInitializeNotifyEntry(
                              (_DWORD)PoolWithTag,
                              2,
                              (_DWORD)CallbackRoutine,
                              (_DWORD)Context,
                              (__int64)DriverObject,
                              (__int64)&PnpDeviceClassNotifyLock);
      if ( RelatedTargetDevice < 0 )
        goto LABEL_33;
      v18 = PoolWithTag + 10;
      *((_OWORD *)PoolWithTag + 5) = *(_OWORD *)EventCategoryData;
      RelatedTargetDevice = PnpDeferNotification(PoolWithTag);
      if ( RelatedTargetDevice >= 0 )
      {
        ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
        v19 = (char *)&PnpDeviceClassNotifyList
            + 16
            * ((*v18 + *((_DWORD *)PoolWithTag + 21) + *((_DWORD *)PoolWithTag + 22) + *((_DWORD *)PoolWithTag + 23))
             % 0xDu);
        v20 = (char **)*((_QWORD *)v19 + 1);
        if ( *v20 == v19 )
        {
          *PoolWithTag = v19;
          PoolWithTag[1] = v20;
          *v20 = (char *)PoolWithTag;
          *((_QWORD *)v19 + 1) = PoolWithTag;
          KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
          if ( ((unsigned __int8)SourceString & 1) != 0 )
          {
            v21 = *(_OWORD *)v18;
            v31 = 3145729;
            v32 = GUID_DEVICE_INTERFACE_ARRIVAL;
            v33 = v21;
            RelatedTargetDevice = IopGetDeviceInterfaces((int *)PoolWithTag + 20, 0LL, 0, 0, &SourceString, 0LL);
            if ( RelatedTargetDevice < 0 )
              goto LABEL_33;
            v22 = (WCHAR *)SourceString;
            for ( i = SourceString; *i; i += ((unsigned __int64)DestinationString.Length >> 1) + 1 )
            {
              RtlInitUnicodeString(&DestinationString, i);
              p_DestinationString = &DestinationString;
              CurrentServerSilo = PsGetCurrentServerSilo();
              if ( *((_DWORD *)PoolWithTag + 5) != (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
              {
                SessionIdFromSymbolicName = IopGetSessionIdFromSymbolicName(p_DestinationString);
                if ( SessionIdFromSymbolicName != -1 && *((_DWORD *)PoolWithTag + 5) != SessionIdFromSymbolicName )
                  continue;
              }
              PnpNotifyDriverCallback(PoolWithTag, &v31, &SourceString);
            }
            ExFreePoolWithTag(v22, 0);
          }
          goto LABEL_12;
        }
        goto LABEL_45;
      }
      v28 = 1148218960;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x39706E50u);
      if ( !PoolWithTag )
        goto LABEL_36;
      RelatedTargetDevice = PnpInitializeNotifyEntry(
                              (_DWORD)PoolWithTag,
                              1,
                              (_DWORD)CallbackRoutine,
                              (_DWORD)Context,
                              (__int64)DriverObject,
                              (__int64)&PnpHwProfileNotifyLock);
      if ( RelatedTargetDevice < 0 )
        goto LABEL_33;
      RelatedTargetDevice = PnpDeferNotification(PoolWithTag);
      if ( RelatedTargetDevice >= 0 )
      {
        ExAcquireFastMutex(&PnpHwProfileNotifyLock);
        v26 = (_QWORD *)qword_14096FA28;
        if ( *(PVOID **)qword_14096FA28 == &PnpProfileNotifyList )
        {
          *PoolWithTag = &PnpProfileNotifyList;
          v17 = &PnpHwProfileNotifyLock;
          PoolWithTag[1] = v26;
          *v26 = PoolWithTag;
          qword_14096FA28 = (__int64)PoolWithTag;
          goto LABEL_11;
        }
LABEL_45:
        __fastfail(3u);
      }
      v28 = 963669584;
    }
    ExFreePoolWithTag(PoolWithTag, v28);
    goto LABEL_13;
  }
  return result;
}
