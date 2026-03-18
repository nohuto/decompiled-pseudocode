/*
 * XREFs of ACPIInitialize @ 0x1C00BAE7C
 * Callers:
 *     ACPIInitStartACPI @ 0x1C00B73F4 (ACPIInitStartACPI.c)
 * Callees:
 *     ACPIGetTableVersion @ 0x1C0001E80 (ACPIGetTableVersion.c)
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIEnableInitializeACPI @ 0x1C000FA60 (ACPIEnableInitializeACPI.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     ACPIInitializeKernelTableHandler @ 0x1C0026274 (ACPIInitializeKernelTableHandler.c)
 *     ACPIInterruptInitialize @ 0x1C00950E8 (ACPIInterruptInitialize.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1C00968FC (ACPIQueryPhysicalDeviceLocation.c)
 *     AcpiKsrRestorePersistentContext @ 0x1C00AD7EC (AcpiKsrRestorePersistentContext.c)
 *     ACPIInitializeAMLI @ 0x1C00B8A7C (ACPIInitializeAMLI.c)
 *     AcpiIrqLibConfigureLibrary @ 0x1C00B9364 (AcpiIrqLibConfigureLibrary.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00B9CA4 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 *     ACPILoadProcessRSDT @ 0x1C00BA420 (ACPILoadProcessRSDT.c)
 *     ACPIInitializeDDBs @ 0x1C00BA654 (ACPIInitializeDDBs.c)
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00BB084 (AcpiIrqLibInitializeGlobalState.c)
 */

char __fastcall ACPIInitialize(ULONG_PTR BugCheckParameter3)
{
  int v2; // eax
  int v3; // eax
  _QWORD *v4; // rax
  int v5; // eax
  bool v6; // al
  __int64 v7; // rdx
  int v8; // eax
  ULONG_PTR BugCheckParameter4; // rbx
  int InterruptModel; // eax
  ETWENABLECALLBACK *v11; // rdx
  void *v12; // r8
  int v13; // eax
  int v14; // eax
  ULONG_PTR v15; // rbx
  __int64 DeviceExtension; // rax
  __int64 v18; // [rsp+28h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+98h] [rbp+28h] BYREF
  char v22; // [rsp+A0h] [rbp+30h] BYREF

  v2 = EmProviderRegister(AcpiDriverObject, &EntryReg, 3LL, &CallbackReg, 3, &AcpiEmProviderHandle);
  if ( v2 < 0 )
  {
    LODWORD(v18) = v2;
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x1Fu,
      (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
      v18);
  }
  v3 = ACPIInitializeAMLI();
  if ( v3 < 0 )
  {
    LODWORD(v18) = v3;
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x20u,
      (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
      v18);
    KeBugCheckEx(0xA5u, 0x11uLL, 0LL, 0LL, 0LL);
  }
  AcpiIrqLibInitializeGlobalState(BugCheckParameter3);
  KeInitializeSpinLock(&GpeTableLock);
  KeInitializeSpinLock(&NotifyHandlerLock);
  qword_1C0081030 = (__int64)&AcpiDynamicDataBlockTableList;
  AcpiDynamicDataBlockTableList = (__int64)&AcpiDynamicDataBlockTableList;
  KeInitializeSpinLock((PKSPIN_LOCK)AcpiInformation + 8);
  v4 = (_QWORD *)((char *)AcpiInformation + 48);
  *((_QWORD *)AcpiInformation + 7) = (char *)AcpiInformation + 48;
  *v4 = v4;
  *((_QWORD *)AcpiInformation + 9) = 0LL;
  *((_DWORD *)AcpiInformation + 20) = 0;
  v5 = ACPILoadProcessRSDT();
  if ( v5 < 0 )
  {
    LODWORD(v18) = v5;
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x21u,
      (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
      v18);
    KeBugCheckEx(0xA5u, 0x11uLL, 3uLL, 0LL, 0LL);
  }
  v6 = (AcpiOverrideAttributes & 0x20000) == 0
    && ((AcpiOverrideAttributes & 0x40000) != 0
     || (int)ACPIGetTableVersion(1346584902, &v21) >= 0 && (unsigned int)v21 >= 5);
  gAcpiHonorBiosPolarities = v6;
  if ( (int)ACPIGetTableVersion(1346584902, &v21) >= 0 && (unsigned int)v21 >= 5 )
    AcpiRetainDebugDeviceInD0 = 1;
  HalPrivateDispatchTable[120] = (__int64 (__fastcall *)(_QWORD, __int64))ACPILateRestore;
  if ( (int)KsrGetFirmwareInformation(&v22) >= 0 )
  {
    v21 = 0LL;
    KsrEnumeratePersistedMemory(&GUID_ACPI_KSR_CONTEXT, AcpiKsrEnumeratePersistedMemory, &v21);
    if ( v21 )
      AcpiKsrRestorePersistentContext(v21);
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 80;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ExCreateCallback(&AcpiKsrCallbackObject, &ObjectAttributes, 0, 1u) >= 0 )
      ExRegisterCallback(AcpiKsrCallbackObject, (PCALLBACK_FUNCTION)AcpiKsrCallback, 0LL);
  }
  ACPIEnableInitializeACPI(0LL, v7);
  v8 = ACPIInitializeDDBs();
  BugCheckParameter4 = v8;
  if ( v8 < 0 )
  {
    LODWORD(v18) = v8;
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x22u,
      (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
      v18);
    KeBugCheckEx(0xA5u, 0x11uLL, 4uLL, 0LL, BugCheckParameter4);
  }
  InterruptModel = NotifyHalWithMachineStatesAndRetrieveInterruptModel((int *)&v21);
  if ( InterruptModel < 0 )
    KeBugCheckEx(0xA5u, 0x11uLL, 5uLL, 0LL, InterruptModel);
  v13 = AcpiIrqLibConfigureLibrary(v21, v11, v12);
  if ( v13 < 0 )
    KeBugCheckEx(0xA5u, 0x11uLL, 6uLL, 0LL, v13);
  v14 = ACPIInterruptInitialize();
  v15 = v14;
  if ( v14 < 0 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      0x23u,
      (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids);
    KeBugCheckEx(0xA5u, 0x11uLL, 7uLL, 0LL, v15);
  }
  ACPIInitializeKernelTableHandler(1, *(_QWORD *)(BugCheckParameter3 + 8));
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  if ( DeviceExtension )
    ACPIQueryPhysicalDeviceLocation(DeviceExtension);
  return 1;
}
