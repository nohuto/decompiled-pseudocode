/*
 * XREFs of IopLoadDriver @ 0x140680BF4
 * Callers:
 *     IopLoadUnloadDriver @ 0x1406C79F0 (IopLoadUnloadDriver.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14070A3F4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopInitializeSystemDrivers @ 0x1409CBCC4 (IopInitializeSystemDrivers.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400DD8DC (IopVerifierExAllocatePool_0.c)
 *     HeadlessKernelAddLogEntry @ 0x1400F52E8 (HeadlessKernelAddLogEntry.c)
 *     PnpDiagnosticTraceObject @ 0x1400F5308 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1400F5F44 (PnpDiagnosticTraceObjectWithStatus.c)
 *     DbgPrint @ 0x1401263A0 (DbgPrint.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x1401371FC (PnpDiagnosticTraceDriverFullInfo.c)
 *     IopResurrectDriver @ 0x140177FC4 (IopResurrectDriver.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObOpenObjectByName @ 0x1405BA290 (ObOpenObjectByName.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     NtQueryKey @ 0x140640BB0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140641360 (NtQueryValueKey.c)
 *     NtQueryObject @ 0x140661C70 (NtQueryObject.c)
 *     PnpPrepareDriverLoading @ 0x1406801D8 (PnpPrepareDriverLoading.c)
 *     IopGetDriverNameFromKeyNode @ 0x140681500 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     IopBuildFullDriverPath @ 0x1406817DC (IopBuildFullDriverPath.c)
 *     KseShimDriverIoCallbacks @ 0x140681ABC (KseShimDriverIoCallbacks.c)
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     ObMakeTemporaryObject @ 0x1406C8670 (ObMakeTemporaryObject.c)
 *     MiFreeDriverInitialization @ 0x1406C8A2C (MiFreeDriverInitialization.c)
 *     IopReadyDeviceObjects @ 0x1406CFAF4 (IopReadyDeviceObjects.c)
 *     IopBootLog @ 0x1406D04D4 (IopBootLog.c)
 *     MmUnloadSystemImage @ 0x140710150 (MmUnloadSystemImage.c)
 *     PnpDriverLoadingFailed @ 0x1407642A0 (PnpDriverLoadingFailed.c)
 *     IopCheckIfNotNativeDriver @ 0x14081AA10 (IopCheckIfNotNativeDriver.c)
 *     IopLogBlockedDriverEvent @ 0x14081B5F8 (IopLogBlockedDriverEvent.c)
 *     IopSafebootDriverLoad @ 0x14081B9D0 (IopSafebootDriverLoad.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x140922338 (VfXdvDriverCaptureIoCallbacks.c)
 */

__int64 __fastcall IopLoadDriver(HANDLE KeyHandle, char a2, unsigned __int8 a3, int *a4)
{
  ULONG_PTR v4; // rbx
  unsigned __int16 *v7; // r15
  _WORD *v8; // r14
  NTSTATUS v9; // eax
  int DriverNameFromKeyNode; // edi
  __int64 v11; // rdx
  PVOID Pool_0; // rax
  int SystemImage; // eax
  PIMAGE_NT_HEADERS v14; // rax
  _QWORD *v15; // rsi
  char *v16; // rdi
  PVOID v17; // rcx
  PIMAGE_NT_HEADERS v18; // rdx
  char *v19; // rax
  HANDLE v20; // rdi
  NTSTATUS v21; // eax
  PVOID v22; // rsi
  PVOID v23; // rax
  PVOID v24; // r15
  unsigned __int16 v25; // di
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned int i; // eax
  __int64 v30; // rdx
  int RegistryValue; // eax
  ULONG_PTR v32; // r9
  PULONG ResultLength; // [rsp+20h] [rbp-E0h]
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Length; // [rsp+68h] [rbp-98h] BYREF
  int v37; // [rsp+70h] [rbp-90h] BYREF
  PVOID v38; // [rsp+78h] [rbp-88h]
  char v39[4]; // [rsp+80h] [rbp-80h]
  UNICODE_STRING v40; // [rsp+88h] [rbp-78h] BYREF
  int v41; // [rsp+98h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-60h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h]
  ULONG ReturnLength; // [rsp+B0h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  PVOID v48; // [rsp+D8h] [rbp-28h] BYREF
  PVOID Object; // [rsp+E0h] [rbp-20h] BYREF
  ULONG v50; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v51; // [rsp+F0h] [rbp-10h] BYREF
  int *v52; // [rsp+F8h] [rbp-8h]
  PVOID v53; // [rsp+100h] [rbp+0h]
  int v54; // [rsp+108h] [rbp+8h] BYREF
  __int64 v55; // [rsp+110h] [rbp+10h]
  UNICODE_STRING *v56; // [rsp+118h] [rbp+18h]
  int v57; // [rsp+120h] [rbp+20h]
  __int128 v58; // [rsp+128h] [rbp+28h]
  _WORD KeyValueInformation[40]; // [rsp+140h] [rbp+40h] BYREF

  v4 = 0LL;
  v52 = a4;
  *a4 = 0;
  Length = 0;
  v37 = 0;
  v38 = 0LL;
  *(_DWORD *)v39 = 0;
  v7 = 0LL;
  v40.Buffer = 0LL;
  v8 = 0LL;
  *(_DWORD *)&v40.Length = 0;
  Destination.Buffer = 0LL;
  *(_DWORD *)&Destination.Length = 0;
  v41 = 0;
  v9 = NtQueryKey(KeyHandle, KeyBasicInformation, 0LL, 0, &Length);
  if ( v9 != -1073741789 && v9 != -2147483643 )
  {
    DriverNameFromKeyNode = -1073741472;
    goto LABEL_36;
  }
  if ( Length + 8 < Length )
  {
    DriverNameFromKeyNode = -1073741675;
    goto LABEL_36;
  }
  P = IopVerifierExAllocatePool_0(NonPagedPoolNx, Length + 8);
  v7 = (unsigned __int16 *)P;
  if ( !P )
  {
    DriverNameFromKeyNode = -1073741670;
    goto LABEL_36;
  }
  DriverNameFromKeyNode = NtQueryKey(KeyHandle, KeyBasicInformation, P, Length, &Length);
  if ( DriverNameFromKeyNode >= 0 )
  {
    v11 = v7[6];
    Destination.Length = v11;
    Destination.MaximumLength = v11 + 8;
    Destination.Buffer = v7 + 8;
    Pool_0 = IopVerifierExAllocatePool_0(PagedPool, v11 + 2);
    v38 = Pool_0;
    v8 = Pool_0;
    if ( Pool_0 )
    {
      LOWORD(v37) = Destination.Length;
      HIWORD(v37) = Destination.Length + 2;
      memmove(Pool_0, Destination.Buffer, Destination.Length);
      v8[(unsigned __int64)Destination.Length >> 1] = 0;
      RtlAppendUnicodeToString(&Destination, L".SYS");
      HeadlessKernelAddLogEntry();
      PnpDiagnosticTraceObject(&KMPnPEvt_DriverLoad_Start, (unsigned __int16 *)&v37);
      if ( InitSafeBootMode )
      {
        if ( a2 )
        {
          RtlInitUnicodeString(&DestinationString, L"Group");
          memset(KeyValueInformation, 0, 0x4CuLL);
          if ( NtQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x4Cu,
                 &v50) < 0
            || (DestinationString.Length = KeyValueInformation[4] - 2,
                DestinationString.MaximumLength = KeyValueInformation[4] - 2,
                DestinationString.Buffer = &KeyValueInformation[6],
                !(unsigned __int8)IopSafebootDriverLoad(&DestinationString)) )
          {
            if ( !(unsigned __int8)IopSafebootDriverLoad(&Destination) )
            {
              IopBootLog(&Destination);
              DbgPrint("SAFEBOOT: skipping device = %wZ(%wZ)\n", &Destination, &DestinationString);
              HeadlessKernelAddLogEntry();
              ObCloseHandle(KeyHandle, 0);
              return 3221226335LL;
            }
          }
        }
      }
      DriverNameFromKeyNode = IopBuildFullDriverPath(&v37, KeyHandle, &Destination);
      if ( DriverNameFromKeyNode >= 0 )
      {
        DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &v40);
        if ( DriverNameFromKeyNode >= 0 )
        {
          v54 = 48;
          v55 = 0LL;
          v56 = &v40;
          v57 = IopCaseInsensitive != 0 ? 592 : 528;
          v58 = 0LL;
          ExAcquireResourceExclusiveLite(&IopDriverLoadResource, 1u);
          SystemImage = MmLoadSystemImageEx(
                          (unsigned int)&Destination,
                          0,
                          0,
                          0,
                          (__int64)&BugCheckParameter2,
                          (__int64)&BaseAddress);
          DriverNameFromKeyNode = SystemImage;
          if ( SystemImage < 0 )
          {
            if ( SystemImage == -1073741554 )
              goto LABEL_54;
            if ( (unsigned __int8)IopCheckIfNotNativeDriver((unsigned int)SystemImage, &Destination) == 1 )
            {
              DriverNameFromKeyNode = (a3 != 0) - 1073740949;
              IopLogBlockedDriverEvent(&Destination, v30, (unsigned int)DriverNameFromKeyNode);
            }
            if ( DriverNameFromKeyNode == -1073741554 )
            {
LABEL_54:
              DriverNameFromKeyNode = ObOpenObjectByName(
                                        (__int64)&v54,
                                        (__int64)IoDriverObjectType,
                                        0,
                                        0LL,
                                        0,
                                        0LL,
                                        (__int64)&Handle);
              if ( DriverNameFromKeyNode < 0 )
              {
                ExReleaseResourceLite(&IopDriverLoadResource);
                IopBootLog(&Destination);
                if ( DriverNameFromKeyNode == -1073741772 )
                  DriverNameFromKeyNode = -1073740914;
                goto LABEL_36;
              }
              DriverNameFromKeyNode = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v48, 0LL);
              ZwClose(Handle);
              if ( DriverNameFromKeyNode >= 0 )
              {
                DriverNameFromKeyNode = IopResurrectDriver((__int64)v48);
                ObfDereferenceObject(v48);
              }
            }
            ExReleaseResourceLite(&IopDriverLoadResource);
            IopBootLog(&Destination);
          }
          else
          {
            v14 = RtlImageNtHeader(BaseAddress);
            *(_WORD *)v39 = v14->OptionalHeader.MinorImageVersion;
            *(_WORD *)&v39[2] = v14->OptionalHeader.MajorImageVersion;
            DriverNameFromKeyNode = PnpPrepareDriverLoading((int)&v37, KeyHandle, BaseAddress, a3, &v41);
            if ( DriverNameFromKeyNode < 0
              || (DriverNameFromKeyNode = ObCreateObjectEx(
                                            KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10],
                                            IoDriverObjectType,
                                            (int)&v54,
                                            0,
                                            (__int64)ResultLength,
                                            416,
                                            0,
                                            0,
                                            &v51,
                                            0LL),
                  DriverNameFromKeyNode < 0) )
            {
              MmUnloadSystemImage(BugCheckParameter2);
              ExReleaseResourceLite(&IopDriverLoadResource);
            }
            else
            {
              v15 = v51;
              memset(v51, 0, 0x1A0uLL);
              v15[6] = v15 + 42;
              v15[42] = v15;
              ReturnLength = 28;
              memset64(v15 + 14, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
              v16 = (char *)BaseAddress;
              v17 = BaseAddress;
              *(_DWORD *)v15 = 22020100;
              v18 = RtlImageNtHeader(v17);
              *(_WORD *)v39 = v18->OptionalHeader.MinorImageVersion;
              *(_WORD *)&v39[2] = v18->OptionalHeader.MajorImageVersion;
              v19 = &v16[v18->OptionalHeader.AddressOfEntryPoint];
              if ( (v18->OptionalHeader.DllCharacteristics & 0x2000) == 0 )
                *((_DWORD *)v15 + 4) |= 2u;
              v15[11] = v19;
              v15[5] = BugCheckParameter2;
              v15[3] = v16;
              *((_DWORD *)v15 + 8) = v18->OptionalHeader.SizeOfImage;
              DriverNameFromKeyNode = ObInsertObjectEx(v15, 0LL, 1LL, 0, 0, 0LL, (unsigned __int64 *)&Handle);
              ExReleaseResourceLite(&IopDriverLoadResource);
              if ( DriverNameFromKeyNode >= 0 )
              {
                v20 = Handle;
                v21 = ObReferenceObjectByHandle(
                        Handle,
                        0,
                        IoDriverObjectType,
                        KeGetCurrentThread()->PreviousMode,
                        &Object,
                        0LL);
                if ( v21 )
                  KeBugCheckEx(0x11Fu, (ULONG_PTR)v20, v21, (ULONG_PTR)Object, 0LL);
                ZwClose(v20);
                v22 = Object;
                *((_QWORD *)Object + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
                v23 = IopVerifierExAllocatePool_0(NonPagedPoolNx, v40.MaximumLength);
                *((_QWORD *)v22 + 8) = v23;
                if ( v23 )
                {
                  *((_WORD *)v22 + 29) = v40.MaximumLength;
                  *((_WORD *)v22 + 28) = v40.Length;
                  memmove(*((void **)v22 + 8), v40.Buffer, v40.MaximumLength);
                }
                v24 = IopVerifierExAllocatePool_0(NonPagedPoolNx, 0x1000uLL);
                if ( v24 )
                {
                  DriverNameFromKeyNode = NtQueryObject(KeyHandle, ObjectNameInformation, v24, 0x1000u, &ReturnLength);
                  if ( DriverNameFromKeyNode < 0 )
                  {
                    ObMakeTemporaryObject(v22);
                    ObfDereferenceObject(v22);
                    ExFreePoolWithTag(v24, 0);
                    v8 = v38;
                  }
                  else
                  {
                    v8 = v38;
                    if ( v38 )
                    {
                      v25 = HIWORD(v37);
                      *(_QWORD *)(*((_QWORD *)v22 + 6) + 32LL) = IopVerifierExAllocatePool_0(
                                                                   NonPagedPoolNx,
                                                                   HIWORD(v37));
                      v26 = *((_QWORD *)v22 + 6);
                      if ( *(_QWORD *)(v26 + 32) )
                      {
                        *(_WORD *)(v26 + 26) = v25;
                        *(_WORD *)(*((_QWORD *)v22 + 6) + 24LL) = v37;
                        memmove(*(void **)(*((_QWORD *)v22 + 6) + 32LL), v8, v25);
                      }
                    }
                    if ( (v41 & 1) != 0 )
                      *((_DWORD *)v22 + 4) |= 0x100u;
                    PnpDiagnosticTraceObject(&KMPnPEvt_DriverInit_Start, (unsigned __int16 *)v24);
                    DriverNameFromKeyNode = (*((__int64 (__fastcall **)(PVOID, PVOID))v22 + 11))(v22, v24);
                    if ( DriverNameFromKeyNode >= 0 )
                    {
                      VfXdvDriverCaptureIoCallbacks(v22);
                      KseShimDriverIoCallbacks(v22, v27, &Destination);
                    }
                    PnpDiagnosticTraceObjectWithStatus(
                      &KMPnPEvt_DriverInit_Stop,
                      (unsigned __int16 *)v24,
                      DriverNameFromKeyNode);
                    *v52 = DriverNameFromKeyNode;
                    if ( DriverNameFromKeyNode < 0 )
                      DriverNameFromKeyNode = -1073740955;
                    for ( i = 0; i <= 0x1B; ++i )
                    {
                      if ( !*((_QWORD *)v22 + i + 14) )
                        *((_QWORD *)v22 + i + 14) = IopInvalidDeviceRequest;
                    }
                    ExFreePoolWithTag(v24, 0);
                    if ( DriverNameFromKeyNode < 0 )
                    {
                      ObMakeTemporaryObject(v22);
                      ObfDereferenceObject(v22);
                    }
                    else
                    {
                      IopBootLog(&Destination);
                      MiFreeDriverInitialization(*((_QWORD *)v22 + 5));
                      IopReadyDeviceObjects(v22);
                    }
                  }
                  v7 = (unsigned __int16 *)P;
                }
                else
                {
                  ObMakeTemporaryObject(v22);
                  ObfDereferenceObject(v22);
                  v8 = v38;
                  DriverNameFromKeyNode = -1073741670;
                  v7 = (unsigned __int16 *)P;
                }
                goto LABEL_36;
              }
            }
            IopBootLog(&Destination);
            v8 = v38;
          }
        }
        goto LABEL_36;
      }
    }
    else
    {
      DriverNameFromKeyNode = -1073741670;
    }
    Destination.Buffer = 0LL;
  }
LABEL_36:
  HeadlessKernelAddLogEntry();
  if ( DriverNameFromKeyNode < 0 && DriverNameFromKeyNode != -1073741554 && DriverNameFromKeyNode != -1073741218 )
  {
    PnpDriverLoadingFailed(KeyHandle);
    if ( DriverNameFromKeyNode != -1073740955 )
    {
      RegistryValue = IopGetRegistryValue(KeyHandle);
      if ( RegistryValue >= 0 )
      {
        if ( *((_DWORD *)v53 + 3)
          && (_BYTE)CmFirstTime == 1
          && (unsigned int)(*(_DWORD *)((char *)v53 + *((unsigned int *)v53 + 2)) - 2) <= 1 )
        {
          if ( ((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) != 0 )
            v32 = *(_QWORD *)(((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) + 8);
          else
            v32 = 0LL;
          if ( ((unsigned __int64)&v40 & -(__int64)(v40.Buffer != 0LL)) != 0 )
            v4 = *(_QWORD *)(((unsigned __int64)&v40 & -(__int64)(v40.Buffer != 0LL)) + 8);
          KeBugCheckEx(0x5Au, 1uLL, v4, v32, DriverNameFromKeyNode);
        }
        ExFreePoolWithTag(v53, 0);
      }
    }
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 )
  {
    PnpDiagnosticTraceDriverFullInfo(
      &KMPnPEvt_DriverLoad_Stop,
      (unsigned __int16 *)&v37,
      DriverNameFromKeyNode,
      (__int64)&v40,
      v39[0]);
    ExFreePoolWithTag(v8, 0);
  }
  if ( v40.Buffer )
    ExFreePoolWithTag(v40.Buffer, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  ObCloseHandle(KeyHandle, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
