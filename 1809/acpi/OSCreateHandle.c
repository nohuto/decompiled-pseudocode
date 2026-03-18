/*
 * XREFs of OSCreateHandle @ 0x1C0093C84
 * Callers:
 *     ACPIRootPowerCallBack @ 0x1C0030690 (ACPIRootPowerCallBack.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1C0093BC8 (ACPIWriteOscSupportToRegistry.c)
 *     ACPIRootInitialize @ 0x1C0095120 (ACPIRootInitialize.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00B00EC (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIRootWorker @ 0x1C00B11B0 (ACPIRootWorker.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00B850C (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall OSCreateHandle(PCSZ SourceString, void *a2, void **a3)
{
  NTSTATUS v5; // ebx
  unsigned __int16 v7; // r9
  unsigned int v8; // r8d
  __int64 v9; // [rsp+30h] [rbp-11h]
  struct _UNICODE_STRING UnicodeString; // [rsp+48h] [rbp+7h] BYREF
  struct _STRING DestinationString; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF

  RtlInitAnsiString(&DestinationString, SourceString);
  v5 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  if ( v5 < 0 )
  {
    v7 = 10;
    v8 = 22;
LABEL_6:
    LODWORD(v9) = v5;
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      v8,
      v7,
      (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
      v9);
    return (unsigned int)v5;
  }
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *a3 = 0LL;
  ObjectAttributes.ObjectName = &UnicodeString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  v5 = ZwCreateKey(a3, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v5 < 0 )
  {
    v8 = 11;
    v7 = 11;
    goto LABEL_6;
  }
  return (unsigned int)v5;
}
