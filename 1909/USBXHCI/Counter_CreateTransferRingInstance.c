/*
 * XREFs of Counter_CreateTransferRingInstance @ 0x1C006A72C
 * Callers:
 *     TR_Create @ 0x1C0069444 (TR_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     RtlStringCchPrintfW @ 0x1C00144EC (RtlStringCchPrintfW.c)
 */

NTSTATUS __fastcall Counter_CreateTransferRingInstance(__int64 *a1, int a2, PPCW_INSTANCE *a3)
{
  NTSTATUS result; // eax
  __int64 v5; // r9
  int Data; // [rsp+20h] [rbp-88h]
  int v7; // [rsp+28h] [rbp-80h]
  int v8; // [rsp+30h] [rbp-78h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-68h] BYREF
  struct _PCW_DATA v11; // [rsp+50h] [rbp-58h] BYREF
  WCHAR SourceString[24]; // [rsp+60h] [rbp-48h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
  if ( *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 28LL) && !a3[4] )
  {
    v5 = *a1;
    v8 = *((unsigned __int8 *)a1 + 98);
    v7 = *(unsigned __int16 *)(a1[2] + 124);
    Data = *(_DWORD *)(*a1 + 176);
    if ( *(_DWORD *)(*a1 + 244) == 1 )
      RtlStringCchPrintfW(
        SourceString,
        0x15uLL,
        L"%04X.%u.%04X.%02X.%u",
        *(unsigned __int16 *)(v5 + 248),
        Data,
        v7,
        v8,
        a2,
        *(_QWORD *)&DestinationString.Length,
        DestinationString.Buffer);
    else
      RtlStringCchPrintfW(
        SourceString,
        0x15uLL,
        L"%S.%u.%04X.%02X.%u",
        v5 + 304,
        Data,
        v7,
        v8,
        a2,
        *(_QWORD *)&DestinationString.Length,
        DestinationString.Buffer);
    RtlInitUnicodeString(&DestinationString, SourceString);
    v11.Data = a3;
    v11.Size = 40;
    return PcwCreateInstance(
             a3 + 4,
             *(PPCW_REGISTRATION *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong,
             &DestinationString,
             1u,
             &v11);
  }
  return result;
}
