/*
 * XREFs of IoRegisterContainerNotification @ 0x1407611D0
 * Callers:
 *     <none>
 * Callees:
 *     IopGetDevicePDO @ 0x140019CF4 (IopGetDevicePDO.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     IopAllocateFileObjectExtension @ 0x140062920 (IopAllocateFileObjectExtension.c)
 *     MmGetSessionObjectById @ 0x14007F234 (MmGetSessionObjectById.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExRegisterCallback @ 0x14016C780 (ExRegisterCallback.c)
 *     ExUnregisterCallback @ 0x14016CFF0 (ExUnregisterCallback.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopGetSessionIdFromPDO @ 0x1406ECED4 (IopGetSessionIdFromPDO.c)
 */

NTSTATUS __stdcall IoRegisterContainerNotification(
        IO_CONTAINER_NOTIFICATION_CLASS NotificationClass,
        PIO_CONTAINER_NOTIFICATION_FUNCTION CallbackFunction,
        PVOID NotificationInformation,
        ULONG NotificationInformationLength,
        PVOID CallbackRegistration)
{
  NTSTATUS FileObjectExtension; // ebx
  PIO_CONTAINER_NOTIFICATION_FUNCTION v7; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rsi
  PVOID *v10; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // rdi
  PVOID v13; // rbp
  void *SessionObjectById; // r12
  void *v15; // r14
  _QWORD *v16; // rax
  PVOID *v18; // rax
  struct _DEVICE_OBJECT *DevicePDO; // rax
  struct _DEVICE_OBJECT *v20; // r15
  unsigned int SessionIdFromPDO; // eax
  __int64 v22[7]; // [rsp+20h] [rbp-38h] BYREF

  FileObjectExtension = 0;
  v7 = CallbackFunction;
  if ( NotificationClass >= IoMaxContainerNotificationClass )
    return -1073741585;
  if ( NotificationInformationLength == 32 && *(_DWORD *)NotificationInformation == 32 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = *((_QWORD *)NotificationInformation + 1);
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
    v10 = (PVOID *)IopSessionNotificationQueueHead;
    while ( v10 != &IopSessionNotificationQueueHead )
    {
      v18 = v10;
      v10 = (PVOID *)*v10;
      if ( v18[5] == (PVOID)v9 )
      {
        FileObjectExtension = -1073741791;
        goto LABEL_13;
      }
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x6E536F49u);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      FileObjectExtension = -1073741670;
LABEL_13:
      ExReleasePushLockEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return FileObjectExtension;
    }
    v13 = ExRegisterCallback(
            (PCALLBACK_OBJECT)IopSessionCallbackObject,
            (PCALLBACK_FUNCTION)IopDispatchSessionNotifications,
            PoolWithTag);
    if ( v13 )
    {
      SessionObjectById = 0LL;
      switch ( *(_WORD *)v9 )
      {
        case 3:
          v15 = *(void **)(v9 + 8);
          if ( (*(_DWORD *)(*(_QWORD *)(v9 + 312) + 32LL) & 0x400) != 0 )
          {
            DevicePDO = (struct _DEVICE_OBJECT *)IopGetDevicePDO(v9);
            v20 = DevicePDO;
            if ( DevicePDO )
            {
              SessionIdFromPDO = IopGetSessionIdFromPDO(DevicePDO);
              SessionObjectById = MmGetSessionObjectById(SessionIdFromPDO);
              ObfDereferenceObject(v20);
            }
            v7 = CallbackFunction;
          }
          *(_DWORD *)(*(_QWORD *)(v9 + 312) + 32LL) |= 0x1000u;
          goto LABEL_11;
        case 4:
          v15 = (void *)v9;
LABEL_11:
          ObfReferenceObject(v15);
          v12[5] = v9;
          v12[2] = v15;
          v12[4] = v13;
          v12[8] = *((_QWORD *)NotificationInformation + 3);
          *((_DWORD *)v12 + 14) = *((_DWORD *)NotificationInformation + 4);
          v12[3] = v7;
          v12[6] = SessionObjectById;
          *(_QWORD *)CallbackRegistration = v13;
          v16 = (_QWORD *)qword_140436A48;
          if ( *(PVOID **)qword_140436A48 != &IopSessionNotificationQueueHead )
            __fastfail(3u);
          *v12 = &IopSessionNotificationQueueHead;
          v12[1] = v16;
          *v16 = v12;
          qword_140436A48 = (__int64)v12;
          goto LABEL_13;
        case 5:
          v15 = *(void **)(*(_QWORD *)(v9 + 8) + 8LL);
          FileObjectExtension = IopAllocateFileObjectExtension(v9, v22);
          if ( FileObjectExtension >= 0 )
          {
            *(_DWORD *)v22[0] |= 2u;
            FileObjectExtension = 0;
          }
          if ( FileObjectExtension >= 0 )
            goto LABEL_11;
          break;
        default:
          FileObjectExtension = -1073741583;
          break;
      }
    }
    else
    {
      FileObjectExtension = -1073741670;
    }
    ExFreePoolWithTag(v12, 0);
    if ( v13 )
      ExUnregisterCallback(v13);
    goto LABEL_13;
  }
  return -1073741582;
}
