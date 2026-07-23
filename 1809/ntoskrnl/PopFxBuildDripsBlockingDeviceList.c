/*
 * XREFs of PopFxBuildDripsBlockingDeviceList @ 0x1402D77C0
 * Callers:
 *     PopDripsWatchdogDfxCallback @ 0x14086F520 (PopDripsWatchdogDfxCallback.c)
 *     PopDripsWatchdogPs4Callback @ 0x14086F890 (PopDripsWatchdogPs4Callback.c)
 *     PopDripsCallbackTakeAction @ 0x14087A7A8 (PopDripsCallbackTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x14087A9E8 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     PopFxAddRefDevice @ 0x1400FE348 (PopFxAddRefDevice.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopFxIsDripsBlockingDevice @ 0x1402D866C (PopFxIsDripsBlockingDevice.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     IoGetDevicePropertyData @ 0x140587930 (IoGetDevicePropertyData.c)
 *     IoLockUnlockPnpDeviceTree @ 0x14082581C (IoLockUnlockPnpDeviceTree.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14086A854 (PopFxDestroyDripsBlockingDeviceList.c)
 */

__int64 __fastcall PopFxBuildDripsBlockingDeviceList(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r15
  NTSTATUS DevicePropertyData; // ebp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR i; // rdi
  _QWORD *v7; // rsi
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  __int64 *v10; // rbx
  __int64 v11; // rcx
  __int64 *v12; // rax
  unsigned int v13; // esi
  __int64 *v14; // r8
  unsigned int v15; // r9d
  __int64 *v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // ecx
  int v19; // eax
  __int64 *v20; // rax
  unsigned int v21; // ecx
  unsigned __int64 v22; // rax
  _QWORD *PoolWithTag; // r8
  __int64 *v24; // rdx
  __int64 v25; // r9
  __int64 *v26; // rcx
  int v27; // eax
  __int64 *v28; // rax
  ULONG Type; // [rsp+40h] [rbp-48h] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-44h] BYREF
  _QWORD Data[2]; // [rsp+48h] [rbp-40h] BYREF

  v2 = a1;
  LOBYTE(a1) = 1;
  DevicePropertyData = 0;
  IoLockUnlockPnpDeviceTree(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxBlockingDeviceListLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  a2[1] = a2;
  *a2 = a2;
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    v7 = (_QWORD *)(i + 856);
    if ( *(_QWORD *)(i + 48) && (unsigned __int8)PopFxIsDripsBlockingDevice(i, v2, i + 872) )
    {
      PopFxAddRefDevice((struct _IO_REMOVE_LOCK *)i);
      v8 = (_QWORD *)a2[1];
      if ( (_QWORD *)*v8 != a2 )
        __fastfail(3u);
      *v7 = a2;
      *(_QWORD *)(i + 864) = v8;
      *v8 = v7;
      a2[1] = v7;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  v9 = (_QWORD *)*a2;
  if ( (_QWORD *)*a2 == a2 )
    return (unsigned int)DevicePropertyData;
  while ( 1 )
  {
    v10 = (__int64 *)*(v9 - 101);
    DevicePropertyData = IoGetDevicePropertyData(
                           (PDEVICE_OBJECT)v10[4],
                           &DEVPKEY_Device_ClassGuid,
                           0,
                           0,
                           0x10u,
                           Data,
                           &RequiredSize,
                           &Type);
    if ( DevicePropertyData >= 0 && Type == 13 && RequiredSize == 16 )
    {
      v11 = *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 - Data[0];
      if ( *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 == Data[0] )
        v11 = *(_QWORD *)GUID_DEVICE_CLASS_USB_CONTROLLER.Data4 - Data[1];
      if ( !v11 )
        break;
    }
    DevicePropertyData = 0;
LABEL_52:
    v9 = (_QWORD *)*v9;
    if ( v9 == a2 )
      goto LABEL_55;
  }
  v12 = (__int64 *)v10[1];
  v13 = 0;
  v14 = v10;
  while ( v12 )
  {
    v14 = v12;
    v12 = (__int64 *)v12[1];
  }
  if ( v14 == v10 )
    goto LABEL_52;
  do
  {
    v15 = v13;
    if ( *((_DWORD *)v14 + 35) == 1 )
    {
      *((_DWORD *)v14 + 74) &= ~0x20u;
      v16 = v14;
      if ( v14 == v10 )
      {
LABEL_26:
        *((_DWORD *)v14 + 74) |= 0x20u;
        v17 = v13 + 1;
        v18 = v13;
        v19 = -1;
        if ( v13 + 1 >= v13 )
          v19 = v13 + 1;
        v13 = v19;
        DevicePropertyData = v17 < v18 ? 0xC0000095 : 0;
        if ( v17 < v15 )
          goto LABEL_55;
      }
      else
      {
        while ( *((_DWORD *)v16 + 35) == 1 )
        {
          v16 = (__int64 *)v16[2];
          if ( v16 == v10 )
            goto LABEL_26;
        }
      }
    }
    v20 = (__int64 *)*v14;
    if ( *v14 )
    {
      do
      {
        v14 = v20;
        v20 = (__int64 *)v20[1];
      }
      while ( v20 );
    }
    else
    {
      v14 = (__int64 *)v14[2];
    }
  }
  while ( v14 != v10 );
  if ( !v13 )
    goto LABEL_52;
  v21 = -1;
  v22 = 8LL * v13;
  if ( v22 <= 0xFFFFFFFF )
    v21 = 8 * v13;
  DevicePropertyData = v22 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v22 > 0xFFFFFFFF )
    goto LABEL_55;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v21, 0x4D584650u);
  if ( PoolWithTag )
  {
    v24 = (__int64 *)v10[1];
    v25 = 0LL;
    v26 = v10;
    while ( v24 )
    {
      v26 = v24;
      v24 = (__int64 *)v24[1];
    }
    while ( v26 != v10 )
    {
      v27 = *((_DWORD *)v26 + 74);
      if ( (v27 & 0x20) != 0 )
      {
        *((_DWORD *)v26 + 74) = v27 & 0xFFFFFFDF;
        PoolWithTag[v25] = v26;
        v25 = (unsigned int)(v25 + 1);
      }
      v28 = (__int64 *)*v26;
      if ( *v26 )
      {
        do
        {
          v26 = v28;
          v28 = (__int64 *)v28[1];
        }
        while ( v28 );
      }
      else
      {
        v26 = (__int64 *)v26[2];
      }
    }
    v9[3] = PoolWithTag;
    *((_DWORD *)v9 + 8) = v13;
    goto LABEL_52;
  }
  DevicePropertyData = -1073741670;
LABEL_55:
  if ( DevicePropertyData < 0 )
    PopFxDestroyDripsBlockingDeviceList(a2);
  return (unsigned int)DevicePropertyData;
}
