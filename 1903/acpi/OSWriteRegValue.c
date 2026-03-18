/*
 * XREFs of OSWriteRegValue @ 0x1C009CA98
 * Callers:
 *     ACPIRootPowerCallBack @ 0x1C0031390 (ACPIRootPowerCallBack.c)
 *     ACPIRootInitialize @ 0x1C0090730 (ACPIRootInitialize.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1C009C8CC (ACPIWriteOscSupportToRegistry.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00B3A64 (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIRootWorker @ 0x1C00B4B60 (ACPIRootWorker.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00BD504 (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0001A78 (WPP_RECORDER_SF_L.c)
 */

__int64 __fastcall OSWriteRegValue(PCSZ SourceString, HANDLE KeyHandle, PVOID Data, ULONG DataSize)
{
  NTSTATUS v7; // eax
  unsigned int v8; // ebx
  NTSTATUS v9; // eax
  __int64 DataSizea; // [rsp+28h] [rbp-30h]
  ULONG DataSizeb; // [rsp+28h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  struct _STRING SourceStringa; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&SourceStringa.Length = 0LL;
  SourceStringa.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitAnsiString(&SourceStringa, SourceString);
  v7 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceStringa, 1u);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      DataSizeb = v7;
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x1Cu,
        (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
        DataSizeb,
        *(_QWORD *)&DestinationString.Length,
        DestinationString.Buffer);
    }
  }
  else
  {
    v9 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, Data, DataSize);
    v8 = v9;
    if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(DataSizea) = v9;
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xBu,
        0x1Du,
        (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
        DataSizea,
        *(_QWORD *)&DestinationString.Length,
        DestinationString.Buffer);
    }
    RtlFreeUnicodeString(&DestinationString);
  }
  return v8;
}
