/*
 * XREFs of KbdCreateClassObject @ 0x1C000CD40
 * Callers:
 *     KeyboardClassFindMorePorts @ 0x1C000C550 (KeyboardClassFindMorePorts.c)
 *     KeyboardAddDevice @ 0x1C000C740 (KeyboardAddDevice.c)
 *     DriverEntry @ 0x1C000F080 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0002610 (WPP_RECORDER_SF_S.c)
 *     KbdInitializeDataQueue @ 0x1C0002800 (KbdInitializeDataQueue.c)
 *     RtlUnicodeStringPrintf @ 0x1C0002890 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0002C10 (__security_check_cookie.c)
 *     memset @ 0x1C0003080 (memset.c)
 *     KeyboardClassLogError @ 0x1C0004B40 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005B2C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall KbdCreateClassObject(
        PDRIVER_OBJECT DriverObject,
        __int128 *a2,
        PDEVICE_OBJECT *a3,
        __int64 *a4,
        char a5)
{
  __int64 DeviceExtension; // rdi
  __int128 *v8; // rbx
  int v10; // r15d
  unsigned __int16 v11; // ax
  WCHAR *PoolWithTag; // rax
  __int64 v13; // rdx
  const wchar_t *v14; // rdx
  unsigned __int64 v15; // rdx
  NTSTATUS v16; // esi
  unsigned __int64 v17; // r8
  PWSTR Buffer; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int128 v21; // xmm0
  SIZE_T v22; // rdx
  PVOID v23; // rax
  __int64 v24; // rdx
  int v25; // r8d
  __int64 v26; // rdx
  int v27; // ebx
  PDEVICE_OBJECT v29; // rcx
  void *v30; // rcx
  int v31; // r9d
  NTSTATUS Device; // eax
  ULONG DeviceCharacteristics; // [rsp+20h] [rbp-60h]
  ULONG DeviceCharacteristicsa; // [rsp+20h] [rbp-60h]
  PWSTR Exclusive; // [rsp+28h] [rbp-58h]
  unsigned int v36; // [rsp+40h] [rbp-40h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-38h] BYREF
  int v38; // [rsp+58h] [rbp-28h]
  _DWORD v39[4]; // [rsp+60h] [rbp-20h] BYREF

  DeviceExtension = 0LL;
  v38 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v8 = a2;
  v36 = 0;
  v10 = 10000;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 1LL);
  }
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  *a3 = 0LL;
  if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v11 = ::DestinationString.Length + 30;
    DestinationString.MaximumLength = ::DestinationString.Length + 30;
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) && a5 )
    {
      v11 = ::DestinationString.Length + 44;
      DestinationString.MaximumLength = ::DestinationString.Length + 44;
    }
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v11, 0x4364624Bu);
    DestinationString.Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, DestinationString.MaximumLength);
      do
      {
        if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) && a5 )
          v14 = L"\\Device\\%wZLegacy%d";
        else
          v14 = L"\\Device\\%wZ%d";
        ++dword_1C00094F4;
        v16 = RtlUnicodeStringPrintf(&DestinationString, v14, &::DestinationString);
        if ( v16 < 0 )
        {
          v31 = 72;
          Exclusive = DestinationString.Buffer;
          goto LABEL_42;
        }
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v15) = 5;
          WPP_RECORDER_SF_S(
            WPP_GLOBAL_Control->DeviceExtension,
            v15,
            v17,
            73,
            DeviceCharacteristics,
            (__int64)DestinationString.Buffer);
        }
        v16 = IoCreateDevice(DriverObject, 0x180u, &DestinationString, 0xBu, 0, 0, a3);
      }
      while ( v16 == -1073741771 );
      v10 = 10000;
      v15 = DestinationString.Length + 2LL;
      if ( DestinationString.MaximumLength >= v15 )
      {
        v17 = (unsigned __int64)DestinationString.Length >> 1;
        DestinationString.Buffer[v17 + 1] = 0;
        Buffer = DestinationString.Buffer;
        *a4 = (__int64)DestinationString.Buffer;
        goto LABEL_18;
      }
      v16 = -1073741823;
      v27 = 0;
    }
    else
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v13, 1LL);
      v16 = -1073741823;
      v39[0] = DestinationString.MaximumLength;
      v27 = -1073414143;
      v10 = 10006;
      v36 = 1;
    }
    goto LABEL_29;
  }
  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  Device = IoCreateDevice(DriverObject, 0x180u, 0LL, 0xBu, 0, 0, a3);
  Buffer = DestinationString.Buffer;
  v16 = Device;
  *a4 = 0LL;
LABEL_18:
  if ( v16 < 0 || !*a3 )
  {
    v31 = 74;
    Exclusive = Buffer;
LABEL_42:
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v15, v17, v31, DeviceCharacteristics, (__int64)Exclusive);
    v10 = 10006;
    v39[0] = DestinationString.MaximumLength;
    v27 = -1073414131;
    v36 = 1;
LABEL_24:
    if ( !v16 )
      goto LABEL_25;
    goto LABEL_29;
  }
  (*a3)->Flags |= 4u;
  v19 = 3LL;
  DeviceExtension = (__int64)(*a3)->DeviceExtension;
  v20 = DeviceExtension;
  do
  {
    v20 += 128LL;
    v21 = *v8;
    v8 += 8;
    *(_OWORD *)(v20 - 128) = v21;
    *(_OWORD *)(v20 - 112) = *(v8 - 7);
    *(_OWORD *)(v20 - 96) = *(v8 - 6);
    *(_OWORD *)(v20 - 80) = *(v8 - 5);
    *(_OWORD *)(v20 - 64) = *(v8 - 4);
    *(_OWORD *)(v20 - 48) = *(v8 - 3);
    *(_OWORD *)(v20 - 32) = *(v8 - 2);
    *(_OWORD *)(v20 - 16) = *(v8 - 1);
    --v19;
  }
  while ( v19 );
  *(_QWORD *)DeviceExtension = *a3;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 32), 0x4364624Bu, 0, 0, 0x20u);
  KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 160));
  *(_QWORD *)(DeviceExtension + 176) = DeviceExtension + 168;
  *(_QWORD *)(DeviceExtension + 168) = DeviceExtension + 168;
  v22 = *(unsigned int *)(DeviceExtension + 140);
  *(_DWORD *)(DeviceExtension + 80) = 0;
  v23 = ExAllocatePoolWithTag((POOL_TYPE)512, v22, 0x4364624Bu);
  *(_QWORD *)(DeviceExtension + 104) = v23;
  if ( v23 )
  {
    KbdInitializeDataQueue(DeviceExtension, v24);
    v27 = v38;
    goto LABEL_24;
  }
  LOBYTE(v24) = 2;
  WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v24, v25, 75, DeviceCharacteristicsa, *a4);
  v16 = -1073741670;
  v27 = -1073414142;
  v10 = 10020;
LABEL_29:
  RtlFreeUnicodeString(&DestinationString);
  *a4 = 0LL;
  if ( v27 )
  {
    v29 = *a3;
    if ( !*a3 )
      v29 = (PDEVICE_OBJECT)DriverObject;
    KeyboardClassLogError(v29, v27, v10, v16, v36, v39, 0);
  }
  if ( DeviceExtension )
  {
    v30 = *(void **)(DeviceExtension + 104);
    if ( v30 )
    {
      ExFreePoolWithTag(v30, 0);
      *(_QWORD *)(DeviceExtension + 104) = 0LL;
    }
  }
  if ( *a3 )
  {
    IoDeleteDevice(*a3);
    *a3 = 0LL;
  }
LABEL_25:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v26) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v26, 1LL);
  }
  return (unsigned int)v16;
}
