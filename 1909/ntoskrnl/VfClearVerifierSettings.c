/*
 * XREFs of VfClearVerifierSettings @ 0x140326CD8
 * Callers:
 *     VfNotifyVerifierOfEvent @ 0x1409641B0 (VfNotifyVerifierOfEvent.c)
 *     Phase1InitializationIoReady @ 0x1409FED48 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401C2690 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x1401C28D0 (ZwFlushKey.c)
 *     VfUtilDbgPrint @ 0x140327014 (VfUtilDbgPrint.c)
 */

NTSTATUS VfClearVerifierSettings()
{
  unsigned int v0; // eax
  UNICODE_STRING *v1; // rax
  NTSTATUS v2; // eax
  NTSTATUS v3; // eax
  NTSTATUS v4; // eax
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  unsigned int Data; // [rsp+80h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( (VfOptionFlags & 0x20) != 0 )
  {
    v0 = VfOptionFlags & 0xFFFFFFCF;
  }
  else if ( (VfOptionFlags & 0x400) != 0 )
  {
    v0 = VfOptionFlags & 0xFFFFFBC7;
  }
  else
  {
    v0 = VfOptionFlags & 0xFFFFFFE7;
  }
  Data = v0;
  ObjectAttributes.Length = 48;
  v1 = (UNICODE_STRING *)&VfPersistentStateRoot;
  ObjectAttributes.Attributes = 576;
  if ( !CmStateSeparationEnabled )
    v1 = &CmRegistryMachineSystemCurrentControlSetControlSessionManagerMemoryManagement;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = v1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v2 < 0 )
    return VfUtilDbgPrint(
             "Driver Verifier: Failed to open Memory Management key with status: 0x%x\n Registry updates aborted!",
             v2);
  RtlInitUnicodeString(&DestinationString, L"VerifierOptions");
  v3 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
  if ( v3 < 0 )
  {
    VfUtilDbgPrint(
      "Driver Verifier: Failed to set VerifierOptionFlags key value with status: 0x%x\n Registry updates aborted!",
      v3);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"VerifyDriverLevel");
    v4 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073741772 )
      VfUtilDbgPrint("Driver Verifier: Failed to delete VerifyDriverLevel key value with status: 0x%x\n", v4);
    RtlInitUnicodeString(&DestinationString, L"VerifierSettingState");
    v5 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( ((v5 + 0x80000000) & 0x80000000) == 0 && v5 != -1073741772 )
      VfUtilDbgPrint("Driver Verifier: Failed to delete RuleClasses key value with status: 0x%x\n", v5);
    RtlInitUnicodeString(&DestinationString, L"VerifyDrivers");
    v6 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( ((v6 + 0x80000000) & 0x80000000) == 0 && v6 != -1073741772 )
      VfUtilDbgPrint("Driver Verifier: Failed to delete VerifyDrivers key value with status: 0x%x\n", v6);
    RtlInitUnicodeString(&DestinationString, L"VerifierRandomTargets");
    v7 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -1073741772 )
      VfUtilDbgPrint("Driver Verifier: Failed to delete VerifierRandomTargets key value with status: 0x%x\n", v7);
    if ( VfFlightOptions )
    {
      RtlInitUnicodeString(&DestinationString, L"XdvVerifierOptions");
      v8 = ZwDeleteValueKey(KeyHandle, &DestinationString);
      if ( ((v8 + 0x80000000) & 0x80000000) == 0 && v8 != -1073741772 )
        VfUtilDbgPrint("Driver Verifier: Failed to delete XdvVerifierOptions key value with status: 0x%x\n", v8);
    }
    RtlInitUnicodeString(&DestinationString, L"VrfPersistThroughUpgrade");
    v9 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( ((v9 + 0x80000000) & 0x80000000) == 0 && v9 != -1073741772 )
      VfUtilDbgPrint("Driver Verifier: Failed to delete VrfPersistThroughUpgrade key value with status: 0x%x\n", v9);
    RtlInitUnicodeString(&DestinationString, L"VerifierTriageContext");
    v10 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( ((v10 + 0x80000000) & 0x80000000) == 0 && v10 != -1073741772 )
      VfUtilDbgPrint("Driver Verifier: Failed to delete VerifierTriageContext key value with status: 0x%x\n", v10);
    if ( VfXdvSuppressDriversBufferLength != -1 )
    {
      RtlInitUnicodeString(&DestinationString, L"VerifyDriversSuppress");
      v11 = ZwDeleteValueKey(KeyHandle, &DestinationString);
      if ( ((v11 + 0x80000000) & 0x80000000) == 0 && v11 != -1073741772 )
        VfUtilDbgPrint("Driver Verifier: Failed to delete VerifyDriversSuppress key value with status: 0x%x\n", v11);
    }
    ZwFlushKey(KeyHandle);
    if ( VfClearanceFlag )
      VfUtilDbgPrint("Driver Verifier: Clearing Verifier options from Registry for preventing recursive crash.\n");
  }
  return ZwClose(KeyHandle);
}
