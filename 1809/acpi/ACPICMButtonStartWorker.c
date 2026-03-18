/*
 * XREFs of ACPICMButtonStartWorker @ 0x1C000CAD0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00028B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     RtlStringCchPrintfA @ 0x1C000C604 (RtlStringCchPrintfA.c)
 *     ACPIInternalRegisterPowerCallBack @ 0x1C000C8E0 (ACPIInternalRegisterPowerCallBack.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C000CF7C (ACPIInternalSetDeviceInterface.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C000DCE0 (ACPIRegisterForDeviceNotifications.c)
 *     ACPISetDeviceWorker @ 0x1C0012F54 (ACPISetDeviceWorker.c)
 *     WPP_RECORDER_SF_qss @ 0x1C001D35C (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     ACPICMLidPowerStateCallBack @ 0x1C004D130 (ACPICMLidPowerStateCallBack.c)
 */

__int64 __fastcall ACPICMButtonStartWorker(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // r15
  char v3; // si
  _DWORD *DeviceExtension; // rax
  IRP *v5; // r13
  const char *v6; // r14
  _DWORD *v7; // rdi
  int Status; // ebx
  unsigned __int8 MinorFunction; // r12
  KIRQL v10; // al
  POWER_STATE v11; // ebx
  GUID *v12; // rbx
  const char *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  _BYTE *PoolWithTag; // rax
  __int64 v18; // rcx
  void *v19; // rdx
  void *v20; // rax
  int v21; // eax
  char v22; // r8
  NTSTATUS v23; // eax
  char v24; // r8
  NTSTATUS v25; // eax
  __int64 v26; // rcx
  void *v27; // r8
  void *v28; // rdx
  NTSTATUS v29; // eax
  __int64 v30; // rcx
  void *v31; // r8
  void *v32; // rdx
  __int64 v33; // rax
  void *v34; // rdx
  void *v35; // rcx
  __int64 v36; // rax
  void *v37; // rdx
  void *v38; // rcx
  __int64 v39; // rax
  void *v40; // rdx
  void *v41; // rcx
  __int64 v42; // [rsp+30h] [rbp-48h]
  __int64 v43; // [rsp+38h] [rbp-40h]
  __int64 v44; // [rsp+38h] [rbp-40h]
  __int64 v45; // [rsp+38h] [rbp-40h]
  __int64 v46; // [rsp+40h] [rbp-38h]
  __int64 v47; // [rsp+40h] [rbp-38h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-18h] BYREF
  signed __int32 v49; // [rsp+C0h] [rbp+48h] BYREF
  ULONG DataSize; // [rsp+C8h] [rbp+50h] BYREF
  void *DeviceRegKey; // [rsp+D0h] [rbp+58h] BYREF
  PVOID Data; // [rsp+D8h] [rbp+60h] BYREF

  v1 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v3 = 0;
  v49 = 0;
  DeviceExtension = (_DWORD *)ACPIInternalGetDeviceExtension((ULONG_PTR)v1);
  v5 = *(IRP **)(a1 + 40);
  v6 = (const char *)&unk_1C006E28A;
  v7 = DeviceExtension;
  Status = v5->IoStatus.Status;
  MinorFunction = v5->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( Status >= 0 )
  {
    if ( (DeviceExtension[50] & 4) != 0 )
    {
      ACPIInternalRegisterPowerCallBack(DeviceExtension, ACPICMLidPowerStateCallBack);
      ACPICMLidPowerStateCallBack(v7, 0LL, 0LL);
      ACPISetDeviceWorker(v7, 1LL);
    }
    else
    {
      v10 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      v11.SystemState = v7[122];
      KeReleaseSpinLock(&AcpiPowerLock, v10);
      PoRequestPowerIrp(v1, 0, v11, ACPIInternalWaitWakeLoop, 0LL, 0LL);
    }
    if ( (v7[2] & 0x2000LL) != 0 )
    {
      v12 = &GUID_DEVICE_APPLICATIONLAUNCH_BUTTON;
      if ( !*((_QWORD *)v7 + 71) )
      {
        v49 = _InterlockedExchangeAdd(&AcpipExperienceButtonInstanceID, 1u);
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 9uLL, 0x53706341u);
        *((_QWORD *)v7 + 71) = PoolWithTag;
        if ( PoolWithTag )
        {
          *(_QWORD *)PoolWithTag = 0LL;
          PoolWithTag[8] = 0;
          RtlStringCchPrintfA(*((NTSTRSAFE_PSTR *)v7 + 71), 9uLL, "%d", v49);
        }
        else
        {
          v18 = *((_QWORD *)v7 + 1);
          v19 = &unk_1C006E28A;
          v20 = &unk_1C006E28A;
          if ( (v18 & 0x200000000000LL) != 0 )
          {
            v19 = (void *)*((_QWORD *)v7 + 70);
            if ( (v18 & 0x400000000000LL) != 0 )
              v20 = 0LL;
          }
          v42 = (__int64)v19;
          LOBYTE(v19) = 2;
          WPP_RECORDER_SF_qss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v19,
            5,
            14,
            (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
            (char)v7,
            v42,
            (__int64)v20);
        }
      }
      v21 = ACPIGet((__int64 *)v7, 1145653319, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&Data, (__int64)&DataSize);
      v22 = v21;
      if ( v21 < 0 )
      {
        v36 = *((_QWORD *)v7 + 1);
        v37 = &unk_1C006E28A;
        v38 = &unk_1C006E28A;
        if ( (v36 & 0x200000000000LL) != 0 )
        {
          v37 = (void *)*((_QWORD *)v7 + 70);
          if ( (v36 & 0x400000000000LL) != 0 )
            v38 = (void *)*((_QWORD *)v7 + 71);
        }
        v44 = (__int64)v37;
        LOBYTE(v37) = 4;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v37,
          5,
          18,
          (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
          v22,
          (char)v7,
          v44,
          (__int64)v38);
      }
      else
      {
        v23 = IoOpenDeviceRegistryKey(v1, 1u, 0x20000u, &DeviceRegKey);
        v24 = v23;
        if ( v23 < 0 )
        {
          v33 = *((_QWORD *)v7 + 1);
          v34 = &unk_1C006E28A;
          v35 = &unk_1C006E28A;
          if ( (v33 & 0x200000000000LL) != 0 )
          {
            v34 = (void *)*((_QWORD *)v7 + 70);
            if ( (v33 & 0x400000000000LL) != 0 )
              v35 = (void *)*((_QWORD *)v7 + 71);
          }
          v43 = (__int64)v34;
          LOBYTE(v34) = 2;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v34,
            5,
            17,
            (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
            v24,
            (char)v7,
            v43,
            (__int64)v35);
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, L"UserHIDBlock");
          v25 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 3u, Data, DataSize);
          if ( v25 < 0 )
          {
            v26 = *((_QWORD *)v7 + 1);
            v27 = &unk_1C006E28A;
            v28 = &unk_1C006E28A;
            if ( (v26 & 0x200000000000LL) != 0 )
            {
              v27 = (void *)*((_QWORD *)v7 + 70);
              if ( (v26 & 0x400000000000LL) != 0 )
                v28 = (void *)*((_QWORD *)v7 + 71);
            }
            v46 = (__int64)v28;
            LOBYTE(v28) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v28,
              5,
              15,
              (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
              v25,
              (char)v7,
              (__int64)v27,
              v46);
          }
          RtlInitUnicodeString(&DestinationString, L"ButtonInstanceID");
          v49 = _strtoui64(*((const char **)v7 + 71), 0LL, 10);
          v29 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 4u, &v49, 4u);
          if ( v29 < 0 )
          {
            v30 = *((_QWORD *)v7 + 1);
            v31 = &unk_1C006E28A;
            v32 = &unk_1C006E28A;
            if ( (v30 & 0x200000000000LL) != 0 )
            {
              v31 = (void *)*((_QWORD *)v7 + 70);
              if ( (v30 & 0x400000000000LL) != 0 )
                v32 = (void *)*((_QWORD *)v7 + 71);
            }
            v47 = (__int64)v32;
            LOBYTE(v32) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v32,
              5,
              16,
              (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
              v29,
              (char)v7,
              (__int64)v31,
              v47);
          }
          ZwClose(DeviceRegKey);
        }
      }
    }
    else
    {
      v12 = &GUID_DEVICE_SYS_BUTTON;
      ACPIRegisterForDeviceNotifications(v1, ACPICMButtonNotifyByDeviceObject, v1);
    }
    Status = ACPIInternalSetDeviceInterface(v1, v12);
    if ( Status < 0 )
    {
      v39 = *((_QWORD *)v7 + 1);
      v40 = &unk_1C006E28A;
      v41 = &unk_1C006E28A;
      if ( (v39 & 0x200000000000LL) != 0 )
      {
        v40 = (void *)*((_QWORD *)v7 + 70);
        if ( (v39 & 0x400000000000LL) != 0 )
          v41 = (void *)*((_QWORD *)v7 + 71);
      }
      v45 = (__int64)v40;
      LOBYTE(v40) = 2;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v40,
        5,
        19,
        (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
        Status,
        (char)v7,
        v45,
        (__int64)v41);
    }
  }
  v5->IoStatus.Status = Status;
  v5->IoStatus.Information = 0LL;
  IofCompleteRequest(v5, 0);
  v13 = (const char *)&unk_1C006E28A;
  if ( v7 )
  {
    v14 = *((_QWORD *)v7 + 1);
    v3 = (char)v7;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v6 = (const char *)*((_QWORD *)v7 + 70);
      if ( (v14 & 0x400000000000LL) != 0 )
        v13 = (const char *)*((_QWORD *)v7 + 71);
    }
  }
  v15 = MinorFunction;
  if ( MinorFunction >= 0x1Au )
    v15 = 26LL;
  return WPP_RECORDER_SF_qsLqss(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           4u,
           5u,
           0x14u,
           (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
           (char)v5,
           ACPIDispatchPnpTableNames[v15],
           Status,
           v3,
           v6,
           v13);
}
