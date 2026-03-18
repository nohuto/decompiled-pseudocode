/*
 * XREFs of DpiInitializeGlobalState @ 0x1C02A1078
 * Callers:
 *     DriverEntry @ 0x1C02A1904 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 DpiInitializeGlobalState()
{
  char v0; // si
  char v1; // r14
  int v2; // eax
  int v3; // eax
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  NTSTATUS v7; // eax
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rax
  __int64 v9; // rcx
  PPHYSICAL_MEMORY_RANGE v10; // r8
  LARGE_INTEGER *p_NumberOfBytes; // rax
  int v12; // r9d
  LONGLONG QuadPart; // rcx
  PHYSICAL_ADDRESS *p_BaseAddress; // rdx
  __int64 v15; // rdx
  struct _KMUTANT *PoolWithTag; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  void *v21; // rax
  struct _KMUTANT *v22; // rax
  NTSTATUS v23; // eax
  __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+48h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  int v32; // [rsp+58h] [rbp-B0h] BYREF
  int Data; // [rsp+5Ch] [rbp-ACh] BYREF
  int v34; // [rsp+60h] [rbp-A8h] BYREF
  int v35; // [rsp+64h] [rbp-A4h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v39; // [rsp+B8h] [rbp-50h] BYREF
  int v40; // [rsp+C0h] [rbp-48h]
  const wchar_t *v41; // [rsp+C8h] [rbp-40h]
  int *v42; // [rsp+D0h] [rbp-38h]
  int v43; // [rsp+D8h] [rbp-30h]
  int *v44; // [rsp+E0h] [rbp-28h]
  int v45; // [rsp+E8h] [rbp-20h]
  __int64 v46; // [rsp+F0h] [rbp-18h]
  int v47; // [rsp+F8h] [rbp-10h]
  _QWORD v48[5]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v49; // [rsp+128h] [rbp+20h]
  int v50; // [rsp+130h] [rbp+28h]
  _QWORD v51[6]; // [rsp+138h] [rbp+30h] BYREF
  int v52; // [rsp+168h] [rbp+60h]
  _BYTE v53[40]; // [rsp+170h] [rbp+68h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v0 = 0;
  v1 = 0;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"GraphicsDrivers\\DisableUSWC") >= 0 )
    byte_1C008E750 = 1;
  g_bDMgrIsSetupRunning = DMgrIsSetupRunning();
  if ( g_bDMgrIsSetupRunning == 1 )
    byte_1C008E751 = 1;
  dword_1C008EB5C = 7236;
  v43 = 67108868;
  LODWORD(v48[2]) = 67108868;
  v41 = L"MiracastDefaultRtspPort";
  LODWORD(v51[2]) = 67108868;
  v42 = &dword_1C008EB5C;
  v44 = &dword_1C008EB5C;
  v30 = 500000LL;
  v48[0] = L"PlatformSupportMiracast";
  v48[1] = (char *)&v30 + 4;
  v48[3] = (char *)&v30 + 4;
  v51[0] = L"SuspendAdapterTimerPeriod";
  v51[1] = &v30;
  v51[3] = &v30;
  v39 = 0LL;
  v40 = 288;
  v45 = 4;
  v46 = 0LL;
  v47 = 288;
  LODWORD(v48[4]) = 4;
  v49 = 0LL;
  v50 = 288;
  LODWORD(v51[4]) = 4;
  v51[5] = 0LL;
  v52 = 0;
  memset(v53, 0, sizeof(v53));
  v2 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v39, 0LL, 0LL);
  if ( v2 < 0 || !dword_1C008EB5C )
    dword_1C008EB5C = 7236;
  if ( v2 < 0 || (byte_1C008E756 = 1, !HIDWORD(v30)) )
    byte_1C008E756 = 0;
  v3 = -(int)v30;
  LODWORD(v30) = 0;
  DueTime.QuadPart = v3;
  v41 = L"SupportMultipleIntegratedDisplays";
  v42 = (int *)&v30;
  v44 = (int *)&v30;
  v39 = 0LL;
  v40 = 288;
  v43 = 67108868;
  v45 = 4;
  v46 = 0LL;
  v47 = 0;
  memset(v48, 0, sizeof(v48));
  byte_1C008E758 = (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v39, 0LL, 0LL) >= 0 && (_DWORD)v30 != 0;
  v39 = 0LL;
  v30 = -1LL;
  v43 = 67108868;
  v41 = L"EnableBasicDisplayFallback";
  v42 = (int *)&v30;
  v44 = (int *)&v30;
  LODWORD(v48[2]) = 67108868;
  v48[0] = L"DisableBasicDisplayFallback";
  v40 = 288;
  v48[1] = (char *)&v30 + 4;
  v48[3] = (char *)&v30 + 4;
  v45 = 4;
  v46 = 0LL;
  v47 = 288;
  LODWORD(v48[4]) = 4;
  v49 = 0LL;
  v50 = 0;
  memset(v51, 0, 0x28uLL);
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\BasicDisplay", &v39, 0LL, 0LL) >= 0
    && (_DWORD)v30 != 1
    && HIDWORD(v30) == 1 )
  {
    byte_1C008E752 = 1;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
  v6 = v4;
  if ( v4 < 0 )
    goto LABEL_39;
  Data = 40971;
  RtlInitUnicodeString(&DestinationString, L"DxgKrnlVersion");
  v7 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
  v6 = v7;
  if ( v7 < 0 )
  {
    ZwClose(KeyHandle);
    goto LABEL_39;
  }
  v34 = 20499;
  RtlInitUnicodeString(&DestinationString, L"MinDxgKrnlVersion");
  v6 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v34, 4u);
  ZwClose(KeyHandle);
  if ( (int)v6 < 0 )
  {
LABEL_39:
    v26 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v26 + 24) = v6;
    WdLogEvent5_WdError(v26);
    goto LABEL_30;
  }
  DpGlobals = 0LL;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  v10 = PhysicalMemoryRanges;
  if ( PhysicalMemoryRanges )
  {
    p_NumberOfBytes = &PhysicalMemoryRanges->NumberOfBytes;
    v12 = 0;
    QuadPart = p_NumberOfBytes->QuadPart;
    if ( p_NumberOfBytes->QuadPart )
    {
      p_BaseAddress = &v10->BaseAddress;
      do
      {
        DpGlobals += QuadPart;
        v15 = p_NumberOfBytes->QuadPart + p_BaseAddress->QuadPart;
        if ( v15 > *(&DpGlobals + 1) )
          *(&DpGlobals + 1) = v15;
        p_BaseAddress = &v10[++v12].BaseAddress;
        p_NumberOfBytes = p_BaseAddress + 1;
        QuadPart = p_BaseAddress[1].QuadPart;
      }
      while ( QuadPart );
    }
    ExFreePoolWithTag(v10, 0);
    PoolWithTag = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
    Mutex = PoolWithTag;
    if ( PoolWithTag )
    {
      KeInitializeMutex(PoolWithTag, 0);
      qword_1C008E780 = (__int64)&qword_1C008E778;
      qword_1C008E778 = (__int64)&qword_1C008E778;
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\SERVICES\\BASICRENDER");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) < 0 )
      {
        v28 = WdLogNewEntry5_WdEvent(v19, v18);
        *(_QWORD *)(v28 + 24) = 0LL;
        WdLogEvent5_WdEvent(v28);
        v21 = 0LL;
        KeyHandle = 0LL;
      }
      else
      {
        v20 = WdLogNewEntry5_WdEvent(v19, v18);
        *(_QWORD *)(v20 + 24) = 0LL;
        WdLogEvent5_WdEvent(v20);
        ZwClose(KeyHandle);
        v21 = KeyHandle;
      }
      byte_1C008E791 = 0;
      byte_1C008E790 = v21 == 0LL;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      byte_1C008E792 = 0;
      ExInitializeNPagedLookasideList(&Lookaside, 0LL, 0LL, 0x200u, 0x80uLL, 0x74727044u, 0);
      v0 = 1;
      v22 = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
      P = v22;
      if ( v22 )
      {
        KeInitializeMutex(v22, 0);
        dword_1C008E9B8 = 0;
        qword_1C008E9C8 = (__int64)&Entry;
        Entry = &Entry;
        KeInitializeTimerEx(&stru_1C008E930, SynchronizationTimer);
        KeInitializeDpc(&stru_1C008E970, (PKDEFERRED_ROUTINE)DpiPdoPollingDpc, 0LL);
        qword_1C008E9B0 = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
        if ( qword_1C008E9B0 )
        {
          ExInitializeNPagedLookasideList(&stru_1C008E840, 0LL, 0LL, 0x200u, 0x30uLL, 0x74727044u, 0);
          byte_1C008EAD8 = 0;
          KeInitializeMutex(&stru_1C008EAE0, 0);
          v32 = 2;
          qword_1C008EB20 = (__int64)&qword_1C008EB18;
          qword_1C008EB18 = (__int64)&qword_1C008EB18;
          v35 = 4;
          if ( ((int (__fastcall *)(__int64, __int64, int *, int *))HalDispatchTable->HalQuerySystemInformation)(
                 9LL,
                 4LL,
                 &v32,
                 &v35) < 0
            || (byte_1C008E755 = 1, v32 == 2) )
          {
            byte_1C008E755 = 0;
          }
          dword_1C008EA8C = -1;
          byte_1C008E754 = 0;
          KeInitializeSpinLock(&qword_1C008EB30);
          qword_1C008EB40 = (__int64)&qword_1C008EB38;
          qword_1C008EB38 = (__int64)&qword_1C008EB38;
          dword_1C008EB58 = 0;
          qword_1C008EB50 = (__int64)&qword_1C008EB48;
          qword_1C008EB48 = (__int64)&qword_1C008EB48;
          v23 = IoRegisterPlugPlayNotification(
                  EventCategoryDeviceInterfaceChange,
                  1u,
                  &GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL,
                  g_pDriverObject,
                  (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DpiMiracastInterfaceChange,
                  0LL,
                  &qword_1C008EB28);
          v6 = v23;
          if ( v23 < 0 )
          {
            v29 = WdLogNewEntry5_WdError(v24);
            *(_QWORD *)(v29 + 24) = v6;
            WdLogEvent5_WdError(v29);
            qword_1C008EB28 = 0LL;
          }
          else
          {
            IoWorkItem = 0LL;
            qword_1C008E928 = (__int64)&qword_1C008E920;
            qword_1C008E920 = (__int64)&qword_1C008E920;
            qword_1C008E918 = 0LL;
            dword_1C008E8E0 = 1;
            qword_1C008E8E8 = 0LL;
            dword_1C008E8F0 = 0;
            KeInitializeEvent(&stru_1C008E8F8, SynchronizationEvent, 0);
            byte_1C008ECA8 = 0;
            KeInitializeMutex(&Object, 0);
            byte_1C008E75B = 0;
            qword_1C008ECF0 = (__int64)&qword_1C008ECE8;
            qword_1C008ECE8 = &qword_1C008ECE8;
            qword_1C008EC20 = 1LL;
            dword_1C008EAD4 = 0;
          }
LABEL_30:
          v1 = v0;
          if ( (int)v6 >= 0 )
            goto LABEL_31;
          goto LABEL_43;
        }
      }
    }
    LODWORD(v6) = -1073741801;
    v27 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v27 + 24) = -1073741801LL;
  }
  else
  {
    LODWORD(v6) = -1073741670;
    v27 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v27 + 24) = -1073741670LL;
  }
  WdLogEvent5_WdLowResource(v27);
LABEL_43:
  if ( qword_1C008E9B0 )
    IoFreeWorkItem(qword_1C008E9B0);
  if ( v1 == 1 )
    ExDeleteNPagedLookasideList(&stru_1C008E840);
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
LABEL_31:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v6;
}
