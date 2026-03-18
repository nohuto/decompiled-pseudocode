/*
 * XREFs of Counter_CreateCommonBufferInstance @ 0x1C006A518
 * Callers:
 *     CommonBuffer_Create @ 0x1C005E6D8 (CommonBuffer_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     RtlStringCchPrintfW @ 0x1C00144EC (RtlStringCchPrintfW.c)
 */

NTSTATUS __fastcall Counter_CreateCommonBufferInstance(PPCW_INSTANCE *a1)
{
  PPCW_INSTANCE v1; // r9
  NTSTATUS result; // eax
  int Data; // [rsp+20h] [rbp-58h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  struct _PCW_DATA v6; // [rsp+40h] [rbp-38h] BYREF
  WCHAR SourceString[12]; // [rsp+50h] [rbp-28h] BYREF

  v1 = *a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
  if ( *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 28LL) && !a1[2] )
  {
    Data = *((_DWORD *)v1 + 44);
    if ( *((_DWORD *)v1 + 61) == 1 )
      RtlStringCchPrintfW(SourceString, 0xAuLL, L"%04X.%u", *((unsigned __int16 *)v1 + 124), Data);
    else
      RtlStringCchPrintfW(SourceString, 0xAuLL, L"%S.%u", (char *)v1 + 304, Data);
    RtlInitUnicodeString(&DestinationString, SourceString);
    v6.Data = a1[1];
    v6.Size = 16;
    return PcwCreateInstance(a1 + 2, (PPCW_REGISTRATION)WPP_MAIN_CB.Dpc.DpcListEntry.Next, &DestinationString, 1u, &v6);
  }
  return result;
}
