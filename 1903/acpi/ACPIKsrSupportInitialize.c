/*
 * XREFs of ACPIKsrSupportInitialize @ 0x1C0024810
 * Callers:
 *     ACPIInitialize @ 0x1C00BE114 (ACPIInitialize.c)
 * Callees:
 *     memset @ 0x1C0031D40 (memset.c)
 *     AcpiKsrRestorePersistentContext @ 0x1C00B0F48 (AcpiKsrRestorePersistentContext.c)
 */

NTSTATUS ACPIKsrSupportInitialize()
{
  NTSTATUS result; // eax
  __int64 v1; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  __int64 v4; // [rsp+70h] [rbp+10h] BYREF
  char v5; // [rsp+78h] [rbp+18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  HalPrivateDispatchTable[120] = ACPILateRestore;
  result = KsrGetFirmwareInformation(&v5);
  if ( result >= 0 )
  {
    v4 = 0LL;
    KsrEnumeratePersistedMemory(&GUID_ACPI_KSR_CONTEXT, AcpiKsrEnumeratePersistedMemory, &v4);
    if ( v4 )
      AcpiKsrRestorePersistentContext(v4, v1);
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 80;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ExCreateCallback(&AcpiKsrCallbackObject, &ObjectAttributes, 0, 1u);
    if ( result >= 0 )
      return (unsigned int)ExRegisterCallback(AcpiKsrCallbackObject, AcpiKsrCallback, 0LL);
  }
  return result;
}
