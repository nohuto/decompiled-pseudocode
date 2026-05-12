/*
 * XREFs of RaidStandardSecondaryDumpCallback @ 0x1C00514D0
 * Callers:
 *     <none>
 * Callees:
 *     FillBufferWithDriverTelemetryDump @ 0x1C00511F4 (FillBufferWithDriverTelemetryDump.c)
 */

void __fastcall RaidStandardSecondaryDumpCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        GUID *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  unsigned int v4; // ecx
  __int64 v6; // rax
  _DWORD *v7; // rdx
  int v8; // eax
  unsigned int v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( BootDriveExtension && *(_DWORD *)(*(_QWORD *)(BootDriveExtension + 24) + 4996LL) )
  {
    v6 = *(_QWORD *)&ReasonSpecificData[2].Data1;
    if ( !v6 )
    {
      v4 = 7776;
LABEL_9:
      *(_DWORD *)ReasonSpecificData[2].Data4 = v4;
      ReasonSpecificData[1] = GUID_DEVICEDUMP_DRIVER_STORAGE_PORT;
      return;
    }
    v7 = *(_DWORD **)&ReasonSpecificData->Data1;
    if ( *(_QWORD *)&ReasonSpecificData->Data1 == v6 )
    {
      v9 = *(_DWORD *)ReasonSpecificData->Data4;
      v8 = FillBufferWithDriverTelemetryDump(0LL, v7, &v9);
      v4 = v9;
    }
    else
    {
      v8 = -1073741306;
    }
    if ( v8 >= 0 )
      goto LABEL_9;
  }
  else
  {
    *(_DWORD *)ReasonSpecificData[2].Data4 = 0;
  }
}
