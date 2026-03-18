/*
 * XREFs of DpiInitializeGlobalState @ 0x1C02D5654
 * Callers:
 *     DriverEntry @ 0x1C02D5158 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DpiKsrRestore @ 0x1C02A9834 (DpiKsrRestore.c)
 */

__int64 DpiInitializeGlobalState()
{
  char v0; // si
  char v1; // r14
  int v2; // eax
  int v3; // eax
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  NTSTATUS v14; // eax
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  PPHYSICAL_MEMORY_RANGE v19; // r8
  LARGE_INTEGER *p_NumberOfBytes; // rax
  int v21; // r9d
  LONGLONG QuadPart; // rcx
  PHYSICAL_ADDRESS *p_BaseAddress; // rdx
  __int64 v24; // rdx
  struct _KMUTANT *PoolWithTag; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rax
  void *v32; // rax
  struct _KMUTANT *v33; // rax
  NTSTATUS v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // [rsp+48h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  int Data; // [rsp+70h] [rbp-98h] BYREF
  int v49; // [rsp+74h] [rbp-94h] BYREF
  int v50; // [rsp+78h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-88h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v53; // [rsp+C8h] [rbp-40h] BYREF
  int v54; // [rsp+D0h] [rbp-38h]
  const wchar_t *v55; // [rsp+D8h] [rbp-30h]
  int *v56; // [rsp+E0h] [rbp-28h]
  int v57; // [rsp+E8h] [rbp-20h]
  int *v58; // [rsp+F0h] [rbp-18h]
  int v59; // [rsp+F8h] [rbp-10h]
  __int64 v60; // [rsp+100h] [rbp-8h]
  int v61; // [rsp+108h] [rbp+0h]
  _QWORD v62[5]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v63; // [rsp+138h] [rbp+30h]
  int v64; // [rsp+140h] [rbp+38h]
  _QWORD v65[6]; // [rsp+148h] [rbp+40h] BYREF
  int v66; // [rsp+178h] [rbp+70h]
  _BYTE v67[40]; // [rsp+180h] [rbp+78h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v0 = 0;
  v1 = 0;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"GraphicsDrivers\\DisableUSWC") >= 0 )
    byte_1C00A2750 = 1;
  g_bDMgrIsSetupRunning = DMgrIsSetupRunning();
  if ( g_bDMgrIsSetupRunning == 1 )
    byte_1C00A2751 = 1;
  if ( (unsigned __int8)ExIsSoftBoot() )
    DpiKsrRestore();
  dword_1C00A2B5C = 7236;
  v57 = 67108868;
  LODWORD(v62[2]) = 67108868;
  v55 = L"MiracastDefaultRtspPort";
  LODWORD(v65[2]) = 67108868;
  v56 = &dword_1C00A2B5C;
  v58 = &dword_1C00A2B5C;
  v44 = 500000LL;
  v62[0] = L"PlatformSupportMiracast";
  v62[1] = (char *)&v44 + 4;
  v62[3] = (char *)&v44 + 4;
  v65[0] = L"SuspendAdapterTimerPeriod";
  v65[1] = &v44;
  v65[3] = &v44;
  v53 = 0LL;
  v54 = 288;
  v59 = 4;
  v60 = 0LL;
  v61 = 288;
  LODWORD(v62[4]) = 4;
  v63 = 0LL;
  v64 = 288;
  LODWORD(v65[4]) = 4;
  v65[5] = 0LL;
  v66 = 0;
  memset(v67, 0, sizeof(v67));
  v2 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v53, 0LL, 0LL);
  if ( v2 < 0 || !dword_1C00A2B5C )
    dword_1C00A2B5C = 7236;
  if ( v2 < 0 || (byte_1C00A2756 = 1, !HIDWORD(v44)) )
    byte_1C00A2756 = 0;
  v3 = -(int)v44;
  LODWORD(v44) = 0;
  DueTime.QuadPart = v3;
  v55 = L"SupportMultipleIntegratedDisplays";
  v56 = (int *)&v44;
  v58 = (int *)&v44;
  v53 = 0LL;
  v54 = 288;
  v57 = 67108868;
  v59 = 4;
  v60 = 0LL;
  v61 = 0;
  memset(v62, 0, sizeof(v62));
  byte_1C00A2758 = (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v53, 0LL, 0LL) >= 0 && (_DWORD)v44 != 0;
  v53 = 0LL;
  v44 = -1LL;
  v57 = 67108868;
  v55 = L"EnableBasicDisplayFallback";
  v56 = (int *)&v44;
  v58 = (int *)&v44;
  LODWORD(v62[2]) = 67108868;
  v62[0] = L"DisableBasicDisplayFallback";
  v54 = 288;
  v62[1] = (char *)&v44 + 4;
  v62[3] = (char *)&v44 + 4;
  v59 = 4;
  v60 = 0LL;
  v61 = 288;
  LODWORD(v62[4]) = 4;
  v63 = 0LL;
  v64 = 0;
  memset(v65, 0, 0x28uLL);
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\BasicDisplay", &v53, 0LL, 0LL) >= 0
    && (_DWORD)v44 != 1
    && HIDWORD(v44) == 1 )
  {
    byte_1C00A2752 = 1;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Video\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwCreateKey(&KeyHandle, 0xCu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  v8 = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741771 )
    {
      v39 = WdLogNewEntry5_WdError(v6, v5, v7);
      *(_QWORD *)(v39 + 24) = v8;
      WdLogEvent5_WdError(v39);
    }
  }
  else
  {
    ZwClose(KeyHandle);
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
  v13 = v9;
  if ( v9 < 0 )
    goto LABEL_45;
  Data = 45060;
  RtlInitUnicodeString(&DestinationString, L"DxgKrnlVersion");
  v14 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
  v13 = v14;
  if ( v14 < 0 )
  {
    ZwClose(KeyHandle);
    goto LABEL_45;
  }
  v49 = 20499;
  RtlInitUnicodeString(&DestinationString, L"MinDxgKrnlVersion");
  v13 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v49, 4u);
  ZwClose(KeyHandle);
  if ( (int)v13 < 0 )
  {
LABEL_45:
    v40 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v40 + 24) = v13;
    WdLogEvent5_WdError(v40);
    goto LABEL_34;
  }
  DpGlobals = 0LL;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  v19 = PhysicalMemoryRanges;
  if ( PhysicalMemoryRanges )
  {
    p_NumberOfBytes = &PhysicalMemoryRanges->NumberOfBytes;
    v21 = 0;
    QuadPart = p_NumberOfBytes->QuadPart;
    if ( p_NumberOfBytes->QuadPart )
    {
      p_BaseAddress = &v19->BaseAddress;
      do
      {
        DpGlobals += QuadPart;
        v24 = p_NumberOfBytes->QuadPart + p_BaseAddress->QuadPart;
        if ( v24 > *(&DpGlobals + 1) )
          *(&DpGlobals + 1) = v24;
        p_BaseAddress = &v19[++v21].BaseAddress;
        p_NumberOfBytes = p_BaseAddress + 1;
        QuadPart = p_BaseAddress[1].QuadPart;
      }
      while ( QuadPart );
    }
    ExFreePoolWithTag(v19, 0);
    PoolWithTag = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
    Mutex = PoolWithTag;
    if ( PoolWithTag )
    {
      KeInitializeMutex(PoolWithTag, 0);
      qword_1C00A2780 = (__int64)&qword_1C00A2778;
      qword_1C00A2778 = (__int64)&qword_1C00A2778;
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\SERVICES\\BASICRENDER");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) < 0 )
      {
        v42 = WdLogNewEntry5_WdEvent(v30);
        *(_QWORD *)(v42 + 24) = 0LL;
        WdLogEvent5_WdEvent(v42);
        v32 = 0LL;
        KeyHandle = 0LL;
      }
      else
      {
        v31 = WdLogNewEntry5_WdEvent(v30);
        *(_QWORD *)(v31 + 24) = 0LL;
        WdLogEvent5_WdEvent(v31);
        ZwClose(KeyHandle);
        v32 = KeyHandle;
      }
      byte_1C00A2791 = 0;
      byte_1C00A2790 = v32 == 0LL;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      byte_1C00A2792 = 0;
      ExInitializeNPagedLookasideList(&Lookaside, 0LL, 0LL, 0x200u, 0x80uLL, 0x74727044u, 0);
      v0 = 1;
      v33 = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
      P = v33;
      if ( v33 )
      {
        KeInitializeMutex(v33, 0);
        dword_1C00A29B8 = 0;
        qword_1C00A29C8 = (__int64)&Entry;
        Entry = &Entry;
        KeInitializeTimerEx(&stru_1C00A2930, SynchronizationTimer);
        KeInitializeDpc(&stru_1C00A2970, (PKDEFERRED_ROUTINE)DpiPdoPollingDpc, 0LL);
        qword_1C00A29B0 = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
        if ( qword_1C00A29B0 )
        {
          ExInitializeNPagedLookasideList(&stru_1C00A2840, 0LL, 0LL, 0x200u, 0x30uLL, 0x74727044u, 0);
          byte_1C00A2AD8 = 0;
          KeInitializeMutex(&stru_1C00A2AE0, 0);
          LODWORD(v46) = 2;
          qword_1C00A2B20 = (__int64)&qword_1C00A2B18;
          qword_1C00A2B18 = (__int64)&qword_1C00A2B18;
          v50 = 4;
          if ( ((int (__fastcall *)(__int64, __int64, __int64 *, int *))HalDispatchTable->HalQuerySystemInformation)(
                 9LL,
                 4LL,
                 &v46,
                 &v50) < 0
            || (byte_1C00A2755 = 1, (_DWORD)v46 == 2) )
          {
            byte_1C00A2755 = 0;
          }
          dword_1C00A2A8C = -1;
          byte_1C00A2754 = 0;
          KeInitializeSpinLock(&SpinLock);
          qword_1C00A2B40 = (__int64)&qword_1C00A2B38;
          qword_1C00A2B38 = (__int64)&qword_1C00A2B38;
          dword_1C00A2B58 = 0;
          qword_1C00A2B50 = (__int64)&qword_1C00A2B48;
          qword_1C00A2B48 = (__int64)&qword_1C00A2B48;
          v34 = IoRegisterPlugPlayNotification(
                  EventCategoryDeviceInterfaceChange,
                  1u,
                  &GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL,
                  g_pDriverObject,
                  (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DpiMiracastInterfaceChange,
                  0LL,
                  &qword_1C00A2B28);
          v13 = v34;
          if ( v34 < 0 )
          {
            v43 = WdLogNewEntry5_WdError(v36, v35, v37);
            *(_QWORD *)(v43 + 24) = v13;
            WdLogEvent5_WdError(v43);
            qword_1C00A2B28 = 0LL;
          }
          else
          {
            IoWorkItem = 0LL;
            qword_1C00A2928 = (__int64)&qword_1C00A2920;
            qword_1C00A2920 = (__int64)&qword_1C00A2920;
            qword_1C00A2918 = 0LL;
            dword_1C00A28E0 = 1;
            qword_1C00A28E8 = 0LL;
            dword_1C00A28F0 = 0;
            KeInitializeEvent(&stru_1C00A28F8, SynchronizationEvent, 0);
            byte_1C00A2CB0 = 0;
            KeInitializeMutex(&Object, 0);
            byte_1C00A275B = 0;
            qword_1C00A2CF8 = (__int64)&qword_1C00A2CF0;
            qword_1C00A2CF0 = &qword_1C00A2CF0;
            qword_1C00A2C20 = 1LL;
            dword_1C00A2AD4 = 0;
          }
LABEL_34:
          v1 = v0;
          if ( (int)v13 >= 0 )
            goto LABEL_35;
          goto LABEL_49;
        }
      }
    }
    LODWORD(v13) = -1073741801;
    v41 = WdLogNewEntry5_WdLowResource(v27, v26, v28, v29);
    *(_QWORD *)(v41 + 24) = -1073741801LL;
  }
  else
  {
    LODWORD(v13) = -1073741670;
    v41 = WdLogNewEntry5_WdLowResource(v17, v16, 0LL, v18);
    *(_QWORD *)(v41 + 24) = -1073741670LL;
  }
  WdLogEvent5_WdLowResource(v41);
LABEL_49:
  if ( qword_1C00A29B0 )
    IoFreeWorkItem(qword_1C00A29B0);
  if ( v1 == 1 )
    ExDeleteNPagedLookasideList(&stru_1C00A2840);
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  if ( v0 == 1 )
    ExDeleteNPagedLookasideList(&Lookaside);
  if ( Mutex )
  {
    ExFreePoolWithTag(Mutex, 0);
    Mutex = 0LL;
  }
LABEL_35:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v13;
}
